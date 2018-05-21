
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
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
int myvar0 = 1;
klee_assume(((var0 >= 1 & var0 <= 12) & (var1 >= 1 & var1 <= 12) & (var2 >= 1 & var2 <= 12) & (var3 >= 1 & var3 <= 12) & (var4 >= 1 & var4 <= 12) & (var5 >= 1 & var5 <= 12) & (var6 >= 1 & var6 <= 12) & (var7 >= 1 & var7 <= 12) & (var8 >= 1 & var8 <= 12) & (var9 >= 1 & var9 <= 12) & (var10 >= 1 & var10 <= 12) & (var11 >= 1 & var11 <= 12) &  1));
klee_assume(((var12 >= -11 & var12 <= 11 & var12 != 0 &  1) & (var13 >= -11 & var13 <= 11 & var13 != 0 &  1) & (var14 >= -11 & var14 <= 11 & var14 != 0 &  1) & (var15 >= -11 & var15 <= 11 & var15 != 0 &  1) & (var16 >= -11 & var16 <= 11 & var16 != 0 &  1) & (var17 >= -11 & var17 <= 11 & var17 != 0 &  1) & (var18 >= -11 & var18 <= 11 & var18 != 0 &  1) & (var19 >= -11 & var19 <= 11 & var19 != 0 &  1) & (var20 >= -11 & var20 <= 11 & var20 != 0 &  1) & (var21 >= -11 & var21 <= 11 & var21 != 0 &  1) & (var22 >= -11 & var22 <= 11 & var22 != 0 &  1) & (var23 >= -11 & var23 <= 11 & var23 != 0 &  1) & (var24 >= -11 & var24 <= 11 & var24 != 0 &  1) & (var25 >= -11 & var25 <= 11 & var25 != 0 &  1) & (var26 >= -11 & var26 <= 11 & var26 != 0 &  1) & (var27 >= -11 & var27 <= 11 & var27 != 0 &  1) & (var28 >= -11 & var28 <= 11 & var28 != 0 &  1) & (var29 >= -11 & var29 <= 11 & var29 != 0 &  1) & (var30 >= -11 & var30 <= 11 & var30 != 0 &  1) & (var31 >= -11 & var31 <= 11 & var31 != 0 &  1) & (var32 >= -11 & var32 <= 11 & var32 != 0 &  1) & (var33 >= -11 & var33 <= 11 & var33 != 0 &  1) & (var34 >= -11 & var34 <= 11 & var34 != 0 &  1) & (var35 >= -11 & var35 <= 11 & var35 != 0 &  1) & (var36 >= -11 & var36 <= 11 & var36 != 0 &  1) & (var37 >= -11 & var37 <= 11 & var37 != 0 &  1) & (var38 >= -11 & var38 <= 11 & var38 != 0 &  1) & (var39 >= -11 & var39 <= 11 & var39 != 0 &  1) & (var40 >= -11 & var40 <= 11 & var40 != 0 &  1) & (var41 >= -11 & var41 <= 11 & var41 != 0 &  1) & (var42 >= -11 & var42 <= 11 & var42 != 0 &  1) & (var43 >= -11 & var43 <= 11 & var43 != 0 &  1) & (var44 >= -11 & var44 <= 11 & var44 != 0 &  1) & (var45 >= -11 & var45 <= 11 & var45 != 0 &  1) & (var46 >= -11 & var46 <= 11 & var46 != 0 &  1) & (var47 >= -11 & var47 <= 11 & var47 != 0 &  1) & (var48 >= -11 & var48 <= 11 & var48 != 0 &  1) & (var49 >= -11 & var49 <= 11 & var49 != 0 &  1) & (var50 >= -11 & var50 <= 11 & var50 != 0 &  1) & (var51 >= -11 & var51 <= 11 & var51 != 0 &  1) & (var52 >= -11 & var52 <= 11 & var52 != 0 &  1) & (var53 >= -11 & var53 <= 11 & var53 != 0 &  1) & (var54 >= -11 & var54 <= 11 & var54 != 0 &  1) & (var55 >= -11 & var55 <= 11 & var55 != 0 &  1) & (var56 >= -11 & var56 <= 11 & var56 != 0 &  1) & (var57 >= -11 & var57 <= 11 & var57 != 0 &  1) & (var58 >= -11 & var58 <= 11 & var58 != 0 &  1) & (var59 >= -11 & var59 <= 11 & var59 != 0 &  1) & (var60 >= -11 & var60 <= 11 & var60 != 0 &  1) & (var61 >= -11 & var61 <= 11 & var61 != 0 &  1) & (var62 >= -11 & var62 <= 11 & var62 != 0 &  1) & (var63 >= -11 & var63 <= 11 & var63 != 0 &  1) & (var64 >= -11 & var64 <= 11 & var64 != 0 &  1) & (var65 >= -11 & var65 <= 11 & var65 != 0 &  1) & (var66 >= -11 & var66 <= 11 & var66 != 0 &  1) & (var67 >= -11 & var67 <= 11 & var67 != 0 &  1) & (var68 >= -11 & var68 <= 11 & var68 != 0 &  1) & (var69 >= -11 & var69 <= 11 & var69 != 0 &  1) & (var70 >= -11 & var70 <= 11 & var70 != 0 &  1) & (var71 >= -11 & var71 <= 11 & var71 != 0 &  1) & (var72 >= -11 & var72 <= 11 & var72 != 0 &  1) & (var73 >= -11 & var73 <= 11 & var73 != 0 &  1) & (var74 >= -11 & var74 <= 11 & var74 != 0 &  1) &  1));
klee_assume(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var9!=var10) & (var9!=var11) & (var10!=var11) &  1));
klee_assume(((var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var12!=var20) & (var12!=var21) & (var12!=var22) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var13!=var20) & (var13!=var21) & (var13!=var22) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var14!=var21) & (var14!=var22) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var15!=var21) & (var15!=var22) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var20!=var21) & (var20!=var22) & (var21!=var22) &  1));
klee_assume(((var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var23!=var30) & (var23!=var31) & (var23!=var32) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var24!=var30) & (var24!=var31) & (var24!=var32) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var25!=var30) & (var25!=var31) & (var25!=var32) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var26!=var30) & (var26!=var31) & (var26!=var32) & (var27!=var28) & (var27!=var29) & (var27!=var30) & (var27!=var31) & (var27!=var32) & (var28!=var29) & (var28!=var30) & (var28!=var31) & (var28!=var32) & (var29!=var30) & (var29!=var31) & (var29!=var32) & (var30!=var31) & (var30!=var32) & (var31!=var32) &  1));
klee_assume(((var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var33!=var38) & (var33!=var39) & (var33!=var40) & (var33!=var41) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var34!=var38) & (var34!=var39) & (var34!=var40) & (var34!=var41) & (var35!=var36) & (var35!=var37) & (var35!=var38) & (var35!=var39) & (var35!=var40) & (var35!=var41) & (var36!=var37) & (var36!=var38) & (var36!=var39) & (var36!=var40) & (var36!=var41) & (var37!=var38) & (var37!=var39) & (var37!=var40) & (var37!=var41) & (var38!=var39) & (var38!=var40) & (var38!=var41) & (var39!=var40) & (var39!=var41) & (var40!=var41) &  1));
klee_assume(((var42!=var43) & (var42!=var44) & (var42!=var45) & (var42!=var46) & (var42!=var47) & (var42!=var48) & (var42!=var49) & (var43!=var44) & (var43!=var45) & (var43!=var46) & (var43!=var47) & (var43!=var48) & (var43!=var49) & (var44!=var45) & (var44!=var46) & (var44!=var47) & (var44!=var48) & (var44!=var49) & (var45!=var46) & (var45!=var47) & (var45!=var48) & (var45!=var49) & (var46!=var47) & (var46!=var48) & (var46!=var49) & (var47!=var48) & (var47!=var49) & (var48!=var49) &  1));
klee_assume(((var50!=var51) & (var50!=var52) & (var50!=var53) & (var50!=var54) & (var50!=var55) & (var50!=var56) & (var51!=var52) & (var51!=var53) & (var51!=var54) & (var51!=var55) & (var51!=var56) & (var52!=var53) & (var52!=var54) & (var52!=var55) & (var52!=var56) & (var53!=var54) & (var53!=var55) & (var53!=var56) & (var54!=var55) & (var54!=var56) & (var55!=var56) &  1));
klee_assume(((var57!=var58) & (var57!=var59) & (var57!=var60) & (var57!=var61) & (var57!=var62) & (var58!=var59) & (var58!=var60) & (var58!=var61) & (var58!=var62) & (var59!=var60) & (var59!=var61) & (var59!=var62) & (var60!=var61) & (var60!=var62) & (var61!=var62) &  1));
klee_assume(((var63!=var64) & (var63!=var65) & (var63!=var66) & (var63!=var67) & (var64!=var65) & (var64!=var66) & (var64!=var67) & (var65!=var66) & (var65!=var67) & (var66!=var67) &  1));
klee_assume(((var68!=var69) & (var68!=var70) & (var68!=var71) & (var69!=var70) & (var69!=var71) & (var70!=var71) &  1));
klee_assume(((var72!=var73) & (var72!=var74) & (var73!=var74) &  1));
klee_assume(((var0 - var1 == var12) & (var1 - var2 == var13) & (var2 - var3 == var14) & (var3 - var4 == var15) & (var4 - var5 == var16) & (var5 - var6 == var17) & (var6 - var7 == var18) & (var7 - var8 == var19) & (var8 - var9 == var20) & (var9 - var10 == var21) & (var10 - var11 == var22) & (var0 - var2 == var23) & (var1 - var3 == var24) & (var2 - var4 == var25) & (var3 - var5 == var26) & (var4 - var6 == var27) & (var5 - var7 == var28) & (var6 - var8 == var29) & (var7 - var9 == var30) & (var8 - var10 == var31) & (var9 - var11 == var32) & (var0 - var3 == var33) & (var1 - var4 == var34) & (var2 - var5 == var35) & (var3 - var6 == var36) & (var4 - var7 == var37) & (var5 - var8 == var38) & (var6 - var9 == var39) & (var7 - var10 == var40) & (var8 - var11 == var41) & (var0 - var4 == var42) & (var1 - var5 == var43) & (var2 - var6 == var44) & (var3 - var7 == var45) & (var4 - var8 == var46) & (var5 - var9 == var47) & (var6 - var10 == var48) & (var7 - var11 == var49) & (var0 - var5 == var50) & (var1 - var6 == var51) & (var2 - var7 == var52) & (var3 - var8 == var53) & (var4 - var9 == var54) & (var5 - var10 == var55) & (var6 - var11 == var56) & (var0 - var6 == var57) & (var1 - var7 == var58) & (var2 - var8 == var59) & (var3 - var9 == var60) & (var4 - var10 == var61) & (var5 - var11 == var62) & (var0 - var7 == var63) & (var1 - var8 == var64) & (var2 - var9 == var65) & (var3 - var10 == var66) & (var4 - var11 == var67) & (var0 - var8 == var68) & (var1 - var9 == var69) & (var2 - var10 == var70) & (var3 - var11 == var71) & (var0 - var9 == var72) & (var1 - var10 == var73) & (var2 - var11 == var74) &  1));
klee_assume((((var0 - var10) != (var1 - var11)) &  1));
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
12 y[0]
13 y[1]
14 y[2]
15 y[3]
16 y[4]
17 y[5]
18 y[6]
19 y[7]
20 y[8]
21 y[9]
22 y[10]
23 y[11]
24 y[12]
25 y[13]
26 y[14]
27 y[15]
28 y[16]
29 y[17]
30 y[18]
31 y[19]
32 y[20]
33 y[21]
34 y[22]
35 y[23]
36 y[24]
37 y[25]
38 y[26]
39 y[27]
40 y[28]
41 y[29]
42 y[30]
43 y[31]
44 y[32]
45 y[33]
46 y[34]
47 y[35]
48 y[36]
49 y[37]
50 y[38]
51 y[39]
52 y[40]
53 y[41]
54 y[42]
55 y[43]
56 y[44]
57 y[45]
58 y[46]
59 y[47]
60 y[48]
61 y[49]
62 y[50]
63 y[51]
64 y[52]
65 y[53]
66 y[54]
67 y[55]
68 y[56]
69 y[57]
70 y[58]
71 y[59]
72 y[60]
73 y[61]
74 y[62]
 */}
