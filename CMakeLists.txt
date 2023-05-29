cmake_minimum_required(VERSION 3.14)

project(emailingsystem-client LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Network REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Network REQUIRED)
find_package(GTest CONFIG REQUIRED)

set(SOURCE_FILES
    clientservice.h clientservice.cpp
    iclientservice.h
    client.h client.cpp
    )

add_executable(emailingsystem-client
    main.cpp
    ${SOURCE_FILES}
    
    )

#add_executable(testClient ${SOURCE_FILES}  tests.h tests.cpp)
target_link_libraries(emailingsystem-client Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network)
#target_link_libraries(testClient Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network)
