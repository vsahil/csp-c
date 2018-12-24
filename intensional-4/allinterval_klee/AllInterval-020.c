
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
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
int myvar0 = 1;
if(((var0 >= 0 & var0 <= 19) & (var1 >= 0 & var1 <= 19) & (var2 >= 0 & var2 <= 19) & (var3 >= 0 & var3 <= 19) & (var4 >= 0 & var4 <= 19) & (var5 >= 0 & var5 <= 19) & (var6 >= 0 & var6 <= 19) & (var7 >= 0 & var7 <= 19) & (var8 >= 0 & var8 <= 19) & (var9 >= 0 & var9 <= 19) & (var10 >= 0 & var10 <= 19) & (var11 >= 0 & var11 <= 19) & (var12 >= 0 & var12 <= 19) & (var13 >= 0 & var13 <= 19) & (var14 >= 0 & var14 <= 19) & (var15 >= 0 & var15 <= 19) & (var16 >= 0 & var16 <= 19) & (var17 >= 0 & var17 <= 19) & (var18 >= 0 & var18 <= 19) & (var19 >= 0 & var19 <= 19) & (var20 >= 1 & var20 <= 19) & (var21 >= 1 & var21 <= 19) & (var22 >= 1 & var22 <= 19) & (var23 >= 1 & var23 <= 19) & (var24 >= 1 & var24 <= 19) & (var25 >= 1 & var25 <= 19) & (var26 >= 1 & var26 <= 19) & (var27 >= 1 & var27 <= 19) & (var28 >= 1 & var28 <= 19) & (var29 >= 1 & var29 <= 19) & (var30 >= 1 & var30 <= 19) & (var31 >= 1 & var31 <= 19) & (var32 >= 1 & var32 <= 19) & (var33 >= 1 & var33 <= 19) & (var34 >= 1 & var34 <= 19) & (var35 >= 1 & var35 <= 19) & (var36 >= 1 & var36 <= 19) & (var37 >= 1 & var37 <= 19) & (var38 >= 1 & var38 <= 19) &  1))
myvar0 = 1;
else exit(0);
if(( 1))
myvar0 = 1;
else exit(0);
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var0!=var14) & (var0!=var15) & (var0!=var16) & (var0!=var17) & (var0!=var18) & (var0!=var19) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var1!=var14) & (var1!=var15) & (var1!=var16) & (var1!=var17) & (var1!=var18) & (var1!=var19) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var2!=var14) & (var2!=var15) & (var2!=var16) & (var2!=var17) & (var2!=var18) & (var2!=var19) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var3!=var14) & (var3!=var15) & (var3!=var16) & (var3!=var17) & (var3!=var18) & (var3!=var19) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var4!=var14) & (var4!=var15) & (var4!=var16) & (var4!=var17) & (var4!=var18) & (var4!=var19) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var5!=var14) & (var5!=var15) & (var5!=var16) & (var5!=var17) & (var5!=var18) & (var5!=var19) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var6!=var14) & (var6!=var15) & (var6!=var16) & (var6!=var17) & (var6!=var18) & (var6!=var19) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var7!=var14) & (var7!=var15) & (var7!=var16) & (var7!=var17) & (var7!=var18) & (var7!=var19) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var8!=var15) & (var8!=var16) & (var8!=var17) & (var8!=var18) & (var8!=var19) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var9!=var15) & (var9!=var16) & (var9!=var17) & (var9!=var18) & (var9!=var19) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var10!=var15) & (var10!=var16) & (var10!=var17) & (var10!=var18) & (var10!=var19) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var11!=var16) & (var11!=var17) & (var11!=var18) & (var11!=var19) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var17!=var18) & (var17!=var19) & (var18!=var19) &  1))
myvar0 = 1;
else exit(0);
if(((var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var20!=var27) & (var20!=var28) & (var20!=var29) & (var20!=var30) & (var20!=var31) & (var20!=var32) & (var20!=var33) & (var20!=var34) & (var20!=var35) & (var20!=var36) & (var20!=var37) & (var20!=var38) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var21!=var30) & (var21!=var31) & (var21!=var32) & (var21!=var33) & (var21!=var34) & (var21!=var35) & (var21!=var36) & (var21!=var37) & (var21!=var38) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var22!=var30) & (var22!=var31) & (var22!=var32) & (var22!=var33) & (var22!=var34) & (var22!=var35) & (var22!=var36) & (var22!=var37) & (var22!=var38) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var23!=var30) & (var23!=var31) & (var23!=var32) & (var23!=var33) & (var23!=var34) & (var23!=var35) & (var23!=var36) & (var23!=var37) & (var23!=var38) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var24!=var30) & (var24!=var31) & (var24!=var32) & (var24!=var33) & (var24!=var34) & (var24!=var35) & (var24!=var36) & (var24!=var37) & (var24!=var38) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var25!=var30) & (var25!=var31) & (var25!=var32) & (var25!=var33) & (var25!=var34) & (var25!=var35) & (var25!=var36) & (var25!=var37) & (var25!=var38) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var26!=var30) & (var26!=var31) & (var26!=var32) & (var26!=var33) & (var26!=var34) & (var26!=var35) & (var26!=var36) & (var26!=var37) & (var26!=var38) & (var27!=var28) & (var27!=var29) & (var27!=var30) & (var27!=var31) & (var27!=var32) & (var27!=var33) & (var27!=var34) & (var27!=var35) & (var27!=var36) & (var27!=var37) & (var27!=var38) & (var28!=var29) & (var28!=var30) & (var28!=var31) & (var28!=var32) & (var28!=var33) & (var28!=var34) & (var28!=var35) & (var28!=var36) & (var28!=var37) & (var28!=var38) & (var29!=var30) & (var29!=var31) & (var29!=var32) & (var29!=var33) & (var29!=var34) & (var29!=var35) & (var29!=var36) & (var29!=var37) & (var29!=var38) & (var30!=var31) & (var30!=var32) & (var30!=var33) & (var30!=var34) & (var30!=var35) & (var30!=var36) & (var30!=var37) & (var30!=var38) & (var31!=var32) & (var31!=var33) & (var31!=var34) & (var31!=var35) & (var31!=var36) & (var31!=var37) & (var31!=var38) & (var32!=var33) & (var32!=var34) & (var32!=var35) & (var32!=var36) & (var32!=var37) & (var32!=var38) & (var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var33!=var38) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var34!=var38) & (var35!=var36) & (var35!=var37) & (var35!=var38) & (var36!=var37) & (var36!=var38) & (var37!=var38) &  1))
myvar0 = 1;
else exit(0);
if(((var20 == dist(var0, var1)) & (var21 == dist(var1, var2)) & (var22 == dist(var2, var3)) & (var23 == dist(var3, var4)) & (var24 == dist(var4, var5)) & (var25 == dist(var5, var6)) & (var26 == dist(var6, var7)) & (var27 == dist(var7, var8)) & (var28 == dist(var8, var9)) & (var29 == dist(var9, var10)) & (var30 == dist(var10, var11)) & (var31 == dist(var11, var12)) & (var32 == dist(var12, var13)) & (var33 == dist(var13, var14)) & (var34 == dist(var14, var15)) & (var35 == dist(var15, var16)) & (var36 == dist(var16, var17)) & (var37 == dist(var17, var18)) & (var38 == dist(var18, var19)) &  1))
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
17 x[17]
18 x[18]
19 x[19]
20 y[0]
21 y[1]
22 y[2]
23 y[3]
24 y[4]
25 y[5]
26 y[6]
27 y[7]
28 y[8]
29 y[9]
30 y[10]
31 y[11]
32 y[12]
33 y[13]
34 y[14]
35 y[15]
36 y[16]
37 y[17]
38 y[18]
 */}
