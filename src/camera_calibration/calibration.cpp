// Refer to https://learnopencv.com/camera-calibration-using-opencv/
// cd "/home/nuna/ipm-ws/src/camera_calibration/" && g++ calibration.cpp -o calibration -I/usr/include/opencv4 -lopencv_core -lopencv_imgcodecs -lopencv_imgproc -lopencv_highgui -lopencv_calib3d

#include <opencv2/opencv.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

int CHECKERBOARD[2] = {6, 8};

int main()
{
    std::vector<std::vector<cv::Point3f>> objpoints;
    std::vector<std::vector<cv::Point2f>> imgpoints;

    std::vector<cv::Point3f> objp;
    for (int i = 0; i < CHECKERBOARD[1]; i++)
    {
        for (int j = 0; j < CHECKERBOARD[0]; j++)
            objp.push_back(cv::Point3f(j, i, 0));
    }

    std::vector<cv::String> images;
    std::string path = "./images/*.jpg";
    cv::glob(path, images);

    cv::Mat frame, gray;
    std::vector<cv::Point2f> corner_pts;
    bool success;

    for (int i = 0; i < images.size(); i++)
    {
        frame = cv::imread(images[i]);
        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        success = cv::findChessboardCorners(gray, cv::Size(CHECKERBOARD[0], CHECKERBOARD[1]), corner_pts, cv::CALIB_CB_ADAPTIVE_THRESH | cv::CALIB_CB_FAST_CHECK | cv::CALIB_CB_NORMALIZE_IMAGE);

        if (success)
        {
            cv::TermCriteria criteria(cv::TermCriteria::EPS + cv::TermCriteria::COUNT, 30, 0.001);
            cv::cornerSubPix(gray, corner_pts, cv::Size(11, 11), cv::Size(-1, -1), criteria);

            cv::drawChessboardCorners(frame, cv::Size(CHECKERBOARD[0], CHECKERBOARD[1]), corner_pts, success);

            objpoints.push_back(objp);
            imgpoints.push_back(corner_pts);
        }

        cv::imshow("Image", frame);
        cv::waitKey(0);
    }

    cv::destroyAllWindows();

    cv::Mat cameraMatrix, distCoeffs, R, T;

    cv::calibrateCamera(objpoints, imgpoints, gray.size(), cameraMatrix, distCoeffs, R, T);

    std::cout << "cameraMatrix : " << cameraMatrix << std::endl;
    std::cout << "distCoeffs : " << distCoeffs << std::endl;
    std::cout << "Rotation vector : " << R << std::endl;
    std::cout << "Translation vector : " << T << std::endl;

    // Save calibration data to a JSON file
    std::string calib_data_path = "./outputs/";
    cv::FileStorage fs(calib_data_path + "CalibrationMatrix.json", cv::FileStorage::WRITE | cv::FileStorage::FORMAT_JSON);

    fs << "Camera_matrix" << cameraMatrix;
    fs << "DistCoeff" << distCoeffs;
    fs << "RotationalV" << R;
    fs << "TranslationV" << T;

    fs.release();  // Release the file storage

    std::cout << "Calibration data saved to " << calib_data_path + "CalibrationMatrix.json" << std::endl;

    return 0;
}
