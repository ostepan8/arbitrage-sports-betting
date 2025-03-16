cmake_minimum_required(VERSION 3.12)
project(arbitrage-sports-betting)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

include(FetchContent)

# Fetch nlohmann/json (header-only)
FetchContent_Declare(
    json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.2
)
FetchContent_MakeAvailable(json)

# Fetch cpr (for HTTP requests)
FetchContent_Declare(
    cpr
    GIT_REPOSITORY https://github.com/libcpr/cpr.git
    GIT_TAG 1.7.2
)
FetchContent_MakeAvailable(cpr)

add_executable(arbitrage-sports-betting
    src/main.cpp
    src/core/Odds.cpp
    src/providers/ApiOddsProvider.cpp
    src/providers/FakeOddsProvider.cpp
    src/providers/WebSocketOddsProvider.cpp
    src/processors/ArbitrageProcessor.cpp
    src/containers/BaseContainer.cpp
    src/containers/MoneylineContainer.cpp
    src/containers/SpreadContainer.cpp
    src/containers/TotalsContainer.cpp
    src/containers/PlayerPropsContainer.cpp
)

# Link cpr (nlohmann::json is header-only so no linking needed)
target_link_libraries(arbitrage-sports-betting PRIVATE cpr::cpr)
