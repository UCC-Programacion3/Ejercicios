
add_executable(U01-E01 Ej-01/main.cpp Ej-01/potencia.cpp)

add_executable(U01-E02 Ej-02/main.cpp Ej-02/sumatoria.cpp)

add_executable(U01-E03 Ej-03/main.cpp Ej-03/ackerman.cpp)

add_executable(U01-E04 Ej-04/main.cpp Ej-04/mcd.cpp)

add_executable(U01-E05 Ej-05/main.cpp Ej-05/digitos.cpp)


find_package( Threads )


set(SFML_VERSION "2.5.1")
find_package(SFML ${SFML_VERSION} COMPONENTS system window graphics)

if (NOT SFML_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        sfml
        URL https://github.com/SFML/SFML/releases/download/${SFML_VERSION}/SFML-${SFML_VERSION}-sources.zip
    )

    FetchContent_GetProperties(sfml)
    if(NOT sfml_POPULATED)
        set(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(sfml)
        add_subdirectory(${sfml_SOURCE_DIR} ${sfml_BINARY_DIR})
    endif()
endif()



add_executable(Laberinto Extra-Laberinto/main.cpp Extra-Laberinto/LaberintoSolver.cpp Extra-Laberinto/MazeGenerator.cpp)

target_link_libraries(Laberinto ${CMAKE_THREAD_LIBS_INIT} sfml-system sfml-window sfml-graphics)
file(COPY Extra-Laberinto/tileLab.png DESTINATION ${CMAKE_BINARY_DIR}/U01_Recursividad/)

#if(SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    target_link_libraries(Laberinto ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#endif()
