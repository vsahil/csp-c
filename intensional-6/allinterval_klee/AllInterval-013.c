#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
klee_assume( var0 >= 0 );
klee_assume( var0 <= 12 );
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
klee_assume( var1 >= 0 );
klee_assume( var1 <= 12 );
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
klee_assume( var2 >= 0 );
klee_assume( var2 <= 12 );
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
klee_assume( var3 >= 0 );
klee_assume( var3 <= 12 );
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
klee_assume( var4 >= 0 );
klee_assume( var4 <= 12 );
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
klee_assume( var5 >= 0 );
klee_assume( var5 <= 12 );
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
klee_assume( var6 >= 0 );
klee_assume( var6 <= 12 );
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
klee_assume( var7 >= 0 );
klee_assume( var7 <= 12 );
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
klee_assume( var8 >= 0 );
klee_assume( var8 <= 12 );
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
klee_assume( var9 >= 0 );
klee_assume( var9 <= 12 );
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
klee_assume( var10 >= 0 );
klee_assume( var10 <= 12 );
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
klee_assume( var11 >= 0 );
klee_assume( var11 <= 12 );
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
klee_assume( var12 >= 0 );
klee_assume( var12 <= 12 );
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
klee_assume( var13 >= 1 );
klee_assume( var13 <= 12 );
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
klee_assume( var14 >= 1 );
klee_assume( var14 <= 12 );
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
klee_assume( var15 >= 1 );
klee_assume( var15 <= 12 );
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
klee_assume( var16 >= 1 );
klee_assume( var16 <= 12 );
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
klee_assume( var17 >= 1 );
klee_assume( var17 <= 12 );
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
klee_assume( var18 >= 1 );
klee_assume( var18 <= 12 );
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
klee_assume( var19 >= 1 );
klee_assume( var19 <= 12 );
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
klee_assume( var20 >= 1 );
klee_assume( var20 <= 12 );
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
klee_assume( var21 >= 1 );
klee_assume( var21 <= 12 );
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
klee_assume( var22 >= 1 );
klee_assume( var22 <= 12 );
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
klee_assume( var23 >= 1 );
klee_assume( var23 <= 12 );
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
klee_assume( var24 >= 1 );
klee_assume( var24 <= 12 );
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
klee_assume(var0!=var11);
klee_assume(var0!=var12);
klee_assume(var1!=var2);
klee_assume(var1!=var3);
klee_assume(var1!=var4);
klee_assume(var1!=var5);
klee_assume(var1!=var6);
klee_assume(var1!=var7);
klee_assume(var1!=var8);
klee_assume(var1!=var9);
klee_assume(var1!=var10);
klee_assume(var1!=var11);
klee_assume(var1!=var12);
klee_assume(var2!=var3);
klee_assume(var2!=var4);
klee_assume(var2!=var5);
klee_assume(var2!=var6);
klee_assume(var2!=var7);
klee_assume(var2!=var8);
klee_assume(var2!=var9);
klee_assume(var2!=var10);
klee_assume(var2!=var11);
klee_assume(var2!=var12);
klee_assume(var3!=var4);
klee_assume(var3!=var5);
klee_assume(var3!=var6);
klee_assume(var3!=var7);
klee_assume(var3!=var8);
klee_assume(var3!=var9);
klee_assume(var3!=var10);
klee_assume(var3!=var11);
klee_assume(var3!=var12);
klee_assume(var4!=var5);
klee_assume(var4!=var6);
klee_assume(var4!=var7);
klee_assume(var4!=var8);
klee_assume(var4!=var9);
klee_assume(var4!=var10);
klee_assume(var4!=var11);
klee_assume(var4!=var12);
klee_assume(var5!=var6);
klee_assume(var5!=var7);
klee_assume(var5!=var8);
klee_assume(var5!=var9);
klee_assume(var5!=var10);
klee_assume(var5!=var11);
klee_assume(var5!=var12);
klee_assume(var6!=var7);
klee_assume(var6!=var8);
klee_assume(var6!=var9);
klee_assume(var6!=var10);
klee_assume(var6!=var11);
klee_assume(var6!=var12);
klee_assume(var7!=var8);
klee_assume(var7!=var9);
klee_assume(var7!=var10);
klee_assume(var7!=var11);
klee_assume(var7!=var12);
klee_assume(var8!=var9);
klee_assume(var8!=var10);
klee_assume(var8!=var11);
klee_assume(var8!=var12);
klee_assume(var9!=var10);
klee_assume(var9!=var11);
klee_assume(var9!=var12);
klee_assume(var10!=var11);
klee_assume(var10!=var12);
klee_assume(var11!=var12);
klee_assume(var13!=var14);
klee_assume(var13!=var15);
klee_assume(var13!=var16);
klee_assume(var13!=var17);
klee_assume(var13!=var18);
klee_assume(var13!=var19);
klee_assume(var13!=var20);
klee_assume(var13!=var21);
klee_assume(var13!=var22);
klee_assume(var13!=var23);
klee_assume(var13!=var24);
klee_assume(var14!=var15);
klee_assume(var14!=var16);
klee_assume(var14!=var17);
klee_assume(var14!=var18);
klee_assume(var14!=var19);
klee_assume(var14!=var20);
klee_assume(var14!=var21);
klee_assume(var14!=var22);
klee_assume(var14!=var23);
klee_assume(var14!=var24);
klee_assume(var15!=var16);
klee_assume(var15!=var17);
klee_assume(var15!=var18);
klee_assume(var15!=var19);
klee_assume(var15!=var20);
klee_assume(var15!=var21);
klee_assume(var15!=var22);
klee_assume(var15!=var23);
klee_assume(var15!=var24);
klee_assume(var16!=var17);
klee_assume(var16!=var18);
klee_assume(var16!=var19);
klee_assume(var16!=var20);
klee_assume(var16!=var21);
klee_assume(var16!=var22);
klee_assume(var16!=var23);
klee_assume(var16!=var24);
klee_assume(var17!=var18);
klee_assume(var17!=var19);
klee_assume(var17!=var20);
klee_assume(var17!=var21);
klee_assume(var17!=var22);
klee_assume(var17!=var23);
klee_assume(var17!=var24);
klee_assume(var18!=var19);
klee_assume(var18!=var20);
klee_assume(var18!=var21);
klee_assume(var18!=var22);
klee_assume(var18!=var23);
klee_assume(var18!=var24);
klee_assume(var19!=var20);
klee_assume(var19!=var21);
klee_assume(var19!=var22);
klee_assume(var19!=var23);
klee_assume(var19!=var24);
klee_assume(var20!=var21);
klee_assume(var20!=var22);
klee_assume(var20!=var23);
klee_assume(var20!=var24);
klee_assume(var21!=var22);
klee_assume(var21!=var23);
klee_assume(var21!=var24);
klee_assume(var22!=var23);
klee_assume(var22!=var24);
klee_assume(var23!=var24);
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var13 == var_for_abs );
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var14 == var_for_abs );
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var15 == var_for_abs );
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var16 == var_for_abs );
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var17 == var_for_abs );
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var18 == var_for_abs );
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var19 == var_for_abs );
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var20 == var_for_abs );
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var21 == var_for_abs );
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var22 == var_for_abs );
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var23 == var_for_abs );
var_for_abs = var11 - var12;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var24 == var_for_abs );
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
11 x[11]
12 x[12]
13 y[0]
14 y[1]
15 y[2]
16 y[3]
17 y[4]
18 y[5]
19 y[6]
20 y[7]
21 y[8]
22 y[9]
23 y[10]
24 y[11]
 */}
