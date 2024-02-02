import numpy as np
import cv2

# Extract camera and extrinsic parameters from your calibration data
camera_matrix = np.array([[387.51671519, 0.0, 314.22564296],
                          [0.0, 389.04407206, 185.72301966],
                          [0.0, 0.0, 1.0]])  # Assuming row-major order
rotation_vector = np.array([-2.7438624992595373e-01, -2.9917707273350330e-01,
                            -1.3779823557499287e+00, -3.8657890245790283e-01,
                            2.7939650032508706e-01, 1.3304808768027550e+00,
                            -1.6499910265366852e-01, 1.7538119869227903e-01,
                            1.5075270423093385e+00, -3.4291690923866371e-04,
                            -1.2213053251306123e-02, 1.5624910218541654e+00])
translation_vector = np.array([-3.9500272202213047e+00, 9.6100019238220014e-01,
                              1.0096791150571555e+01, 1.6345138818130958e+00,
                              -3.7335601203012572e+00, 1.3435192203669967e+01,
                              3.3374529116944571e+00, -2.6575377123533617e+00,
                              1.3020952935659926e+01, 3.9801269826448888e+00,
                              -2.3436050690109442e+00, 1.0668979126783926e+01])

# Construct rotation matrix from quaternion (assuming OpenCV convention)
rotation_matrix = cv2.Rodrigues(rotation_vector)[0].T

# Combine extrinsic and intrinsic parameters
projection_matrix = np.matmul(np.matmul(camera_matrix, np.zeros((3, 4))),
                              np.hstack([rotation_matrix, translation_vector]))

print(projection_matrix)
