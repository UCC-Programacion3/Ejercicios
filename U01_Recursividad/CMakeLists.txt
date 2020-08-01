
add_executable(U01-E01 Ej-01/main.cpp Ej-01/potencia.cpp)

add_executable(U01-E02 Ej-02/main.cpp Ej-02/sumatoria.cpp)

add_executable(U01-E03 Ej-03/main.cpp Ej-03/ackerman.cpp)

add_executable(U01-E04 Ej-04/main.cpp Ej-04/mcd.cpp)

add_executable(U01-E05 Ej-05/main.cpp Ej-05/digitos.cpp)



find_package(Qt5Widgets REQUIRED)


set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/test/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED graphics window system)


add_executable(Laberinto Ex-Laberinto/main.cpp Ex-Laberinto/MazeGenerator.h Ex-Laberinto/LaberintoSolver.cpp Ex-Laberinto/LaberintoSolver.h Ex-Laberinto/MazeGenerator.cpp)

target_link_libraries(Laberinto Qt5::Widgets)
file(COPY Ex-Laberinto/tileLab.png DESTINATION ${CMAKE_BINARY_DIR}/U01_Recursividad/)

#if(SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    target_link_libraries(Laberinto ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#endif()
