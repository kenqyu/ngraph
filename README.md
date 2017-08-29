# Overview
TODO

# Building `libngraph`

## Build Environments

| Operating System            | Compiler  | Build system           | Status                 | Additional packages required      |
| --------------------------- | --------- | ---------------------- | ---------------------- | --------------------------------- |
| Ubuntu 16.04 (LTS) 64-bit   | CLang 3.9 | CMake 3.5.1 + GNU Make | supported              | `build-essential cmake clang-3.9` |
| Ubuntu 16.04 (LTS) 64-bit   | CLang 4.0 | CMake 3.5.1 + GNU Make | unsupported, but works | `build-essential cmake clang-4.0` |

## Steps

`libngraph` is build in the customary manner for a CMake-based project:

1. Create a build directory outside of source directory tree.
2. `cd` to the build directory.
3. Run CMake.  For example, `cmake ../private-ngraph-cpp -DCMAKE_CXX_COMPILER=clang++-3.9`
4. Run `make`.

# Testing `libngraph`

`libngraph` uses the GTest framework for unit tests.   CMake automatically downloads a
copy of the required GTest files when configuring the build directory.

To perform the unit tests

1. Configure the build directory as described above.
2. Change directory to the build directory.
3. Run `make check`

# Using `libngraph`

## System Requirements
TBD

## External library requirements
TBD

# Maintaining `libngraph`

## Code formatting
All C/C++ source code in the `libngraph` repository, including the test code when practical,
should adhere to the project's source-code formatting guidelines.

The script `maint/apply-code-format.sh` enforces that formatting at the C/C++ syntactic level.

The script `maint/check-code-format.sh` verifies that the formatting rules are met by all C/C++
code (again, at the syntax level.)  The script has an exit code of 0 when this all code meets
the standard, and non-zero otherwise.  This script does _not_ modify the source code.
