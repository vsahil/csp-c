
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
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
int myvar0 = 1;
if((((var0 >= 0 && var0 <= 9) && (var1 >= 0 && var1 <= 9) && (var2 >= 0 && var2 <= 9) && (var3 >= 0 && var3 <= 9) && (var4 >= 0 && var4 <= 9) && (var5 >= 0 && var5 <= 9) && (var6 >= 0 && var6 <= 9) && (var7 >= 0 && var7 <= 9) && (var8 >= 0 && var8 <= 9) && (var9 >= 0 && var9 <= 9) && (var10 >= 1 && var10 <= 9) && (var11 >= 1 && var11 <= 9) && (var12 >= 1 && var12 <= 9) && (var13 >= 1 && var13 <= 9) && (var14 >= 1 && var14 <= 9) && (var15 >= 1 && var15 <= 9) && (var16 >= 1 && var16 <= 9) && (var17 >= 1 && var17 <= 9) && (var18 >= 1 && var18 <= 9) &&  1)) && (( 1)) && (((var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var7!=var8) && (var7!=var9) && (var8!=var9) &&  1)) && (((var10!=var11) && (var10!=var12) && (var10!=var13) && (var10!=var14) && (var10!=var15) && (var10!=var16) && (var10!=var17) && (var10!=var18) && (var11!=var12) && (var11!=var13) && (var11!=var14) && (var11!=var15) && (var11!=var16) && (var11!=var17) && (var11!=var18) && (var12!=var13) && (var12!=var14) && (var12!=var15) && (var12!=var16) && (var12!=var17) && (var12!=var18) && (var13!=var14) && (var13!=var15) && (var13!=var16) && (var13!=var17) && (var13!=var18) && (var14!=var15) && (var14!=var16) && (var14!=var17) && (var14!=var18) && (var15!=var16) && (var15!=var17) && (var15!=var18) && (var16!=var17) && (var16!=var18) && (var17!=var18) &&  1)) && (((var10 == dist(var0, var1)) && (var11 == dist(var1, var2)) && (var12 == dist(var2, var3)) && (var13 == dist(var3, var4)) && (var14 == dist(var4, var5)) && (var15 == dist(var5, var6)) && (var16 == dist(var6, var7)) && (var17 == dist(var7, var8)) && (var18 == dist(var8, var9)) &&  1)) && 1 )
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
10 y[0]
11 y[1]
12 y[2]
13 y[3]
14 y[4]
15 y[5]
16 y[6]
17 y[7]
18 y[8]
 */}
