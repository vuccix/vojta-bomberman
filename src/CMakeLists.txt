add_subdirectory(application)
add_subdirectory(domain)
add_subdirectory(integration)
add_subdirectory(presentation)

# ----------------------------------------------------------------------------------------------------------------------

add_executable(CleanBomberman)

target_sources(CleanBomberman
        PRIVATE
        main.cpp
)

target_link_libraries(CleanBomberman
        PRIVATE
        Bomberman::Domain
        Bomberman::Application
        Bomberman::Integration
        Bomberman::Presentation
)
