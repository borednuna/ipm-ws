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

    // Save matrices to a new JSON file
    cv::FileStorage resultFs("./outputs/ConversionResult.json", cv::FileStorage::WRITE);
    resultFs << "Camera_Matrix" << cameraMatrix;
    resultFs << "Distortion_Coefficients" << distCoeffs;
    for (int i = 0; i < rotationMatrices.size(); ++i) {
        std::string rotationMatrixName = "Rotation_Matrix_" + std::to_string(i + 1);
        resultFs << rotationMatrixName << rotationMatrices[i];
    }
    resultFs << "Translation_Vectors" << tvecs;
    resultFs.release();

    std::cout << "Conversion results saved to ./outputs/ConversionResult.json" << std::endl;

    return 0;
}
