project(test)

# install googletests
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)


add_executable(run_test

        U00_Repaso/Ej01.cpp
        U00_Repaso/Ej02.cpp
        U00_Repaso/Ej03.cpp
        U00_Repaso/Ej04.cpp
        U00_Repaso/Ej05.cpp
        U00_Repaso/Ej06.cpp


        U01_Recursividad/Ej01.cpp ../U01_Recursividad/Ej-01/potencia.cpp
        U01_Recursividad/Ej02.cpp ../U01_Recursividad/Ej-02/sumatoria.cpp
        U01_Recursividad/Ej03.cpp ../U01_Recursividad/Ej-03/ackerman.cpp
        U01_Recursividad/Ej04.cpp ../U01_Recursividad/Ej-04/mcd.cpp
        U01_Recursividad/Ej05.cpp ../U01_Recursividad/Ej-05/digitos.cpp

        U02_Listas/Ej01.cpp
        U02_Listas/Ej02.cpp
        U02_Listas/Ej03.cpp
        U02_Listas/Ej04.cpp
        U02_Listas/Ej05.cpp
        U02_Listas/Ej06.cpp
        U02_Listas/Lista.cpp

        U03_Pilas/Ej01.cpp
        U03_Pilas/Ej02.cpp
        U03_Pilas/Ej03.cpp
        U03_Pilas/Ej04.cpp
        U03_Pilas/Ej05.cpp
        U03_Pilas/Pila.cpp

        U04_Colas/Ej01.cpp
        U04_Colas/Ej02.cpp
        U04_Colas/Ej03.cpp
        U04_Colas/Ej04.cpp
        U04_Colas/Ej05.cpp
        U04_Colas/Colas.cpp

        U05_Hash/Ej01.cpp
        U05_Hash/Ej02.cpp
        U05_Hash/Ej03.cpp
        U05_Hash/HashMap.cpp

        U06_Arbol/Ej01.cpp
        U06_Arbol/Ej02.cpp
        U06_Arbol/Ej03.cpp
        U06_Arbol/Ej04.cpp
        U06_Arbol/Arbol.cpp

        U07_Grafos/Ej01.cpp
        U07_Grafos/Ej02.cpp
        U07_Grafos/Ej03.cpp

        U08_Ordenamiento/Ej01.cpp
        U08_Ordenamiento/Ej02.cpp
        U08_Ordenamiento/Ej03.cpp
        U08_Ordenamiento/Ej04.cpp
        U08_Ordenamiento/Ej05.cpp

        U09_Busqueda/Ej01.cpp
        U09_Busqueda/Ej02.cpp
        U09_Busqueda/Ej03.cpp
        U09_Busqueda/Ej04.cpp
        U09_Busqueda/Ej05.cpp

        )

# Habilito Coverage
SET(COVERAGE OFF CACHE BOOL "Coverage")
if (COVERAGE)
    target_compile_options(run_test PRIVATE --coverage)
    target_link_libraries(run_test PRIVATE --coverage)
endif()

target_link_libraries(run_test gtest gtest_main gcov)
