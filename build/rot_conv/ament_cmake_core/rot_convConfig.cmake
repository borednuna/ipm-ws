# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rot_conv_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rot_conv_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rot_conv_FOUND FALSE)
  elseif(NOT rot_conv_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rot_conv_FOUND FALSE)
  endif()
  return()
endif()
set(_rot_conv_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rot_conv_FIND_QUIETLY)
  message(STATUS "Found rot_conv: 1.0.0 (${rot_conv_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rot_conv' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT rot_conv_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rot_conv_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rot_conv_DIR}/${_extra}")
endforeach()
