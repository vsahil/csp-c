#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
klee_assume( var0 >= 0 );
klee_assume( var0 <= 16 );
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
klee_assume( var1 >= 0 );
klee_assume( var1 <= 16 );
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
klee_assume( var2 >= 0 );
klee_assume( var2 <= 16 );
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
klee_assume( var3 >= 0 );
klee_assume( var3 <= 16 );
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
klee_assume( var4 >= 0 );
klee_assume( var4 <= 16 );
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
klee_assume( var5 >= 0 );
klee_assume( var5 <= 16 );
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
klee_assume( var6 >= 0 );
klee_assume( var6 <= 16 );
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
klee_assume( var7 >= 0 );
klee_assume( var7 <= 16 );
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
klee_assume( var8 >= 0 );
klee_assume( var8 <= 16 );
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
klee_assume( var9 >= 0 );
klee_assume( var9 <= 16 );
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
klee_assume( var10 >= 0 );
klee_assume( var10 <= 16 );
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
klee_assume( var11 >= 0 );
klee_assume( var11 <= 16 );
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
klee_assume( var12 >= 0 );
klee_assume( var12 <= 16 );
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
klee_assume( var13 >= 0 );
klee_assume( var13 <= 16 );
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
klee_assume( var14 >= 0 );
klee_assume( var14 <= 16 );
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
klee_assume( var15 >= 0 );
klee_assume( var15 <= 16 );
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
klee_assume( var16 >= 0 );
klee_assume( var16 <= 16 );
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
klee_assume( var17 >= 1 );
klee_assume( var17 <= 16 );
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
klee_assume( var18 >= 1 );
klee_assume( var18 <= 16 );
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
klee_assume( var19 >= 1 );
klee_assume( var19 <= 16 );
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
klee_assume( var20 >= 1 );
klee_assume( var20 <= 16 );
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
klee_assume( var21 >= 1 );
klee_assume( var21 <= 16 );
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
klee_assume( var22 >= 1 );
klee_assume( var22 <= 16 );
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
klee_assume( var23 >= 1 );
klee_assume( var23 <= 16 );
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
klee_assume( var24 >= 1 );
klee_assume( var24 <= 16 );
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
klee_assume( var25 >= 1 );
klee_assume( var25 <= 16 );
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
klee_assume( var26 >= 1 );
klee_assume( var26 <= 16 );
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
klee_assume( var27 >= 1 );
klee_assume( var27 <= 16 );
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
klee_assume( var28 >= 1 );
klee_assume( var28 <= 16 );
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
klee_assume( var29 >= 1 );
klee_assume( var29 <= 16 );
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
klee_assume( var30 >= 1 );
klee_assume( var30 <= 16 );
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
klee_assume( var31 >= 1 );
klee_assume( var31 <= 16 );
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
klee_assume( var32 >= 1 );
klee_assume( var32 <= 16 );
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
klee_assume(var0!=var13);
klee_assume(var0!=var14);
klee_assume(var0!=var15);
klee_assume(var0!=var16);
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
klee_assume(var1!=var13);
klee_assume(var1!=var14);
klee_assume(var1!=var15);
klee_assume(var1!=var16);
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
klee_assume(var2!=var13);
klee_assume(var2!=var14);
klee_assume(var2!=var15);
klee_assume(var2!=var16);
klee_assume(var3!=var4);
klee_assume(var3!=var5);
klee_assume(var3!=var6);
klee_assume(var3!=var7);
klee_assume(var3!=var8);
klee_assume(var3!=var9);
klee_assume(var3!=var10);
klee_assume(var3!=var11);
klee_assume(var3!=var12);
klee_assume(var3!=var13);
klee_assume(var3!=var14);
klee_assume(var3!=var15);
klee_assume(var3!=var16);
klee_assume(var4!=var5);
klee_assume(var4!=var6);
klee_assume(var4!=var7);
klee_assume(var4!=var8);
klee_assume(var4!=var9);
klee_assume(var4!=var10);
klee_assume(var4!=var11);
klee_assume(var4!=var12);
klee_assume(var4!=var13);
klee_assume(var4!=var14);
klee_assume(var4!=var15);
klee_assume(var4!=var16);
klee_assume(var5!=var6);
klee_assume(var5!=var7);
klee_assume(var5!=var8);
klee_assume(var5!=var9);
klee_assume(var5!=var10);
klee_assume(var5!=var11);
klee_assume(var5!=var12);
klee_assume(var5!=var13);
klee_assume(var5!=var14);
klee_assume(var5!=var15);
klee_assume(var5!=var16);
klee_assume(var6!=var7);
klee_assume(var6!=var8);
klee_assume(var6!=var9);
klee_assume(var6!=var10);
klee_assume(var6!=var11);
klee_assume(var6!=var12);
klee_assume(var6!=var13);
klee_assume(var6!=var14);
klee_assume(var6!=var15);
klee_assume(var6!=var16);
klee_assume(var7!=var8);
klee_assume(var7!=var9);
klee_assume(var7!=var10);
klee_assume(var7!=var11);
klee_assume(var7!=var12);
klee_assume(var7!=var13);
klee_assume(var7!=var14);
klee_assume(var7!=var15);
klee_assume(var7!=var16);
klee_assume(var8!=var9);
klee_assume(var8!=var10);
klee_assume(var8!=var11);
klee_assume(var8!=var12);
klee_assume(var8!=var13);
klee_assume(var8!=var14);
klee_assume(var8!=var15);
klee_assume(var8!=var16);
klee_assume(var9!=var10);
klee_assume(var9!=var11);
klee_assume(var9!=var12);
klee_assume(var9!=var13);
klee_assume(var9!=var14);
klee_assume(var9!=var15);
klee_assume(var9!=var16);
klee_assume(var10!=var11);
klee_assume(var10!=var12);
klee_assume(var10!=var13);
klee_assume(var10!=var14);
klee_assume(var10!=var15);
klee_assume(var10!=var16);
klee_assume(var11!=var12);
klee_assume(var11!=var13);
klee_assume(var11!=var14);
klee_assume(var11!=var15);
klee_assume(var11!=var16);
klee_assume(var12!=var13);
klee_assume(var12!=var14);
klee_assume(var12!=var15);
klee_assume(var12!=var16);
klee_assume(var13!=var14);
klee_assume(var13!=var15);
klee_assume(var13!=var16);
klee_assume(var14!=var15);
klee_assume(var14!=var16);
klee_assume(var15!=var16);
klee_assume(var17!=var18);
klee_assume(var17!=var19);
klee_assume(var17!=var20);
klee_assume(var17!=var21);
klee_assume(var17!=var22);
klee_assume(var17!=var23);
klee_assume(var17!=var24);
klee_assume(var17!=var25);
klee_assume(var17!=var26);
klee_assume(var17!=var27);
klee_assume(var17!=var28);
klee_assume(var17!=var29);
klee_assume(var17!=var30);
klee_assume(var17!=var31);
klee_assume(var17!=var32);
klee_assume(var18!=var19);
klee_assume(var18!=var20);
klee_assume(var18!=var21);
klee_assume(var18!=var22);
klee_assume(var18!=var23);
klee_assume(var18!=var24);
klee_assume(var18!=var25);
klee_assume(var18!=var26);
klee_assume(var18!=var27);
klee_assume(var18!=var28);
klee_assume(var18!=var29);
klee_assume(var18!=var30);
klee_assume(var18!=var31);
klee_assume(var18!=var32);
klee_assume(var19!=var20);
klee_assume(var19!=var21);
klee_assume(var19!=var22);
klee_assume(var19!=var23);
klee_assume(var19!=var24);
klee_assume(var19!=var25);
klee_assume(var19!=var26);
klee_assume(var19!=var27);
klee_assume(var19!=var28);
klee_assume(var19!=var29);
klee_assume(var19!=var30);
klee_assume(var19!=var31);
klee_assume(var19!=var32);
klee_assume(var20!=var21);
klee_assume(var20!=var22);
klee_assume(var20!=var23);
klee_assume(var20!=var24);
klee_assume(var20!=var25);
klee_assume(var20!=var26);
klee_assume(var20!=var27);
klee_assume(var20!=var28);
klee_assume(var20!=var29);
klee_assume(var20!=var30);
klee_assume(var20!=var31);
klee_assume(var20!=var32);
klee_assume(var21!=var22);
klee_assume(var21!=var23);
klee_assume(var21!=var24);
klee_assume(var21!=var25);
klee_assume(var21!=var26);
klee_assume(var21!=var27);
klee_assume(var21!=var28);
klee_assume(var21!=var29);
klee_assume(var21!=var30);
klee_assume(var21!=var31);
klee_assume(var21!=var32);
klee_assume(var22!=var23);
klee_assume(var22!=var24);
klee_assume(var22!=var25);
klee_assume(var22!=var26);
klee_assume(var22!=var27);
klee_assume(var22!=var28);
klee_assume(var22!=var29);
klee_assume(var22!=var30);
klee_assume(var22!=var31);
klee_assume(var22!=var32);
klee_assume(var23!=var24);
klee_assume(var23!=var25);
klee_assume(var23!=var26);
klee_assume(var23!=var27);
klee_assume(var23!=var28);
klee_assume(var23!=var29);
klee_assume(var23!=var30);
klee_assume(var23!=var31);
klee_assume(var23!=var32);
klee_assume(var24!=var25);
klee_assume(var24!=var26);
klee_assume(var24!=var27);
klee_assume(var24!=var28);
klee_assume(var24!=var29);
klee_assume(var24!=var30);
klee_assume(var24!=var31);
klee_assume(var24!=var32);
klee_assume(var25!=var26);
klee_assume(var25!=var27);
klee_assume(var25!=var28);
klee_assume(var25!=var29);
klee_assume(var25!=var30);
klee_assume(var25!=var31);
klee_assume(var25!=var32);
klee_assume(var26!=var27);
klee_assume(var26!=var28);
klee_assume(var26!=var29);
klee_assume(var26!=var30);
klee_assume(var26!=var31);
klee_assume(var26!=var32);
klee_assume(var27!=var28);
klee_assume(var27!=var29);
klee_assume(var27!=var30);
klee_assume(var27!=var31);
klee_assume(var27!=var32);
klee_assume(var28!=var29);
klee_assume(var28!=var30);
klee_assume(var28!=var31);
klee_assume(var28!=var32);
klee_assume(var29!=var30);
klee_assume(var29!=var31);
klee_assume(var29!=var32);
klee_assume(var30!=var31);
klee_assume(var30!=var32);
klee_assume(var31!=var32);
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var17 == var_for_abs );
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var18 == var_for_abs );
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var19 == var_for_abs );
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var20 == var_for_abs );
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var21 == var_for_abs );
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var22 == var_for_abs );
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var23 == var_for_abs );
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var24 == var_for_abs );
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var25 == var_for_abs );
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var26 == var_for_abs );
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var27 == var_for_abs );
var_for_abs = var11 - var12;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var28 == var_for_abs );
var_for_abs = var12 - var13;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var29 == var_for_abs );
var_for_abs = var13 - var14;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var30 == var_for_abs );
var_for_abs = var14 - var15;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var31 == var_for_abs );
var_for_abs = var15 - var16;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
klee_assume(var32 == var_for_abs );
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
13 x[13]
14 x[14]
15 x[15]
16 x[16]
17 y[0]
18 y[1]
19 y[2]
20 y[3]
21 y[4]
22 y[5]
23 y[6]
24 y[7]
25 y[8]
26 y[9]
27 y[10]
28 y[11]
29 y[12]
30 y[13]
31 y[14]
32 y[15]
 */}