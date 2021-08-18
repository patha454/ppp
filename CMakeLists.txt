cmake_minimum_required(VERSION 3.21)
cmake_policy(VERSION 3.21)

set(PPP_MAJOR_VERSION 0 CACHE STRING "Build major version.")
set(PPP_MINOR_VERSION 0 CACHE STRING "Build minor version.")
set(PPP_PATCH_VERSION 0 CACHE STRING "Build patch version.")

set(
    PPP_DESCRIPTION
    "Point to Point Protocol (PPP) implementation in modern C."
)

set(CMAKE_C_STANDARD 23)
set(C_STANDARD_REQUIRED TRUE)

project(
    ppp
    VERSION ${PPP_MAJOR_VERSION}.${PPP_MINOR_VERSION}.${PPP_PATCH_VERSION}
    DESCRIPTION ${PPP_DESCRIPTION}
    LANGUAGES C
)

