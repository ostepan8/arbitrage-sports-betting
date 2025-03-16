# Arbitrage Sports Betting

Arbitrage Sports Betting is a modular C++ application designed to identify arbitrage opportunities in sports betting. By integrating multiple odds sources—such as APIs and WebSockets—and supporting various processing techniques, this project provides a flexible framework to analyze and act on real-time betting data.

## Features

- **Modular Architecture:** Easily plug in different odds providers and processors.
- **Unified Data Structures:** A common `Odds` structure to efficiently handle diverse data.
- **Dynamic Configuration:** Select and swap modules at runtime using dependency injection or factory patterns.
- **Modern C++ Practices:** Leverages C++17 features for clean and robust code.
- **CI/CD Integration:** Automated builds and tests using GitHub Actions.

## Project Structure

arbitrage-sports-betting/
├── .github/ # GitHub-specific configuration (e.g., workflows)
│ └── workflows/
│ └── build.yml # CI/CD pipelines (GitHub Actions)
├── CMakeLists.txt # Top-level CMake build script
├── include/ # Public headers (interface definitions)
│ └── arbitrage/ # Namespace or project-specific folder
│ ├── Odds.h
│ ├── IOddsProvider.h
│ └── IOddsProcessor.h
├── src/ # Source code
│ ├── main.cpp # Entry point of your application
│ ├── core/ # Core components (data structures, base interfaces)
│ │ └── Odds.cpp # Implementation of core components (if needed)
│ ├── providers/ # Modules for fetching odds
│ │ ├── ApiOddsProvider.cpp
│ │ └── WebSocketOddsProvider.cpp
│ └── processors/ # Modules for processing odds data
│ └── ArbitrageProcessor.cpp
├── tests/ # Unit and integration tests
│ ├── CMakeLists.txt # CMake file for tests (optional subproject)
│ └── test_main.cpp # Test entry point, with individual test files for modules
├── docs/ # Documentation (design docs, user guides, etc.)
│ └── README.md # Extended project documentation
└── README.md # Project overview and basic instructions

## Getting Started

### Prerequisites

- A C++17 compliant compiler (e.g., GCC 8+, Clang 7+)
- CMake 3.12 or later
- Git

### Building the Project

Clone the repository:

```bash
git clone https://github.com/ostepan8/arbitrage-sports-betting.git
cd arbitrage-sports-betting
```
