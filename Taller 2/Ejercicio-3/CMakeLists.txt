cmake_minimum_required(VERSION 3.16)

project(Ejercicio-3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ejercicio-3 main.cpp)

include(GNUInstallDirs)
install(TARGETS Ejercicio-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
