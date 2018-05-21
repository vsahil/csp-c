#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
klee_assume( var0 >= 0 );
klee_assume( var0 <= 10 );
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
klee_assume( var1 >= 0 );
klee_assume( var1 <= 10 );
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
klee_assume( var2 >= 0 );
klee_assume( var2 <= 10 );
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
klee_assume( var3 >= 0 );
klee_assume( var3 <= 10 );
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
klee_assume( var4 >= 0 );
klee_assume( var4 <= 10 );
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
klee_assume( var5 >= 0 );
klee_assume( var5 <= 10 );
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
klee_assume( var6 >= 0 );
klee_assume( var6 <= 10 );
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
klee_assume( var7 >= 0 );
klee_assume( var7 <= 10 );
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
klee_assume( var8 >= 0 );
klee_assume( var8 <= 10 );
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
klee_assume( var9 >= 0 );
klee_assume( var9 <= 10 );
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
klee_assume( var10 >= 0 );
klee_assume( var10 <= 10 );
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
klee_assume( var11 >= 1 );
klee_assume( var11 <= 10 );
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
klee_assume( var12 >= 1 );
klee_assume( var12 <= 10 );
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
klee_assume( var13 >= 1 );
klee_assume( var13 <= 10 );
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
klee_assume( var14 >= 1 );
klee_assume( var14 <= 10 );
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
klee_assume( var15 >= 1 );
klee_assume( var15 <= 10 );
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
klee_assume( var16 >= 1 );
klee_assume( var16 <= 10 );
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
klee_assume( var17 >= 1 );
klee_assume( var17 <= 10 );
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
klee_assume( var18 >= 1 );
klee_assume( var18 <= 10 );
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
klee_assume( var19 >= 1 );
klee_assume( var19 <= 10 );
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
klee_assume( var20 >= 1 );
klee_assume( var20 <= 10 );
klee_assume(var0!=var1);
klee_assume(var0!=var2);
klee_assume(var0!=var3);
klee_assume(var0!=var4);
klee_assume(var0!=var5);
klee_assume(var0!=var6);
klee_assume(var0!=var7);
klee_assume(var0!=var8);
klee_assume(var0!=var9);
klee_assume(var0!=var10);
klee_assume(var1!=var2);
klee_assume(var1!=var3);
klee_assume(var1!=var4);
klee_assume(var1!=var5);
klee_assume(var1!=var6);
klee_assume(var1!=var7);
klee_assume(var1!=var8);
klee_assume(var1!=var9);
klee_assume(var1!=var10);
klee_assume(var2!=var3);
klee_assume(var2!=var4);
klee_assume(var2!=var5);
klee_assume(var2!=var6);
klee_assume(var2!=var7);
klee_assume(var2!=var8);
klee_assume(var2!=var9);
klee_assume(var2!=var10);
klee_assume(var3!=var4);
klee_assume(var3!=var5);
klee_assume(var3!=var6);
klee_assume(var3!=var7);
klee_assume(var3!=var8);
klee_assume(var3!=var9);
klee_assume(var3!=var10);
klee_assume(var4!=var5);
klee_assume(var4!=var6);
klee_assume(var4!=var7);
klee_assume(var4!=var8);
klee_assume(var4!=var9);
klee_assume(var4!=var10);
klee_assume(var5!=var6);
klee_assume(var5!=var7);
klee_assume(var5!=var8);
klee_assume(var5!=var9);
klee_assume(var5!=var10);
klee_assume(var6!=var7);
klee_assume(var6!=var8);
klee_assume(var6!=var9);
klee_assume(var6!=var10);
klee_assume(var7!=var8);
klee_assume(var7!=var9);
klee_assume(var7!=var10);
klee_assume(var8!=var9);
klee_assume(var8!=var10);
klee_assume(var9!=var10);
klee_assume(var11!=var12);
klee_assume(var11!=var13);
klee_assume(var11!=var14);
klee_assume(var11!=var15);
klee_assume(var11!=var16);
klee_assume(var11!=var17);
klee_assume(var11!=var18);
klee_assume(var11!=var19);
klee_assume(var11!=var20);
klee_assume(var12!=var13);
klee_assume(var12!=var14);
klee_assume(var12!=var15);
klee_assume(var12!=var16);
klee_assume(var12!=var17);
klee_assume(var12!=var18);
klee_assume(var12!=var19);
klee_assume(var12!=var20);
klee_assume(var13!=var14);
klee_assume(var13!=var15);
klee_assume(var13!=var16);
klee_assume(var13!=var17);
klee_assume(var13!=var18);
klee_assume(var13!=var19);
klee_assume(var13!=var20);
klee_assume(var14!=var15);
klee_assume(var14!=var16);
klee_assume(var14!=var17);
klee_assume(var14!=var18);
klee_assume(var14!=var19);
klee_assume(var14!=var20);
klee_assume(var15!=var16);
klee_assume(var15!=var17);
klee_assume(var15!=var18);
klee_assume(var15!=var19);
klee_assume(var15!=var20);
klee_assume(var16!=var17);
klee_assume(var16!=var18);
klee_assume(var16!=var19);
klee_assume(var16!=var20);
klee_assume(var17!=var18);
klee_assume(var17!=var19);
klee_assume(var17!=var20);
klee_assume(var18!=var19);
klee_assume(var18!=var20);
klee_assume(var19!=var20);
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var11 == var_for_abs );
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var12 == var_for_abs );
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var13 == var_for_abs );
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var14 == var_for_abs );
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var15 == var_for_abs );
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var16 == var_for_abs );
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var17 == var_for_abs );
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var18 == var_for_abs );
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var19 == var_for_abs );
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var20 == var_for_abs );
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
8 x[8]
9 x[9]
10 x[10]
11 y[0]
12 y[1]
13 y[2]
14 y[3]
15 y[4]
16 y[5]
17 y[6]
18 y[7]
19 y[8]
20 y[9]
 */}
