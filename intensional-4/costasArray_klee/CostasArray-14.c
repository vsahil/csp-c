
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
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
int myvar0 = 1;
if(((var0 >= 1 & var0 <= 14) & (var1 >= 1 & var1 <= 14) & (var2 >= 1 & var2 <= 14) & (var3 >= 1 & var3 <= 14) & (var4 >= 1 & var4 <= 14) & (var5 >= 1 & var5 <= 14) & (var6 >= 1 & var6 <= 14) & (var7 >= 1 & var7 <= 14) & (var8 >= 1 & var8 <= 14) & (var9 >= 1 & var9 <= 14) & (var10 >= 1 & var10 <= 14) & (var11 >= 1 & var11 <= 14) & (var12 >= 1 & var12 <= 14) & (var13 >= 1 & var13 <= 14) &  1))
myvar0 = 1;
else exit(0);
if(((var14 >= -13 & var14 <= 13 & var14 != 0 &  1) & (var15 >= -13 & var15 <= 13 & var15 != 0 &  1) & (var16 >= -13 & var16 <= 13 & var16 != 0 &  1) & (var17 >= -13 & var17 <= 13 & var17 != 0 &  1) & (var18 >= -13 & var18 <= 13 & var18 != 0 &  1) & (var19 >= -13 & var19 <= 13 & var19 != 0 &  1) & (var20 >= -13 & var20 <= 13 & var20 != 0 &  1) & (var21 >= -13 & var21 <= 13 & var21 != 0 &  1) & (var22 >= -13 & var22 <= 13 & var22 != 0 &  1) & (var23 >= -13 & var23 <= 13 & var23 != 0 &  1) & (var24 >= -13 & var24 <= 13 & var24 != 0 &  1) & (var25 >= -13 & var25 <= 13 & var25 != 0 &  1) & (var26 >= -13 & var26 <= 13 & var26 != 0 &  1) & (var27 >= -13 & var27 <= 13 & var27 != 0 &  1) & (var28 >= -13 & var28 <= 13 & var28 != 0 &  1) & (var29 >= -13 & var29 <= 13 & var29 != 0 &  1) & (var30 >= -13 & var30 <= 13 & var30 != 0 &  1) & (var31 >= -13 & var31 <= 13 & var31 != 0 &  1) & (var32 >= -13 & var32 <= 13 & var32 != 0 &  1) & (var33 >= -13 & var33 <= 13 & var33 != 0 &  1) & (var34 >= -13 & var34 <= 13 & var34 != 0 &  1) & (var35 >= -13 & var35 <= 13 & var35 != 0 &  1) & (var36 >= -13 & var36 <= 13 & var36 != 0 &  1) & (var37 >= -13 & var37 <= 13 & var37 != 0 &  1) & (var38 >= -13 & var38 <= 13 & var38 != 0 &  1) & (var39 >= -13 & var39 <= 13 & var39 != 0 &  1) & (var40 >= -13 & var40 <= 13 & var40 != 0 &  1) & (var41 >= -13 & var41 <= 13 & var41 != 0 &  1) & (var42 >= -13 & var42 <= 13 & var42 != 0 &  1) & (var43 >= -13 & var43 <= 13 & var43 != 0 &  1) & (var44 >= -13 & var44 <= 13 & var44 != 0 &  1) & (var45 >= -13 & var45 <= 13 & var45 != 0 &  1) & (var46 >= -13 & var46 <= 13 & var46 != 0 &  1) & (var47 >= -13 & var47 <= 13 & var47 != 0 &  1) & (var48 >= -13 & var48 <= 13 & var48 != 0 &  1) & (var49 >= -13 & var49 <= 13 & var49 != 0 &  1) & (var50 >= -13 & var50 <= 13 & var50 != 0 &  1) & (var51 >= -13 & var51 <= 13 & var51 != 0 &  1) & (var52 >= -13 & var52 <= 13 & var52 != 0 &  1) & (var53 >= -13 & var53 <= 13 & var53 != 0 &  1) & (var54 >= -13 & var54 <= 13 & var54 != 0 &  1) & (var55 >= -13 & var55 <= 13 & var55 != 0 &  1) & (var56 >= -13 & var56 <= 13 & var56 != 0 &  1) & (var57 >= -13 & var57 <= 13 & var57 != 0 &  1) & (var58 >= -13 & var58 <= 13 & var58 != 0 &  1) & (var59 >= -13 & var59 <= 13 & var59 != 0 &  1) & (var60 >= -13 & var60 <= 13 & var60 != 0 &  1) & (var61 >= -13 & var61 <= 13 & var61 != 0 &  1) & (var62 >= -13 & var62 <= 13 & var62 != 0 &  1) & (var63 >= -13 & var63 <= 13 & var63 != 0 &  1) & (var64 >= -13 & var64 <= 13 & var64 != 0 &  1) & (var65 >= -13 & var65 <= 13 & var65 != 0 &  1) & (var66 >= -13 & var66 <= 13 & var66 != 0 &  1) & (var67 >= -13 & var67 <= 13 & var67 != 0 &  1) & (var68 >= -13 & var68 <= 13 & var68 != 0 &  1) & (var69 >= -13 & var69 <= 13 & var69 != 0 &  1) & (var70 >= -13 & var70 <= 13 & var70 != 0 &  1) & (var71 >= -13 & var71 <= 13 & var71 != 0 &  1) & (var72 >= -13 & var72 <= 13 & var72 != 0 &  1) & (var73 >= -13 & var73 <= 13 & var73 != 0 &  1) & (var74 >= -13 & var74 <= 13 & var74 != 0 &  1) & (var75 >= -13 & var75 <= 13 & var75 != 0 &  1) & (var76 >= -13 & var76 <= 13 & var76 != 0 &  1) & (var77 >= -13 & var77 <= 13 & var77 != 0 &  1) & (var78 >= -13 & var78 <= 13 & var78 != 0 &  1) & (var79 >= -13 & var79 <= 13 & var79 != 0 &  1) & (var80 >= -13 & var80 <= 13 & var80 != 0 &  1) & (var81 >= -13 & var81 <= 13 & var81 != 0 &  1) & (var82 >= -13 & var82 <= 13 & var82 != 0 &  1) & (var83 >= -13 & var83 <= 13 & var83 != 0 &  1) & (var84 >= -13 & var84 <= 13 & var84 != 0 &  1) & (var85 >= -13 & var85 <= 13 & var85 != 0 &  1) & (var86 >= -13 & var86 <= 13 & var86 != 0 &  1) & (var87 >= -13 & var87 <= 13 & var87 != 0 &  1) & (var88 >= -13 & var88 <= 13 & var88 != 0 &  1) & (var89 >= -13 & var89 <= 13 & var89 != 0 &  1) & (var90 >= -13 & var90 <= 13 & var90 != 0 &  1) & (var91 >= -13 & var91 <= 13 & var91 != 0 &  1) & (var92 >= -13 & var92 <= 13 & var92 != 0 &  1) & (var93 >= -13 & var93 <= 13 & var93 != 0 &  1) & (var94 >= -13 & var94 <= 13 & var94 != 0 &  1) & (var95 >= -13 & var95 <= 13 & var95 != 0 &  1) & (var96 >= -13 & var96 <= 13 & var96 != 0 &  1) & (var97 >= -13 & var97 <= 13 & var97 != 0 &  1) & (var98 >= -13 & var98 <= 13 & var98 != 0 &  1) & (var99 >= -13 & var99 <= 13 & var99 != 0 &  1) & (var100 >= -13 & var100 <= 13 & var100 != 0 &  1) & (var101 >= -13 & var101 <= 13 & var101 != 0 &  1) &  1))
myvar0 = 1;
else exit(0);
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var11!=var12) & (var11!=var13) & (var12!=var13) &  1))
myvar0 = 1;
else exit(0);
if(((var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var14!=var21) & (var14!=var22) & (var14!=var23) & (var14!=var24) & (var14!=var25) & (var14!=var26) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var15!=var21) & (var15!=var22) & (var15!=var23) & (var15!=var24) & (var15!=var25) & (var15!=var26) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var16!=var23) & (var16!=var24) & (var16!=var25) & (var16!=var26) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var17!=var23) & (var17!=var24) & (var17!=var25) & (var17!=var26) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var18!=var23) & (var18!=var24) & (var18!=var25) & (var18!=var26) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var19!=var23) & (var19!=var24) & (var19!=var25) & (var19!=var26) & (var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var24!=var25) & (var24!=var26) & (var25!=var26) &  1))
myvar0 = 1;
else exit(0);
if(((var27!=var28) & (var27!=var29) & (var27!=var30) & (var27!=var31) & (var27!=var32) & (var27!=var33) & (var27!=var34) & (var27!=var35) & (var27!=var36) & (var27!=var37) & (var27!=var38) & (var28!=var29) & (var28!=var30) & (var28!=var31) & (var28!=var32) & (var28!=var33) & (var28!=var34) & (var28!=var35) & (var28!=var36) & (var28!=var37) & (var28!=var38) & (var29!=var30) & (var29!=var31) & (var29!=var32) & (var29!=var33) & (var29!=var34) & (var29!=var35) & (var29!=var36) & (var29!=var37) & (var29!=var38) & (var30!=var31) & (var30!=var32) & (var30!=var33) & (var30!=var34) & (var30!=var35) & (var30!=var36) & (var30!=var37) & (var30!=var38) & (var31!=var32) & (var31!=var33) & (var31!=var34) & (var31!=var35) & (var31!=var36) & (var31!=var37) & (var31!=var38) & (var32!=var33) & (var32!=var34) & (var32!=var35) & (var32!=var36) & (var32!=var37) & (var32!=var38) & (var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var33!=var38) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var34!=var38) & (var35!=var36) & (var35!=var37) & (var35!=var38) & (var36!=var37) & (var36!=var38) & (var37!=var38) &  1))
myvar0 = 1;
else exit(0);
if(((var39!=var40) & (var39!=var41) & (var39!=var42) & (var39!=var43) & (var39!=var44) & (var39!=var45) & (var39!=var46) & (var39!=var47) & (var39!=var48) & (var39!=var49) & (var40!=var41) & (var40!=var42) & (var40!=var43) & (var40!=var44) & (var40!=var45) & (var40!=var46) & (var40!=var47) & (var40!=var48) & (var40!=var49) & (var41!=var42) & (var41!=var43) & (var41!=var44) & (var41!=var45) & (var41!=var46) & (var41!=var47) & (var41!=var48) & (var41!=var49) & (var42!=var43) & (var42!=var44) & (var42!=var45) & (var42!=var46) & (var42!=var47) & (var42!=var48) & (var42!=var49) & (var43!=var44) & (var43!=var45) & (var43!=var46) & (var43!=var47) & (var43!=var48) & (var43!=var49) & (var44!=var45) & (var44!=var46) & (var44!=var47) & (var44!=var48) & (var44!=var49) & (var45!=var46) & (var45!=var47) & (var45!=var48) & (var45!=var49) & (var46!=var47) & (var46!=var48) & (var46!=var49) & (var47!=var48) & (var47!=var49) & (var48!=var49) &  1))
myvar0 = 1;
else exit(0);
if(((var50!=var51) & (var50!=var52) & (var50!=var53) & (var50!=var54) & (var50!=var55) & (var50!=var56) & (var50!=var57) & (var50!=var58) & (var50!=var59) & (var51!=var52) & (var51!=var53) & (var51!=var54) & (var51!=var55) & (var51!=var56) & (var51!=var57) & (var51!=var58) & (var51!=var59) & (var52!=var53) & (var52!=var54) & (var52!=var55) & (var52!=var56) & (var52!=var57) & (var52!=var58) & (var52!=var59) & (var53!=var54) & (var53!=var55) & (var53!=var56) & (var53!=var57) & (var53!=var58) & (var53!=var59) & (var54!=var55) & (var54!=var56) & (var54!=var57) & (var54!=var58) & (var54!=var59) & (var55!=var56) & (var55!=var57) & (var55!=var58) & (var55!=var59) & (var56!=var57) & (var56!=var58) & (var56!=var59) & (var57!=var58) & (var57!=var59) & (var58!=var59) &  1))
myvar0 = 1;
else exit(0);
if(((var60!=var61) & (var60!=var62) & (var60!=var63) & (var60!=var64) & (var60!=var65) & (var60!=var66) & (var60!=var67) & (var60!=var68) & (var61!=var62) & (var61!=var63) & (var61!=var64) & (var61!=var65) & (var61!=var66) & (var61!=var67) & (var61!=var68) & (var62!=var63) & (var62!=var64) & (var62!=var65) & (var62!=var66) & (var62!=var67) & (var62!=var68) & (var63!=var64) & (var63!=var65) & (var63!=var66) & (var63!=var67) & (var63!=var68) & (var64!=var65) & (var64!=var66) & (var64!=var67) & (var64!=var68) & (var65!=var66) & (var65!=var67) & (var65!=var68) & (var66!=var67) & (var66!=var68) & (var67!=var68) &  1))
myvar0 = 1;
else exit(0);
if(((var69!=var70) & (var69!=var71) & (var69!=var72) & (var69!=var73) & (var69!=var74) & (var69!=var75) & (var69!=var76) & (var70!=var71) & (var70!=var72) & (var70!=var73) & (var70!=var74) & (var70!=var75) & (var70!=var76) & (var71!=var72) & (var71!=var73) & (var71!=var74) & (var71!=var75) & (var71!=var76) & (var72!=var73) & (var72!=var74) & (var72!=var75) & (var72!=var76) & (var73!=var74) & (var73!=var75) & (var73!=var76) & (var74!=var75) & (var74!=var76) & (var75!=var76) &  1))
myvar0 = 1;
else exit(0);
if(((var77!=var78) & (var77!=var79) & (var77!=var80) & (var77!=var81) & (var77!=var82) & (var77!=var83) & (var78!=var79) & (var78!=var80) & (var78!=var81) & (var78!=var82) & (var78!=var83) & (var79!=var80) & (var79!=var81) & (var79!=var82) & (var79!=var83) & (var80!=var81) & (var80!=var82) & (var80!=var83) & (var81!=var82) & (var81!=var83) & (var82!=var83) &  1))
myvar0 = 1;
else exit(0);
if(((var84!=var85) & (var84!=var86) & (var84!=var87) & (var84!=var88) & (var84!=var89) & (var85!=var86) & (var85!=var87) & (var85!=var88) & (var85!=var89) & (var86!=var87) & (var86!=var88) & (var86!=var89) & (var87!=var88) & (var87!=var89) & (var88!=var89) &  1))
myvar0 = 1;
else exit(0);
if(((var90!=var91) & (var90!=var92) & (var90!=var93) & (var90!=var94) & (var91!=var92) & (var91!=var93) & (var91!=var94) & (var92!=var93) & (var92!=var94) & (var93!=var94) &  1))
myvar0 = 1;
else exit(0);
if(((var95!=var96) & (var95!=var97) & (var95!=var98) & (var96!=var97) & (var96!=var98) & (var97!=var98) &  1))
myvar0 = 1;
else exit(0);
if(((var99!=var100) & (var99!=var101) & (var100!=var101) &  1))
myvar0 = 1;
else exit(0);
if(((var0 - var1 == var14) & (var1 - var2 == var15) & (var2 - var3 == var16) & (var3 - var4 == var17) & (var4 - var5 == var18) & (var5 - var6 == var19) & (var6 - var7 == var20) & (var7 - var8 == var21) & (var8 - var9 == var22) & (var9 - var10 == var23) & (var10 - var11 == var24) & (var11 - var12 == var25) & (var12 - var13 == var26) & (var0 - var2 == var27) & (var1 - var3 == var28) & (var2 - var4 == var29) & (var3 - var5 == var30) & (var4 - var6 == var31) & (var5 - var7 == var32) & (var6 - var8 == var33) & (var7 - var9 == var34) & (var8 - var10 == var35) & (var9 - var11 == var36) & (var10 - var12 == var37) & (var11 - var13 == var38) & (var0 - var3 == var39) & (var1 - var4 == var40) & (var2 - var5 == var41) & (var3 - var6 == var42) & (var4 - var7 == var43) & (var5 - var8 == var44) & (var6 - var9 == var45) & (var7 - var10 == var46) & (var8 - var11 == var47) & (var9 - var12 == var48) & (var10 - var13 == var49) & (var0 - var4 == var50) & (var1 - var5 == var51) & (var2 - var6 == var52) & (var3 - var7 == var53) & (var4 - var8 == var54) & (var5 - var9 == var55) & (var6 - var10 == var56) & (var7 - var11 == var57) & (var8 - var12 == var58) & (var9 - var13 == var59) & (var0 - var5 == var60) & (var1 - var6 == var61) & (var2 - var7 == var62) & (var3 - var8 == var63) & (var4 - var9 == var64) & (var5 - var10 == var65) & (var6 - var11 == var66) & (var7 - var12 == var67) & (var8 - var13 == var68) & (var0 - var6 == var69) & (var1 - var7 == var70) & (var2 - var8 == var71) & (var3 - var9 == var72) & (var4 - var10 == var73) & (var5 - var11 == var74) & (var6 - var12 == var75) & (var7 - var13 == var76) & (var0 - var7 == var77) & (var1 - var8 == var78) & (var2 - var9 == var79) & (var3 - var10 == var80) & (var4 - var11 == var81) & (var5 - var12 == var82) & (var6 - var13 == var83) & (var0 - var8 == var84) & (var1 - var9 == var85) & (var2 - var10 == var86) & (var3 - var11 == var87) & (var4 - var12 == var88) & (var5 - var13 == var89) & (var0 - var9 == var90) & (var1 - var10 == var91) & (var2 - var11 == var92) & (var3 - var12 == var93) & (var4 - var13 == var94) & (var0 - var10 == var95) & (var1 - var11 == var96) & (var2 - var12 == var97) & (var3 - var13 == var98) & (var0 - var11 == var99) & (var1 - var12 == var100) & (var2 - var13 == var101) &  1))
myvar0 = 1;
else exit(0);
if((((var0 - var12) != (var1 - var13)) &  1))
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
14 y[0]
15 y[1]
16 y[2]
17 y[3]
18 y[4]
19 y[5]
20 y[6]
21 y[7]
22 y[8]
23 y[9]
24 y[10]
25 y[11]
26 y[12]
27 y[13]
28 y[14]
29 y[15]
30 y[16]
31 y[17]
32 y[18]
33 y[19]
34 y[20]
35 y[21]
36 y[22]
37 y[23]
38 y[24]
39 y[25]
40 y[26]
41 y[27]
42 y[28]
43 y[29]
44 y[30]
45 y[31]
46 y[32]
47 y[33]
48 y[34]
49 y[35]
50 y[36]
51 y[37]
52 y[38]
53 y[39]
54 y[40]
55 y[41]
56 y[42]
57 y[43]
58 y[44]
59 y[45]
60 y[46]
61 y[47]
62 y[48]
63 y[49]
64 y[50]
65 y[51]
66 y[52]
67 y[53]
68 y[54]
69 y[55]
70 y[56]
71 y[57]
72 y[58]
73 y[59]
74 y[60]
75 y[61]
76 y[62]
77 y[63]
78 y[64]
79 y[65]
80 y[66]
81 y[67]
82 y[68]
83 y[69]
84 y[70]
85 y[71]
86 y[72]
87 y[73]
88 y[74]
89 y[75]
90 y[76]
91 y[77]
92 y[78]
93 y[79]
94 y[80]
95 y[81]
96 y[82]
97 y[83]
98 y[84]
99 y[85]
100 y[86]
101 y[87]
 */}
