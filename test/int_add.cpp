int foo(int a, int b) {
    return a + b;
}

unsigned int ufoo(unsigned int ua, unsigned int ub) {
    return ua + ub;
}

short bar(short a, short b) {
    return a + b;
}

long bez(long a, long b) {
    return a + b;
}

int fez(long a, short b) {
    return a + b;
}

int fer(int a) {
    return a + 123;
}

int ber() {
    return 321 + 123;
}



//
// match binaryOperator(hasOperatorName("+"),hasLHS(anyOf(implicitCastExpr(hasType(isSignedInteger())).bind("lhs"),integerLiteral().bind("lhs"))),hasRHS(anyOf(implicitCastExpr(hasType(isSignedInteger())).bind("rhs"),integerLiteral().bind("rhs")))).bind("op") 
//

/*
TranslationUnitDecl 0x1f3ad6ff098 <<invalid sloc>> <invalid sloc>
|-CXXRecordDecl 0x1f3ad6ff8e8 <<invalid sloc>> <invalid sloc> implicit struct _GUID
| `-TypeVisibilityAttr 0x1f3ad6ff9a0 <<invalid sloc>> Implicit Default
|-TypedefDecl 0x1f3ad6ffa18 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x1f3ad6ff660 '__int128'
|-TypedefDecl 0x1f3ad6ffa88 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x1f3ad6ff680 'unsigned __int128'
|-TypedefDecl 0x1f3ad6ffe28 <<invalid sloc>> <invalid sloc> implicit __NSConstantString '__NSConstantString_tag'
| `-RecordType 0x1f3ad6ffb70 '__NSConstantString_tag'
|   `-CXXRecord 0x1f3ad6ffae0 '__NSConstantString_tag'
|-CXXRecordDecl 0x1f3ad6ffe80 <<invalid sloc>> <invalid sloc> implicit class type_info
| `-TypeVisibilityAttr 0x1f3ad6fff30 <<invalid sloc>> Implicit Default
|-TypedefDecl 0x1f3ad6fffa8 <<invalid sloc>> <invalid sloc> implicit size_t 'unsigned long long'
| `-BuiltinType 0x1f3ad6ff280 'unsigned long long'
|-TypedefDecl 0x1f3ad739e70 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x1f3ad700000 'char *'
|   `-BuiltinType 0x1f3ad6ff140 'char'
|-TypedefDecl 0x1f3ad739ee0 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list 'char *'
| `-PointerType 0x1f3ad700000 'char *'
|   `-BuiltinType 0x1f3ad6ff140 'char'
|-FunctionDecl 0x1f3ad73a0b0 <E:\llvm\clang-query-msvc\test\int_add.cpp:1:1, line:3:1> line:1:5 foo 'int (int, int)'
| |-ParmVarDecl 0x1f3ad739f50 <col:9, col:13> col:13 used a 'int'
| |-ParmVarDecl 0x1f3ad739fd0 <col:16, col:20> col:20 used b 'int'
| `-CompoundStmt 0x1f3ad73a248 <col:23, line:3:1>
|   `-ReturnStmt 0x1f3ad73a238 <line:2:5, col:16>
|     `-BinaryOperator 0x1f3ad73a218 <col:12, col:16> 'int' '+'
|       |-ImplicitCastExpr 0x1f3ad73a1e8 <col:12> 'int' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3ad73a1a8 <col:12> 'int' lvalue ParmVar 0x1f3ad739f50 'a' 'int'
|       `-ImplicitCastExpr 0x1f3ad73a200 <col:16> 'int' <LValueToRValue>
|         `-DeclRefExpr 0x1f3ad73a1c8 <col:16> 'int' lvalue ParmVar 0x1f3ad739fd0 'b' 'int'
|-FunctionDecl 0x1f3ad73a3d0 <line:5:1, line:7:1> line:5:14 ufoo 'unsigned int (unsigned int, unsigned int)'
| |-ParmVarDecl 0x1f3ad73a278 <col:19, col:32> col:32 used ua 'unsigned int'
| |-ParmVarDecl 0x1f3ad73a2f8 <col:36, col:49> col:49 used ub 'unsigned int'
| `-CompoundStmt 0x1f3ad73a520 <col:53, line:7:1>
|   `-ReturnStmt 0x1f3ad73a510 <line:6:5, col:17>
|     `-BinaryOperator 0x1f3ad73a4f0 <col:12, col:17> 'unsigned int' '+'
|       |-ImplicitCastExpr 0x1f3ad73a4c0 <col:12> 'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3ad73a480 <col:12> 'unsigned int' lvalue ParmVar 0x1f3ad73a278 'ua' 'unsigned int'
|       `-ImplicitCastExpr 0x1f3ad73a4d8 <col:17> 'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x1f3ad73a4a0 <col:17> 'unsigned int' lvalue ParmVar 0x1f3ad73a2f8 'ub' 'unsigned int'
|-FunctionDecl 0x1f3ad73a6b0 <line:9:1, line:11:1> line:9:7 bar 'short (short, short)'
| |-ParmVarDecl 0x1f3ad73a550 <col:11, col:17> col:17 used a 'short'
| |-ParmVarDecl 0x1f3ad73a5d0 <col:20, col:26> col:26 used b 'short'
| `-CompoundStmt 0x1f3ad73a848 <col:29, line:11:1>
|   `-ReturnStmt 0x1f3ad73a838 <line:10:5, col:16>
|     `-ImplicitCastExpr 0x1f3ad73a820 <col:12, col:16> 'short' <IntegralCast>
|       `-BinaryOperator 0x1f3ad73a800 <col:12, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x1f3ad73a7b8 <col:12> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x1f3ad73a7a0 <col:12> 'short' <LValueToRValue>
|         |   `-DeclRefExpr 0x1f3ad73a760 <col:12> 'short' lvalue ParmVar 0x1f3ad73a550 'a' 'short'
|         `-ImplicitCastExpr 0x1f3ad73a7e8 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x1f3ad73a7d0 <col:16> 'short' <LValueToRValue>
|             `-DeclRefExpr 0x1f3ad73a780 <col:16> 'short' lvalue ParmVar 0x1f3ad73a5d0 'b' 'short'
|-FunctionDecl 0x1f3ad73a9d0 <line:13:1, line:15:1> line:13:6 bez 'long (long, long)'
| |-ParmVarDecl 0x1f3ad73a878 <col:10, col:15> col:15 used a 'long'
| |-ParmVarDecl 0x1f3ad73a8f8 <col:18, col:23> col:23 used b 'long'
| `-CompoundStmt 0x1f3ad73ab20 <col:26, line:15:1>
|   `-ReturnStmt 0x1f3ad73ab10 <line:14:5, col:16>
|     `-BinaryOperator 0x1f3ad73aaf0 <col:12, col:16> 'long' '+'
|       |-ImplicitCastExpr 0x1f3ad73aac0 <col:12> 'long' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3ad73aa80 <col:12> 'long' lvalue ParmVar 0x1f3ad73a878 'a' 'long'
|       `-ImplicitCastExpr 0x1f3ad73aad8 <col:16> 'long' <LValueToRValue>
|         `-DeclRefExpr 0x1f3ad73aaa0 <col:16> 'long' lvalue ParmVar 0x1f3ad73a8f8 'b' 'long'
|-FunctionDecl 0x1f3ad73acb0 <line:17:1, line:19:1> line:17:5 fez 'int (long, short)'
| |-ParmVarDecl 0x1f3ad73ab50 <col:9, col:14> col:14 used a 'long'
| |-ParmVarDecl 0x1f3ad73abd0 <col:17, col:23> col:23 used b 'short'
| `-CompoundStmt 0x1f3ad73ae30 <col:26, line:19:1>
|   `-ReturnStmt 0x1f3ad73ae20 <line:18:5, col:16>
|     `-ImplicitCastExpr 0x1f3ad73ae08 <col:12, col:16> 'int' <IntegralCast>
|       `-BinaryOperator 0x1f3ad73ade8 <col:12, col:16> 'long' '+'
|         |-ImplicitCastExpr 0x1f3ad73ada0 <col:12> 'long' <LValueToRValue>
|         | `-DeclRefExpr 0x1f3ad73ad60 <col:12> 'long' lvalue ParmVar 0x1f3ad73ab50 'a' 'long'
|         `-ImplicitCastExpr 0x1f3ad73add0 <col:16> 'long' <IntegralCast>
|           `-ImplicitCastExpr 0x1f3ad73adb8 <col:16> 'short' <LValueToRValue>
|             `-DeclRefExpr 0x1f3ad73ad80 <col:16> 'short' lvalue ParmVar 0x1f3ad73abd0 'b' 'short'
|-FunctionDecl 0x1f3ad750590 <line:21:1, line:23:1> line:21:5 fer 'int (int)'
| |-ParmVarDecl 0x1f3ad7504c0 <col:9, col:13> col:13 used a 'int'
| `-CompoundStmt 0x1f3ad7506c8 <col:16, line:23:1>
|   `-ReturnStmt 0x1f3ad7506b8 <line:22:5, col:16>
|     `-BinaryOperator 0x1f3ad750698 <col:12, col:16> 'int' '+'
|       |-ImplicitCastExpr 0x1f3ad750680 <col:12> 'int' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3ad750638 <col:12> 'int' lvalue ParmVar 0x1f3ad7504c0 'a' 'int'
|       `-IntegerLiteral 0x1f3ad750658 <col:16> 'int' 123
`-FunctionDecl 0x1f3ad750730 <line:25:1, line:27:1> line:25:5 ber 'int ()'
  `-CompoundStmt 0x1f3ad750850 <col:11, line:27:1>
    `-ReturnStmt 0x1f3ad750840 <line:26:5, col:18>
      `-BinaryOperator 0x1f3ad750820 <col:12, col:18> 'int' '+'
        |-IntegerLiteral 0x1f3ad7507d0 <col:12> 'int' 321
        `-IntegerLiteral 0x1f3ad7507f8 <col:18> 'int' 123
*/
