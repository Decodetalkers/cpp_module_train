cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) 
find_package(RapidJSON)
#file(GLOB VIDEOS "videos/*")
add_compile_options(-fmodules-ts)
add_compile_options(-fcoroutines)
add_executable(
	${PROJECT_NAME}
	func.cxx
	func2.cxx
	main.cpp
	videos/video.h
	videos/video.cxx
	videos/video.cpp
)
target_link_libraries(
	${PROJECT_NAME}
	libprint
)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build)
