cmake_minimum_required(VERSION 3.24)
project(MP2)

set(CMAKE_CXX_STANDARD 17)

#include_directories(Asocjacja Asocjacja_z_atrybutem)
add_executable(MP2 main.cpp
        Asocjacja/Client.cpp
        Asocjacja/Client.h
        Asocjacja/Vehicle.cpp
        Asocjacja/Vehicle.h

        Asocjacja_z_atrybutem/Client.cpp
        Asocjacja_z_atrybutem/Client.h
        Asocjacja_z_atrybutem/Vehicle.cpp
        Asocjacja_z_atrybutem/Vehicle.h
        Asocjacja_z_atrybutem/Order.cpp
        Asocjacja_z_atrybutem/Order.h Kompozycja/Building.cpp Kompozycja/Building.h Kompozycja/Room.cpp Kompozycja/Room.h utils/Extension_owning.h)


find_package(Boost REQUIRED COMPONENTS
        serialization)

target_link_libraries(MP2 Boost::serialization)