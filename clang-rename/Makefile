##===- tools/extra/clang-rename/Makefile -------------------*- Makefile -*-===##
#
# The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
#
##===----------------------------------------------------------------------===##

CLANG_LEVEL := ../../..
TOOLNAME = clang-rename
include $(CLANG_LEVEL)/../../Makefile.config
LINK_COMPONENTS := $(TARGETS_TO_BUILD) asmparser bitreader support mc option
USEDLIBS = clangFrontend.a clangSerialization.a clangDriver.a \
           clangTooling.a clangParse.a clangSema.a clangIndex.a \
           clangStaticAnalyzerFrontend.a clangStaticAnalyzerCheckers.a \
           clangStaticAnalyzerCore.a clangAnalysis.a clangRewriteFrontend.a \
           clangRewrite.a clangEdit.a clangAST.a clangLex.a clangBasic.a

include $(CLANG_LEVEL)/Makefile
