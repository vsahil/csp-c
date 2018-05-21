
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
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
int myvar0 = 1;
if((((var0 >= 1 && var0 <= 15) && (var1 >= 1 && var1 <= 15) && (var2 >= 1 && var2 <= 15) && (var3 >= 1 && var3 <= 15) && (var4 >= 1 && var4 <= 15) && (var5 >= 1 && var5 <= 15) && (var6 >= 1 && var6 <= 15) && (var7 >= 1 && var7 <= 15) && (var8 >= 1 && var8 <= 15) && (var9 >= 1 && var9 <= 15) && (var10 >= 1 && var10 <= 15) && (var11 >= 1 && var11 <= 15) && (var12 >= 1 && var12 <= 15) && (var13 >= 1 && var13 <= 15) && (var14 >= 1 && var14 <= 15) &&  1)) && (((var15 >= -14 && var15 <= 14 && var15 != 0 &&  1) && (var16 >= -14 && var16 <= 14 && var16 != 0 &&  1) && (var17 >= -14 && var17 <= 14 && var17 != 0 &&  1) && (var18 >= -14 && var18 <= 14 && var18 != 0 &&  1) && (var19 >= -14 && var19 <= 14 && var19 != 0 &&  1) && (var20 >= -14 && var20 <= 14 && var20 != 0 &&  1) && (var21 >= -14 && var21 <= 14 && var21 != 0 &&  1) && (var22 >= -14 && var22 <= 14 && var22 != 0 &&  1) && (var23 >= -14 && var23 <= 14 && var23 != 0 &&  1) && (var24 >= -14 && var24 <= 14 && var24 != 0 &&  1) && (var25 >= -14 && var25 <= 14 && var25 != 0 &&  1) && (var26 >= -14 && var26 <= 14 && var26 != 0 &&  1) && (var27 >= -14 && var27 <= 14 && var27 != 0 &&  1) && (var28 >= -14 && var28 <= 14 && var28 != 0 &&  1) && (var29 >= -14 && var29 <= 14 && var29 != 0 &&  1) && (var30 >= -14 && var30 <= 14 && var30 != 0 &&  1) && (var31 >= -14 && var31 <= 14 && var31 != 0 &&  1) && (var32 >= -14 && var32 <= 14 && var32 != 0 &&  1) && (var33 >= -14 && var33 <= 14 && var33 != 0 &&  1) && (var34 >= -14 && var34 <= 14 && var34 != 0 &&  1) && (var35 >= -14 && var35 <= 14 && var35 != 0 &&  1) && (var36 >= -14 && var36 <= 14 && var36 != 0 &&  1) && (var37 >= -14 && var37 <= 14 && var37 != 0 &&  1) && (var38 >= -14 && var38 <= 14 && var38 != 0 &&  1) && (var39 >= -14 && var39 <= 14 && var39 != 0 &&  1) && (var40 >= -14 && var40 <= 14 && var40 != 0 &&  1) && (var41 >= -14 && var41 <= 14 && var41 != 0 &&  1) && (var42 >= -14 && var42 <= 14 && var42 != 0 &&  1) && (var43 >= -14 && var43 <= 14 && var43 != 0 &&  1) && (var44 >= -14 && var44 <= 14 && var44 != 0 &&  1) && (var45 >= -14 && var45 <= 14 && var45 != 0 &&  1) && (var46 >= -14 && var46 <= 14 && var46 != 0 &&  1) && (var47 >= -14 && var47 <= 14 && var47 != 0 &&  1) && (var48 >= -14 && var48 <= 14 && var48 != 0 &&  1) && (var49 >= -14 && var49 <= 14 && var49 != 0 &&  1) && (var50 >= -14 && var50 <= 14 && var50 != 0 &&  1) && (var51 >= -14 && var51 <= 14 && var51 != 0 &&  1) && (var52 >= -14 && var52 <= 14 && var52 != 0 &&  1) && (var53 >= -14 && var53 <= 14 && var53 != 0 &&  1) && (var54 >= -14 && var54 <= 14 && var54 != 0 &&  1) && (var55 >= -14 && var55 <= 14 && var55 != 0 &&  1) && (var56 >= -14 && var56 <= 14 && var56 != 0 &&  1) && (var57 >= -14 && var57 <= 14 && var57 != 0 &&  1) && (var58 >= -14 && var58 <= 14 && var58 != 0 &&  1) && (var59 >= -14 && var59 <= 14 && var59 != 0 &&  1) && (var60 >= -14 && var60 <= 14 && var60 != 0 &&  1) && (var61 >= -14 && var61 <= 14 && var61 != 0 &&  1) && (var62 >= -14 && var62 <= 14 && var62 != 0 &&  1) && (var63 >= -14 && var63 <= 14 && var63 != 0 &&  1) && (var64 >= -14 && var64 <= 14 && var64 != 0 &&  1) && (var65 >= -14 && var65 <= 14 && var65 != 0 &&  1) && (var66 >= -14 && var66 <= 14 && var66 != 0 &&  1) && (var67 >= -14 && var67 <= 14 && var67 != 0 &&  1) && (var68 >= -14 && var68 <= 14 && var68 != 0 &&  1) && (var69 >= -14 && var69 <= 14 && var69 != 0 &&  1) && (var70 >= -14 && var70 <= 14 && var70 != 0 &&  1) && (var71 >= -14 && var71 <= 14 && var71 != 0 &&  1) && (var72 >= -14 && var72 <= 14 && var72 != 0 &&  1) && (var73 >= -14 && var73 <= 14 && var73 != 0 &&  1) && (var74 >= -14 && var74 <= 14 && var74 != 0 &&  1) && (var75 >= -14 && var75 <= 14 && var75 != 0 &&  1) && (var76 >= -14 && var76 <= 14 && var76 != 0 &&  1) && (var77 >= -14 && var77 <= 14 && var77 != 0 &&  1) && (var78 >= -14 && var78 <= 14 && var78 != 0 &&  1) && (var79 >= -14 && var79 <= 14 && var79 != 0 &&  1) && (var80 >= -14 && var80 <= 14 && var80 != 0 &&  1) && (var81 >= -14 && var81 <= 14 && var81 != 0 &&  1) && (var82 >= -14 && var82 <= 14 && var82 != 0 &&  1) && (var83 >= -14 && var83 <= 14 && var83 != 0 &&  1) && (var84 >= -14 && var84 <= 14 && var84 != 0 &&  1) && (var85 >= -14 && var85 <= 14 && var85 != 0 &&  1) && (var86 >= -14 && var86 <= 14 && var86 != 0 &&  1) && (var87 >= -14 && var87 <= 14 && var87 != 0 &&  1) && (var88 >= -14 && var88 <= 14 && var88 != 0 &&  1) && (var89 >= -14 && var89 <= 14 && var89 != 0 &&  1) && (var90 >= -14 && var90 <= 14 && var90 != 0 &&  1) && (var91 >= -14 && var91 <= 14 && var91 != 0 &&  1) && (var92 >= -14 && var92 <= 14 && var92 != 0 &&  1) && (var93 >= -14 && var93 <= 14 && var93 != 0 &&  1) && (var94 >= -14 && var94 <= 14 && var94 != 0 &&  1) && (var95 >= -14 && var95 <= 14 && var95 != 0 &&  1) && (var96 >= -14 && var96 <= 14 && var96 != 0 &&  1) && (var97 >= -14 && var97 <= 14 && var97 != 0 &&  1) && (var98 >= -14 && var98 <= 14 && var98 != 0 &&  1) && (var99 >= -14 && var99 <= 14 && var99 != 0 &&  1) && (var100 >= -14 && var100 <= 14 && var100 != 0 &&  1) && (var101 >= -14 && var101 <= 14 && var101 != 0 &&  1) && (var102 >= -14 && var102 <= 14 && var102 != 0 &&  1) && (var103 >= -14 && var103 <= 14 && var103 != 0 &&  1) && (var104 >= -14 && var104 <= 14 && var104 != 0 &&  1) && (var105 >= -14 && var105 <= 14 && var105 != 0 &&  1) && (var106 >= -14 && var106 <= 14 && var106 != 0 &&  1) && (var107 >= -14 && var107 <= 14 && var107 != 0 &&  1) && (var108 >= -14 && var108 <= 14 && var108 != 0 &&  1) && (var109 >= -14 && var109 <= 14 && var109 != 0 &&  1) && (var110 >= -14 && var110 <= 14 && var110 != 0 &&  1) && (var111 >= -14 && var111 <= 14 && var111 != 0 &&  1) && (var112 >= -14 && var112 <= 14 && var112 != 0 &&  1) && (var113 >= -14 && var113 <= 14 && var113 != 0 &&  1) && (var114 >= -14 && var114 <= 14 && var114 != 0 &&  1) && (var115 >= -14 && var115 <= 14 && var115 != 0 &&  1) && (var116 >= -14 && var116 <= 14 && var116 != 0 &&  1) &&  1)) && (((var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var0!=var10) && (var0!=var11) && (var0!=var12) && (var0!=var13) && (var0!=var14) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var1!=var10) && (var1!=var11) && (var1!=var12) && (var1!=var13) && (var1!=var14) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var2!=var10) && (var2!=var11) && (var2!=var12) && (var2!=var13) && (var2!=var14) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var3!=var10) && (var3!=var11) && (var3!=var12) && (var3!=var13) && (var3!=var14) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var4!=var10) && (var4!=var11) && (var4!=var12) && (var4!=var13) && (var4!=var14) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var5!=var10) && (var5!=var11) && (var5!=var12) && (var5!=var13) && (var5!=var14) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var6!=var10) && (var6!=var11) && (var6!=var12) && (var6!=var13) && (var6!=var14) && (var7!=var8) && (var7!=var9) && (var7!=var10) && (var7!=var11) && (var7!=var12) && (var7!=var13) && (var7!=var14) && (var8!=var9) && (var8!=var10) && (var8!=var11) && (var8!=var12) && (var8!=var13) && (var8!=var14) && (var9!=var10) && (var9!=var11) && (var9!=var12) && (var9!=var13) && (var9!=var14) && (var10!=var11) && (var10!=var12) && (var10!=var13) && (var10!=var14) && (var11!=var12) && (var11!=var13) && (var11!=var14) && (var12!=var13) && (var12!=var14) && (var13!=var14) &&  1)) && (((var15!=var16) && (var15!=var17) && (var15!=var18) && (var15!=var19) && (var15!=var20) && (var15!=var21) && (var15!=var22) && (var15!=var23) && (var15!=var24) && (var15!=var25) && (var15!=var26) && (var15!=var27) && (var15!=var28) && (var16!=var17) && (var16!=var18) && (var16!=var19) && (var16!=var20) && (var16!=var21) && (var16!=var22) && (var16!=var23) && (var16!=var24) && (var16!=var25) && (var16!=var26) && (var16!=var27) && (var16!=var28) && (var17!=var18) && (var17!=var19) && (var17!=var20) && (var17!=var21) && (var17!=var22) && (var17!=var23) && (var17!=var24) && (var17!=var25) && (var17!=var26) && (var17!=var27) && (var17!=var28) && (var18!=var19) && (var18!=var20) && (var18!=var21) && (var18!=var22) && (var18!=var23) && (var18!=var24) && (var18!=var25) && (var18!=var26) && (var18!=var27) && (var18!=var28) && (var19!=var20) && (var19!=var21) && (var19!=var22) && (var19!=var23) && (var19!=var24) && (var19!=var25) && (var19!=var26) && (var19!=var27) && (var19!=var28) && (var20!=var21) && (var20!=var22) && (var20!=var23) && (var20!=var24) && (var20!=var25) && (var20!=var26) && (var20!=var27) && (var20!=var28) && (var21!=var22) && (var21!=var23) && (var21!=var24) && (var21!=var25) && (var21!=var26) && (var21!=var27) && (var21!=var28) && (var22!=var23) && (var22!=var24) && (var22!=var25) && (var22!=var26) && (var22!=var27) && (var22!=var28) && (var23!=var24) && (var23!=var25) && (var23!=var26) && (var23!=var27) && (var23!=var28) && (var24!=var25) && (var24!=var26) && (var24!=var27) && (var24!=var28) && (var25!=var26) && (var25!=var27) && (var25!=var28) && (var26!=var27) && (var26!=var28) && (var27!=var28) &&  1)) && (((var29!=var30) && (var29!=var31) && (var29!=var32) && (var29!=var33) && (var29!=var34) && (var29!=var35) && (var29!=var36) && (var29!=var37) && (var29!=var38) && (var29!=var39) && (var29!=var40) && (var29!=var41) && (var30!=var31) && (var30!=var32) && (var30!=var33) && (var30!=var34) && (var30!=var35) && (var30!=var36) && (var30!=var37) && (var30!=var38) && (var30!=var39) && (var30!=var40) && (var30!=var41) && (var31!=var32) && (var31!=var33) && (var31!=var34) && (var31!=var35) && (var31!=var36) && (var31!=var37) && (var31!=var38) && (var31!=var39) && (var31!=var40) && (var31!=var41) && (var32!=var33) && (var32!=var34) && (var32!=var35) && (var32!=var36) && (var32!=var37) && (var32!=var38) && (var32!=var39) && (var32!=var40) && (var32!=var41) && (var33!=var34) && (var33!=var35) && (var33!=var36) && (var33!=var37) && (var33!=var38) && (var33!=var39) && (var33!=var40) && (var33!=var41) && (var34!=var35) && (var34!=var36) && (var34!=var37) && (var34!=var38) && (var34!=var39) && (var34!=var40) && (var34!=var41) && (var35!=var36) && (var35!=var37) && (var35!=var38) && (var35!=var39) && (var35!=var40) && (var35!=var41) && (var36!=var37) && (var36!=var38) && (var36!=var39) && (var36!=var40) && (var36!=var41) && (var37!=var38) && (var37!=var39) && (var37!=var40) && (var37!=var41) && (var38!=var39) && (var38!=var40) && (var38!=var41) && (var39!=var40) && (var39!=var41) && (var40!=var41) &&  1)) && (((var42!=var43) && (var42!=var44) && (var42!=var45) && (var42!=var46) && (var42!=var47) && (var42!=var48) && (var42!=var49) && (var42!=var50) && (var42!=var51) && (var42!=var52) && (var42!=var53) && (var43!=var44) && (var43!=var45) && (var43!=var46) && (var43!=var47) && (var43!=var48) && (var43!=var49) && (var43!=var50) && (var43!=var51) && (var43!=var52) && (var43!=var53) && (var44!=var45) && (var44!=var46) && (var44!=var47) && (var44!=var48) && (var44!=var49) && (var44!=var50) && (var44!=var51) && (var44!=var52) && (var44!=var53) && (var45!=var46) && (var45!=var47) && (var45!=var48) && (var45!=var49) && (var45!=var50) && (var45!=var51) && (var45!=var52) && (var45!=var53) && (var46!=var47) && (var46!=var48) && (var46!=var49) && (var46!=var50) && (var46!=var51) && (var46!=var52) && (var46!=var53) && (var47!=var48) && (var47!=var49) && (var47!=var50) && (var47!=var51) && (var47!=var52) && (var47!=var53) && (var48!=var49) && (var48!=var50) && (var48!=var51) && (var48!=var52) && (var48!=var53) && (var49!=var50) && (var49!=var51) && (var49!=var52) && (var49!=var53) && (var50!=var51) && (var50!=var52) && (var50!=var53) && (var51!=var52) && (var51!=var53) && (var52!=var53) &&  1)) && (((var54!=var55) && (var54!=var56) && (var54!=var57) && (var54!=var58) && (var54!=var59) && (var54!=var60) && (var54!=var61) && (var54!=var62) && (var54!=var63) && (var54!=var64) && (var55!=var56) && (var55!=var57) && (var55!=var58) && (var55!=var59) && (var55!=var60) && (var55!=var61) && (var55!=var62) && (var55!=var63) && (var55!=var64) && (var56!=var57) && (var56!=var58) && (var56!=var59) && (var56!=var60) && (var56!=var61) && (var56!=var62) && (var56!=var63) && (var56!=var64) && (var57!=var58) && (var57!=var59) && (var57!=var60) && (var57!=var61) && (var57!=var62) && (var57!=var63) && (var57!=var64) && (var58!=var59) && (var58!=var60) && (var58!=var61) && (var58!=var62) && (var58!=var63) && (var58!=var64) && (var59!=var60) && (var59!=var61) && (var59!=var62) && (var59!=var63) && (var59!=var64) && (var60!=var61) && (var60!=var62) && (var60!=var63) && (var60!=var64) && (var61!=var62) && (var61!=var63) && (var61!=var64) && (var62!=var63) && (var62!=var64) && (var63!=var64) &&  1)) && (((var65!=var66) && (var65!=var67) && (var65!=var68) && (var65!=var69) && (var65!=var70) && (var65!=var71) && (var65!=var72) && (var65!=var73) && (var65!=var74) && (var66!=var67) && (var66!=var68) && (var66!=var69) && (var66!=var70) && (var66!=var71) && (var66!=var72) && (var66!=var73) && (var66!=var74) && (var67!=var68) && (var67!=var69) && (var67!=var70) && (var67!=var71) && (var67!=var72) && (var67!=var73) && (var67!=var74) && (var68!=var69) && (var68!=var70) && (var68!=var71) && (var68!=var72) && (var68!=var73) && (var68!=var74) && (var69!=var70) && (var69!=var71) && (var69!=var72) && (var69!=var73) && (var69!=var74) && (var70!=var71) && (var70!=var72) && (var70!=var73) && (var70!=var74) && (var71!=var72) && (var71!=var73) && (var71!=var74) && (var72!=var73) && (var72!=var74) && (var73!=var74) &&  1)) && (((var75!=var76) && (var75!=var77) && (var75!=var78) && (var75!=var79) && (var75!=var80) && (var75!=var81) && (var75!=var82) && (var75!=var83) && (var76!=var77) && (var76!=var78) && (var76!=var79) && (var76!=var80) && (var76!=var81) && (var76!=var82) && (var76!=var83) && (var77!=var78) && (var77!=var79) && (var77!=var80) && (var77!=var81) && (var77!=var82) && (var77!=var83) && (var78!=var79) && (var78!=var80) && (var78!=var81) && (var78!=var82) && (var78!=var83) && (var79!=var80) && (var79!=var81) && (var79!=var82) && (var79!=var83) && (var80!=var81) && (var80!=var82) && (var80!=var83) && (var81!=var82) && (var81!=var83) && (var82!=var83) &&  1)) && (((var84!=var85) && (var84!=var86) && (var84!=var87) && (var84!=var88) && (var84!=var89) && (var84!=var90) && (var84!=var91) && (var85!=var86) && (var85!=var87) && (var85!=var88) && (var85!=var89) && (var85!=var90) && (var85!=var91) && (var86!=var87) && (var86!=var88) && (var86!=var89) && (var86!=var90) && (var86!=var91) && (var87!=var88) && (var87!=var89) && (var87!=var90) && (var87!=var91) && (var88!=var89) && (var88!=var90) && (var88!=var91) && (var89!=var90) && (var89!=var91) && (var90!=var91) &&  1)) && (((var92!=var93) && (var92!=var94) && (var92!=var95) && (var92!=var96) && (var92!=var97) && (var92!=var98) && (var93!=var94) && (var93!=var95) && (var93!=var96) && (var93!=var97) && (var93!=var98) && (var94!=var95) && (var94!=var96) && (var94!=var97) && (var94!=var98) && (var95!=var96) && (var95!=var97) && (var95!=var98) && (var96!=var97) && (var96!=var98) && (var97!=var98) &&  1)) && (((var99!=var100) && (var99!=var101) && (var99!=var102) && (var99!=var103) && (var99!=var104) && (var100!=var101) && (var100!=var102) && (var100!=var103) && (var100!=var104) && (var101!=var102) && (var101!=var103) && (var101!=var104) && (var102!=var103) && (var102!=var104) && (var103!=var104) &&  1)) && (((var105!=var106) && (var105!=var107) && (var105!=var108) && (var105!=var109) && (var106!=var107) && (var106!=var108) && (var106!=var109) && (var107!=var108) && (var107!=var109) && (var108!=var109) &&  1)) && (((var110!=var111) && (var110!=var112) && (var110!=var113) && (var111!=var112) && (var111!=var113) && (var112!=var113) &&  1)) && (((var114!=var115) && (var114!=var116) && (var115!=var116) &&  1)) && (((var0 - var1 == var15) && (var1 - var2 == var16) && (var2 - var3 == var17) && (var3 - var4 == var18) && (var4 - var5 == var19) && (var5 - var6 == var20) && (var6 - var7 == var21) && (var7 - var8 == var22) && (var8 - var9 == var23) && (var9 - var10 == var24) && (var10 - var11 == var25) && (var11 - var12 == var26) && (var12 - var13 == var27) && (var13 - var14 == var28) && (var0 - var2 == var29) && (var1 - var3 == var30) && (var2 - var4 == var31) && (var3 - var5 == var32) && (var4 - var6 == var33) && (var5 - var7 == var34) && (var6 - var8 == var35) && (var7 - var9 == var36) && (var8 - var10 == var37) && (var9 - var11 == var38) && (var10 - var12 == var39) && (var11 - var13 == var40) && (var12 - var14 == var41) && (var0 - var3 == var42) && (var1 - var4 == var43) && (var2 - var5 == var44) && (var3 - var6 == var45) && (var4 - var7 == var46) && (var5 - var8 == var47) && (var6 - var9 == var48) && (var7 - var10 == var49) && (var8 - var11 == var50) && (var9 - var12 == var51) && (var10 - var13 == var52) && (var11 - var14 == var53) && (var0 - var4 == var54) && (var1 - var5 == var55) && (var2 - var6 == var56) && (var3 - var7 == var57) && (var4 - var8 == var58) && (var5 - var9 == var59) && (var6 - var10 == var60) && (var7 - var11 == var61) && (var8 - var12 == var62) && (var9 - var13 == var63) && (var10 - var14 == var64) && (var0 - var5 == var65) && (var1 - var6 == var66) && (var2 - var7 == var67) && (var3 - var8 == var68) && (var4 - var9 == var69) && (var5 - var10 == var70) && (var6 - var11 == var71) && (var7 - var12 == var72) && (var8 - var13 == var73) && (var9 - var14 == var74) && (var0 - var6 == var75) && (var1 - var7 == var76) && (var2 - var8 == var77) && (var3 - var9 == var78) && (var4 - var10 == var79) && (var5 - var11 == var80) && (var6 - var12 == var81) && (var7 - var13 == var82) && (var8 - var14 == var83) && (var0 - var7 == var84) && (var1 - var8 == var85) && (var2 - var9 == var86) && (var3 - var10 == var87) && (var4 - var11 == var88) && (var5 - var12 == var89) && (var6 - var13 == var90) && (var7 - var14 == var91) && (var0 - var8 == var92) && (var1 - var9 == var93) && (var2 - var10 == var94) && (var3 - var11 == var95) && (var4 - var12 == var96) && (var5 - var13 == var97) && (var6 - var14 == var98) && (var0 - var9 == var99) && (var1 - var10 == var100) && (var2 - var11 == var101) && (var3 - var12 == var102) && (var4 - var13 == var103) && (var5 - var14 == var104) && (var0 - var10 == var105) && (var1 - var11 == var106) && (var2 - var12 == var107) && (var3 - var13 == var108) && (var4 - var14 == var109) && (var0 - var11 == var110) && (var1 - var12 == var111) && (var2 - var13 == var112) && (var3 - var14 == var113) && (var0 - var12 == var114) && (var1 - var13 == var115) && (var2 - var14 == var116) &&  1)) && ((((var0 - var13) != (var1 - var14)) &&  1)) && 1 )
assert(0);
else printf("UNSAT\n");
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
15 y[0]
16 y[1]
17 y[2]
18 y[3]
19 y[4]
20 y[5]
21 y[6]
22 y[7]
23 y[8]
24 y[9]
25 y[10]
26 y[11]
27 y[12]
28 y[13]
29 y[14]
30 y[15]
31 y[16]
32 y[17]
33 y[18]
34 y[19]
35 y[20]
36 y[21]
37 y[22]
38 y[23]
39 y[24]
40 y[25]
41 y[26]
42 y[27]
43 y[28]
44 y[29]
45 y[30]
46 y[31]
47 y[32]
48 y[33]
49 y[34]
50 y[35]
51 y[36]
52 y[37]
53 y[38]
54 y[39]
55 y[40]
56 y[41]
57 y[42]
58 y[43]
59 y[44]
60 y[45]
61 y[46]
62 y[47]
63 y[48]
64 y[49]
65 y[50]
66 y[51]
67 y[52]
68 y[53]
69 y[54]
70 y[55]
71 y[56]
72 y[57]
73 y[58]
74 y[59]
75 y[60]
76 y[61]
77 y[62]
78 y[63]
79 y[64]
80 y[65]
81 y[66]
82 y[67]
83 y[68]
84 y[69]
85 y[70]
86 y[71]
87 y[72]
88 y[73]
89 y[74]
90 y[75]
91 y[76]
92 y[77]
93 y[78]
94 y[79]
95 y[80]
96 y[81]
97 y[82]
98 y[83]
99 y[84]
100 y[85]
101 y[86]
102 y[87]
103 y[88]
104 y[89]
105 y[90]
106 y[91]
107 y[92]
108 y[93]
109 y[94]
110 y[95]
111 y[96]
112 y[97]
113 y[98]
114 y[99]
115 y[100]
116 y[101]
 */}
