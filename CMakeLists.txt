cmake_minimum_required(VERSION 2.6)
project(opencv246tutorialcmakekde)

find_package( OpenCV REQUIRED )
add_executable(opencv246tutorialcmakekde main.cpp)

target_link_libraries( opencv246tutorialcmakekde ${OpenCV_LIBS} )
install(TARGETS opencv246tutorialcmakekde RUNTIME DESTINATION bin)
