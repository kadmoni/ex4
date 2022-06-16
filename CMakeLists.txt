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
        Mtmchkin.h
        Mtmchkin.cpp
        test.cpp
        Player.h
        Player.cpp
        Wizard.cpp
        Wizard.h
        Rogue.h
        Rogue.cpp
        Fighter.h
        Fighter.cpp
        utilities.cpp
        utilities.h)
