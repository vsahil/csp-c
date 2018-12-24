
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
int myvar0 = 1;
klee_assume((((var0 >= 0 && var0 <= 34) && (var1 >= 0 && var1 <= 34) && (var2 >= 0 && var2 <= 34) && (var3 >= 0 && var3 <= 34) && (var4 >= 0 && var4 <= 34) && (var5 >= 0 && var5 <= 34) && (var6 >= 0 && var6 <= 34) && (var7 >= 0 && var7 <= 34) && (var8 >= 0 && var8 <= 34) && (var9 >= 0 && var9 <= 34) && (var10 >= 0 && var10 <= 34) && (var11 >= 0 && var11 <= 34) && (var12 >= 0 && var12 <= 34) && (var13 >= 0 && var13 <= 34) && (var14 >= 0 && var14 <= 34) && (var15 >= 0 && var15 <= 34) && (var16 >= 0 && var16 <= 34) && (var17 >= 0 && var17 <= 34) && (var18 >= 0 && var18 <= 34) && (var19 >= 0 && var19 <= 34) && (var20 >= 0 && var20 <= 34) && (var21 >= 0 && var21 <= 34) && (var22 >= 0 && var22 <= 34) && (var23 >= 0 && var23 <= 34) && (var24 >= 0 && var24 <= 34) && (var25 >= 0 && var25 <= 34) && (var26 >= 0 && var26 <= 34) && (var27 >= 0 && var27 <= 34) && (var28 >= 0 && var28 <= 34) && (var29 >= 0 && var29 <= 34) && (var30 >= 0 && var30 <= 34) && (var31 >= 0 && var31 <= 34) && (var32 >= 0 && var32 <= 34) && (var33 >= 0 && var33 <= 34) && (var34 >= 0 && var34 <= 34) && (var35 >= 1 && var35 <= 34) && (var36 >= 1 && var36 <= 34) && (var37 >= 1 && var37 <= 34) && (var38 >= 1 && var38 <= 34) && (var39 >= 1 && var39 <= 34) && (var40 >= 1 && var40 <= 34) && (var41 >= 1 && var41 <= 34) && (var42 >= 1 && var42 <= 34) && (var43 >= 1 && var43 <= 34) && (var44 >= 1 && var44 <= 34) && (var45 >= 1 && var45 <= 34) && (var46 >= 1 && var46 <= 34) && (var47 >= 1 && var47 <= 34) && (var48 >= 1 && var48 <= 34) && (var49 >= 1 && var49 <= 34) && (var50 >= 1 && var50 <= 34) && (var51 >= 1 && var51 <= 34) && (var52 >= 1 && var52 <= 34) && (var53 >= 1 && var53 <= 34) && (var54 >= 1 && var54 <= 34) && (var55 >= 1 && var55 <= 34) && (var56 >= 1 && var56 <= 34) && (var57 >= 1 && var57 <= 34) && (var58 >= 1 && var58 <= 34) && (var59 >= 1 && var59 <= 34) && (var60 >= 1 && var60 <= 34) && (var61 >= 1 && var61 <= 34) && (var62 >= 1 && var62 <= 34) && (var63 >= 1 && var63 <= 34) && (var64 >= 1 && var64 <= 34) && (var65 >= 1 && var65 <= 34) && (var66 >= 1 && var66 <= 34) && (var67 >= 1 && var67 <= 34) && (var68 >= 1 && var68 <= 34) &&  1)) & (( 1)) & (((var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var0!=var10) && (var0!=var11) && (var0!=var12) && (var0!=var13) && (var0!=var14) && (var0!=var15) && (var0!=var16) && (var0!=var17) && (var0!=var18) && (var0!=var19) && (var0!=var20) && (var0!=var21) && (var0!=var22) && (var0!=var23) && (var0!=var24) && (var0!=var25) && (var0!=var26) && (var0!=var27) && (var0!=var28) && (var0!=var29) && (var0!=var30) && (var0!=var31) && (var0!=var32) && (var0!=var33) && (var0!=var34) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var1!=var10) && (var1!=var11) && (var1!=var12) && (var1!=var13) && (var1!=var14) && (var1!=var15) && (var1!=var16) && (var1!=var17) && (var1!=var18) && (var1!=var19) && (var1!=var20) && (var1!=var21) && (var1!=var22) && (var1!=var23) && (var1!=var24) && (var1!=var25) && (var1!=var26) && (var1!=var27) && (var1!=var28) && (var1!=var29) && (var1!=var30) && (var1!=var31) && (var1!=var32) && (var1!=var33) && (var1!=var34) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var2!=var10) && (var2!=var11) && (var2!=var12) && (var2!=var13) && (var2!=var14) && (var2!=var15) && (var2!=var16) && (var2!=var17) && (var2!=var18) && (var2!=var19) && (var2!=var20) && (var2!=var21) && (var2!=var22) && (var2!=var23) && (var2!=var24) && (var2!=var25) && (var2!=var26) && (var2!=var27) && (var2!=var28) && (var2!=var29) && (var2!=var30) && (var2!=var31) && (var2!=var32) && (var2!=var33) && (var2!=var34) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var3!=var10) && (var3!=var11) && (var3!=var12) && (var3!=var13) && (var3!=var14) && (var3!=var15) && (var3!=var16) && (var3!=var17) && (var3!=var18) && (var3!=var19) && (var3!=var20) && (var3!=var21) && (var3!=var22) && (var3!=var23) && (var3!=var24) && (var3!=var25) && (var3!=var26) && (var3!=var27) && (var3!=var28) && (var3!=var29) && (var3!=var30) && (var3!=var31) && (var3!=var32) && (var3!=var33) && (var3!=var34) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var4!=var10) && (var4!=var11) && (var4!=var12) && (var4!=var13) && (var4!=var14) && (var4!=var15) && (var4!=var16) && (var4!=var17) && (var4!=var18) && (var4!=var19) && (var4!=var20) && (var4!=var21) && (var4!=var22) && (var4!=var23) && (var4!=var24) && (var4!=var25) && (var4!=var26) && (var4!=var27) && (var4!=var28) && (var4!=var29) && (var4!=var30) && (var4!=var31) && (var4!=var32) && (var4!=var33) && (var4!=var34) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var5!=var10) && (var5!=var11) && (var5!=var12) && (var5!=var13) && (var5!=var14) && (var5!=var15) && (var5!=var16) && (var5!=var17) && (var5!=var18) && (var5!=var19) && (var5!=var20) && (var5!=var21) && (var5!=var22) && (var5!=var23) && (var5!=var24) && (var5!=var25) && (var5!=var26) && (var5!=var27) && (var5!=var28) && (var5!=var29) && (var5!=var30) && (var5!=var31) && (var5!=var32) && (var5!=var33) && (var5!=var34) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var6!=var10) && (var6!=var11) && (var6!=var12) && (var6!=var13) && (var6!=var14) && (var6!=var15) && (var6!=var16) && (var6!=var17) && (var6!=var18) && (var6!=var19) && (var6!=var20) && (var6!=var21) && (var6!=var22) && (var6!=var23) && (var6!=var24) && (var6!=var25) && (var6!=var26) && (var6!=var27) && (var6!=var28) && (var6!=var29) && (var6!=var30) && (var6!=var31) && (var6!=var32) && (var6!=var33) && (var6!=var34) && (var7!=var8) && (var7!=var9) && (var7!=var10) && (var7!=var11) && (var7!=var12) && (var7!=var13) && (var7!=var14) && (var7!=var15) && (var7!=var16) && (var7!=var17) && (var7!=var18) && (var7!=var19) && (var7!=var20) && (var7!=var21) && (var7!=var22) && (var7!=var23) && (var7!=var24) && (var7!=var25) && (var7!=var26) && (var7!=var27) && (var7!=var28) && (var7!=var29) && (var7!=var30) && (var7!=var31) && (var7!=var32) && (var7!=var33) && (var7!=var34) && (var8!=var9) && (var8!=var10) && (var8!=var11) && (var8!=var12) && (var8!=var13) && (var8!=var14) && (var8!=var15) && (var8!=var16) && (var8!=var17) && (var8!=var18) && (var8!=var19) && (var8!=var20) && (var8!=var21) && (var8!=var22) && (var8!=var23) && (var8!=var24) && (var8!=var25) && (var8!=var26) && (var8!=var27) && (var8!=var28) && (var8!=var29) && (var8!=var30) && (var8!=var31) && (var8!=var32) && (var8!=var33) && (var8!=var34) && (var9!=var10) && (var9!=var11) && (var9!=var12) && (var9!=var13) && (var9!=var14) && (var9!=var15) && (var9!=var16) && (var9!=var17) && (var9!=var18) && (var9!=var19) && (var9!=var20) && (var9!=var21) && (var9!=var22) && (var9!=var23) && (var9!=var24) && (var9!=var25) && (var9!=var26) && (var9!=var27) && (var9!=var28) && (var9!=var29) && (var9!=var30) && (var9!=var31) && (var9!=var32) && (var9!=var33) && (var9!=var34) && (var10!=var11) && (var10!=var12) && (var10!=var13) && (var10!=var14) && (var10!=var15) && (var10!=var16) && (var10!=var17) && (var10!=var18) && (var10!=var19) && (var10!=var20) && (var10!=var21) && (var10!=var22) && (var10!=var23) && (var10!=var24) && (var10!=var25) && (var10!=var26) && (var10!=var27) && (var10!=var28) && (var10!=var29) && (var10!=var30) && (var10!=var31) && (var10!=var32) && (var10!=var33) && (var10!=var34) && (var11!=var12) && (var11!=var13) && (var11!=var14) && (var11!=var15) && (var11!=var16) && (var11!=var17) && (var11!=var18) && (var11!=var19) && (var11!=var20) && (var11!=var21) && (var11!=var22) && (var11!=var23) && (var11!=var24) && (var11!=var25) && (var11!=var26) && (var11!=var27) && (var11!=var28) && (var11!=var29) && (var11!=var30) && (var11!=var31) && (var11!=var32) && (var11!=var33) && (var11!=var34) && (var12!=var13) && (var12!=var14) && (var12!=var15) && (var12!=var16) && (var12!=var17) && (var12!=var18) && (var12!=var19) && (var12!=var20) && (var12!=var21) && (var12!=var22) && (var12!=var23) && (var12!=var24) && (var12!=var25) && (var12!=var26) && (var12!=var27) && (var12!=var28) && (var12!=var29) && (var12!=var30) && (var12!=var31) && (var12!=var32) && (var12!=var33) && (var12!=var34) && (var13!=var14) && (var13!=var15) && (var13!=var16) && (var13!=var17) && (var13!=var18) && (var13!=var19) && (var13!=var20) && (var13!=var21) && (var13!=var22) && (var13!=var23) && (var13!=var24) && (var13!=var25) && (var13!=var26) && (var13!=var27) && (var13!=var28) && (var13!=var29) && (var13!=var30) && (var13!=var31) && (var13!=var32) && (var13!=var33) && (var13!=var34) && (var14!=var15) && (var14!=var16) && (var14!=var17) && (var14!=var18) && (var14!=var19) && (var14!=var20) && (var14!=var21) && (var14!=var22) && (var14!=var23) && (var14!=var24) && (var14!=var25) && (var14!=var26) && (var14!=var27) && (var14!=var28) && (var14!=var29) && (var14!=var30) && (var14!=var31) && (var14!=var32) && (var14!=var33) && (var14!=var34) && (var15!=var16) && (var15!=var17) && (var15!=var18) && (var15!=var19) && (var15!=var20) && (var15!=var21) && (var15!=var22) && (var15!=var23) && (var15!=var24) && (var15!=var25) && (var15!=var26) && (var15!=var27) && (var15!=var28) && (var15!=var29) && (var15!=var30) && (var15!=var31) && (var15!=var32) && (var15!=var33) && (var15!=var34) && (var16!=var17) && (var16!=var18) && (var16!=var19) && (var16!=var20) && (var16!=var21) && (var16!=var22) && (var16!=var23) && (var16!=var24) && (var16!=var25) && (var16!=var26) && (var16!=var27) && (var16!=var28) && (var16!=var29) && (var16!=var30) && (var16!=var31) && (var16!=var32) && (var16!=var33) && (var16!=var34) && (var17!=var18) && (var17!=var19) && (var17!=var20) && (var17!=var21) && (var17!=var22) && (var17!=var23) && (var17!=var24) && (var17!=var25) && (var17!=var26) && (var17!=var27) && (var17!=var28) && (var17!=var29) && (var17!=var30) && (var17!=var31) && (var17!=var32) && (var17!=var33) && (var17!=var34) && (var18!=var19) && (var18!=var20) && (var18!=var21) && (var18!=var22) && (var18!=var23) && (var18!=var24) && (var18!=var25) && (var18!=var26) && (var18!=var27) && (var18!=var28) && (var18!=var29) && (var18!=var30) && (var18!=var31) && (var18!=var32) && (var18!=var33) && (var18!=var34) && (var19!=var20) && (var19!=var21) && (var19!=var22) && (var19!=var23) && (var19!=var24) && (var19!=var25) && (var19!=var26) && (var19!=var27) && (var19!=var28) && (var19!=var29) && (var19!=var30) && (var19!=var31) && (var19!=var32) && (var19!=var33) && (var19!=var34) && (var20!=var21) && (var20!=var22) && (var20!=var23) && (var20!=var24) && (var20!=var25) && (var20!=var26) && (var20!=var27) && (var20!=var28) && (var20!=var29) && (var20!=var30) && (var20!=var31) && (var20!=var32) && (var20!=var33) && (var20!=var34) && (var21!=var22) && (var21!=var23) && (var21!=var24) && (var21!=var25) && (var21!=var26) && (var21!=var27) && (var21!=var28) && (var21!=var29) && (var21!=var30) && (var21!=var31) && (var21!=var32) && (var21!=var33) && (var21!=var34) && (var22!=var23) && (var22!=var24) && (var22!=var25) && (var22!=var26) && (var22!=var27) && (var22!=var28) && (var22!=var29) && (var22!=var30) && (var22!=var31) && (var22!=var32) && (var22!=var33) && (var22!=var34) && (var23!=var24) && (var23!=var25) && (var23!=var26) && (var23!=var27) && (var23!=var28) && (var23!=var29) && (var23!=var30) && (var23!=var31) && (var23!=var32) && (var23!=var33) && (var23!=var34) && (var24!=var25) && (var24!=var26) && (var24!=var27) && (var24!=var28) && (var24!=var29) && (var24!=var30) && (var24!=var31) && (var24!=var32) && (var24!=var33) && (var24!=var34) && (var25!=var26) && (var25!=var27) && (var25!=var28) && (var25!=var29) && (var25!=var30) && (var25!=var31) && (var25!=var32) && (var25!=var33) && (var25!=var34) && (var26!=var27) && (var26!=var28) && (var26!=var29) && (var26!=var30) && (var26!=var31) && (var26!=var32) && (var26!=var33) && (var26!=var34) && (var27!=var28) && (var27!=var29) && (var27!=var30) && (var27!=var31) && (var27!=var32) && (var27!=var33) && (var27!=var34) && (var28!=var29) && (var28!=var30) && (var28!=var31) && (var28!=var32) && (var28!=var33) && (var28!=var34) && (var29!=var30) && (var29!=var31) && (var29!=var32) && (var29!=var33) && (var29!=var34) && (var30!=var31) && (var30!=var32) && (var30!=var33) && (var30!=var34) && (var31!=var32) && (var31!=var33) && (var31!=var34) && (var32!=var33) && (var32!=var34) && (var33!=var34) &&  1)) & (((var35!=var36) && (var35!=var37) && (var35!=var38) && (var35!=var39) && (var35!=var40) && (var35!=var41) && (var35!=var42) && (var35!=var43) && (var35!=var44) && (var35!=var45) && (var35!=var46) && (var35!=var47) && (var35!=var48) && (var35!=var49) && (var35!=var50) && (var35!=var51) && (var35!=var52) && (var35!=var53) && (var35!=var54) && (var35!=var55) && (var35!=var56) && (var35!=var57) && (var35!=var58) && (var35!=var59) && (var35!=var60) && (var35!=var61) && (var35!=var62) && (var35!=var63) && (var35!=var64) && (var35!=var65) && (var35!=var66) && (var35!=var67) && (var35!=var68) && (var36!=var37) && (var36!=var38) && (var36!=var39) && (var36!=var40) && (var36!=var41) && (var36!=var42) && (var36!=var43) && (var36!=var44) && (var36!=var45) && (var36!=var46) && (var36!=var47) && (var36!=var48) && (var36!=var49) && (var36!=var50) && (var36!=var51) && (var36!=var52) && (var36!=var53) && (var36!=var54) && (var36!=var55) && (var36!=var56) && (var36!=var57) && (var36!=var58) && (var36!=var59) && (var36!=var60) && (var36!=var61) && (var36!=var62) && (var36!=var63) && (var36!=var64) && (var36!=var65) && (var36!=var66) && (var36!=var67) && (var36!=var68) && (var37!=var38) && (var37!=var39) && (var37!=var40) && (var37!=var41) && (var37!=var42) && (var37!=var43) && (var37!=var44) && (var37!=var45) && (var37!=var46) && (var37!=var47) && (var37!=var48) && (var37!=var49) && (var37!=var50) && (var37!=var51) && (var37!=var52) && (var37!=var53) && (var37!=var54) && (var37!=var55) && (var37!=var56) && (var37!=var57) && (var37!=var58) && (var37!=var59) && (var37!=var60) && (var37!=var61) && (var37!=var62) && (var37!=var63) && (var37!=var64) && (var37!=var65) && (var37!=var66) && (var37!=var67) && (var37!=var68) && (var38!=var39) && (var38!=var40) && (var38!=var41) && (var38!=var42) && (var38!=var43) && (var38!=var44) && (var38!=var45) && (var38!=var46) && (var38!=var47) && (var38!=var48) && (var38!=var49) && (var38!=var50) && (var38!=var51) && (var38!=var52) && (var38!=var53) && (var38!=var54) && (var38!=var55) && (var38!=var56) && (var38!=var57) && (var38!=var58) && (var38!=var59) && (var38!=var60) && (var38!=var61) && (var38!=var62) && (var38!=var63) && (var38!=var64) && (var38!=var65) && (var38!=var66) && (var38!=var67) && (var38!=var68) && (var39!=var40) && (var39!=var41) && (var39!=var42) && (var39!=var43) && (var39!=var44) && (var39!=var45) && (var39!=var46) && (var39!=var47) && (var39!=var48) && (var39!=var49) && (var39!=var50) && (var39!=var51) && (var39!=var52) && (var39!=var53) && (var39!=var54) && (var39!=var55) && (var39!=var56) && (var39!=var57) && (var39!=var58) && (var39!=var59) && (var39!=var60) && (var39!=var61) && (var39!=var62) && (var39!=var63) && (var39!=var64) && (var39!=var65) && (var39!=var66) && (var39!=var67) && (var39!=var68) && (var40!=var41) && (var40!=var42) && (var40!=var43) && (var40!=var44) && (var40!=var45) && (var40!=var46) && (var40!=var47) && (var40!=var48) && (var40!=var49) && (var40!=var50) && (var40!=var51) && (var40!=var52) && (var40!=var53) && (var40!=var54) && (var40!=var55) && (var40!=var56) && (var40!=var57) && (var40!=var58) && (var40!=var59) && (var40!=var60) && (var40!=var61) && (var40!=var62) && (var40!=var63) && (var40!=var64) && (var40!=var65) && (var40!=var66) && (var40!=var67) && (var40!=var68) && (var41!=var42) && (var41!=var43) && (var41!=var44) && (var41!=var45) && (var41!=var46) && (var41!=var47) && (var41!=var48) && (var41!=var49) && (var41!=var50) && (var41!=var51) && (var41!=var52) && (var41!=var53) && (var41!=var54) && (var41!=var55) && (var41!=var56) && (var41!=var57) && (var41!=var58) && (var41!=var59) && (var41!=var60) && (var41!=var61) && (var41!=var62) && (var41!=var63) && (var41!=var64) && (var41!=var65) && (var41!=var66) && (var41!=var67) && (var41!=var68) && (var42!=var43) && (var42!=var44) && (var42!=var45) && (var42!=var46) && (var42!=var47) && (var42!=var48) && (var42!=var49) && (var42!=var50) && (var42!=var51) && (var42!=var52) && (var42!=var53) && (var42!=var54) && (var42!=var55) && (var42!=var56) && (var42!=var57) && (var42!=var58) && (var42!=var59) && (var42!=var60) && (var42!=var61) && (var42!=var62) && (var42!=var63) && (var42!=var64) && (var42!=var65) && (var42!=var66) && (var42!=var67) && (var42!=var68) && (var43!=var44) && (var43!=var45) && (var43!=var46) && (var43!=var47) && (var43!=var48) && (var43!=var49) && (var43!=var50) && (var43!=var51) && (var43!=var52) && (var43!=var53) && (var43!=var54) && (var43!=var55) && (var43!=var56) && (var43!=var57) && (var43!=var58) && (var43!=var59) && (var43!=var60) && (var43!=var61) && (var43!=var62) && (var43!=var63) && (var43!=var64) && (var43!=var65) && (var43!=var66) && (var43!=var67) && (var43!=var68) && (var44!=var45) && (var44!=var46) && (var44!=var47) && (var44!=var48) && (var44!=var49) && (var44!=var50) && (var44!=var51) && (var44!=var52) && (var44!=var53) && (var44!=var54) && (var44!=var55) && (var44!=var56) && (var44!=var57) && (var44!=var58) && (var44!=var59) && (var44!=var60) && (var44!=var61) && (var44!=var62) && (var44!=var63) && (var44!=var64) && (var44!=var65) && (var44!=var66) && (var44!=var67) && (var44!=var68) && (var45!=var46) && (var45!=var47) && (var45!=var48) && (var45!=var49) && (var45!=var50) && (var45!=var51) && (var45!=var52) && (var45!=var53) && (var45!=var54) && (var45!=var55) && (var45!=var56) && (var45!=var57) && (var45!=var58) && (var45!=var59) && (var45!=var60) && (var45!=var61) && (var45!=var62) && (var45!=var63) && (var45!=var64) && (var45!=var65) && (var45!=var66) && (var45!=var67) && (var45!=var68) && (var46!=var47) && (var46!=var48) && (var46!=var49) && (var46!=var50) && (var46!=var51) && (var46!=var52) && (var46!=var53) && (var46!=var54) && (var46!=var55) && (var46!=var56) && (var46!=var57) && (var46!=var58) && (var46!=var59) && (var46!=var60) && (var46!=var61) && (var46!=var62) && (var46!=var63) && (var46!=var64) && (var46!=var65) && (var46!=var66) && (var46!=var67) && (var46!=var68) && (var47!=var48) && (var47!=var49) && (var47!=var50) && (var47!=var51) && (var47!=var52) && (var47!=var53) && (var47!=var54) && (var47!=var55) && (var47!=var56) && (var47!=var57) && (var47!=var58) && (var47!=var59) && (var47!=var60) && (var47!=var61) && (var47!=var62) && (var47!=var63) && (var47!=var64) && (var47!=var65) && (var47!=var66) && (var47!=var67) && (var47!=var68) && (var48!=var49) && (var48!=var50) && (var48!=var51) && (var48!=var52) && (var48!=var53) && (var48!=var54) && (var48!=var55) && (var48!=var56) && (var48!=var57) && (var48!=var58) && (var48!=var59) && (var48!=var60) && (var48!=var61) && (var48!=var62) && (var48!=var63) && (var48!=var64) && (var48!=var65) && (var48!=var66) && (var48!=var67) && (var48!=var68) && (var49!=var50) && (var49!=var51) && (var49!=var52) && (var49!=var53) && (var49!=var54) && (var49!=var55) && (var49!=var56) && (var49!=var57) && (var49!=var58) && (var49!=var59) && (var49!=var60) && (var49!=var61) && (var49!=var62) && (var49!=var63) && (var49!=var64) && (var49!=var65) && (var49!=var66) && (var49!=var67) && (var49!=var68) && (var50!=var51) && (var50!=var52) && (var50!=var53) && (var50!=var54) && (var50!=var55) && (var50!=var56) && (var50!=var57) && (var50!=var58) && (var50!=var59) && (var50!=var60) && (var50!=var61) && (var50!=var62) && (var50!=var63) && (var50!=var64) && (var50!=var65) && (var50!=var66) && (var50!=var67) && (var50!=var68) && (var51!=var52) && (var51!=var53) && (var51!=var54) && (var51!=var55) && (var51!=var56) && (var51!=var57) && (var51!=var58) && (var51!=var59) && (var51!=var60) && (var51!=var61) && (var51!=var62) && (var51!=var63) && (var51!=var64) && (var51!=var65) && (var51!=var66) && (var51!=var67) && (var51!=var68) && (var52!=var53) && (var52!=var54) && (var52!=var55) && (var52!=var56) && (var52!=var57) && (var52!=var58) && (var52!=var59) && (var52!=var60) && (var52!=var61) && (var52!=var62) && (var52!=var63) && (var52!=var64) && (var52!=var65) && (var52!=var66) && (var52!=var67) && (var52!=var68) && (var53!=var54) && (var53!=var55) && (var53!=var56) && (var53!=var57) && (var53!=var58) && (var53!=var59) && (var53!=var60) && (var53!=var61) && (var53!=var62) && (var53!=var63) && (var53!=var64) && (var53!=var65) && (var53!=var66) && (var53!=var67) && (var53!=var68) && (var54!=var55) && (var54!=var56) && (var54!=var57) && (var54!=var58) && (var54!=var59) && (var54!=var60) && (var54!=var61) && (var54!=var62) && (var54!=var63) && (var54!=var64) && (var54!=var65) && (var54!=var66) && (var54!=var67) && (var54!=var68) && (var55!=var56) && (var55!=var57) && (var55!=var58) && (var55!=var59) && (var55!=var60) && (var55!=var61) && (var55!=var62) && (var55!=var63) && (var55!=var64) && (var55!=var65) && (var55!=var66) && (var55!=var67) && (var55!=var68) && (var56!=var57) && (var56!=var58) && (var56!=var59) && (var56!=var60) && (var56!=var61) && (var56!=var62) && (var56!=var63) && (var56!=var64) && (var56!=var65) && (var56!=var66) && (var56!=var67) && (var56!=var68) && (var57!=var58) && (var57!=var59) && (var57!=var60) && (var57!=var61) && (var57!=var62) && (var57!=var63) && (var57!=var64) && (var57!=var65) && (var57!=var66) && (var57!=var67) && (var57!=var68) && (var58!=var59) && (var58!=var60) && (var58!=var61) && (var58!=var62) && (var58!=var63) && (var58!=var64) && (var58!=var65) && (var58!=var66) && (var58!=var67) && (var58!=var68) && (var59!=var60) && (var59!=var61) && (var59!=var62) && (var59!=var63) && (var59!=var64) && (var59!=var65) && (var59!=var66) && (var59!=var67) && (var59!=var68) && (var60!=var61) && (var60!=var62) && (var60!=var63) && (var60!=var64) && (var60!=var65) && (var60!=var66) && (var60!=var67) && (var60!=var68) && (var61!=var62) && (var61!=var63) && (var61!=var64) && (var61!=var65) && (var61!=var66) && (var61!=var67) && (var61!=var68) && (var62!=var63) && (var62!=var64) && (var62!=var65) && (var62!=var66) && (var62!=var67) && (var62!=var68) && (var63!=var64) && (var63!=var65) && (var63!=var66) && (var63!=var67) && (var63!=var68) && (var64!=var65) && (var64!=var66) && (var64!=var67) && (var64!=var68) && (var65!=var66) && (var65!=var67) && (var65!=var68) && (var66!=var67) && (var66!=var68) && (var67!=var68) &&  1)) & (((var35 == dist(var0, var1)) && (var36 == dist(var1, var2)) && (var37 == dist(var2, var3)) && (var38 == dist(var3, var4)) && (var39 == dist(var4, var5)) && (var40 == dist(var5, var6)) && (var41 == dist(var6, var7)) && (var42 == dist(var7, var8)) && (var43 == dist(var8, var9)) && (var44 == dist(var9, var10)) && (var45 == dist(var10, var11)) && (var46 == dist(var11, var12)) && (var47 == dist(var12, var13)) && (var48 == dist(var13, var14)) && (var49 == dist(var14, var15)) && (var50 == dist(var15, var16)) && (var51 == dist(var16, var17)) && (var52 == dist(var17, var18)) && (var53 == dist(var18, var19)) && (var54 == dist(var19, var20)) && (var55 == dist(var20, var21)) && (var56 == dist(var21, var22)) && (var57 == dist(var22, var23)) && (var58 == dist(var23, var24)) && (var59 == dist(var24, var25)) && (var60 == dist(var25, var26)) && (var61 == dist(var26, var27)) && (var62 == dist(var27, var28)) && (var63 == dist(var28, var29)) && (var64 == dist(var29, var30)) && (var65 == dist(var30, var31)) && (var66 == dist(var31, var32)) && (var67 == dist(var32, var33)) && (var68 == dist(var33, var34)) &&  1)) & 1 );
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
35 y[0]
36 y[1]
37 y[2]
38 y[3]
39 y[4]
40 y[5]
41 y[6]
42 y[7]
43 y[8]
44 y[9]
45 y[10]
46 y[11]
47 y[12]
48 y[13]
49 y[14]
50 y[15]
51 y[16]
52 y[17]
53 y[18]
54 y[19]
55 y[20]
56 y[21]
57 y[22]
58 y[23]
59 y[24]
60 y[25]
61 y[26]
62 y[27]
63 y[28]
64 y[29]
65 y[30]
66 y[31]
67 y[32]
68 y[33]
 */}
