#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ipm_interfaces::ipm_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET ipm_interfaces::ipm_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ipm_interfaces::ipm_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libipm_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libipm_interfaces__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets ipm_interfaces::ipm_interfaces__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_ipm_interfaces::ipm_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libipm_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
