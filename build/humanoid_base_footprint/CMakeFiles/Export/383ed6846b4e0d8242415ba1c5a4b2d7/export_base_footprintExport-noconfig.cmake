#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "humanoid_base_footprint::base_footprint_node" for configuration ""
set_property(TARGET humanoid_base_footprint::base_footprint_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(humanoid_base_footprint::base_footprint_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libbase_footprint_node.so"
  IMPORTED_SONAME_NOCONFIG "libbase_footprint_node.so"
  )

list(APPEND _cmake_import_check_targets humanoid_base_footprint::base_footprint_node )
list(APPEND _cmake_import_check_files_for_humanoid_base_footprint::base_footprint_node "${_IMPORT_PREFIX}/lib/libbase_footprint_node.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
