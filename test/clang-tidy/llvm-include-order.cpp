// RUN: $(dirname %s)/check_clang_tidy_fix.sh %s llvm-include-order %t -isystem %S/Inputs/Headers
// REQUIRES: shell

// FIXME: Investigating.
// XFAIL: win32

// CHECK-MESSAGES: [[@LINE+2]]:1: warning: #includes are not sorted properly
#include "j.h"
#include "gtest/foo.h"
#include "i.h"
#include <s.h>
#include "llvm/a.h"
#include "clang/b.h"
#include "clang-c/c.h" // hi
#include "llvm-c/d.h" // -c

// CHECK-FIXES: #include "j.h"
// CHECK-FIXES-NEXT: #include "i.h"
// CHECK-FIXES-NEXT: #include "clang-c/c.h" // hi
// CHECK-FIXES-NEXT: #include "clang/b.h"
// CHECK-FIXES-NEXT: #include "llvm-c/d.h" // -c
// CHECK-FIXES-NEXT: #include "llvm/a.h"
// CHECK-FIXES-NEXT: #include "gtest/foo.h"
// CHECK-FIXES-NEXT: #include <s.h>

#include "b.h"
#ifdef FOO
#include "a.h"
#endif

// CHECK-FIXES: #include "b.h"
// CHECK-FIXES-NEXT: #ifdef FOO
// CHECK-FIXES-NEXT: #include "a.h"
// CHECK-FIXES-NEXT: #endif

// CHECK-MESSAGES: [[@LINE+1]]:1: warning: #includes are not sorted properly
#include "b.h"
#include "a.h"

// CHECK-FIXES: #include "a.h"
// CHECK-FIXES-NEXT: #include "b.h"
