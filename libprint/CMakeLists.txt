project(libprint)
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-fmodules-ts)
file(GLOB LIBPRINT_CXX "libprint_cxx/*")
add_library(${PROJECT_NAME}
	STATIC
	${LIBPRINT_CXX}
	libprint.h
	libprint.cpp
)
target_include_directories(${PROJECT_NAME} PUBLIC .) 
