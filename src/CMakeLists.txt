cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) 
find_package(RapidJSON)
add_compile_options(-fmodules-ts)
add_compile_options(-fcoroutines)
add_executable(
	${PROJECT_NAME}
	func.cxx
	func2.cxx
	main.cpp
)
target_link_libraries(
	${PROJECT_NAME}
)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build)
