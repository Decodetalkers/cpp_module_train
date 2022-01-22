project(libprint)
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-fmodules-ts)
add_library(${PROJECT_NAME}
	STATIC
	libprint.h
	libprint.cpp
	print.cxx	
)
target_include_directories(${PROJECT_NAME} PUBLIC .) 
