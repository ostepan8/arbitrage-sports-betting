# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build

# Include any dependencies generated for this target.
include CMakeFiles/arbitrage-sports-betting.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arbitrage-sports-betting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arbitrage-sports-betting.dir/flags.make

CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/main.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/main.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/main.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/main.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/core/Odds.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/core/Odds.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/core/Odds.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/core/Odds.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/OddsApiProvider.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/OddsApiProvider.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/OddsApiProvider.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/OddsApiProvider.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/FakeOddsProvider.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/FakeOddsProvider.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/FakeOddsProvider.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/FakeOddsProvider.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/WebSocketOddsProvider.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/WebSocketOddsProvider.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/WebSocketOddsProvider.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/providers/WebSocketOddsProvider.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/processors/ArbitrageProcessor.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/processors/ArbitrageProcessor.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/processors/ArbitrageProcessor.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/processors/ArbitrageProcessor.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/BaseContainer.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/BaseContainer.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/BaseContainer.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/BaseContainer.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/MoneylineContainer.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/MoneylineContainer.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/MoneylineContainer.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/MoneylineContainer.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/SpreadContainer.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/SpreadContainer.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/SpreadContainer.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/SpreadContainer.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/TotalsContainer.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/TotalsContainer.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/TotalsContainer.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/TotalsContainer.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.s

CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/flags.make
CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o: /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/PlayerPropsContainer.cpp
CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o: CMakeFiles/arbitrage-sports-betting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o -MF CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o.d -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o -c /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/PlayerPropsContainer.cpp

CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/PlayerPropsContainer.cpp > CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.i

CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/src/containers/PlayerPropsContainer.cpp -o CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.s

# Object files for target arbitrage-sports-betting
arbitrage__sports__betting_OBJECTS = \
"CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o" \
"CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o"

# External object files for target arbitrage-sports-betting
arbitrage__sports__betting_EXTERNAL_OBJECTS =

arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/main.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/core/Odds.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/providers/OddsApiProvider.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/providers/FakeOddsProvider.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/providers/WebSocketOddsProvider.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/processors/ArbitrageProcessor.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/containers/BaseContainer.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/containers/MoneylineContainer.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/containers/SpreadContainer.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/containers/TotalsContainer.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/src/containers/PlayerPropsContainer.cpp.o
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/build.make
arbitrage-sports-betting: _deps/cpr-build/cpr/libcpr.1.7.2.dylib
arbitrage-sports-betting: _deps/curl-build/lib/libcurl-d.dylib
arbitrage-sports-betting: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.5.sdk/usr/lib/libz.tbd
arbitrage-sports-betting: /opt/homebrew/lib/libssh2.dylib
arbitrage-sports-betting: CMakeFiles/arbitrage-sports-betting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable arbitrage-sports-betting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arbitrage-sports-betting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arbitrage-sports-betting.dir/build: arbitrage-sports-betting
.PHONY : CMakeFiles/arbitrage-sports-betting.dir/build

CMakeFiles/arbitrage-sports-betting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arbitrage-sports-betting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arbitrage-sports-betting.dir/clean

CMakeFiles/arbitrage-sports-betting.dir/depend:
	cd /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build /Users/ostepan/Desktop/GitHub/arbitrage-sports-betting/build/CMakeFiles/arbitrage-sports-betting.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/arbitrage-sports-betting.dir/depend

