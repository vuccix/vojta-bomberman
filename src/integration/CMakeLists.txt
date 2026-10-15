add_library(integration)
add_library(Bomberman::Integration ALIAS integration)

target_sources(integration
        PRIVATE
        src/file_leaderboard_repository.cpp
        src/file_map_repository.cpp
)

target_include_directories(integration
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(integration
        PUBLIC
        Bomberman::Application
)
