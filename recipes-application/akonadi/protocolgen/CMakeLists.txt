cmake_minimum_required(VERSION 3.1.0)

project(protocolgen)

find_package(ECM CONFIG REQUIRED)

include(FeatureSummary)

find_package(Qt5 COMPONENTS Core REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(protocolgen)
target_sources(protocolgen PRIVATE
    main.cpp
    cppgenerator.cpp
    cpphelper.cpp
    nodetree.cpp
    typehelper.cpp
    xmlparser.cpp
    cppgenerator.h
    cpphelper.h
    nodetree.h
    typehelper.h
    xmlparser.h
)

target_link_libraries(protocolgen
    Qt::Core
)

add_definitions(-DQT_USE_QSTRINGBUILDER)
add_definitions(-DQT_CORE_LIB)
add_definitions(-DQT_NO_DEBUG)

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)