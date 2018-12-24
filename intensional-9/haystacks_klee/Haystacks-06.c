
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
int myvar0 = 1;
klee_assume(((var0 >= 0 & var0 <= 5) & (var1 >= 0 & var1 <= 5) & (var2 >= 0 & var2 <= 5) & (var3 >= 0 & var3 <= 5) & (var4 >= 0 & var4 <= 5) & (var5 >= 0 & var5 <= 5) & (var6 >= 0 & var6 <= 5) & (var7 >= 0 & var7 <= 5) & (var8 >= 0 & var8 <= 5) & (var9 >= 0 & var9 <= 5) & (var10 >= 0 & var10 <= 5) & (var11 >= 0 & var11 <= 5) & (var12 >= 0 & var12 <= 5) & (var13 >= 0 & var13 <= 5) & (var14 >= 0 & var14 <= 5) & (var15 >= 0 & var15 <= 5) & (var16 >= 0 & var16 <= 5) & (var17 >= 0 & var17 <= 5) & (var18 >= 0 & var18 <= 5) & (var19 >= 0 & var19 <= 5) & (var20 >= 0 & var20 <= 5) & (var21 >= 0 & var21 <= 5) & (var22 >= 0 & var22 <= 5) & (var23 >= 0 & var23 <= 5) & (var24 >= 0 & var24 <= 5) & (var25 >= 0 & var25 <= 5) & (var26 >= 0 & var26 <= 5) & (var27 >= 0 & var27 <= 5) & (var28 >= 0 & var28 <= 5) & (var29 >= 0 & var29 <= 5) & (var30 >= 0 & var30 <= 5) & (var31 >= 0 & var31 <= 5) & (var32 >= 0 & var32 <= 5) & (var33 >= 0 & var33 <= 5) & (var34 >= 0 & var34 <= 5) & (var35 >= 0 & var35 <= 5) &  1));
klee_assume(( 1));
klee_assume(((var10 != var13 & var10 + var13 >=2 ) & (var10 != var14 & var10 + var14 >=2 ) & (var10 != var21 & var10 + var21 >=2 ) & (var10 != var31 & var10 + var31 >=2 ) & (var10 != var34 & var10 + var34 >=2 ) & (var26 != var0 & var26 + var0 >=2 ) & (var26 != var11 & var26 + var11 >=2 ) & (var26 != var16 & var26 + var16 >=2 ) & (var26 != var25 & var26 + var25 >=2 ) & (var26 != var28 & var26 + var28 >=2 ) & (var32 != var22 & var32 + var22 >=2 ) & (var32 != var29 & var32 + var29 >=2 ) & (var32 != var33 & var32 + var33 >=2 ) & (var32 != var35 & var32 + var35 >=2 ) & (var32 != var8 & var32 + var8 >=2 ) & (var4 != var20 & var4 + var20 >=2 ) & (var4 != var24 & var4 + var24 >=2 ) & (var4 != var27 & var4 + var27 >=2 ) & (var4 != var3 & var4 + var3 >=2 ) & (var4 != var30 & var4 + var30 >=2 ) & (var6 != var12 & var6 + var12 >=2 ) & (var6 != var15 & var6 + var15 >=2 ) & (var6 != var17 & var6 + var17 >=2 ) & (var6 != var18 & var6 + var18 >=2 ) & (var6 != var23 & var6 + var23 >=2 ) &  1));
klee_assume((( 0 > (var11 - var0)*(var0 - var11)) & ( 0 > (var12 - var17)*(var17 - var12)) & ( 0 > (var13 - var31)*(var31 - var13)) & ( 0 > (var13 - var34)*(var34 - var13)) & ( 0 > (var16 - var0)*(var0 - var16)) & ( 0 > (var16 - var11)*(var11 - var16)) & ( 0 > (var16 - var28)*(var28 - var16)) & ( 0 > (var19 - var1)*(var1 - var19)) & ( 0 > (var19 - var7)*(var7 - var19)) & ( 0 > (var21 - var31)*(var31 - var21)) & ( 0 > (var21 - var34)*(var34 - var21)) & ( 0 > (var22 - var8)*(var8 - var22)) & ( 0 > (var23 - var15)*(var15 - var23)) & ( 0 > (var23 - var18)*(var18 - var23)) & ( 0 > (var24 - var20)*(var20 - var24)) & ( 0 > (var24 - var27)*(var27 - var24)) & ( 0 > (var24 - var3)*(var3 - var24)) & ( 0 > (var24 - var30)*(var30 - var24)) & ( 0 > (var25 - var11)*(var11 - var25)) & ( 0 > (var25 - var28)*(var28 - var25)) & ( 0 > (var27 - var20)*(var20 - var27)) & ( 0 > (var27 - var30)*(var30 - var27)) & ( 0 > (var29 - var22)*(var22 - var29)) & ( 0 > (var29 - var35)*(var35 - var29)) & ( 0 > (var3 - var20)*(var20 - var3)) & ( 0 > (var3 - var30)*(var30 - var3)) & ( 0 > (var33 - var22)*(var22 - var33)) & ( 0 > (var34 - var14)*(var14 - var34)) & ( 0 > (var34 - var31)*(var31 - var34)) & ( 0 > (var35 - var33)*(var33 - var35)) & ( 0 > (var35 - var8)*(var8 - var35)) & ( 0 > (var5 - var1)*(var1 - var5)) & ( 0 > (var7 - var5)*(var5 - var7)) & ( 0 > (var9 - var1)*(var1 - var9)) & ( 0 > (var9 - var7)*(var7 - var9)) &  1));
klee_assume(((var11 != var28) & (var12 != var15) & (var12 != var18) & (var12 != var23) & (var13 != var14) & (var13 != var21) & (var14 != var31) & (var15 != var17) & (var15 != var18) & (var16 != var25) & (var17 != var18) & (var19 != var2) & (var19 != var5) & (var19 != var9) & (var2 != var1) & (var2 != var5) & (var2 != var7) & (var2 != var9) & (var21 != var14) & (var23 != var17) & (var25 != var0) & (var27 != var3) & (var28 != var0) & (var29 != var33) & (var29 != var8) & (var30 != var20) & (var33 != var8) & (var35 != var22) & (var7 != var1) & (var9 != var5) & (var19 == var10) & (var2 == var6) & (var5 == var4) & (var7 == var26) & (var9 == var32) &  1));
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
20 x[20]
21 x[21]
22 x[22]
23 x[23]
24 x[24]
25 x[25]
26 x[26]
27 x[27]
28 x[28]
29 x[29]
30 x[30]
31 x[31]
32 x[32]
33 x[33]
34 x[34]
35 x[35]
 */}
