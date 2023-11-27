#include <opencv2/opencv.hpp>

int main() {
    // Load camera calibration parameters from JSON file
    cv::FileStorage fs("./outputs/CalibrationMatrix.json", cv::FileStorage::READ);
    if (!fs.isOpened()) {
        std::cerr << "Failed to open calibration file" << std::endl;
        return -1;
    }

    cv::Mat cameraMatrix, distCoeffs, rvecs, tvecs;
    fs["Camera_matrix"] >> cameraMatrix;
    fs["DistCoeff"] >> distCoeffs;
    fs["RotationalV"] >> rvecs;
    fs["TranslationV"] >> tvecs;
    fs.release();

    // Ensure the size of the rotational vectors is correct
    if (rvecs.rows == 4 && rvecs.cols == 1) {
        rvecs = rvecs.rowRange(0, 3).clone();
    }

    // Convert rotational vectors to rotation matrices
    std::vector<cv::Mat> rotationMatrices;
    for (int i = 0; i < rvecs.rows; ++i) {
        cv::Mat rotationMatrix;
        cv::Rodrigues(rvecs.row(i), rotationMatrix);
        rotationMatrices.push_back(rotationMatrix);
    }

    // Ensure the translation vector is 1x3
    cv::Mat translationVector = tvecs.row(0).clone().reshape(1, 1); // Assuming you are using the first translation vector
    translationVector = translationVector.reshape(1, 3);

    // Print dimensions before the problematic line
    std::cout << "Rotation Matrix dimensions: " << rotationMatrices[0].rows << "x" << rotationMatrices[0].cols << std::endl;
    std::cout << "Translation Vector dimensions: " << translationVector.rows << "x" << translationVector.cols << std::endl;

    // Concatenate rotation matrix and translation vector
    cv::Mat extrinsicMatrix;
    cv::hconcat(rotationMatrices[0], translationVector, extrinsicMatrix);

    // Assemble projection matrix
    cv::Mat projectionMatrix = cameraMatrix * extrinsicMatrix;

    // Save matrices to a new JSON file
    cv::FileStorage resultFs("./outputs/ConversionResult.json", cv::FileStorage::WRITE);
    resultFs << "Camera_Matrix" << cameraMatrix;
    resultFs << "Distortion_Coefficients" << distCoeffs;
    resultFs << "Extrinsic_Matrix" << extrinsicMatrix;
    resultFs << "Projection_Matrix" << projectionMatrix;
    resultFs.release();

    std::cout << "Conversion results saved to ./outputs/ConversionResult.json" << std::endl;

    return 0;
}
