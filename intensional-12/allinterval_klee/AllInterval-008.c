
int dist(int a, int b)
{ int dis = (a-b >= 0) ? a-b : b-a;
 return dis;
}
#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
int myvar0 = 1;
klee_assume((((var0 >= 0 & var0 <= 7) & (var1 >= 0 & var1 <= 7) & (var2 >= 0 & var2 <= 7) & (var3 >= 0 & var3 <= 7) & (var4 >= 0 & var4 <= 7) & (var5 >= 0 & var5 <= 7) & (var6 >= 0 & var6 <= 7) & (var7 >= 0 & var7 <= 7) & (var8 >= 1 & var8 <= 7) & (var9 >= 1 & var9 <= 7) & (var10 >= 1 & var10 <= 7) & (var11 >= 1 & var11 <= 7) & (var12 >= 1 & var12 <= 7) & (var13 >= 1 & var13 <= 7) & (var14 >= 1 & var14 <= 7) &  1)) & (( 1)) & (((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var5!=var6) & (var5!=var7) & (var6!=var7) &  1)) & (((var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var12!=var13) & (var12!=var14) & (var13!=var14) &  1)) & (((var8 == dist(var0, var1)) & (var9 == dist(var1, var2)) & (var10 == dist(var2, var3)) & (var11 == dist(var3, var4)) & (var12 == dist(var4, var5)) & (var13 == dist(var5, var6)) & (var14 == dist(var6, var7)) &  1)) & 1 );
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
8 y[0]
9 y[1]
10 y[2]
11 y[3]
12 y[4]
13 y[5]
14 y[6]
 */}
