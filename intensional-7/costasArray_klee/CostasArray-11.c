
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
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
int myvar0 = 1;
if((((var0 >= 1 & var0 <= 11) & (var1 >= 1 & var1 <= 11) & (var2 >= 1 & var2 <= 11) & (var3 >= 1 & var3 <= 11) & (var4 >= 1 & var4 <= 11) & (var5 >= 1 & var5 <= 11) & (var6 >= 1 & var6 <= 11) & (var7 >= 1 & var7 <= 11) & (var8 >= 1 & var8 <= 11) & (var9 >= 1 & var9 <= 11) & (var10 >= 1 & var10 <= 11) &  1)) & (((var11 >= -10 & var11 <= 10 & var11 != 0 &  1) & (var12 >= -10 & var12 <= 10 & var12 != 0 &  1) & (var13 >= -10 & var13 <= 10 & var13 != 0 &  1) & (var14 >= -10 & var14 <= 10 & var14 != 0 &  1) & (var15 >= -10 & var15 <= 10 & var15 != 0 &  1) & (var16 >= -10 & var16 <= 10 & var16 != 0 &  1) & (var17 >= -10 & var17 <= 10 & var17 != 0 &  1) & (var18 >= -10 & var18 <= 10 & var18 != 0 &  1) & (var19 >= -10 & var19 <= 10 & var19 != 0 &  1) & (var20 >= -10 & var20 <= 10 & var20 != 0 &  1) & (var21 >= -10 & var21 <= 10 & var21 != 0 &  1) & (var22 >= -10 & var22 <= 10 & var22 != 0 &  1) & (var23 >= -10 & var23 <= 10 & var23 != 0 &  1) & (var24 >= -10 & var24 <= 10 & var24 != 0 &  1) & (var25 >= -10 & var25 <= 10 & var25 != 0 &  1) & (var26 >= -10 & var26 <= 10 & var26 != 0 &  1) & (var27 >= -10 & var27 <= 10 & var27 != 0 &  1) & (var28 >= -10 & var28 <= 10 & var28 != 0 &  1) & (var29 >= -10 & var29 <= 10 & var29 != 0 &  1) & (var30 >= -10 & var30 <= 10 & var30 != 0 &  1) & (var31 >= -10 & var31 <= 10 & var31 != 0 &  1) & (var32 >= -10 & var32 <= 10 & var32 != 0 &  1) & (var33 >= -10 & var33 <= 10 & var33 != 0 &  1) & (var34 >= -10 & var34 <= 10 & var34 != 0 &  1) & (var35 >= -10 & var35 <= 10 & var35 != 0 &  1) & (var36 >= -10 & var36 <= 10 & var36 != 0 &  1) & (var37 >= -10 & var37 <= 10 & var37 != 0 &  1) & (var38 >= -10 & var38 <= 10 & var38 != 0 &  1) & (var39 >= -10 & var39 <= 10 & var39 != 0 &  1) & (var40 >= -10 & var40 <= 10 & var40 != 0 &  1) & (var41 >= -10 & var41 <= 10 & var41 != 0 &  1) & (var42 >= -10 & var42 <= 10 & var42 != 0 &  1) & (var43 >= -10 & var43 <= 10 & var43 != 0 &  1) & (var44 >= -10 & var44 <= 10 & var44 != 0 &  1) & (var45 >= -10 & var45 <= 10 & var45 != 0 &  1) & (var46 >= -10 & var46 <= 10 & var46 != 0 &  1) & (var47 >= -10 & var47 <= 10 & var47 != 0 &  1) & (var48 >= -10 & var48 <= 10 & var48 != 0 &  1) & (var49 >= -10 & var49 <= 10 & var49 != 0 &  1) & (var50 >= -10 & var50 <= 10 & var50 != 0 &  1) & (var51 >= -10 & var51 <= 10 & var51 != 0 &  1) & (var52 >= -10 & var52 <= 10 & var52 != 0 &  1) & (var53 >= -10 & var53 <= 10 & var53 != 0 &  1) & (var54 >= -10 & var54 <= 10 & var54 != 0 &  1) & (var55 >= -10 & var55 <= 10 & var55 != 0 &  1) & (var56 >= -10 & var56 <= 10 & var56 != 0 &  1) & (var57 >= -10 & var57 <= 10 & var57 != 0 &  1) & (var58 >= -10 & var58 <= 10 & var58 != 0 &  1) & (var59 >= -10 & var59 <= 10 & var59 != 0 &  1) & (var60 >= -10 & var60 <= 10 & var60 != 0 &  1) & (var61 >= -10 & var61 <= 10 & var61 != 0 &  1) & (var62 >= -10 & var62 <= 10 & var62 != 0 &  1) &  1)) & (((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var8!=var9) & (var8!=var10) & (var9!=var10) &  1)) & (((var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var11!=var16) & (var11!=var17) & (var11!=var18) & (var11!=var19) & (var11!=var20) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var12!=var20) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var13!=var20) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var18!=var19) & (var18!=var20) & (var19!=var20) &  1)) & (((var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var27!=var28) & (var27!=var29) & (var28!=var29) &  1)) & (((var30!=var31) & (var30!=var32) & (var30!=var33) & (var30!=var34) & (var30!=var35) & (var30!=var36) & (var30!=var37) & (var31!=var32) & (var31!=var33) & (var31!=var34) & (var31!=var35) & (var31!=var36) & (var31!=var37) & (var32!=var33) & (var32!=var34) & (var32!=var35) & (var32!=var36) & (var32!=var37) & (var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var35!=var36) & (var35!=var37) & (var36!=var37) &  1)) & (((var38!=var39) & (var38!=var40) & (var38!=var41) & (var38!=var42) & (var38!=var43) & (var38!=var44) & (var39!=var40) & (var39!=var41) & (var39!=var42) & (var39!=var43) & (var39!=var44) & (var40!=var41) & (var40!=var42) & (var40!=var43) & (var40!=var44) & (var41!=var42) & (var41!=var43) & (var41!=var44) & (var42!=var43) & (var42!=var44) & (var43!=var44) &  1)) & (((var45!=var46) & (var45!=var47) & (var45!=var48) & (var45!=var49) & (var45!=var50) & (var46!=var47) & (var46!=var48) & (var46!=var49) & (var46!=var50) & (var47!=var48) & (var47!=var49) & (var47!=var50) & (var48!=var49) & (var48!=var50) & (var49!=var50) &  1)) & (((var51!=var52) & (var51!=var53) & (var51!=var54) & (var51!=var55) & (var52!=var53) & (var52!=var54) & (var52!=var55) & (var53!=var54) & (var53!=var55) & (var54!=var55) &  1)) & (((var56!=var57) & (var56!=var58) & (var56!=var59) & (var57!=var58) & (var57!=var59) & (var58!=var59) &  1)) & (((var60!=var61) & (var60!=var62) & (var61!=var62) &  1)) & (((var0 - var1 == var11) & (var1 - var2 == var12) & (var2 - var3 == var13) & (var3 - var4 == var14) & (var4 - var5 == var15) & (var5 - var6 == var16) & (var6 - var7 == var17) & (var7 - var8 == var18) & (var8 - var9 == var19) & (var9 - var10 == var20) & (var0 - var2 == var21) & (var1 - var3 == var22) & (var2 - var4 == var23) & (var3 - var5 == var24) & (var4 - var6 == var25) & (var5 - var7 == var26) & (var6 - var8 == var27) & (var7 - var9 == var28) & (var8 - var10 == var29) & (var0 - var3 == var30) & (var1 - var4 == var31) & (var2 - var5 == var32) & (var3 - var6 == var33) & (var4 - var7 == var34) & (var5 - var8 == var35) & (var6 - var9 == var36) & (var7 - var10 == var37) & (var0 - var4 == var38) & (var1 - var5 == var39) & (var2 - var6 == var40) & (var3 - var7 == var41) & (var4 - var8 == var42) & (var5 - var9 == var43) & (var6 - var10 == var44) & (var0 - var5 == var45) & (var1 - var6 == var46) & (var2 - var7 == var47) & (var3 - var8 == var48) & (var4 - var9 == var49) & (var5 - var10 == var50) & (var0 - var6 == var51) & (var1 - var7 == var52) & (var2 - var8 == var53) & (var3 - var9 == var54) & (var4 - var10 == var55) & (var0 - var7 == var56) & (var1 - var8 == var57) & (var2 - var9 == var58) & (var3 - var10 == var59) & (var0 - var8 == var60) & (var1 - var9 == var61) & (var2 - var10 == var62) &  1)) & ((((var0 - var9) != (var1 - var10)) &  1)) & 1 )
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
11 y[0]
12 y[1]
13 y[2]
14 y[3]
15 y[4]
16 y[5]
17 y[6]
18 y[7]
19 y[8]
20 y[9]
21 y[10]
22 y[11]
23 y[12]
24 y[13]
25 y[14]
26 y[15]
27 y[16]
28 y[17]
29 y[18]
30 y[19]
31 y[20]
32 y[21]
33 y[22]
34 y[23]
35 y[24]
36 y[25]
37 y[26]
38 y[27]
39 y[28]
40 y[29]
41 y[30]
42 y[31]
43 y[32]
44 y[33]
45 y[34]
46 y[35]
47 y[36]
48 y[37]
49 y[38]
50 y[39]
51 y[40]
52 y[41]
53 y[42]
54 y[43]
55 y[44]
56 y[45]
57 y[46]
58 y[47]
59 y[48]
60 y[49]
61 y[50]
62 y[51]
 */}
