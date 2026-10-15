add_library(domain)
add_library(Bomberman::Domain ALIAS domain)

target_sources(domain
        PRIVATE
        src/bomb.cpp
        src/bonus.cpp
        src/door.cpp
        src/ghost.cpp
        src/map.cpp
        src/player.cpp
        src/smoke.cpp
        src/wall.cpp
)

target_include_directories(domain
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(domain
        PRIVATE
        ProjectWarnings
)
