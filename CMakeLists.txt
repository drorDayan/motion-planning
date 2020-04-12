cmake_minimum_required(VERSION 3.0.0)
project(motion-planning VERSION 0.1.0)
#include_directories("/usr/include/eigen3") # this line was removed and a link_libraries was used to add this include

include(CTest)
enable_testing()

add_executable(motion-planning main.cpp)

find_package(ompl)
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

target_link_libraries(motion-planning "${OMPL_LIB}")
target_link_libraries(motion-planning Eigen3::Eigen)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
