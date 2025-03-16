cmake_minimum_required(VERSION 3.12)
project(arbitrage-sports-betting)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(arbitrage-sports-betting
    src/main.cpp
    src/core/Odds.cpp
    src/providers/ApiOddsProvider.cpp
    src/providers/WebSocketOddsProvider.cpp
    src/providers/FakeOddsProvider.cpp
    src/processors/ArbitrageProcessor.cpp
    src/containers/BaseContainer.cpp
    src/containers/MoneylineContainer.cpp
    src/containers/SpreadContainer.cpp
    src/containers/TotalsContainer.cpp
    src/containers/PlayerPropsContainer.cpp
)
