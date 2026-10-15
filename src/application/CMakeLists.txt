add_library(application)
add_library(Bomberman::Application ALIAS application)

target_sources(application
        PRIVATE
        src/bomb_store.cpp
        src/check_ghost_collision.cpp
        src/check_win_condition.cpp
        src/collect_bonuses.cpp
        src/move_ghosts.cpp
        src/move_player.cpp
        src/navigate_to_leaderboard.cpp
        src/navigate_to_map_select.cpp
        src/place_bomb.cpp
        src/player_store.cpp
        src/select_map.cpp
        src/start_game.cpp
        src/tick_bombs.cpp
        src/tick_smokes.cpp
)

target_include_directories(application
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(application
        PUBLIC
        Bomberman::Domain
)
