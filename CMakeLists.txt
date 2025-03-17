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
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(json)

# Fetch cpr (for HTTP requests)
FetchContent_Declare(
    cpr
    GIT_REPOSITORY https://github.com/libcpr/cpr.git
    GIT_TAG 1.7.2
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(cpr)

# Core files
set(CORE_SOURCES
    src/core/Odds.cpp
)

# Container files
set(CONTAINER_SOURCES
    src/containers/BaseContainer.cpp
    src/containers/MoneylineContainer.cpp
    src/containers/SpreadContainer.cpp
    src/containers/TotalsContainer.cpp
    src/containers/PlayerPropsContainer.cpp
)

# Provider files
set(PROVIDER_SOURCES
    src/providers/OddsApiProvider.cpp
    src/providers/FakeOddsProvider.cpp
    src/providers/WebSocketOddsProvider.cpp
)

# Processor files
set(PROCESSOR_SOURCES
    src/processors/SimpleArbitrageProcessor.cpp
)

# New module files
set(MODULE_SOURCES
    src/http/HttpClient.cpp
    src/parsing/JsonParser.cpp
    src/logging/Logger.cpp
)

# Add executable
add_executable(arbitrage-sports-betting
    src/main.cpp
    ${CORE_SOURCES}
    ${CONTAINER_SOURCES}
    ${PROVIDER_SOURCES}
    ${PROCESSOR_SOURCES}
    ${MODULE_SOURCES}
)

# Link libraries
target_link_libraries(arbitrage-sports-betting PRIVATE
    cpr::cpr
    nlohmann_json::nlohmann_json
)