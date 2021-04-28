cmake_minimum_required(VERSION 3.8)

set(pathOPENCV C:/opencv/build/install)
include_directories(${pathOPENCV}/include)
set(LIBOPENCV ${pathOPENCV}/x64/mingw/lib/libopencv_world349.dll.a)

# find_package(OpenCV REQUIRED)

get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C CXX)

set (CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES  *.cc)
 
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${LIBOPENCV})