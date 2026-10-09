# SimpleCalc

A lightweight C++ calculator project focused on practicing **Modern CMake** principles and modular software architecture.

## Objectives

The goal of this mini-project is to master target-based Modern CMake:
- Understand Target-based scoping: `PRIVATE`, `PUBLIC`, and `INTERFACE`.
- Separate code cleanly into a library target (`calc_lib`) and an executable target (`simple_calc`).
- Manage compiler flags and include paths without polluting the global scope.
- Prepare the project structure for automated testing with `CTest` and CI/CD pipelines.

## Quick Start

### Build
```bash
cmake -B build -S .
cmake --build build
```

### Run test
`ctest --test-dir build --output-on-failure`


[![C++ CMake & CTest CI](https://github.com/quyem1aa1-tech/01_SimpleCalc/actions/workflows/ci.yml/badge.svg)](https://github.com/quyem1aa1-tech/01_SimpleCalc/actions/workflows/ci.yml)
