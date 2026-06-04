cmake_minimum_required(VERSION 3.10)
project(ExchangeSort)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(exchange_sort
    src/ExchangeSorter.cpp
    src/main.cpp
)

add_executable(exchange_sort_tests
    src/ExchangeSorter.cpp
    tests/mainTests.cpp
)