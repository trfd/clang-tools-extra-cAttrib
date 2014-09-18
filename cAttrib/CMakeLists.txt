set(LLVM_LINK_COMPONENTS support)
set(LLVM_USED_LIBS clangTooling clangBasic clangAST)

add_clang_library(cAttrib
  cAttrib.cpp

  LINK_LIBS
  clangTooling
  clangBasic
  clangASTMatchers
  )
