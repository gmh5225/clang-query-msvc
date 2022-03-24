project(test-project)

find_package(LLVM REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

find_package(Clang REQUIRED CONFIG)
include_directories(${CLANG_INCLUDE_DIRS})
link_directories(${CLANG_LIBRARY_DIRS})

list(APPEND CMAKE_MODULE_PATH ${LLVM_CMAKE_DIR})
include(AddLLVM)

set(LLVM_LINK_COMPONENTS
Support
Analysis
)

add_llvm_executable(test 
test.cpp
)








