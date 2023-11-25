# IPM ROS Workspace
Repository that contains workspace for research on localization using IPM (Inverse Perspective Mapping) and Humanoid Base Footprint.

## Usage
```
git submodule update --init --recursive
source /opt/ros/rolling/setup.bash
colcon build
```

## IPM Setup
1. Clone IPM repository from ROS-Sports
```
git submodule add https://github.com/ros-sports/ipm.git src/ipm
```

2. Clone ```vision_msgs``` repository
```
git submodule add https://github.com/ros-perception/vision_msgs.git src/vision_msgs
```

## Humanoid Base Footprint Setup
1. Clone Humanoid Base Footprint repository from ROS-Sports
```
git submodule add https://github.com/ros-sports/humanoid_base_footprint.git src/humanoid_base_footprint
```

2. Add Rotations Conversion Library to ```dependencies.repos``` <br/>
Open ```humanoid_base_footprint/dependencies.repos``` file then append the following :
```
  rot_conv_lib:
    type: git
    url: https://github.com/bit-bots/rot_conv_lib.git
    version: master
```

3. Import dependencies repositories (biped_interfaces and rotconv)
```
vcs import src < src/humanoid_base_footprint/dependencies.repos --recursive
```

## Import Dependency Packages
Refer to [Github](https://github.com/ichiro-its/)

## Build
```
source /opt/ros/rolling/setup.bash
colcon build
```

## IPM Package Structure
1. Image Node <br/>
ipm_image_node is a package that contains image node that is responsible for the ipm process itself<br/>
2. Interfaces<br/>
ipm_interfaces is a package containing srv for the ipm package.<br/>
3. Library<br/>
ipm_library is a package containing library or utility functions used in the process of ipm.<br/>
4. Service<br/>
ipm_service is a package containing service for the ipm image node, mainly the conversion of 2D image to 3D point cloud and vice versa.

## IPM Summary
The Inverse Perspective Mapping (IPM) packages you provided are part of a robotics framework in ROS2 (Robot Operating System 2) developed by Hamburg Bit-Bots. Let's break down how these packages work:

### 1. **Packages Overview:**
   The IPM functionality is divided into several ROS2 packages:

   - **ipm_interfaces:**
     Contains the service message definitions (`MapPoint.srv` and `MapPointCloud2.srv`) that define the input and output formats for the IPM services.

   - **ipm_library:**
     Provides the core IPM functionality in Python. It includes classes and functions for mapping 2D points and point clouds to 3D space using camera information.

   - **ipm_service:**
     Implements a ROS2 node (`IPMService`) that exposes two services (`map_point` and `map_pointcloud2`) based on the IPM functionality provided by `ipm_library`.

### 2. **ipm_library:**
   This package contains the core IPM logic implemented in Python. Key components include:

   - **ipm.py:**
     - Defines the `IPM` class, which is responsible for mapping 2D points and point clouds to 3D space using camera information.
     - Utilizes the `tf2_ros` library for handling transforms.
     - Provides methods for setting camera information, mapping individual points, mapping point clouds, and other related functions.
     - Defines exceptions (`CameraInfoNotSetException`, `InvalidPlaneException`, `NoIntersectionError`) for error handling.

   - **exceptions.py:**
     - Contains custom exceptions used for error handling in the IPM process.

   - **utils.py:**
     - Includes utility functions for various tasks, such as transforming planes, calculating intersections, and creating horizontal planes.

### 3. **ipm_service:**
   This package implements a ROS2 node (`IPMService`) that acts as a bridge between the IPM functionality in `ipm_library` and the ROS2 communication system.

   - **ipm.py:**
     - Initializes a `Node` for handling ROS2 communication.
     - Manages a `tf2_ros.Buffer` and `tf2_ros.TransformListener` for handling transforms.
     - Creates an instance of the `IPM` class from `ipm_library`.
     - Defines service callbacks (`point_mapping_callback` and `point_cloud_mapping_callback`) that handle requests to map individual points and point clouds.
     - Publishes and subscribes to topics for camera information and service requests.

   - **main function:**
     - Initializes the `IPMService` node.
     - Sets up a `MultiThreadedExecutor` to handle multi-threaded execution.
     - Spins the executor to keep the node running.

### 4. **Usage:**
   - Users can launch the `IPMService` node using `ros2 run ipm_service ipm.py`.
   - The node listens for camera information on the `camera_info` topic.
   - Users can call the `map_point` and `map_pointcloud2` services to request IPM mappings.
   - Results, including mapped points or point clouds, are provided in the service responses.

### 5. **Workflow:**
   - Users publish camera information to the `camera_info` topic.
   - Users call the `map_point` or `map_pointcloud2` services with the required parameters.
   - The services use the IPM logic in `ipm_library` to perform the mapping.
   - Results are sent back to the user in the service responses.

### 6. **Dependencies:**
   - The packages depend on ROS2 for communication and the `tf2_ros` library for handling transforms.
   - Other dependencies include standard ROS2 message types (`CameraInfo`, `Point2D`, `Plane`, etc.).

### 7. **Customization:**
   - Users can potentially customize the IPM behavior by extending or modifying the `IPM` class and its methods in `ipm_library`.

This explanation provides a high-level overview of the IPM packages' structure and functionality. To use these packages effectively, users typically need to understand ROS2 concepts, including topics, services, and transforms, as well as the specifics of the IPM algorithm implemented in `ipm_library`. Additionally, accurate camera information is crucial for reliable mapping results.
