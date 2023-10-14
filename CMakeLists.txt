cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME Algorithm)
project(${PROJECT_NAME})

file(GLOB MY_SOURCE_FILES "./src/modules/*/*.cpp" "./src/modules/*/*.hpp")

set(SOURCES
	src/main.cpp
  ${MY_SOURCE_FILES}
)

add_executable(main ${SOURCES})