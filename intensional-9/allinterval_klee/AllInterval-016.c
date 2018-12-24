
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
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
int myvar0 = 1;
klee_assume(((var0 >= 0 & var0 <= 15) & (var1 >= 0 & var1 <= 15) & (var2 >= 0 & var2 <= 15) & (var3 >= 0 & var3 <= 15) & (var4 >= 0 & var4 <= 15) & (var5 >= 0 & var5 <= 15) & (var6 >= 0 & var6 <= 15) & (var7 >= 0 & var7 <= 15) & (var8 >= 0 & var8 <= 15) & (var9 >= 0 & var9 <= 15) & (var10 >= 0 & var10 <= 15) & (var11 >= 0 & var11 <= 15) & (var12 >= 0 & var12 <= 15) & (var13 >= 0 & var13 <= 15) & (var14 >= 0 & var14 <= 15) & (var15 >= 0 & var15 <= 15) & (var16 >= 1 & var16 <= 15) & (var17 >= 1 & var17 <= 15) & (var18 >= 1 & var18 <= 15) & (var19 >= 1 & var19 <= 15) & (var20 >= 1 & var20 <= 15) & (var21 >= 1 & var21 <= 15) & (var22 >= 1 & var22 <= 15) & (var23 >= 1 & var23 <= 15) & (var24 >= 1 & var24 <= 15) & (var25 >= 1 & var25 <= 15) & (var26 >= 1 & var26 <= 15) & (var27 >= 1 & var27 <= 15) & (var28 >= 1 & var28 <= 15) & (var29 >= 1 & var29 <= 15) & (var30 >= 1 & var30 <= 15) &  1));
klee_assume(( 1));
klee_assume(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var0!=var14) & (var0!=var15) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var1!=var14) & (var1!=var15) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var2!=var14) & (var2!=var15) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var3!=var14) & (var3!=var15) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var4!=var14) & (var4!=var15) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var5!=var14) & (var5!=var15) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var6!=var14) & (var6!=var15) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var7!=var14) & (var7!=var15) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var8!=var15) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var9!=var15) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var10!=var15) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var13!=var14) & (var13!=var15) & (var14!=var15) &  1));
klee_assume(((var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var16!=var23) & (var16!=var24) & (var16!=var25) & (var16!=var26) & (var16!=var27) & (var16!=var28) & (var16!=var29) & (var16!=var30) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var17!=var23) & (var17!=var24) & (var17!=var25) & (var17!=var26) & (var17!=var27) & (var17!=var28) & (var17!=var29) & (var17!=var30) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var18!=var23) & (var18!=var24) & (var18!=var25) & (var18!=var26) & (var18!=var27) & (var18!=var28) & (var18!=var29) & (var18!=var30) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var19!=var23) & (var19!=var24) & (var19!=var25) & (var19!=var26) & (var19!=var27) & (var19!=var28) & (var19!=var29) & (var19!=var30) & (var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var20!=var27) & (var20!=var28) & (var20!=var29) & (var20!=var30) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var21!=var30) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var22!=var30) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var23!=var30) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var24!=var30) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var25!=var30) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var26!=var30) & (var27!=var28) & (var27!=var29) & (var27!=var30) & (var28!=var29) & (var28!=var30) & (var29!=var30) &  1));
klee_assume(((var16 == dist(var0, var1)) & (var17 == dist(var1, var2)) & (var18 == dist(var2, var3)) & (var19 == dist(var3, var4)) & (var20 == dist(var4, var5)) & (var21 == dist(var5, var6)) & (var22 == dist(var6, var7)) & (var23 == dist(var7, var8)) & (var24 == dist(var8, var9)) & (var25 == dist(var9, var10)) & (var26 == dist(var10, var11)) & (var27 == dist(var11, var12)) & (var28 == dist(var12, var13)) & (var29 == dist(var13, var14)) & (var30 == dist(var14, var15)) &  1));
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
16 y[0]
17 y[1]
18 y[2]
19 y[3]
20 y[4]
21 y[5]
22 y[6]
23 y[7]
24 y[8]
25 y[9]
26 y[10]
27 y[11]
28 y[12]
29 y[13]
30 y[14]
 */}
