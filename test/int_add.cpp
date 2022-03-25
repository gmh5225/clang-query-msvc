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

int multi_foo(int a, int b) {
    return a + b + 123;
}

int multi_foo1(int a, int b){
    return a + b * (a + b);
}



//
// match binaryOperator(hasOperatorName("+"),hasLHS(anyOf(implicitCastExpr(hasType(isSignedInteger())).bind("lhs"),integerLiteral().bind("lhs"))),hasRHS(anyOf(implicitCastExpr(hasType(isSignedInteger())).bind("rhs"),integerLiteral().bind("rhs")))).bind("op") 
//

/*
TranslationUnitDecl 0x1f3f7dd2158 <<invalid sloc>> <invalid sloc>
|-CXXRecordDecl 0x1f3f7dd29a8 <<invalid sloc>> <invalid sloc> implicit struct _GUID
| `-TypeVisibilityAttr 0x1f3f7dd2a60 <<invalid sloc>> Implicit Default
|-TypedefDecl 0x1f3f7dd2ad8 <<invalid sloc>> <invalid sloc> implicit __int128_t '__int128'
| `-BuiltinType 0x1f3f7dd2720 '__int128'
|-TypedefDecl 0x1f3f7dd2b48 <<invalid sloc>> <invalid sloc> implicit __uint128_t 'unsigned __int128'
| `-BuiltinType 0x1f3f7dd2740 'unsigned __int128'
|-TypedefDecl 0x1f3f7dd2ee8 <<invalid sloc>> <invalid sloc> implicit __NSConstantString '__NSConstantString_tag'
| `-RecordType 0x1f3f7dd2c30 '__NSConstantString_tag'
|   `-CXXRecord 0x1f3f7dd2ba0 '__NSConstantString_tag'
|-CXXRecordDecl 0x1f3f7dd2f40 <<invalid sloc>> <invalid sloc> implicit class type_info
| `-TypeVisibilityAttr 0x1f3f7dd2ff0 <<invalid sloc>> Implicit Default
|-TypedefDecl 0x1f3f7dd3068 <<invalid sloc>> <invalid sloc> implicit size_t 'unsigned long long'
| `-BuiltinType 0x1f3f7dd2340 'unsigned long long'
|-TypedefDecl 0x1f3f7e10260 <<invalid sloc>> <invalid sloc> implicit __builtin_ms_va_list 'char *'
| `-PointerType 0x1f3f7dd30c0 'char *'
|   `-BuiltinType 0x1f3f7dd2200 'char'
|-TypedefDecl 0x1f3f7e102d0 <<invalid sloc>> <invalid sloc> implicit __builtin_va_list 'char *'
| `-PointerType 0x1f3f7dd30c0 'char *'
|   `-BuiltinType 0x1f3f7dd2200 'char'
|-FunctionDecl 0x1f3f7e104a0 <E:\llvm\clang-query-msvc\test\int_add.cpp:1:1, line:3:1> line:1:5 foo 'int (int, int)'
| |-ParmVarDecl 0x1f3f7e10340 <col:9, col:13> col:13 used a 'int'
| |-ParmVarDecl 0x1f3f7e103c0 <col:16, col:20> col:20 used b 'int'
| `-CompoundStmt 0x1f3f7e10638 <col:23, line:3:1>
|   `-ReturnStmt 0x1f3f7e10628 <line:2:5, col:16>
|     `-BinaryOperator 0x1f3f7e10608 <col:12, col:16> 'int' '+'
|       |-ImplicitCastExpr 0x1f3f7e105d8 <col:12> 'int' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3f7e10598 <col:12> 'int' lvalue ParmVar 0x1f3f7e10340 'a' 'int'
|       `-ImplicitCastExpr 0x1f3f7e105f0 <col:16> 'int' <LValueToRValue>
|         `-DeclRefExpr 0x1f3f7e105b8 <col:16> 'int' lvalue ParmVar 0x1f3f7e103c0 'b' 'int'
|-FunctionDecl 0x1f3f7e107c0 <line:5:1, line:7:1> line:5:14 ufoo 'unsigned int (unsigned int, unsigned int)'
| |-ParmVarDecl 0x1f3f7e10668 <col:19, col:32> col:32 used ua 'unsigned int'
| |-ParmVarDecl 0x1f3f7e106e8 <col:36, col:49> col:49 used ub 'unsigned int'
| `-CompoundStmt 0x1f3f7e10910 <col:53, line:7:1>
|   `-ReturnStmt 0x1f3f7e10900 <line:6:5, col:17>
|     `-BinaryOperator 0x1f3f7e108e0 <col:12, col:17> 'unsigned int' '+'
|       |-ImplicitCastExpr 0x1f3f7e108b0 <col:12> 'unsigned int' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3f7e10870 <col:12> 'unsigned int' lvalue ParmVar 0x1f3f7e10668 'ua' 'unsigned int'
|       `-ImplicitCastExpr 0x1f3f7e108c8 <col:17> 'unsigned int' <LValueToRValue>
|         `-DeclRefExpr 0x1f3f7e10890 <col:17> 'unsigned int' lvalue ParmVar 0x1f3f7e106e8 'ub' 'unsigned int'
|-FunctionDecl 0x1f3f7e10aa0 <line:9:1, line:11:1> line:9:7 bar 'short (short, short)'
| |-ParmVarDecl 0x1f3f7e10940 <col:11, col:17> col:17 used a 'short'
| |-ParmVarDecl 0x1f3f7e109c0 <col:20, col:26> col:26 used b 'short'
| `-CompoundStmt 0x1f3f7e10c38 <col:29, line:11:1>
|   `-ReturnStmt 0x1f3f7e10c28 <line:10:5, col:16>
|     `-ImplicitCastExpr 0x1f3f7e10c10 <col:12, col:16> 'short' <IntegralCast>
|       `-BinaryOperator 0x1f3f7e10bf0 <col:12, col:16> 'int' '+'
|         |-ImplicitCastExpr 0x1f3f7e10ba8 <col:12> 'int' <IntegralCast>
|         | `-ImplicitCastExpr 0x1f3f7e10b90 <col:12> 'short' <LValueToRValue>
|         |   `-DeclRefExpr 0x1f3f7e10b50 <col:12> 'short' lvalue ParmVar 0x1f3f7e10940 'a' 'short'
|         `-ImplicitCastExpr 0x1f3f7e10bd8 <col:16> 'int' <IntegralCast>
|           `-ImplicitCastExpr 0x1f3f7e10bc0 <col:16> 'short' <LValueToRValue>
|             `-DeclRefExpr 0x1f3f7e10b70 <col:16> 'short' lvalue ParmVar 0x1f3f7e109c0 'b' 'short'
|-FunctionDecl 0x1f3f7e10dc0 <line:13:1, line:15:1> line:13:6 bez 'long (long, long)'
| |-ParmVarDecl 0x1f3f7e10c68 <col:10, col:15> col:15 used a 'long'
| |-ParmVarDecl 0x1f3f7e10ce8 <col:18, col:23> col:23 used b 'long'
| `-CompoundStmt 0x1f3f7e10f10 <col:26, line:15:1>
|   `-ReturnStmt 0x1f3f7e10f00 <line:14:5, col:16>
|     `-BinaryOperator 0x1f3f7e10ee0 <col:12, col:16> 'long' '+'
|       |-ImplicitCastExpr 0x1f3f7e10eb0 <col:12> 'long' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3f7e10e70 <col:12> 'long' lvalue ParmVar 0x1f3f7e10c68 'a' 'long'
|       `-ImplicitCastExpr 0x1f3f7e10ec8 <col:16> 'long' <LValueToRValue>
|         `-DeclRefExpr 0x1f3f7e10e90 <col:16> 'long' lvalue ParmVar 0x1f3f7e10ce8 'b' 'long'
|-FunctionDecl 0x1f3f7e110a0 <line:17:1, line:19:1> line:17:5 fez 'int (long, short)'
| |-ParmVarDecl 0x1f3f7e10f40 <col:9, col:14> col:14 used a 'long'
| |-ParmVarDecl 0x1f3f7e10fc0 <col:17, col:23> col:23 used b 'short'
| `-CompoundStmt 0x1f3f7e11220 <col:26, line:19:1>
|   `-ReturnStmt 0x1f3f7e11210 <line:18:5, col:16>
|     `-ImplicitCastExpr 0x1f3f7e111f8 <col:12, col:16> 'int' <IntegralCast>
|       `-BinaryOperator 0x1f3f7e111d8 <col:12, col:16> 'long' '+'
|         |-ImplicitCastExpr 0x1f3f7e11190 <col:12> 'long' <LValueToRValue>
|         | `-DeclRefExpr 0x1f3f7e11150 <col:12> 'long' lvalue ParmVar 0x1f3f7e10f40 'a' 'long'
|         `-ImplicitCastExpr 0x1f3f7e111c0 <col:16> 'long' <IntegralCast>
|           `-ImplicitCastExpr 0x1f3f7e111a8 <col:16> 'short' <LValueToRValue>
|             `-DeclRefExpr 0x1f3f7e11170 <col:16> 'short' lvalue ParmVar 0x1f3f7e10fc0 'b' 'short'
|-FunctionDecl 0x1f3f7e20320 <line:21:1, line:23:1> line:21:5 fer 'int (int)'
| |-ParmVarDecl 0x1f3f7e20250 <col:9, col:13> col:13 used a 'int'
| `-CompoundStmt 0x1f3f7e20458 <col:16, line:23:1>
|   `-ReturnStmt 0x1f3f7e20448 <line:22:5, col:16>
|     `-BinaryOperator 0x1f3f7e20428 <col:12, col:16> 'int' '+'
|       |-ImplicitCastExpr 0x1f3f7e20410 <col:12> 'int' <LValueToRValue>
|       | `-DeclRefExpr 0x1f3f7e203c8 <col:12> 'int' lvalue ParmVar 0x1f3f7e20250 'a' 'int'
|       `-IntegerLiteral 0x1f3f7e203e8 <col:16> 'int' 123
|-FunctionDecl 0x1f3f7e204c0 <line:25:1, line:27:1> line:25:5 ber 'int ()'
| `-CompoundStmt 0x1f3f7e205e0 <col:11, line:27:1>
|   `-ReturnStmt 0x1f3f7e205d0 <line:26:5, col:18>
|     `-BinaryOperator 0x1f3f7e205b0 <col:12, col:18> 'int' '+'
|       |-IntegerLiteral 0x1f3f7e20560 <col:12> 'int' 321
|       `-IntegerLiteral 0x1f3f7e20588 <col:18> 'int' 123
|-FunctionDecl 0x1f3f7e20730 <line:29:1, line:31:1> line:29:5 multi_foo 'int (int, int)'
| |-ParmVarDecl 0x1f3f7e20610 <col:15, col:19> col:19 used a 'int'
| |-ParmVarDecl 0x1f3f7e20690 <col:22, col:26> col:26 used b 'int'
| `-CompoundStmt 0x1f3f7e208c8 <col:29, line:31:1>
|   `-ReturnStmt 0x1f3f7e208b8 <line:30:5, col:20>
|     `-BinaryOperator 0x1f3f7e20898 <col:12, col:20> 'int' '+'
|       |-BinaryOperator 0x1f3f7e20850 <col:12, col:16> 'int' '+'
|       | |-ImplicitCastExpr 0x1f3f7e20820 <col:12> 'int' <LValueToRValue>
|       | | `-DeclRefExpr 0x1f3f7e207e0 <col:12> 'int' lvalue ParmVar 0x1f3f7e20610 'a' 'int'
|       | `-ImplicitCastExpr 0x1f3f7e20838 <col:16> 'int' <LValueToRValue>
|       |   `-DeclRefExpr 0x1f3f7e20800 <col:16> 'int' lvalue ParmVar 0x1f3f7e20690 'b' 'int'
|       `-IntegerLiteral 0x1f3f7e20870 <col:20> 'int' 123
`-FunctionDecl 0x1f3f7e20a18 <line:33:1, line:35:1> line:33:5 multi_foo1 'int (int, int)'
  |-ParmVarDecl 0x1f3f7e208f8 <col:16, col:20> col:20 used a 'int'
  |-ParmVarDecl 0x1f3f7e20978 <col:23, col:27> col:27 used b 'int'
  `-CompoundStmt 0x1f3f7e20c38 <col:29, line:35:1>
    `-ReturnStmt 0x1f3f7e20c28 <line:34:5, col:26>
      `-BinaryOperator 0x1f3f7e20c08 <col:12, col:26> 'int' '+'
        |-ImplicitCastExpr 0x1f3f7e20bf0 <col:12> 'int' <LValueToRValue>
        | `-DeclRefExpr 0x1f3f7e20ac8 <col:12> 'int' lvalue ParmVar 0x1f3f7e208f8 'a' 'int'
        `-BinaryOperator 0x1f3f7e20bd0 <col:16, col:26> 'int' '*'
          |-ImplicitCastExpr 0x1f3f7e20bb8 <col:16> 'int' <LValueToRValue>
          | `-DeclRefExpr 0x1f3f7e20ae8 <col:16> 'int' lvalue ParmVar 0x1f3f7e20978 'b' 'int'
          `-ParenExpr 0x1f3f7e20b98 <col:20, col:26> 'int'
            `-BinaryOperator 0x1f3f7e20b78 <col:21, col:25> 'int' '+'
              |-ImplicitCastExpr 0x1f3f7e20b48 <col:21> 'int' <LValueToRValue>
              | `-DeclRefExpr 0x1f3f7e20b08 <col:21> 'int' lvalue ParmVar 0x1f3f7e208f8 'a' 'int'
              `-ImplicitCastExpr 0x1f3f7e20b60 <col:25> 'int' <LValueToRValue>
                `-DeclRefExpr 0x1f3f7e20b28 <col:25> 'int' lvalue ParmVar 0x1f3f7e20978 'b' 'int'
*/
