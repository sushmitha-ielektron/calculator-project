cmake_minimum_required(VERSION 3.10)
 
# set the project name

project(CalculatorProject)
 
# specify the C standard

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_STANDARD_REQUIRED True)
 
# add the calculator library

add_library(calculator STATIC src/calculator.c)
 
# specify include directories

target_include_directories(calculator PUBLIC

                           "${PROJECT_BINARY_DIR}"

                           "${PROJECT_SOURCE_DIR}/src"

                           )
 
# add the executable

add_executable(calculatorApp src/main.c)

target_link_libraries(calculatorApp PUBLIC calculator)
 
# enable testing

enable_testing()
 
# add the Unity test framework subdirectory

add_subdirectory(test/unity)
 
# add the test executable

add_executable(calculatorTest test/test_calculator.c)

target_link_libraries(calculatorTest PUBLIC calculator unity)
 
# add the test to CTest

add_test(NAME calculatorUnitTest COMMAND calculatorTest)
