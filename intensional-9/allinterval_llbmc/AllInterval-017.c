
int dist(int a, int b)
{ int dis = (a-b >= 0) ? a-b : b-a;
 return dis;
}
#include <llbmc.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
var0 = __llbmc_nondef_int();
int var1;
var1 = __llbmc_nondef_int();
int var2;
var2 = __llbmc_nondef_int();
int var3;
var3 = __llbmc_nondef_int();
int var4;
var4 = __llbmc_nondef_int();
int var5;
var5 = __llbmc_nondef_int();
int var6;
var6 = __llbmc_nondef_int();
int var7;
var7 = __llbmc_nondef_int();
int var8;
var8 = __llbmc_nondef_int();
int var9;
var9 = __llbmc_nondef_int();
int var10;
var10 = __llbmc_nondef_int();
int var11;
var11 = __llbmc_nondef_int();
int var12;
var12 = __llbmc_nondef_int();
int var13;
var13 = __llbmc_nondef_int();
int var14;
var14 = __llbmc_nondef_int();
int var15;
var15 = __llbmc_nondef_int();
int var16;
var16 = __llbmc_nondef_int();
int var17;
var17 = __llbmc_nondef_int();
int var18;
var18 = __llbmc_nondef_int();
int var19;
var19 = __llbmc_nondef_int();
int var20;
var20 = __llbmc_nondef_int();
int var21;
var21 = __llbmc_nondef_int();
int var22;
var22 = __llbmc_nondef_int();
int var23;
var23 = __llbmc_nondef_int();
int var24;
var24 = __llbmc_nondef_int();
int var25;
var25 = __llbmc_nondef_int();
int var26;
var26 = __llbmc_nondef_int();
int var27;
var27 = __llbmc_nondef_int();
int var28;
var28 = __llbmc_nondef_int();
int var29;
var29 = __llbmc_nondef_int();
int var30;
var30 = __llbmc_nondef_int();
int var31;
var31 = __llbmc_nondef_int();
int var32;
var32 = __llbmc_nondef_int();
int myvar0 = 1;
__llbmc_assume(((var0 >= 0 & var0 <= 16) & (var1 >= 0 & var1 <= 16) & (var2 >= 0 & var2 <= 16) & (var3 >= 0 & var3 <= 16) & (var4 >= 0 & var4 <= 16) & (var5 >= 0 & var5 <= 16) & (var6 >= 0 & var6 <= 16) & (var7 >= 0 & var7 <= 16) & (var8 >= 0 & var8 <= 16) & (var9 >= 0 & var9 <= 16) & (var10 >= 0 & var10 <= 16) & (var11 >= 0 & var11 <= 16) & (var12 >= 0 & var12 <= 16) & (var13 >= 0 & var13 <= 16) & (var14 >= 0 & var14 <= 16) & (var15 >= 0 & var15 <= 16) & (var16 >= 0 & var16 <= 16) & (var17 >= 1 & var17 <= 16) & (var18 >= 1 & var18 <= 16) & (var19 >= 1 & var19 <= 16) & (var20 >= 1 & var20 <= 16) & (var21 >= 1 & var21 <= 16) & (var22 >= 1 & var22 <= 16) & (var23 >= 1 & var23 <= 16) & (var24 >= 1 & var24 <= 16) & (var25 >= 1 & var25 <= 16) & (var26 >= 1 & var26 <= 16) & (var27 >= 1 & var27 <= 16) & (var28 >= 1 & var28 <= 16) & (var29 >= 1 & var29 <= 16) & (var30 >= 1 & var30 <= 16) & (var31 >= 1 & var31 <= 16) & (var32 >= 1 & var32 <= 16) &  1));
__llbmc_assume(( 1));
__llbmc_assume(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var0!=var14) & (var0!=var15) & (var0!=var16) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var1!=var14) & (var1!=var15) & (var1!=var16) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var2!=var14) & (var2!=var15) & (var2!=var16) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var3!=var14) & (var3!=var15) & (var3!=var16) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var4!=var14) & (var4!=var15) & (var4!=var16) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var5!=var14) & (var5!=var15) & (var5!=var16) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var6!=var14) & (var6!=var15) & (var6!=var16) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var7!=var14) & (var7!=var15) & (var7!=var16) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var8!=var15) & (var8!=var16) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var9!=var15) & (var9!=var16) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var10!=var15) & (var10!=var16) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var11!=var16) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var14!=var15) & (var14!=var16) & (var15!=var16) &  1));
__llbmc_assume(((var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var17!=var23) & (var17!=var24) & (var17!=var25) & (var17!=var26) & (var17!=var27) & (var17!=var28) & (var17!=var29) & (var17!=var30) & (var17!=var31) & (var17!=var32) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var18!=var23) & (var18!=var24) & (var18!=var25) & (var18!=var26) & (var18!=var27) & (var18!=var28) & (var18!=var29) & (var18!=var30) & (var18!=var31) & (var18!=var32) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var19!=var23) & (var19!=var24) & (var19!=var25) & (var19!=var26) & (var19!=var27) & (var19!=var28) & (var19!=var29) & (var19!=var30) & (var19!=var31) & (var19!=var32) & (var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var20!=var27) & (var20!=var28) & (var20!=var29) & (var20!=var30) & (var20!=var31) & (var20!=var32) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var21!=var30) & (var21!=var31) & (var21!=var32) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var22!=var30) & (var22!=var31) & (var22!=var32) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var23!=var30) & (var23!=var31) & (var23!=var32) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var24!=var30) & (var24!=var31) & (var24!=var32) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var25!=var30) & (var25!=var31) & (var25!=var32) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var26!=var30) & (var26!=var31) & (var26!=var32) & (var27!=var28) & (var27!=var29) & (var27!=var30) & (var27!=var31) & (var27!=var32) & (var28!=var29) & (var28!=var30) & (var28!=var31) & (var28!=var32) & (var29!=var30) & (var29!=var31) & (var29!=var32) & (var30!=var31) & (var30!=var32) & (var31!=var32) &  1));
__llbmc_assume(((var17 == dist(var0, var1)) & (var18 == dist(var1, var2)) & (var19 == dist(var2, var3)) & (var20 == dist(var3, var4)) & (var21 == dist(var4, var5)) & (var22 == dist(var5, var6)) & (var23 == dist(var6, var7)) & (var24 == dist(var7, var8)) & (var25 == dist(var8, var9)) & (var26 == dist(var9, var10)) & (var27 == dist(var10, var11)) & (var28 == dist(var11, var12)) & (var29 == dist(var12, var13)) & (var30 == dist(var13, var14)) & (var31 == dist(var14, var15)) & (var32 == dist(var15, var16)) &  1));
assert(0);
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
