cmake_minimum_required(VERSION 3.20)
project(ex4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Cards)

add_executable(ex4
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
        Mtmchkin.cpp
        Mtmchkin.h
        Mtmchkin.cpp
        test.cpp
        Player.cpp
        Player.h
        Wizard.cpp
        Wizard.h
        Fighter.cpp
        Fighter.h
        Rogue.cpp
        Rogue.h
        Exception.h
        utilities.cpp
        utilities.h)
