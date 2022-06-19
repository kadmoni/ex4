cmake_minimum_required(VERSION 3.20)
project(ex4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --std==c++11 -Werror -Wall -pedantic-errors -DNDEBUG")

include_directories(.)
include_directories(Cards)

add_executable(ex4
        Mtmchkin.cpp
        Mtmchkin.h
        Cards/Barfight.cpp
        Cards/Barfight.h
        Cards/Card.cpp
        Cards/Card.h
        Cards/Dragon.cpp
        Cards/Dragon.h
        Cards/Fairy.cpp
        Cards/Fairy.h
        Cards/Goblin.cpp
        Cards/Goblin.h
        Cards/Merchant.cpp
        Cards/Merchant.h
        Cards/Pitfall.cpp
        Cards/Pitfall.h
        Cards/Treasure.cpp
        Cards/Treasure.h
        Cards/Vampire.cpp
        Cards/Vampire.h
        test.cpp
        Players/Player.cpp
        Players/Player.h
        Players/Wizard.cpp
        Players/Wizard.h
        Players/Fighter.cpp
        Players/Fighter.h
        Players/Rogue.cpp
        Players/Rogue.h
        Exception.h
        utilities.cpp
        utilities.h)
