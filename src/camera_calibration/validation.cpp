// cd "/home/nuna/ipm-ws/src/camera_calibration/" && g++ validation.cpp -o validation -I/usr/include/opencv4 -lopencv_core -lopencv_imgcodecs -lopencv_imgproc -lopencv_highgui -lopencv_calib3d

#include <opencv2/opencv.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

int main() {
    std::string calib_data_path = "./outputs/";
    cv::Mat cameraMatrix, distCoeffs;

    // Load Calibration Data from JSON
    cv::FileStorage fs(calib_data_path + "CalibrationMatrix.json", cv::FileStorage::READ | cv::FileStorage::FORMAT_JSON);
    fs["Camera_matrix"] >> cameraMatrix;
    fs["DistCoeff"] >> distCoeffs;
    fs.release();  // Release the file storage

    // Load Validation Image
    std::string validation_image_path = "./images/2023-11-26-230000.jpg";
    cv::Mat validation_image = cv::imread(validation_image_path);

    // Undistort Validation Image
    cv::Mat undistorted_image;
    cv::undistort(validation_image, undistorted_image, cameraMatrix, distCoeffs);

    // Display Original and Undistorted Images
    cv::imshow("Original Validation Image", validation_image);
    cv::imshow("Undistorted Validation Image", undistorted_image);
    cv::waitKey(0);
}
