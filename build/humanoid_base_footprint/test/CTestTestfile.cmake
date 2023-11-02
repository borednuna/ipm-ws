# CMake generated Testfile for 
# Source directory: /home/nuna/ipm-ws/src/humanoid_base_footprint/test
# Build directory: /home/nuna/ipm-ws/build/humanoid_base_footprint/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_base_footprint "/usr/bin/python3.10" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/nuna/ipm-ws/build/humanoid_base_footprint/test_results/humanoid_base_footprint/test_base_footprint.gtest.xml" "--package-name" "humanoid_base_footprint" "--output-file" "/home/nuna/ipm-ws/build/humanoid_base_footprint/ament_cmake_gtest/test_base_footprint.txt" "--command" "/home/nuna/ipm-ws/build/humanoid_base_footprint/test/test_base_footprint" "--gtest_output=xml:/home/nuna/ipm-ws/build/humanoid_base_footprint/test_results/humanoid_base_footprint/test_base_footprint.gtest.xml")
set_tests_properties(test_base_footprint PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nuna/ipm-ws/build/humanoid_base_footprint/test/test_base_footprint" TIMEOUT "60" WORKING_DIRECTORY "/home/nuna/ipm-ws/build/humanoid_base_footprint/test" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/rolling/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nuna/ipm-ws/src/humanoid_base_footprint/test/CMakeLists.txt;2;ament_add_gtest;/home/nuna/ipm-ws/src/humanoid_base_footprint/test/CMakeLists.txt;0;")
subdirs("../gtest")
