cmake_minimum_required(VERSION 3.15)

project(CareerCaptainDAW)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/tracktion_engine)
add_subdirectory(libs/JUCE)

include_directories(include)

juce_add_gui_app(CareerCaptainDAW
    PRODUCT_NAME "Career Captain DAW"
)

target_sources(CareerCaptainDAW PRIVATE src/main.cpp src/DAW.cpp src/DAW.h src/AI.cpp src/AI.h)

target_link_libraries(CareerCaptainDAW PRIVATE
    juce::juce_gui_extra
    tracktion_engine
)