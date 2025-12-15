cmake_minimum_required(VERSION 3.21)

project(TraderJournal
    LANGUAGES CXX
    VERSION 0.0.1
    DESCRIPTION "Трейдерский журнал"
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Директории сборки
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/lib/debug)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/lib/release)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/lib/debug)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/lib/release)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/bin/debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin/release)

# Фикс для WinLibs MinGW UCRT
if(WIN32)
    add_link_options(-lucrtbase -static-libgcc -static-libstdc++ -lwinpthread)
endif()

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Charts Sql)

# Поддиректории
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(tests)

option(ENABLE_TESTING "Enable testing" ON)
if(ENABLE_TESTING)
    enable_testing()
endif()