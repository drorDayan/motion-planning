cmake_minimum_required(VERSION 3.0.0)
project(motion-planning VERSION 0.1.0)
include_directories("/usr/include/eigen3")

include(CTest)
enable_testing()


add_executable(motion-planning main.cpp)

find_package(ompl)
target_link_libraries(motion-planning "${OMPL_LIB}")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
