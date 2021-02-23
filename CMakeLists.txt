cmake_minimum_required(VERSION 3.16)
project(app_swan)

set (swan_src
    contactbase.cpp
    contactbase.h
    contactwithphone.cpp
    contactwithphone.h
    contactwithphoto.cpp
    contactwithphoto.h
    main.cpp
    )

set (CMAKE_AUTORCC ON)
find_package(Qt6 COMPONENTS Core Qml Quick)
add_executable(app_swan ${swan_src} rc.qrc)
target_link_libraries(app_swan Qt6::Core Qt6::Quick)
