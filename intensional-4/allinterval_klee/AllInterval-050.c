
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
int myvar0 = 1;
if(((var0 >= 0 & var0 <= 49) & (var1 >= 0 & var1 <= 49) & (var2 >= 0 & var2 <= 49) & (var3 >= 0 & var3 <= 49) & (var4 >= 0 & var4 <= 49) & (var5 >= 0 & var5 <= 49) & (var6 >= 0 & var6 <= 49) & (var7 >= 0 & var7 <= 49) & (var8 >= 0 & var8 <= 49) & (var9 >= 0 & var9 <= 49) & (var10 >= 0 & var10 <= 49) & (var11 >= 0 & var11 <= 49) & (var12 >= 0 & var12 <= 49) & (var13 >= 0 & var13 <= 49) & (var14 >= 0 & var14 <= 49) & (var15 >= 0 & var15 <= 49) & (var16 >= 0 & var16 <= 49) & (var17 >= 0 & var17 <= 49) & (var18 >= 0 & var18 <= 49) & (var19 >= 0 & var19 <= 49) & (var20 >= 0 & var20 <= 49) & (var21 >= 0 & var21 <= 49) & (var22 >= 0 & var22 <= 49) & (var23 >= 0 & var23 <= 49) & (var24 >= 0 & var24 <= 49) & (var25 >= 0 & var25 <= 49) & (var26 >= 0 & var26 <= 49) & (var27 >= 0 & var27 <= 49) & (var28 >= 0 & var28 <= 49) & (var29 >= 0 & var29 <= 49) & (var30 >= 0 & var30 <= 49) & (var31 >= 0 & var31 <= 49) & (var32 >= 0 & var32 <= 49) & (var33 >= 0 & var33 <= 49) & (var34 >= 0 & var34 <= 49) & (var35 >= 0 & var35 <= 49) & (var36 >= 0 & var36 <= 49) & (var37 >= 0 & var37 <= 49) & (var38 >= 0 & var38 <= 49) & (var39 >= 0 & var39 <= 49) & (var40 >= 0 & var40 <= 49) & (var41 >= 0 & var41 <= 49) & (var42 >= 0 & var42 <= 49) & (var43 >= 0 & var43 <= 49) & (var44 >= 0 & var44 <= 49) & (var45 >= 0 & var45 <= 49) & (var46 >= 0 & var46 <= 49) & (var47 >= 0 & var47 <= 49) & (var48 >= 0 & var48 <= 49) & (var49 >= 0 & var49 <= 49) & (var50 >= 1 & var50 <= 49) & (var51 >= 1 & var51 <= 49) & (var52 >= 1 & var52 <= 49) & (var53 >= 1 & var53 <= 49) & (var54 >= 1 & var54 <= 49) & (var55 >= 1 & var55 <= 49) & (var56 >= 1 & var56 <= 49) & (var57 >= 1 & var57 <= 49) & (var58 >= 1 & var58 <= 49) & (var59 >= 1 & var59 <= 49) & (var60 >= 1 & var60 <= 49) & (var61 >= 1 & var61 <= 49) & (var62 >= 1 & var62 <= 49) & (var63 >= 1 & var63 <= 49) & (var64 >= 1 & var64 <= 49) & (var65 >= 1 & var65 <= 49) & (var66 >= 1 & var66 <= 49) & (var67 >= 1 & var67 <= 49) & (var68 >= 1 & var68 <= 49) & (var69 >= 1 & var69 <= 49) & (var70 >= 1 & var70 <= 49) & (var71 >= 1 & var71 <= 49) & (var72 >= 1 & var72 <= 49) & (var73 >= 1 & var73 <= 49) & (var74 >= 1 & var74 <= 49) & (var75 >= 1 & var75 <= 49) & (var76 >= 1 & var76 <= 49) & (var77 >= 1 & var77 <= 49) & (var78 >= 1 & var78 <= 49) & (var79 >= 1 & var79 <= 49) & (var80 >= 1 & var80 <= 49) & (var81 >= 1 & var81 <= 49) & (var82 >= 1 & var82 <= 49) & (var83 >= 1 & var83 <= 49) & (var84 >= 1 & var84 <= 49) & (var85 >= 1 & var85 <= 49) & (var86 >= 1 & var86 <= 49) & (var87 >= 1 & var87 <= 49) & (var88 >= 1 & var88 <= 49) & (var89 >= 1 & var89 <= 49) & (var90 >= 1 & var90 <= 49) & (var91 >= 1 & var91 <= 49) & (var92 >= 1 & var92 <= 49) & (var93 >= 1 & var93 <= 49) & (var94 >= 1 & var94 <= 49) & (var95 >= 1 & var95 <= 49) & (var96 >= 1 & var96 <= 49) & (var97 >= 1 & var97 <= 49) & (var98 >= 1 & var98 <= 49) &  1))
myvar0 = 1;
else exit(0);
if(( 1))
myvar0 = 1;
else exit(0);
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var0!=var14) & (var0!=var15) & (var0!=var16) & (var0!=var17) & (var0!=var18) & (var0!=var19) & (var0!=var20) & (var0!=var21) & (var0!=var22) & (var0!=var23) & (var0!=var24) & (var0!=var25) & (var0!=var26) & (var0!=var27) & (var0!=var28) & (var0!=var29) & (var0!=var30) & (var0!=var31) & (var0!=var32) & (var0!=var33) & (var0!=var34) & (var0!=var35) & (var0!=var36) & (var0!=var37) & (var0!=var38) & (var0!=var39) & (var0!=var40) & (var0!=var41) & (var0!=var42) & (var0!=var43) & (var0!=var44) & (var0!=var45) & (var0!=var46) & (var0!=var47) & (var0!=var48) & (var0!=var49) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var1!=var14) & (var1!=var15) & (var1!=var16) & (var1!=var17) & (var1!=var18) & (var1!=var19) & (var1!=var20) & (var1!=var21) & (var1!=var22) & (var1!=var23) & (var1!=var24) & (var1!=var25) & (var1!=var26) & (var1!=var27) & (var1!=var28) & (var1!=var29) & (var1!=var30) & (var1!=var31) & (var1!=var32) & (var1!=var33) & (var1!=var34) & (var1!=var35) & (var1!=var36) & (var1!=var37) & (var1!=var38) & (var1!=var39) & (var1!=var40) & (var1!=var41) & (var1!=var42) & (var1!=var43) & (var1!=var44) & (var1!=var45) & (var1!=var46) & (var1!=var47) & (var1!=var48) & (var1!=var49) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var2!=var14) & (var2!=var15) & (var2!=var16) & (var2!=var17) & (var2!=var18) & (var2!=var19) & (var2!=var20) & (var2!=var21) & (var2!=var22) & (var2!=var23) & (var2!=var24) & (var2!=var25) & (var2!=var26) & (var2!=var27) & (var2!=var28) & (var2!=var29) & (var2!=var30) & (var2!=var31) & (var2!=var32) & (var2!=var33) & (var2!=var34) & (var2!=var35) & (var2!=var36) & (var2!=var37) & (var2!=var38) & (var2!=var39) & (var2!=var40) & (var2!=var41) & (var2!=var42) & (var2!=var43) & (var2!=var44) & (var2!=var45) & (var2!=var46) & (var2!=var47) & (var2!=var48) & (var2!=var49) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var3!=var14) & (var3!=var15) & (var3!=var16) & (var3!=var17) & (var3!=var18) & (var3!=var19) & (var3!=var20) & (var3!=var21) & (var3!=var22) & (var3!=var23) & (var3!=var24) & (var3!=var25) & (var3!=var26) & (var3!=var27) & (var3!=var28) & (var3!=var29) & (var3!=var30) & (var3!=var31) & (var3!=var32) & (var3!=var33) & (var3!=var34) & (var3!=var35) & (var3!=var36) & (var3!=var37) & (var3!=var38) & (var3!=var39) & (var3!=var40) & (var3!=var41) & (var3!=var42) & (var3!=var43) & (var3!=var44) & (var3!=var45) & (var3!=var46) & (var3!=var47) & (var3!=var48) & (var3!=var49) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var4!=var14) & (var4!=var15) & (var4!=var16) & (var4!=var17) & (var4!=var18) & (var4!=var19) & (var4!=var20) & (var4!=var21) & (var4!=var22) & (var4!=var23) & (var4!=var24) & (var4!=var25) & (var4!=var26) & (var4!=var27) & (var4!=var28) & (var4!=var29) & (var4!=var30) & (var4!=var31) & (var4!=var32) & (var4!=var33) & (var4!=var34) & (var4!=var35) & (var4!=var36) & (var4!=var37) & (var4!=var38) & (var4!=var39) & (var4!=var40) & (var4!=var41) & (var4!=var42) & (var4!=var43) & (var4!=var44) & (var4!=var45) & (var4!=var46) & (var4!=var47) & (var4!=var48) & (var4!=var49) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var5!=var14) & (var5!=var15) & (var5!=var16) & (var5!=var17) & (var5!=var18) & (var5!=var19) & (var5!=var20) & (var5!=var21) & (var5!=var22) & (var5!=var23) & (var5!=var24) & (var5!=var25) & (var5!=var26) & (var5!=var27) & (var5!=var28) & (var5!=var29) & (var5!=var30) & (var5!=var31) & (var5!=var32) & (var5!=var33) & (var5!=var34) & (var5!=var35) & (var5!=var36) & (var5!=var37) & (var5!=var38) & (var5!=var39) & (var5!=var40) & (var5!=var41) & (var5!=var42) & (var5!=var43) & (var5!=var44) & (var5!=var45) & (var5!=var46) & (var5!=var47) & (var5!=var48) & (var5!=var49) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var6!=var14) & (var6!=var15) & (var6!=var16) & (var6!=var17) & (var6!=var18) & (var6!=var19) & (var6!=var20) & (var6!=var21) & (var6!=var22) & (var6!=var23) & (var6!=var24) & (var6!=var25) & (var6!=var26) & (var6!=var27) & (var6!=var28) & (var6!=var29) & (var6!=var30) & (var6!=var31) & (var6!=var32) & (var6!=var33) & (var6!=var34) & (var6!=var35) & (var6!=var36) & (var6!=var37) & (var6!=var38) & (var6!=var39) & (var6!=var40) & (var6!=var41) & (var6!=var42) & (var6!=var43) & (var6!=var44) & (var6!=var45) & (var6!=var46) & (var6!=var47) & (var6!=var48) & (var6!=var49) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var7!=var14) & (var7!=var15) & (var7!=var16) & (var7!=var17) & (var7!=var18) & (var7!=var19) & (var7!=var20) & (var7!=var21) & (var7!=var22) & (var7!=var23) & (var7!=var24) & (var7!=var25) & (var7!=var26) & (var7!=var27) & (var7!=var28) & (var7!=var29) & (var7!=var30) & (var7!=var31) & (var7!=var32) & (var7!=var33) & (var7!=var34) & (var7!=var35) & (var7!=var36) & (var7!=var37) & (var7!=var38) & (var7!=var39) & (var7!=var40) & (var7!=var41) & (var7!=var42) & (var7!=var43) & (var7!=var44) & (var7!=var45) & (var7!=var46) & (var7!=var47) & (var7!=var48) & (var7!=var49) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var8!=var15) & (var8!=var16) & (var8!=var17) & (var8!=var18) & (var8!=var19) & (var8!=var20) & (var8!=var21) & (var8!=var22) & (var8!=var23) & (var8!=var24) & (var8!=var25) & (var8!=var26) & (var8!=var27) & (var8!=var28) & (var8!=var29) & (var8!=var30) & (var8!=var31) & (var8!=var32) & (var8!=var33) & (var8!=var34) & (var8!=var35) & (var8!=var36) & (var8!=var37) & (var8!=var38) & (var8!=var39) & (var8!=var40) & (var8!=var41) & (var8!=var42) & (var8!=var43) & (var8!=var44) & (var8!=var45) & (var8!=var46) & (var8!=var47) & (var8!=var48) & (var8!=var49) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var9!=var15) & (var9!=var16) & (var9!=var17) & (var9!=var18) & (var9!=var19) & (var9!=var20) & (var9!=var21) & (var9!=var22) & (var9!=var23) & (var9!=var24) & (var9!=var25) & (var9!=var26) & (var9!=var27) & (var9!=var28) & (var9!=var29) & (var9!=var30) & (var9!=var31) & (var9!=var32) & (var9!=var33) & (var9!=var34) & (var9!=var35) & (var9!=var36) & (var9!=var37) & (var9!=var38) & (var9!=var39) & (var9!=var40) & (var9!=var41) & (var9!=var42) & (var9!=var43) & (var9!=var44) & (var9!=var45) & (var9!=var46) & (var9!=var47) & (var9!=var48) & (var9!=var49) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var10!=var15) & (var10!=var16) & (var10!=var17) & (var10!=var18) & (var10!=var19) & (var10!=var20) & (var10!=var21) & (var10!=var22) & (var10!=var23) & (var10!=var24) & (var10!=var25) & (var10!=var26) & (var10!=var27) & (var10!=var28) & (var10!=var29) & (var10!=var30) & (var10!=var31) & (var10!=var32) & (var10!=var33) & (var10!=var34) & (var10!=var35) & (var10!=var36) & (var10!=var37) & (var10!=var38) & (var10!=var39) & (var10!=var40) & (var10!=var41) & (var10!=var42) & (var10!=var43) & (var10!=var44) & (var10!=var45) & (var10!=var46) & (var10!=var47) & (var10!=var48) & (var10!=var49) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var11!=var16) & (var11!=var17) & (var11!=var18) & (var11!=var19) & (var11!=var20) & (var11!=var21) & (var11!=var22) & (var11!=var23) & (var11!=var24) & (var11!=var25) & (var11!=var26) & (var11!=var27) & (var11!=var28) & (var11!=var29) & (var11!=var30) & (var11!=var31) & (var11!=var32) & (var11!=var33) & (var11!=var34) & (var11!=var35) & (var11!=var36) & (var11!=var37) & (var11!=var38) & (var11!=var39) & (var11!=var40) & (var11!=var41) & (var11!=var42) & (var11!=var43) & (var11!=var44) & (var11!=var45) & (var11!=var46) & (var11!=var47) & (var11!=var48) & (var11!=var49) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var12!=var20) & (var12!=var21) & (var12!=var22) & (var12!=var23) & (var12!=var24) & (var12!=var25) & (var12!=var26) & (var12!=var27) & (var12!=var28) & (var12!=var29) & (var12!=var30) & (var12!=var31) & (var12!=var32) & (var12!=var33) & (var12!=var34) & (var12!=var35) & (var12!=var36) & (var12!=var37) & (var12!=var38) & (var12!=var39) & (var12!=var40) & (var12!=var41) & (var12!=var42) & (var12!=var43) & (var12!=var44) & (var12!=var45) & (var12!=var46) & (var12!=var47) & (var12!=var48) & (var12!=var49) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var13!=var20) & (var13!=var21) & (var13!=var22) & (var13!=var23) & (var13!=var24) & (var13!=var25) & (var13!=var26) & (var13!=var27) & (var13!=var28) & (var13!=var29) & (var13!=var30) & (var13!=var31) & (var13!=var32) & (var13!=var33) & (var13!=var34) & (var13!=var35) & (var13!=var36) & (var13!=var37) & (var13!=var38) & (var13!=var39) & (var13!=var40) & (var13!=var41) & (var13!=var42) & (var13!=var43) & (var13!=var44) & (var13!=var45) & (var13!=var46) & (var13!=var47) & (var13!=var48) & (var13!=var49) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var14!=var21) & (var14!=var22) & (var14!=var23) & (var14!=var24) & (var14!=var25) & (var14!=var26) & (var14!=var27) & (var14!=var28) & (var14!=var29) & (var14!=var30) & (var14!=var31) & (var14!=var32) & (var14!=var33) & (var14!=var34) & (var14!=var35) & (var14!=var36) & (var14!=var37) & (var14!=var38) & (var14!=var39) & (var14!=var40) & (var14!=var41) & (var14!=var42) & (var14!=var43) & (var14!=var44) & (var14!=var45) & (var14!=var46) & (var14!=var47) & (var14!=var48) & (var14!=var49) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var15!=var21) & (var15!=var22) & (var15!=var23) & (var15!=var24) & (var15!=var25) & (var15!=var26) & (var15!=var27) & (var15!=var28) & (var15!=var29) & (var15!=var30) & (var15!=var31) & (var15!=var32) & (var15!=var33) & (var15!=var34) & (var15!=var35) & (var15!=var36) & (var15!=var37) & (var15!=var38) & (var15!=var39) & (var15!=var40) & (var15!=var41) & (var15!=var42) & (var15!=var43) & (var15!=var44) & (var15!=var45) & (var15!=var46) & (var15!=var47) & (var15!=var48) & (var15!=var49) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var16!=var23) & (var16!=var24) & (var16!=var25) & (var16!=var26) & (var16!=var27) & (var16!=var28) & (var16!=var29) & (var16!=var30) & (var16!=var31) & (var16!=var32) & (var16!=var33) & (var16!=var34) & (var16!=var35) & (var16!=var36) & (var16!=var37) & (var16!=var38) & (var16!=var39) & (var16!=var40) & (var16!=var41) & (var16!=var42) & (var16!=var43) & (var16!=var44) & (var16!=var45) & (var16!=var46) & (var16!=var47) & (var16!=var48) & (var16!=var49) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var17!=var23) & (var17!=var24) & (var17!=var25) & (var17!=var26) & (var17!=var27) & (var17!=var28) & (var17!=var29) & (var17!=var30) & (var17!=var31) & (var17!=var32) & (var17!=var33) & (var17!=var34) & (var17!=var35) & (var17!=var36) & (var17!=var37) & (var17!=var38) & (var17!=var39) & (var17!=var40) & (var17!=var41) & (var17!=var42) & (var17!=var43) & (var17!=var44) & (var17!=var45) & (var17!=var46) & (var17!=var47) & (var17!=var48) & (var17!=var49) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var18!=var23) & (var18!=var24) & (var18!=var25) & (var18!=var26) & (var18!=var27) & (var18!=var28) & (var18!=var29) & (var18!=var30) & (var18!=var31) & (var18!=var32) & (var18!=var33) & (var18!=var34) & (var18!=var35) & (var18!=var36) & (var18!=var37) & (var18!=var38) & (var18!=var39) & (var18!=var40) & (var18!=var41) & (var18!=var42) & (var18!=var43) & (var18!=var44) & (var18!=var45) & (var18!=var46) & (var18!=var47) & (var18!=var48) & (var18!=var49) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var19!=var23) & (var19!=var24) & (var19!=var25) & (var19!=var26) & (var19!=var27) & (var19!=var28) & (var19!=var29) & (var19!=var30) & (var19!=var31) & (var19!=var32) & (var19!=var33) & (var19!=var34) & (var19!=var35) & (var19!=var36) & (var19!=var37) & (var19!=var38) & (var19!=var39) & (var19!=var40) & (var19!=var41) & (var19!=var42) & (var19!=var43) & (var19!=var44) & (var19!=var45) & (var19!=var46) & (var19!=var47) & (var19!=var48) & (var19!=var49) & (var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var20!=var27) & (var20!=var28) & (var20!=var29) & (var20!=var30) & (var20!=var31) & (var20!=var32) & (var20!=var33) & (var20!=var34) & (var20!=var35) & (var20!=var36) & (var20!=var37) & (var20!=var38) & (var20!=var39) & (var20!=var40) & (var20!=var41) & (var20!=var42) & (var20!=var43) & (var20!=var44) & (var20!=var45) & (var20!=var46) & (var20!=var47) & (var20!=var48) & (var20!=var49) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var21!=var30) & (var21!=var31) & (var21!=var32) & (var21!=var33) & (var21!=var34) & (var21!=var35) & (var21!=var36) & (var21!=var37) & (var21!=var38) & (var21!=var39) & (var21!=var40) & (var21!=var41) & (var21!=var42) & (var21!=var43) & (var21!=var44) & (var21!=var45) & (var21!=var46) & (var21!=var47) & (var21!=var48) & (var21!=var49) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var22!=var30) & (var22!=var31) & (var22!=var32) & (var22!=var33) & (var22!=var34) & (var22!=var35) & (var22!=var36) & (var22!=var37) & (var22!=var38) & (var22!=var39) & (var22!=var40) & (var22!=var41) & (var22!=var42) & (var22!=var43) & (var22!=var44) & (var22!=var45) & (var22!=var46) & (var22!=var47) & (var22!=var48) & (var22!=var49) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var23!=var30) & (var23!=var31) & (var23!=var32) & (var23!=var33) & (var23!=var34) & (var23!=var35) & (var23!=var36) & (var23!=var37) & (var23!=var38) & (var23!=var39) & (var23!=var40) & (var23!=var41) & (var23!=var42) & (var23!=var43) & (var23!=var44) & (var23!=var45) & (var23!=var46) & (var23!=var47) & (var23!=var48) & (var23!=var49) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var24!=var30) & (var24!=var31) & (var24!=var32) & (var24!=var33) & (var24!=var34) & (var24!=var35) & (var24!=var36) & (var24!=var37) & (var24!=var38) & (var24!=var39) & (var24!=var40) & (var24!=var41) & (var24!=var42) & (var24!=var43) & (var24!=var44) & (var24!=var45) & (var24!=var46) & (var24!=var47) & (var24!=var48) & (var24!=var49) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var25!=var30) & (var25!=var31) & (var25!=var32) & (var25!=var33) & (var25!=var34) & (var25!=var35) & (var25!=var36) & (var25!=var37) & (var25!=var38) & (var25!=var39) & (var25!=var40) & (var25!=var41) & (var25!=var42) & (var25!=var43) & (var25!=var44) & (var25!=var45) & (var25!=var46) & (var25!=var47) & (var25!=var48) & (var25!=var49) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var26!=var30) & (var26!=var31) & (var26!=var32) & (var26!=var33) & (var26!=var34) & (var26!=var35) & (var26!=var36) & (var26!=var37) & (var26!=var38) & (var26!=var39) & (var26!=var40) & (var26!=var41) & (var26!=var42) & (var26!=var43) & (var26!=var44) & (var26!=var45) & (var26!=var46) & (var26!=var47) & (var26!=var48) & (var26!=var49) & (var27!=var28) & (var27!=var29) & (var27!=var30) & (var27!=var31) & (var27!=var32) & (var27!=var33) & (var27!=var34) & (var27!=var35) & (var27!=var36) & (var27!=var37) & (var27!=var38) & (var27!=var39) & (var27!=var40) & (var27!=var41) & (var27!=var42) & (var27!=var43) & (var27!=var44) & (var27!=var45) & (var27!=var46) & (var27!=var47) & (var27!=var48) & (var27!=var49) & (var28!=var29) & (var28!=var30) & (var28!=var31) & (var28!=var32) & (var28!=var33) & (var28!=var34) & (var28!=var35) & (var28!=var36) & (var28!=var37) & (var28!=var38) & (var28!=var39) & (var28!=var40) & (var28!=var41) & (var28!=var42) & (var28!=var43) & (var28!=var44) & (var28!=var45) & (var28!=var46) & (var28!=var47) & (var28!=var48) & (var28!=var49) & (var29!=var30) & (var29!=var31) & (var29!=var32) & (var29!=var33) & (var29!=var34) & (var29!=var35) & (var29!=var36) & (var29!=var37) & (var29!=var38) & (var29!=var39) & (var29!=var40) & (var29!=var41) & (var29!=var42) & (var29!=var43) & (var29!=var44) & (var29!=var45) & (var29!=var46) & (var29!=var47) & (var29!=var48) & (var29!=var49) & (var30!=var31) & (var30!=var32) & (var30!=var33) & (var30!=var34) & (var30!=var35) & (var30!=var36) & (var30!=var37) & (var30!=var38) & (var30!=var39) & (var30!=var40) & (var30!=var41) & (var30!=var42) & (var30!=var43) & (var30!=var44) & (var30!=var45) & (var30!=var46) & (var30!=var47) & (var30!=var48) & (var30!=var49) & (var31!=var32) & (var31!=var33) & (var31!=var34) & (var31!=var35) & (var31!=var36) & (var31!=var37) & (var31!=var38) & (var31!=var39) & (var31!=var40) & (var31!=var41) & (var31!=var42) & (var31!=var43) & (var31!=var44) & (var31!=var45) & (var31!=var46) & (var31!=var47) & (var31!=var48) & (var31!=var49) & (var32!=var33) & (var32!=var34) & (var32!=var35) & (var32!=var36) & (var32!=var37) & (var32!=var38) & (var32!=var39) & (var32!=var40) & (var32!=var41) & (var32!=var42) & (var32!=var43) & (var32!=var44) & (var32!=var45) & (var32!=var46) & (var32!=var47) & (var32!=var48) & (var32!=var49) & (var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var33!=var38) & (var33!=var39) & (var33!=var40) & (var33!=var41) & (var33!=var42) & (var33!=var43) & (var33!=var44) & (var33!=var45) & (var33!=var46) & (var33!=var47) & (var33!=var48) & (var33!=var49) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var34!=var38) & (var34!=var39) & (var34!=var40) & (var34!=var41) & (var34!=var42) & (var34!=var43) & (var34!=var44) & (var34!=var45) & (var34!=var46) & (var34!=var47) & (var34!=var48) & (var34!=var49) & (var35!=var36) & (var35!=var37) & (var35!=var38) & (var35!=var39) & (var35!=var40) & (var35!=var41) & (var35!=var42) & (var35!=var43) & (var35!=var44) & (var35!=var45) & (var35!=var46) & (var35!=var47) & (var35!=var48) & (var35!=var49) & (var36!=var37) & (var36!=var38) & (var36!=var39) & (var36!=var40) & (var36!=var41) & (var36!=var42) & (var36!=var43) & (var36!=var44) & (var36!=var45) & (var36!=var46) & (var36!=var47) & (var36!=var48) & (var36!=var49) & (var37!=var38) & (var37!=var39) & (var37!=var40) & (var37!=var41) & (var37!=var42) & (var37!=var43) & (var37!=var44) & (var37!=var45) & (var37!=var46) & (var37!=var47) & (var37!=var48) & (var37!=var49) & (var38!=var39) & (var38!=var40) & (var38!=var41) & (var38!=var42) & (var38!=var43) & (var38!=var44) & (var38!=var45) & (var38!=var46) & (var38!=var47) & (var38!=var48) & (var38!=var49) & (var39!=var40) & (var39!=var41) & (var39!=var42) & (var39!=var43) & (var39!=var44) & (var39!=var45) & (var39!=var46) & (var39!=var47) & (var39!=var48) & (var39!=var49) & (var40!=var41) & (var40!=var42) & (var40!=var43) & (var40!=var44) & (var40!=var45) & (var40!=var46) & (var40!=var47) & (var40!=var48) & (var40!=var49) & (var41!=var42) & (var41!=var43) & (var41!=var44) & (var41!=var45) & (var41!=var46) & (var41!=var47) & (var41!=var48) & (var41!=var49) & (var42!=var43) & (var42!=var44) & (var42!=var45) & (var42!=var46) & (var42!=var47) & (var42!=var48) & (var42!=var49) & (var43!=var44) & (var43!=var45) & (var43!=var46) & (var43!=var47) & (var43!=var48) & (var43!=var49) & (var44!=var45) & (var44!=var46) & (var44!=var47) & (var44!=var48) & (var44!=var49) & (var45!=var46) & (var45!=var47) & (var45!=var48) & (var45!=var49) & (var46!=var47) & (var46!=var48) & (var46!=var49) & (var47!=var48) & (var47!=var49) & (var48!=var49) &  1))
myvar0 = 1;
else exit(0);
if(((var50!=var51) & (var50!=var52) & (var50!=var53) & (var50!=var54) & (var50!=var55) & (var50!=var56) & (var50!=var57) & (var50!=var58) & (var50!=var59) & (var50!=var60) & (var50!=var61) & (var50!=var62) & (var50!=var63) & (var50!=var64) & (var50!=var65) & (var50!=var66) & (var50!=var67) & (var50!=var68) & (var50!=var69) & (var50!=var70) & (var50!=var71) & (var50!=var72) & (var50!=var73) & (var50!=var74) & (var50!=var75) & (var50!=var76) & (var50!=var77) & (var50!=var78) & (var50!=var79) & (var50!=var80) & (var50!=var81) & (var50!=var82) & (var50!=var83) & (var50!=var84) & (var50!=var85) & (var50!=var86) & (var50!=var87) & (var50!=var88) & (var50!=var89) & (var50!=var90) & (var50!=var91) & (var50!=var92) & (var50!=var93) & (var50!=var94) & (var50!=var95) & (var50!=var96) & (var50!=var97) & (var50!=var98) & (var51!=var52) & (var51!=var53) & (var51!=var54) & (var51!=var55) & (var51!=var56) & (var51!=var57) & (var51!=var58) & (var51!=var59) & (var51!=var60) & (var51!=var61) & (var51!=var62) & (var51!=var63) & (var51!=var64) & (var51!=var65) & (var51!=var66) & (var51!=var67) & (var51!=var68) & (var51!=var69) & (var51!=var70) & (var51!=var71) & (var51!=var72) & (var51!=var73) & (var51!=var74) & (var51!=var75) & (var51!=var76) & (var51!=var77) & (var51!=var78) & (var51!=var79) & (var51!=var80) & (var51!=var81) & (var51!=var82) & (var51!=var83) & (var51!=var84) & (var51!=var85) & (var51!=var86) & (var51!=var87) & (var51!=var88) & (var51!=var89) & (var51!=var90) & (var51!=var91) & (var51!=var92) & (var51!=var93) & (var51!=var94) & (var51!=var95) & (var51!=var96) & (var51!=var97) & (var51!=var98) & (var52!=var53) & (var52!=var54) & (var52!=var55) & (var52!=var56) & (var52!=var57) & (var52!=var58) & (var52!=var59) & (var52!=var60) & (var52!=var61) & (var52!=var62) & (var52!=var63) & (var52!=var64) & (var52!=var65) & (var52!=var66) & (var52!=var67) & (var52!=var68) & (var52!=var69) & (var52!=var70) & (var52!=var71) & (var52!=var72) & (var52!=var73) & (var52!=var74) & (var52!=var75) & (var52!=var76) & (var52!=var77) & (var52!=var78) & (var52!=var79) & (var52!=var80) & (var52!=var81) & (var52!=var82) & (var52!=var83) & (var52!=var84) & (var52!=var85) & (var52!=var86) & (var52!=var87) & (var52!=var88) & (var52!=var89) & (var52!=var90) & (var52!=var91) & (var52!=var92) & (var52!=var93) & (var52!=var94) & (var52!=var95) & (var52!=var96) & (var52!=var97) & (var52!=var98) & (var53!=var54) & (var53!=var55) & (var53!=var56) & (var53!=var57) & (var53!=var58) & (var53!=var59) & (var53!=var60) & (var53!=var61) & (var53!=var62) & (var53!=var63) & (var53!=var64) & (var53!=var65) & (var53!=var66) & (var53!=var67) & (var53!=var68) & (var53!=var69) & (var53!=var70) & (var53!=var71) & (var53!=var72) & (var53!=var73) & (var53!=var74) & (var53!=var75) & (var53!=var76) & (var53!=var77) & (var53!=var78) & (var53!=var79) & (var53!=var80) & (var53!=var81) & (var53!=var82) & (var53!=var83) & (var53!=var84) & (var53!=var85) & (var53!=var86) & (var53!=var87) & (var53!=var88) & (var53!=var89) & (var53!=var90) & (var53!=var91) & (var53!=var92) & (var53!=var93) & (var53!=var94) & (var53!=var95) & (var53!=var96) & (var53!=var97) & (var53!=var98) & (var54!=var55) & (var54!=var56) & (var54!=var57) & (var54!=var58) & (var54!=var59) & (var54!=var60) & (var54!=var61) & (var54!=var62) & (var54!=var63) & (var54!=var64) & (var54!=var65) & (var54!=var66) & (var54!=var67) & (var54!=var68) & (var54!=var69) & (var54!=var70) & (var54!=var71) & (var54!=var72) & (var54!=var73) & (var54!=var74) & (var54!=var75) & (var54!=var76) & (var54!=var77) & (var54!=var78) & (var54!=var79) & (var54!=var80) & (var54!=var81) & (var54!=var82) & (var54!=var83) & (var54!=var84) & (var54!=var85) & (var54!=var86) & (var54!=var87) & (var54!=var88) & (var54!=var89) & (var54!=var90) & (var54!=var91) & (var54!=var92) & (var54!=var93) & (var54!=var94) & (var54!=var95) & (var54!=var96) & (var54!=var97) & (var54!=var98) & (var55!=var56) & (var55!=var57) & (var55!=var58) & (var55!=var59) & (var55!=var60) & (var55!=var61) & (var55!=var62) & (var55!=var63) & (var55!=var64) & (var55!=var65) & (var55!=var66) & (var55!=var67) & (var55!=var68) & (var55!=var69) & (var55!=var70) & (var55!=var71) & (var55!=var72) & (var55!=var73) & (var55!=var74) & (var55!=var75) & (var55!=var76) & (var55!=var77) & (var55!=var78) & (var55!=var79) & (var55!=var80) & (var55!=var81) & (var55!=var82) & (var55!=var83) & (var55!=var84) & (var55!=var85) & (var55!=var86) & (var55!=var87) & (var55!=var88) & (var55!=var89) & (var55!=var90) & (var55!=var91) & (var55!=var92) & (var55!=var93) & (var55!=var94) & (var55!=var95) & (var55!=var96) & (var55!=var97) & (var55!=var98) & (var56!=var57) & (var56!=var58) & (var56!=var59) & (var56!=var60) & (var56!=var61) & (var56!=var62) & (var56!=var63) & (var56!=var64) & (var56!=var65) & (var56!=var66) & (var56!=var67) & (var56!=var68) & (var56!=var69) & (var56!=var70) & (var56!=var71) & (var56!=var72) & (var56!=var73) & (var56!=var74) & (var56!=var75) & (var56!=var76) & (var56!=var77) & (var56!=var78) & (var56!=var79) & (var56!=var80) & (var56!=var81) & (var56!=var82) & (var56!=var83) & (var56!=var84) & (var56!=var85) & (var56!=var86) & (var56!=var87) & (var56!=var88) & (var56!=var89) & (var56!=var90) & (var56!=var91) & (var56!=var92) & (var56!=var93) & (var56!=var94) & (var56!=var95) & (var56!=var96) & (var56!=var97) & (var56!=var98) & (var57!=var58) & (var57!=var59) & (var57!=var60) & (var57!=var61) & (var57!=var62) & (var57!=var63) & (var57!=var64) & (var57!=var65) & (var57!=var66) & (var57!=var67) & (var57!=var68) & (var57!=var69) & (var57!=var70) & (var57!=var71) & (var57!=var72) & (var57!=var73) & (var57!=var74) & (var57!=var75) & (var57!=var76) & (var57!=var77) & (var57!=var78) & (var57!=var79) & (var57!=var80) & (var57!=var81) & (var57!=var82) & (var57!=var83) & (var57!=var84) & (var57!=var85) & (var57!=var86) & (var57!=var87) & (var57!=var88) & (var57!=var89) & (var57!=var90) & (var57!=var91) & (var57!=var92) & (var57!=var93) & (var57!=var94) & (var57!=var95) & (var57!=var96) & (var57!=var97) & (var57!=var98) & (var58!=var59) & (var58!=var60) & (var58!=var61) & (var58!=var62) & (var58!=var63) & (var58!=var64) & (var58!=var65) & (var58!=var66) & (var58!=var67) & (var58!=var68) & (var58!=var69) & (var58!=var70) & (var58!=var71) & (var58!=var72) & (var58!=var73) & (var58!=var74) & (var58!=var75) & (var58!=var76) & (var58!=var77) & (var58!=var78) & (var58!=var79) & (var58!=var80) & (var58!=var81) & (var58!=var82) & (var58!=var83) & (var58!=var84) & (var58!=var85) & (var58!=var86) & (var58!=var87) & (var58!=var88) & (var58!=var89) & (var58!=var90) & (var58!=var91) & (var58!=var92) & (var58!=var93) & (var58!=var94) & (var58!=var95) & (var58!=var96) & (var58!=var97) & (var58!=var98) & (var59!=var60) & (var59!=var61) & (var59!=var62) & (var59!=var63) & (var59!=var64) & (var59!=var65) & (var59!=var66) & (var59!=var67) & (var59!=var68) & (var59!=var69) & (var59!=var70) & (var59!=var71) & (var59!=var72) & (var59!=var73) & (var59!=var74) & (var59!=var75) & (var59!=var76) & (var59!=var77) & (var59!=var78) & (var59!=var79) & (var59!=var80) & (var59!=var81) & (var59!=var82) & (var59!=var83) & (var59!=var84) & (var59!=var85) & (var59!=var86) & (var59!=var87) & (var59!=var88) & (var59!=var89) & (var59!=var90) & (var59!=var91) & (var59!=var92) & (var59!=var93) & (var59!=var94) & (var59!=var95) & (var59!=var96) & (var59!=var97) & (var59!=var98) & (var60!=var61) & (var60!=var62) & (var60!=var63) & (var60!=var64) & (var60!=var65) & (var60!=var66) & (var60!=var67) & (var60!=var68) & (var60!=var69) & (var60!=var70) & (var60!=var71) & (var60!=var72) & (var60!=var73) & (var60!=var74) & (var60!=var75) & (var60!=var76) & (var60!=var77) & (var60!=var78) & (var60!=var79) & (var60!=var80) & (var60!=var81) & (var60!=var82) & (var60!=var83) & (var60!=var84) & (var60!=var85) & (var60!=var86) & (var60!=var87) & (var60!=var88) & (var60!=var89) & (var60!=var90) & (var60!=var91) & (var60!=var92) & (var60!=var93) & (var60!=var94) & (var60!=var95) & (var60!=var96) & (var60!=var97) & (var60!=var98) & (var61!=var62) & (var61!=var63) & (var61!=var64) & (var61!=var65) & (var61!=var66) & (var61!=var67) & (var61!=var68) & (var61!=var69) & (var61!=var70) & (var61!=var71) & (var61!=var72) & (var61!=var73) & (var61!=var74) & (var61!=var75) & (var61!=var76) & (var61!=var77) & (var61!=var78) & (var61!=var79) & (var61!=var80) & (var61!=var81) & (var61!=var82) & (var61!=var83) & (var61!=var84) & (var61!=var85) & (var61!=var86) & (var61!=var87) & (var61!=var88) & (var61!=var89) & (var61!=var90) & (var61!=var91) & (var61!=var92) & (var61!=var93) & (var61!=var94) & (var61!=var95) & (var61!=var96) & (var61!=var97) & (var61!=var98) & (var62!=var63) & (var62!=var64) & (var62!=var65) & (var62!=var66) & (var62!=var67) & (var62!=var68) & (var62!=var69) & (var62!=var70) & (var62!=var71) & (var62!=var72) & (var62!=var73) & (var62!=var74) & (var62!=var75) & (var62!=var76) & (var62!=var77) & (var62!=var78) & (var62!=var79) & (var62!=var80) & (var62!=var81) & (var62!=var82) & (var62!=var83) & (var62!=var84) & (var62!=var85) & (var62!=var86) & (var62!=var87) & (var62!=var88) & (var62!=var89) & (var62!=var90) & (var62!=var91) & (var62!=var92) & (var62!=var93) & (var62!=var94) & (var62!=var95) & (var62!=var96) & (var62!=var97) & (var62!=var98) & (var63!=var64) & (var63!=var65) & (var63!=var66) & (var63!=var67) & (var63!=var68) & (var63!=var69) & (var63!=var70) & (var63!=var71) & (var63!=var72) & (var63!=var73) & (var63!=var74) & (var63!=var75) & (var63!=var76) & (var63!=var77) & (var63!=var78) & (var63!=var79) & (var63!=var80) & (var63!=var81) & (var63!=var82) & (var63!=var83) & (var63!=var84) & (var63!=var85) & (var63!=var86) & (var63!=var87) & (var63!=var88) & (var63!=var89) & (var63!=var90) & (var63!=var91) & (var63!=var92) & (var63!=var93) & (var63!=var94) & (var63!=var95) & (var63!=var96) & (var63!=var97) & (var63!=var98) & (var64!=var65) & (var64!=var66) & (var64!=var67) & (var64!=var68) & (var64!=var69) & (var64!=var70) & (var64!=var71) & (var64!=var72) & (var64!=var73) & (var64!=var74) & (var64!=var75) & (var64!=var76) & (var64!=var77) & (var64!=var78) & (var64!=var79) & (var64!=var80) & (var64!=var81) & (var64!=var82) & (var64!=var83) & (var64!=var84) & (var64!=var85) & (var64!=var86) & (var64!=var87) & (var64!=var88) & (var64!=var89) & (var64!=var90) & (var64!=var91) & (var64!=var92) & (var64!=var93) & (var64!=var94) & (var64!=var95) & (var64!=var96) & (var64!=var97) & (var64!=var98) & (var65!=var66) & (var65!=var67) & (var65!=var68) & (var65!=var69) & (var65!=var70) & (var65!=var71) & (var65!=var72) & (var65!=var73) & (var65!=var74) & (var65!=var75) & (var65!=var76) & (var65!=var77) & (var65!=var78) & (var65!=var79) & (var65!=var80) & (var65!=var81) & (var65!=var82) & (var65!=var83) & (var65!=var84) & (var65!=var85) & (var65!=var86) & (var65!=var87) & (var65!=var88) & (var65!=var89) & (var65!=var90) & (var65!=var91) & (var65!=var92) & (var65!=var93) & (var65!=var94) & (var65!=var95) & (var65!=var96) & (var65!=var97) & (var65!=var98) & (var66!=var67) & (var66!=var68) & (var66!=var69) & (var66!=var70) & (var66!=var71) & (var66!=var72) & (var66!=var73) & (var66!=var74) & (var66!=var75) & (var66!=var76) & (var66!=var77) & (var66!=var78) & (var66!=var79) & (var66!=var80) & (var66!=var81) & (var66!=var82) & (var66!=var83) & (var66!=var84) & (var66!=var85) & (var66!=var86) & (var66!=var87) & (var66!=var88) & (var66!=var89) & (var66!=var90) & (var66!=var91) & (var66!=var92) & (var66!=var93) & (var66!=var94) & (var66!=var95) & (var66!=var96) & (var66!=var97) & (var66!=var98) & (var67!=var68) & (var67!=var69) & (var67!=var70) & (var67!=var71) & (var67!=var72) & (var67!=var73) & (var67!=var74) & (var67!=var75) & (var67!=var76) & (var67!=var77) & (var67!=var78) & (var67!=var79) & (var67!=var80) & (var67!=var81) & (var67!=var82) & (var67!=var83) & (var67!=var84) & (var67!=var85) & (var67!=var86) & (var67!=var87) & (var67!=var88) & (var67!=var89) & (var67!=var90) & (var67!=var91) & (var67!=var92) & (var67!=var93) & (var67!=var94) & (var67!=var95) & (var67!=var96) & (var67!=var97) & (var67!=var98) & (var68!=var69) & (var68!=var70) & (var68!=var71) & (var68!=var72) & (var68!=var73) & (var68!=var74) & (var68!=var75) & (var68!=var76) & (var68!=var77) & (var68!=var78) & (var68!=var79) & (var68!=var80) & (var68!=var81) & (var68!=var82) & (var68!=var83) & (var68!=var84) & (var68!=var85) & (var68!=var86) & (var68!=var87) & (var68!=var88) & (var68!=var89) & (var68!=var90) & (var68!=var91) & (var68!=var92) & (var68!=var93) & (var68!=var94) & (var68!=var95) & (var68!=var96) & (var68!=var97) & (var68!=var98) & (var69!=var70) & (var69!=var71) & (var69!=var72) & (var69!=var73) & (var69!=var74) & (var69!=var75) & (var69!=var76) & (var69!=var77) & (var69!=var78) & (var69!=var79) & (var69!=var80) & (var69!=var81) & (var69!=var82) & (var69!=var83) & (var69!=var84) & (var69!=var85) & (var69!=var86) & (var69!=var87) & (var69!=var88) & (var69!=var89) & (var69!=var90) & (var69!=var91) & (var69!=var92) & (var69!=var93) & (var69!=var94) & (var69!=var95) & (var69!=var96) & (var69!=var97) & (var69!=var98) & (var70!=var71) & (var70!=var72) & (var70!=var73) & (var70!=var74) & (var70!=var75) & (var70!=var76) & (var70!=var77) & (var70!=var78) & (var70!=var79) & (var70!=var80) & (var70!=var81) & (var70!=var82) & (var70!=var83) & (var70!=var84) & (var70!=var85) & (var70!=var86) & (var70!=var87) & (var70!=var88) & (var70!=var89) & (var70!=var90) & (var70!=var91) & (var70!=var92) & (var70!=var93) & (var70!=var94) & (var70!=var95) & (var70!=var96) & (var70!=var97) & (var70!=var98) & (var71!=var72) & (var71!=var73) & (var71!=var74) & (var71!=var75) & (var71!=var76) & (var71!=var77) & (var71!=var78) & (var71!=var79) & (var71!=var80) & (var71!=var81) & (var71!=var82) & (var71!=var83) & (var71!=var84) & (var71!=var85) & (var71!=var86) & (var71!=var87) & (var71!=var88) & (var71!=var89) & (var71!=var90) & (var71!=var91) & (var71!=var92) & (var71!=var93) & (var71!=var94) & (var71!=var95) & (var71!=var96) & (var71!=var97) & (var71!=var98) & (var72!=var73) & (var72!=var74) & (var72!=var75) & (var72!=var76) & (var72!=var77) & (var72!=var78) & (var72!=var79) & (var72!=var80) & (var72!=var81) & (var72!=var82) & (var72!=var83) & (var72!=var84) & (var72!=var85) & (var72!=var86) & (var72!=var87) & (var72!=var88) & (var72!=var89) & (var72!=var90) & (var72!=var91) & (var72!=var92) & (var72!=var93) & (var72!=var94) & (var72!=var95) & (var72!=var96) & (var72!=var97) & (var72!=var98) & (var73!=var74) & (var73!=var75) & (var73!=var76) & (var73!=var77) & (var73!=var78) & (var73!=var79) & (var73!=var80) & (var73!=var81) & (var73!=var82) & (var73!=var83) & (var73!=var84) & (var73!=var85) & (var73!=var86) & (var73!=var87) & (var73!=var88) & (var73!=var89) & (var73!=var90) & (var73!=var91) & (var73!=var92) & (var73!=var93) & (var73!=var94) & (var73!=var95) & (var73!=var96) & (var73!=var97) & (var73!=var98) & (var74!=var75) & (var74!=var76) & (var74!=var77) & (var74!=var78) & (var74!=var79) & (var74!=var80) & (var74!=var81) & (var74!=var82) & (var74!=var83) & (var74!=var84) & (var74!=var85) & (var74!=var86) & (var74!=var87) & (var74!=var88) & (var74!=var89) & (var74!=var90) & (var74!=var91) & (var74!=var92) & (var74!=var93) & (var74!=var94) & (var74!=var95) & (var74!=var96) & (var74!=var97) & (var74!=var98) & (var75!=var76) & (var75!=var77) & (var75!=var78) & (var75!=var79) & (var75!=var80) & (var75!=var81) & (var75!=var82) & (var75!=var83) & (var75!=var84) & (var75!=var85) & (var75!=var86) & (var75!=var87) & (var75!=var88) & (var75!=var89) & (var75!=var90) & (var75!=var91) & (var75!=var92) & (var75!=var93) & (var75!=var94) & (var75!=var95) & (var75!=var96) & (var75!=var97) & (var75!=var98) & (var76!=var77) & (var76!=var78) & (var76!=var79) & (var76!=var80) & (var76!=var81) & (var76!=var82) & (var76!=var83) & (var76!=var84) & (var76!=var85) & (var76!=var86) & (var76!=var87) & (var76!=var88) & (var76!=var89) & (var76!=var90) & (var76!=var91) & (var76!=var92) & (var76!=var93) & (var76!=var94) & (var76!=var95) & (var76!=var96) & (var76!=var97) & (var76!=var98) & (var77!=var78) & (var77!=var79) & (var77!=var80) & (var77!=var81) & (var77!=var82) & (var77!=var83) & (var77!=var84) & (var77!=var85) & (var77!=var86) & (var77!=var87) & (var77!=var88) & (var77!=var89) & (var77!=var90) & (var77!=var91) & (var77!=var92) & (var77!=var93) & (var77!=var94) & (var77!=var95) & (var77!=var96) & (var77!=var97) & (var77!=var98) & (var78!=var79) & (var78!=var80) & (var78!=var81) & (var78!=var82) & (var78!=var83) & (var78!=var84) & (var78!=var85) & (var78!=var86) & (var78!=var87) & (var78!=var88) & (var78!=var89) & (var78!=var90) & (var78!=var91) & (var78!=var92) & (var78!=var93) & (var78!=var94) & (var78!=var95) & (var78!=var96) & (var78!=var97) & (var78!=var98) & (var79!=var80) & (var79!=var81) & (var79!=var82) & (var79!=var83) & (var79!=var84) & (var79!=var85) & (var79!=var86) & (var79!=var87) & (var79!=var88) & (var79!=var89) & (var79!=var90) & (var79!=var91) & (var79!=var92) & (var79!=var93) & (var79!=var94) & (var79!=var95) & (var79!=var96) & (var79!=var97) & (var79!=var98) & (var80!=var81) & (var80!=var82) & (var80!=var83) & (var80!=var84) & (var80!=var85) & (var80!=var86) & (var80!=var87) & (var80!=var88) & (var80!=var89) & (var80!=var90) & (var80!=var91) & (var80!=var92) & (var80!=var93) & (var80!=var94) & (var80!=var95) & (var80!=var96) & (var80!=var97) & (var80!=var98) & (var81!=var82) & (var81!=var83) & (var81!=var84) & (var81!=var85) & (var81!=var86) & (var81!=var87) & (var81!=var88) & (var81!=var89) & (var81!=var90) & (var81!=var91) & (var81!=var92) & (var81!=var93) & (var81!=var94) & (var81!=var95) & (var81!=var96) & (var81!=var97) & (var81!=var98) & (var82!=var83) & (var82!=var84) & (var82!=var85) & (var82!=var86) & (var82!=var87) & (var82!=var88) & (var82!=var89) & (var82!=var90) & (var82!=var91) & (var82!=var92) & (var82!=var93) & (var82!=var94) & (var82!=var95) & (var82!=var96) & (var82!=var97) & (var82!=var98) & (var83!=var84) & (var83!=var85) & (var83!=var86) & (var83!=var87) & (var83!=var88) & (var83!=var89) & (var83!=var90) & (var83!=var91) & (var83!=var92) & (var83!=var93) & (var83!=var94) & (var83!=var95) & (var83!=var96) & (var83!=var97) & (var83!=var98) & (var84!=var85) & (var84!=var86) & (var84!=var87) & (var84!=var88) & (var84!=var89) & (var84!=var90) & (var84!=var91) & (var84!=var92) & (var84!=var93) & (var84!=var94) & (var84!=var95) & (var84!=var96) & (var84!=var97) & (var84!=var98) & (var85!=var86) & (var85!=var87) & (var85!=var88) & (var85!=var89) & (var85!=var90) & (var85!=var91) & (var85!=var92) & (var85!=var93) & (var85!=var94) & (var85!=var95) & (var85!=var96) & (var85!=var97) & (var85!=var98) & (var86!=var87) & (var86!=var88) & (var86!=var89) & (var86!=var90) & (var86!=var91) & (var86!=var92) & (var86!=var93) & (var86!=var94) & (var86!=var95) & (var86!=var96) & (var86!=var97) & (var86!=var98) & (var87!=var88) & (var87!=var89) & (var87!=var90) & (var87!=var91) & (var87!=var92) & (var87!=var93) & (var87!=var94) & (var87!=var95) & (var87!=var96) & (var87!=var97) & (var87!=var98) & (var88!=var89) & (var88!=var90) & (var88!=var91) & (var88!=var92) & (var88!=var93) & (var88!=var94) & (var88!=var95) & (var88!=var96) & (var88!=var97) & (var88!=var98) & (var89!=var90) & (var89!=var91) & (var89!=var92) & (var89!=var93) & (var89!=var94) & (var89!=var95) & (var89!=var96) & (var89!=var97) & (var89!=var98) & (var90!=var91) & (var90!=var92) & (var90!=var93) & (var90!=var94) & (var90!=var95) & (var90!=var96) & (var90!=var97) & (var90!=var98) & (var91!=var92) & (var91!=var93) & (var91!=var94) & (var91!=var95) & (var91!=var96) & (var91!=var97) & (var91!=var98) & (var92!=var93) & (var92!=var94) & (var92!=var95) & (var92!=var96) & (var92!=var97) & (var92!=var98) & (var93!=var94) & (var93!=var95) & (var93!=var96) & (var93!=var97) & (var93!=var98) & (var94!=var95) & (var94!=var96) & (var94!=var97) & (var94!=var98) & (var95!=var96) & (var95!=var97) & (var95!=var98) & (var96!=var97) & (var96!=var98) & (var97!=var98) &  1))
myvar0 = 1;
else exit(0);
if(((var50 == dist(var0, var1)) & (var51 == dist(var1, var2)) & (var52 == dist(var2, var3)) & (var53 == dist(var3, var4)) & (var54 == dist(var4, var5)) & (var55 == dist(var5, var6)) & (var56 == dist(var6, var7)) & (var57 == dist(var7, var8)) & (var58 == dist(var8, var9)) & (var59 == dist(var9, var10)) & (var60 == dist(var10, var11)) & (var61 == dist(var11, var12)) & (var62 == dist(var12, var13)) & (var63 == dist(var13, var14)) & (var64 == dist(var14, var15)) & (var65 == dist(var15, var16)) & (var66 == dist(var16, var17)) & (var67 == dist(var17, var18)) & (var68 == dist(var18, var19)) & (var69 == dist(var19, var20)) & (var70 == dist(var20, var21)) & (var71 == dist(var21, var22)) & (var72 == dist(var22, var23)) & (var73 == dist(var23, var24)) & (var74 == dist(var24, var25)) & (var75 == dist(var25, var26)) & (var76 == dist(var26, var27)) & (var77 == dist(var27, var28)) & (var78 == dist(var28, var29)) & (var79 == dist(var29, var30)) & (var80 == dist(var30, var31)) & (var81 == dist(var31, var32)) & (var82 == dist(var32, var33)) & (var83 == dist(var33, var34)) & (var84 == dist(var34, var35)) & (var85 == dist(var35, var36)) & (var86 == dist(var36, var37)) & (var87 == dist(var37, var38)) & (var88 == dist(var38, var39)) & (var89 == dist(var39, var40)) & (var90 == dist(var40, var41)) & (var91 == dist(var41, var42)) & (var92 == dist(var42, var43)) & (var93 == dist(var43, var44)) & (var94 == dist(var44, var45)) & (var95 == dist(var45, var46)) & (var96 == dist(var46, var47)) & (var97 == dist(var47, var48)) & (var98 == dist(var48, var49)) &  1))
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
50 y[0]
51 y[1]
52 y[2]
53 y[3]
54 y[4]
55 y[5]
56 y[6]
57 y[7]
58 y[8]
59 y[9]
60 y[10]
61 y[11]
62 y[12]
63 y[13]
64 y[14]
65 y[15]
66 y[16]
67 y[17]
68 y[18]
69 y[19]
70 y[20]
71 y[21]
72 y[22]
73 y[23]
74 y[24]
75 y[25]
76 y[26]
77 y[27]
78 y[28]
79 y[29]
80 y[30]
81 y[31]
82 y[32]
83 y[33]
84 y[34]
85 y[35]
86 y[36]
87 y[37]
88 y[38]
89 y[39]
90 y[40]
91 y[41]
92 y[42]
93 y[43]
94 y[44]
95 y[45]
96 y[46]
97 y[47]
98 y[48]
 */}
