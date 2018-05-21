#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
klee_assume( var0 >= 0 );
klee_assume( var0 <= 7 );
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
klee_assume( var1 >= 0 );
klee_assume( var1 <= 7 );
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
klee_assume( var2 >= 0 );
klee_assume( var2 <= 7 );
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
klee_assume( var3 >= 0 );
klee_assume( var3 <= 7 );
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
klee_assume( var4 >= 0 );
klee_assume( var4 <= 7 );
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
klee_assume( var5 >= 0 );
klee_assume( var5 <= 7 );
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
klee_assume( var6 >= 0 );
klee_assume( var6 <= 7 );
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
klee_assume( var7 >= 0 );
klee_assume( var7 <= 7 );
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
klee_assume( var8 >= 1 );
klee_assume( var8 <= 7 );
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
klee_assume( var9 >= 1 );
klee_assume( var9 <= 7 );
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
klee_assume( var10 >= 1 );
klee_assume( var10 <= 7 );
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
klee_assume( var11 >= 1 );
klee_assume( var11 <= 7 );
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
klee_assume( var12 >= 1 );
klee_assume( var12 <= 7 );
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
klee_assume( var13 >= 1 );
klee_assume( var13 <= 7 );
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
klee_assume( var14 >= 1 );
klee_assume( var14 <= 7 );
klee_assume(var0!=var1);
klee_assume(var0!=var2);
klee_assume(var0!=var3);
klee_assume(var0!=var4);
klee_assume(var0!=var5);
klee_assume(var0!=var6);
klee_assume(var0!=var7);
klee_assume(var1!=var2);
klee_assume(var1!=var3);
klee_assume(var1!=var4);
klee_assume(var1!=var5);
klee_assume(var1!=var6);
klee_assume(var1!=var7);
klee_assume(var2!=var3);
klee_assume(var2!=var4);
klee_assume(var2!=var5);
klee_assume(var2!=var6);
klee_assume(var2!=var7);
klee_assume(var3!=var4);
klee_assume(var3!=var5);
klee_assume(var3!=var6);
klee_assume(var3!=var7);
klee_assume(var4!=var5);
klee_assume(var4!=var6);
klee_assume(var4!=var7);
klee_assume(var5!=var6);
klee_assume(var5!=var7);
klee_assume(var6!=var7);
klee_assume(var8!=var9);
klee_assume(var8!=var10);
klee_assume(var8!=var11);
klee_assume(var8!=var12);
klee_assume(var8!=var13);
klee_assume(var8!=var14);
klee_assume(var9!=var10);
klee_assume(var9!=var11);
klee_assume(var9!=var12);
klee_assume(var9!=var13);
klee_assume(var9!=var14);
klee_assume(var10!=var11);
klee_assume(var10!=var12);
klee_assume(var10!=var13);
klee_assume(var10!=var14);
klee_assume(var11!=var12);
klee_assume(var11!=var13);
klee_assume(var11!=var14);
klee_assume(var12!=var13);
klee_assume(var12!=var14);
klee_assume(var13!=var14);
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var8 == var_for_abs );
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var9 == var_for_abs );
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var10 == var_for_abs );
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var11 == var_for_abs );
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var12 == var_for_abs );
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var13 == var_for_abs );
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var14 == var_for_abs );
int cntdis = 1;
int exten = 1;
if( cntdis == 1 && exten == 1)
assert(0);
else printf("UNSAT\n");
return 0;
/* 
0 x[0]
1 x[1]
2 x[2]
3 x[3]
4 x[4]
5 x[5]
6 x[6]
7 x[7]
8 y[0]
9 y[1]
10 y[2]
11 y[3]
12 y[4]
13 y[5]
14 y[6]
 */}
