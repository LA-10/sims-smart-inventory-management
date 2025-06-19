cmake_minimum_required(VERSION 3.16)
project(sims_app VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

# Output directories for build artifacts
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib")

# Find LAPACK
find_package(LAPACK REQUIRED)

# Add subdirectories (these define source/header variables)
add_subdirectory(src)
add_subdirectory(include)

set(sims_app_SRC
    src/main.cpp
)

# Add library target using only source files
add_library(sims_app STATIC ${sims_app_SRC})

# Include directories for this library
target_include_directories(sims_app PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Link LAPACK
target_link_libraries(sims_app ${LAPACK_LIBRARIES})

# Create executable (main app)
add_executable(sims 
    src/main.cpp 
    include/sqlite3.c 
)

target_link_libraries(sims sims_app)

# Unit testing
include(CTest)
if(BUILD_TESTING)
    add_subdirectory(tests)
endif()

# Installation paths
set(sims_app_INCLUDE_DEST "include/sims_app-${sims_app_VERSION}")
set(sims_app_LIB_DEST "lib/sims_app-${sims_app_VERSION}")

# Install the library
install(TARGETS sims_app
    EXPORT sims_appTargets
    ARCHIVE DESTINATION ${sims_app_LIB_DEST}
    LIBRARY DESTINATION ${sims_app_LIB_DEST}
    INCLUDES DESTINATION ${sims_app_INCLUDE_DEST}
)

# Install the export target
install(EXPORT sims_appTargets
    FILE sims_appTargets.cmake
    NAMESPACE sims_app::
    DESTINATION ${sims_app_LIB_DEST}
)

# Install headers
install(FILES ${sims_app_INC} DESTINATION ${sims_app_INCLUDE_DEST})

# Install version config
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    sims_appConfigVersion.cmake
    VERSION ${sims_app_VERSION}
    COMPATIBILITY AnyNewerVersion
)

# Install CMake configuration files
install(FILES
    "cmake/sims_app-config.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/sims_appConfigVersion.cmake"
    DESTINATION ${sims_app_LIB_DEST}
)
