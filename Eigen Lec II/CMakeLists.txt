# CMakeList.txt : CMake project for Eigen Lec II, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
find_package(Eigen3 CONFIG REQUIRED)
# Add source to this project's executable.
add_executable (CMakeTarget "Eigen Lec II.cpp" "Eigen Lec II.h")
target_link_libraries(CMakeTarget PRIVATE Eigen3::Eigen)

# TODO: Add tests and install targets if needed.
