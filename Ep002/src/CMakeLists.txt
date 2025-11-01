cmake_minimum_required(VERSION 3.5)
project(HelloApp
    VERSION 0.0.1
    DESCRIPTION "A simple Hello World application"
    LANGUAGES CXX)
add_executable(HelloApp main.cpp)
target_compile_features(HelloApp PRIVATE cxx_std_20)