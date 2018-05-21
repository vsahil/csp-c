
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
int myvar0 = 1;
__llbmc_assume((((var0 >= 0 & var0 <= 6) & (var1 >= 0 & var1 <= 6) & (var2 >= 0 & var2 <= 6) & (var3 >= 0 & var3 <= 6) & (var4 >= 0 & var4 <= 6) & (var5 >= 0 & var5 <= 6) & (var6 >= 0 & var6 <= 6) & (var7 >= 1 & var7 <= 6) & (var8 >= 1 & var8 <= 6) & (var9 >= 1 & var9 <= 6) & (var10 >= 1 & var10 <= 6) & (var11 >= 1 & var11 <= 6) & (var12 >= 1 & var12 <= 6) &  1)) & (( 1)) & (((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var4!=var5) & (var4!=var6) & (var5!=var6) &  1)) & (((var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var10!=var11) & (var10!=var12) & (var11!=var12) &  1)) & (((var7 == dist(var0, var1)) & (var8 == dist(var1, var2)) & (var9 == dist(var2, var3)) & (var10 == dist(var3, var4)) & (var11 == dist(var4, var5)) & (var12 == dist(var5, var6)) &  1)) & 1 );
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
7 y[0]
8 y[1]
9 y[2]
10 y[3]
11 y[4]
12 y[5]
 */}
