include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)

add_executable(clang-query-exe
  ClangQuery.cpp
  )

target_link_libraries(clang-query-exe
  PRIVATE
  clangQuery
)

