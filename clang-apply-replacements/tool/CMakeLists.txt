set(LLVM_LINK_COMPONENTS
  Support
  )

add_clang_executable(clang-apply-replacements
  ClangApplyReplacementsMain.cpp
  )
target_link_libraries(clang-apply-replacements
  clangApplyReplacements
  clangBasic
  clangFormat
  clangRewrite
  clangTooling
  )

install(TARGETS clang-apply-replacements
  RUNTIME DESTINATION bin)
