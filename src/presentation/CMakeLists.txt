add_library(presentation)
add_library(Bomberman::Presentation ALIAS presentation)

target_sources(presentation
        PRIVATE
        src/game/curses_game_presenter.cpp
        src/game/game_board_buffer.cpp
        src/leaderboard/curses_leaderboard_presenter.cpp
        src/main_menu/main_menu_presenter.cpp
        src/map_select/curses_map_select_presenter.cpp
        src/players/curses_player_presenter.cpp
        src/event_router.cpp
        src/view.cpp
)

target_include_directories(presentation
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(presentation
        PUBLIC
        Bomberman::Application
        ftxui::ftxui
)
