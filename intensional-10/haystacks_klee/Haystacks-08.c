
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
int myvar0 = 1;
klee_assume(((var0 >= 0 & var0 <= 7) & (var1 >= 0 & var1 <= 7) & (var2 >= 0 & var2 <= 7) & (var3 >= 0 & var3 <= 7) & (var4 >= 0 & var4 <= 7) & (var5 >= 0 & var5 <= 7) & (var6 >= 0 & var6 <= 7) & (var7 >= 0 & var7 <= 7) & (var8 >= 0 & var8 <= 7) & (var9 >= 0 & var9 <= 7) & (var10 >= 0 & var10 <= 7) & (var11 >= 0 & var11 <= 7) & (var12 >= 0 & var12 <= 7) & (var13 >= 0 & var13 <= 7) & (var14 >= 0 & var14 <= 7) & (var15 >= 0 & var15 <= 7) & (var16 >= 0 & var16 <= 7) & (var17 >= 0 & var17 <= 7) & (var18 >= 0 & var18 <= 7) & (var19 >= 0 & var19 <= 7) & (var20 >= 0 & var20 <= 7) & (var21 >= 0 & var21 <= 7) & (var22 >= 0 & var22 <= 7) & (var23 >= 0 & var23 <= 7) & (var24 >= 0 & var24 <= 7) & (var25 >= 0 & var25 <= 7) & (var26 >= 0 & var26 <= 7) & (var27 >= 0 & var27 <= 7) & (var28 >= 0 & var28 <= 7) & (var29 >= 0 & var29 <= 7) & (var30 >= 0 & var30 <= 7) & (var31 >= 0 & var31 <= 7) & (var32 >= 0 & var32 <= 7) & (var33 >= 0 & var33 <= 7) & (var34 >= 0 & var34 <= 7) & (var35 >= 0 & var35 <= 7) & (var36 >= 0 & var36 <= 7) & (var37 >= 0 & var37 <= 7) & (var38 >= 0 & var38 <= 7) & (var39 >= 0 & var39 <= 7) & (var40 >= 0 & var40 <= 7) & (var41 >= 0 & var41 <= 7) & (var42 >= 0 & var42 <= 7) & (var43 >= 0 & var43 <= 7) & (var44 >= 0 & var44 <= 7) & (var45 >= 0 & var45 <= 7) & (var46 >= 0 & var46 <= 7) & (var47 >= 0 & var47 <= 7) & (var48 >= 0 & var48 <= 7) & (var49 >= 0 & var49 <= 7) & (var50 >= 0 & var50 <= 7) & (var51 >= 0 & var51 <= 7) & (var52 >= 0 & var52 <= 7) & (var53 >= 0 & var53 <= 7) & (var54 >= 0 & var54 <= 7) & (var55 >= 0 & var55 <= 7) & (var56 >= 0 & var56 <= 7) & (var57 >= 0 & var57 <= 7) & (var58 >= 0 & var58 <= 7) & (var59 >= 0 & var59 <= 7) & (var60 >= 0 & var60 <= 7) & (var61 >= 0 & var61 <= 7) & (var62 >= 0 & var62 <= 7) & (var63 >= 0 & var63 <= 7) &  1));
klee_assume(( 1));
klee_assume(((var2 != var10 & var2 + var10 >=2 ) & (var2 != var19 & var2 + var19 >=2 ) & (var2 != var30 & var2 + var30 >=2 ) & (var2 != var36 & var2 + var36 >=2 ) & (var2 != var43 & var2 + var43 >=2 ) & (var2 != var50 & var2 + var50 >=2 ) & (var2 != var58 & var2 + var58 >=2 ) & (var35 != var12 & var35 + var12 >=2 ) & (var35 != var3 & var35 + var3 >=2 ) & (var35 != var4 & var35 + var4 >=2 ) & (var35 != var5 & var35 + var5 >=2 ) & (var35 != var53 & var35 + var53 >=2 ) & (var35 != var6 & var35 + var6 >=2 ) & (var35 != var61 & var35 + var61 >=2 ) & (var38 != var16 & var38 + var16 >=2 ) & (var38 != var21 & var38 + var21 >=2 ) & (var38 != var23 & var38 + var23 >=2 ) & (var38 != var29 & var38 + var29 >=2 ) & (var38 != var32 & var38 + var32 >=2 ) & (var38 != var49 & var38 + var49 >=2 ) & (var38 != var55 & var38 + var55 >=2 ) & (var54 != var13 & var54 + var13 >=2 ) & (var54 != var27 & var54 + var27 >=2 ) & (var54 != var31 & var54 + var31 >=2 ) & (var54 != var37 & var54 + var37 >=2 ) & (var54 != var45 & var54 + var45 >=2 ) & (var54 != var48 & var54 + var48 >=2 ) & (var54 != var63 & var54 + var63 >=2 ) & (var59 != var1 & var59 + var1 >=2 ) & (var59 != var14 & var59 + var14 >=2 ) & (var59 != var15 & var59 + var15 >=2 ) & (var59 != var33 & var59 + var33 >=2 ) & (var59 != var34 & var59 + var34 >=2 ) & (var59 != var41 & var59 + var41 >=2 ) & (var59 != var47 & var59 + var47 >=2 ) & (var60 != var0 & var60 + var0 >=2 ) & (var60 != var11 & var60 + var11 >=2 ) & (var60 != var18 & var60 + var18 >=2 ) & (var60 != var20 & var60 + var20 >=2 ) & (var60 != var24 & var60 + var24 >=2 ) & (var60 != var40 & var60 + var40 >=2 ) & (var60 != var56 & var60 + var56 >=2 ) & (var7 != var22 & var7 + var22 >=2 ) & (var7 != var25 & var7 + var25 >=2 ) & (var7 != var26 & var7 + var26 >=2 ) & (var7 != var46 & var7 + var46 >=2 ) & (var7 != var52 & var7 + var52 >=2 ) & (var7 != var62 & var7 + var62 >=2 ) & (var7 != var8 & var7 + var8 >=2 ) &  1));
klee_assume((( 0 > (var1 - var14)*(var14 - var1)) & ( 0 > (var12 - var3)*(var3 - var12)) & ( 0 > (var12 - var61)*(var61 - var12)) & ( 0 > (var13 - var27)*(var27 - var13)) & ( 0 > (var14 - var41)*(var41 - var14)) & ( 0 > (var15 - var1)*(var1 - var15)) & ( 0 > (var15 - var14)*(var14 - var15)) & ( 0 > (var15 - var41)*(var41 - var15)) & ( 0 > (var15 - var47)*(var47 - var15)) & ( 0 > (var16 - var23)*(var23 - var16)) & ( 0 > (var16 - var49)*(var49 - var16)) & ( 0 > (var17 - var42)*(var42 - var17)) & ( 0 > (var18 - var24)*(var24 - var18)) & ( 0 > (var18 - var56)*(var56 - var18)) & ( 0 > (var19 - var10)*(var10 - var19)) & ( 0 > (var20 - var40)*(var40 - var20)) & ( 0 > (var20 - var56)*(var56 - var20)) & ( 0 > (var21 - var29)*(var29 - var21)) & ( 0 > (var22 - var25)*(var25 - var22)) & ( 0 > (var22 - var52)*(var52 - var22)) & ( 0 > (var22 - var62)*(var62 - var22)) & ( 0 > (var23 - var21)*(var21 - var23)) & ( 0 > (var23 - var49)*(var49 - var23)) & ( 0 > (var23 - var55)*(var55 - var23)) & ( 0 > (var26 - var52)*(var52 - var26)) & ( 0 > (var26 - var8)*(var8 - var26)) & ( 0 > (var28 - var44)*(var44 - var28)) & ( 0 > (var3 - var5)*(var5 - var3)) & ( 0 > (var30 - var10)*(var10 - var30)) & ( 0 > (var30 - var19)*(var19 - var30)) & ( 0 > (var30 - var43)*(var43 - var30)) & ( 0 > (var30 - var50)*(var50 - var30)) & ( 0 > (var30 - var58)*(var58 - var30)) & ( 0 > (var31 - var27)*(var27 - var31)) & ( 0 > (var32 - var29)*(var29 - var32)) & ( 0 > (var32 - var49)*(var49 - var32)) & ( 0 > (var32 - var55)*(var55 - var32)) & ( 0 > (var33 - var1)*(var1 - var33)) & ( 0 > (var33 - var41)*(var41 - var33)) & ( 0 > (var33 - var47)*(var47 - var33)) & ( 0 > (var34 - var41)*(var41 - var34)) & ( 0 > (var34 - var47)*(var47 - var34)) & ( 0 > (var36 - var10)*(var10 - var36)) & ( 0 > (var36 - var19)*(var19 - var36)) & ( 0 > (var39 - var17)*(var17 - var39)) & ( 0 > (var39 - var57)*(var57 - var39)) & ( 0 > (var4 - var5)*(var5 - var4)) & ( 0 > (var4 - var6)*(var6 - var4)) & ( 0 > (var4 - var61)*(var61 - var4)) & ( 0 > (var40 - var11)*(var11 - var40)) & ( 0 > (var42 - var28)*(var28 - var42)) & ( 0 > (var43 - var36)*(var36 - var43)) & ( 0 > (var43 - var50)*(var50 - var43)) & ( 0 > (var45 - var13)*(var13 - var45)) & ( 0 > (var45 - var27)*(var27 - var45)) & ( 0 > (var47 - var41)*(var41 - var47)) & ( 0 > (var48 - var13)*(var13 - var48)) & ( 0 > (var48 - var37)*(var37 - var48)) & ( 0 > (var49 - var21)*(var21 - var49)) & ( 0 > (var49 - var29)*(var29 - var49)) & ( 0 > (var49 - var55)*(var55 - var49)) & ( 0 > (var50 - var19)*(var19 - var50)) & ( 0 > (var51 - var17)*(var17 - var51)) & ( 0 > (var51 - var28)*(var28 - var51)) & ( 0 > (var51 - var42)*(var42 - var51)) & ( 0 > (var51 - var44)*(var44 - var51)) & ( 0 > (var52 - var25)*(var25 - var52)) & ( 0 > (var52 - var46)*(var46 - var52)) & ( 0 > (var53 - var12)*(var12 - var53)) & ( 0 > (var53 - var61)*(var61 - var53)) & ( 0 > (var57 - var17)*(var17 - var57)) & ( 0 > (var57 - var28)*(var28 - var57)) & ( 0 > (var57 - var51)*(var51 - var57)) & ( 0 > (var58 - var10)*(var10 - var58)) & ( 0 > (var58 - var43)*(var43 - var58)) & ( 0 > (var58 - var50)*(var50 - var58)) & ( 0 > (var6 - var12)*(var12 - var6)) & ( 0 > (var6 - var5)*(var5 - var6)) & ( 0 > (var6 - var61)*(var61 - var6)) & ( 0 > (var62 - var46)*(var46 - var62)) & ( 0 > (var62 - var8)*(var8 - var62)) & ( 0 > (var63 - var31)*(var31 - var63)) & ( 0 > (var8 - var46)*(var46 - var8)) & ( 0 > (var9 - var17)*(var17 - var9)) & ( 0 > (var9 - var28)*(var28 - var9)) & ( 0 > (var9 - var57)*(var57 - var9)) &  1));
klee_assume(((var0 != var11) & (var1 != var41) & (var1 != var47) & (var12 != var5) & (var14 != var47) & (var16 != var21) & (var16 != var29) & (var16 != var32) & (var16 != var55) & (var17 != var28) & (var17 != var44) & (var18 != var0) & (var18 != var11) & (var18 != var20) & (var18 != var40) & (var20 != var0) & (var20 != var11) & (var20 != var24) & (var21 != var55) & (var22 != var46) & (var22 != var8) & (var23 != var29) & (var23 != var32) & (var24 != var0) & (var24 != var11) & (var24 != var40) & (var25 != var46) & (var26 != var22) & (var26 != var25) & (var26 != var46) & (var26 != var62) & (var30 != var36) & (var31 != var13) & (var32 != var21) & (var33 != var14) & (var33 != var15) & (var33 != var34) & (var34 != var1) & (var34 != var14) & (var34 != var15) & (var37 != var13) & (var37 != var27) & (var37 != var31) & (var39 != var28) & (var39 != var42) & (var39 != var44) & (var39 != var51) & (var39 != var9) & (var4 != var12) & (var4 != var3) & (var4 != var53) & (var40 != var0) & (var42 != var44) & (var43 != var10) & (var43 != var19) & (var45 != var31) & (var45 != var37) & (var45 != var48) & (var45 != var63) & (var48 != var27) & (var48 != var31) & (var50 != var10) & (var50 != var36) & (var52 != var62) & (var52 != var8) & (var53 != var3) & (var53 != var5) & (var53 != var6) & (var55 != var29) & (var56 != var0) & (var56 != var11) & (var56 != var24) & (var56 != var40) & (var57 != var42) & (var57 != var44) & (var58 != var19) & (var58 != var36) & (var6 != var3) & (var61 != var3) & (var61 != var5) & (var62 != var25) & (var63 != var13) & (var63 != var27) & (var63 != var37) & (var63 != var48) & (var8 != var25) & (var9 != var42) & (var9 != var44) & (var9 != var51) & (var17 == var54) & (var28 == var35) & (var39 == var2) & (var42 == var59) & (var51 == var38) & (var57 == var7) & (var9 == var60) &  1));
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
36 x[36]
37 x[37]
38 x[38]
39 x[39]
40 x[40]
41 x[41]
42 x[42]
43 x[43]
44 x[44]
45 x[45]
46 x[46]
47 x[47]
48 x[48]
49 x[49]
50 x[50]
51 x[51]
52 x[52]
53 x[53]
54 x[54]
55 x[55]
56 x[56]
57 x[57]
58 x[58]
59 x[59]
60 x[60]
61 x[61]
62 x[62]
63 x[63]
 */}
