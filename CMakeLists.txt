project(tutorial-image)
 
cmake_minimum_required(VERSION 3.0)
 
find_package(VISP REQUIRED visp_core visp_detection visp_io visp_gui)
 
include_directories(${VISP_INCLUDE_DIRS})
 
add_executable(tutorial-viewer main.cpp)

target_link_libraries(tutorial-viewer ${VISP_LIBRARIES})