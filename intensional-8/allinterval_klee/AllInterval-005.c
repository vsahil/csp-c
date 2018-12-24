
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
int myvar0 = 1;
klee_assume((((var0 >= 0 && var0 <= 4) && (var1 >= 0 && var1 <= 4) && (var2 >= 0 && var2 <= 4) && (var3 >= 0 && var3 <= 4) && (var4 >= 0 && var4 <= 4) && (var5 >= 1 && var5 <= 4) && (var6 >= 1 && var6 <= 4) && (var7 >= 1 && var7 <= 4) && (var8 >= 1 && var8 <= 4) &&  1)) & (( 1)) & (((var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var2!=var3) && (var2!=var4) && (var3!=var4) &&  1)) & (((var5!=var6) && (var5!=var7) && (var5!=var8) && (var6!=var7) && (var6!=var8) && (var7!=var8) &&  1)) & (((var5 == dist(var0, var1)) && (var6 == dist(var1, var2)) && (var7 == dist(var2, var3)) && (var8 == dist(var3, var4)) &&  1)) & 1 );
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
