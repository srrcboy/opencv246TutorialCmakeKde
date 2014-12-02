cmake_minimum_required(VERSION 2.6)
project(opencv246tutorialcmakekde)

add_executable(opencv246tutorialcmakekde main.cpp)

install(TARGETS opencv246tutorialcmakekde RUNTIME DESTINATION bin)
