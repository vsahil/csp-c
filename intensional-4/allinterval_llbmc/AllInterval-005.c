
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
int myvar0 = 1;
if(((var0 >= 0 & var0 <= 4) & (var1 >= 0 & var1 <= 4) & (var2 >= 0 & var2 <= 4) & (var3 >= 0 & var3 <= 4) & (var4 >= 0 & var4 <= 4) & (var5 >= 1 & var5 <= 4) & (var6 >= 1 & var6 <= 4) & (var7 >= 1 & var7 <= 4) & (var8 >= 1 & var8 <= 4) &  1))
myvar0 = 1;
else exit(0);
if(( 1))
myvar0 = 1;
else exit(0);
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var2!=var3) & (var2!=var4) & (var3!=var4) &  1))
myvar0 = 1;
else exit(0);
if(((var5!=var6) & (var5!=var7) & (var5!=var8) & (var6!=var7) & (var6!=var8) & (var7!=var8) &  1))
myvar0 = 1;
else exit(0);
if(((var5 == dist(var0, var1)) & (var6 == dist(var1, var2)) & (var7 == dist(var2, var3)) & (var8 == dist(var3, var4)) &  1))
myvar0 = 1;
else exit(0);
assert(0);
return 0;
/* 
0 x[0]
1 x[1]
2 x[2]
3 x[3]
4 x[4]
5 y[0]
6 y[1]
7 y[2]
8 y[3]
 */}
