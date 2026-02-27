add_subdirectory(raylib)

add_library(rlimgui
    rlImGui/rlImGui.cpp
)

target_include_directories(rlimgui PUBLIC
    rlImGui
)

target_link_libraries(rlimgui PUBLIC
    raylib
)

