cmake_minimum_required(VERSION 3.16)

project(CryptoQtApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find Qt
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui)

# Find Crypto++
find_package(PkgConfig REQUIRED)
pkg_check_modules(CRYPTOPP libcrypto++)

add_executable(CryptoQtApp
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    cryptohelper.cpp
    cryptohelper.h
)

target_include_directories(CryptoQtApp PRIVATE ${CRYPTOPP_INCLUDE_DIRS})
target_link_libraries(CryptoQtApp PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets ${CRYPTOPP_LIBRARIES})

