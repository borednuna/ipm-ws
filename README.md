# IPM ROS Workspace
Repository that contains workspace for research on localization using IPM (Inverse Perspective Mapping) and Humanoid Base Footprint.

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