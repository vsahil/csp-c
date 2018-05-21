
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
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
int myvar0 = 1;
if(((var0 >= 1 && var0 <= 16) && (var1 >= 1 && var1 <= 16) && (var2 >= 1 && var2 <= 16) && (var3 >= 1 && var3 <= 16) && (var4 >= 1 && var4 <= 16) && (var5 >= 1 && var5 <= 16) && (var6 >= 1 && var6 <= 16) && (var7 >= 1 && var7 <= 16) && (var8 >= 1 && var8 <= 16) && (var9 >= 1 && var9 <= 16) && (var10 >= 1 && var10 <= 16) && (var11 >= 1 && var11 <= 16) && (var12 >= 1 && var12 <= 16) && (var13 >= 1 && var13 <= 16) && (var14 >= 1 && var14 <= 16) && (var15 >= 1 && var15 <= 16) &&  1))
myvar0 = 1;
else exit(0);
if(((var16 >= -15 && var16 <= 15 && var16 != 0 &&  1) && (var17 >= -15 && var17 <= 15 && var17 != 0 &&  1) && (var18 >= -15 && var18 <= 15 && var18 != 0 &&  1) && (var19 >= -15 && var19 <= 15 && var19 != 0 &&  1) && (var20 >= -15 && var20 <= 15 && var20 != 0 &&  1) && (var21 >= -15 && var21 <= 15 && var21 != 0 &&  1) && (var22 >= -15 && var22 <= 15 && var22 != 0 &&  1) && (var23 >= -15 && var23 <= 15 && var23 != 0 &&  1) && (var24 >= -15 && var24 <= 15 && var24 != 0 &&  1) && (var25 >= -15 && var25 <= 15 && var25 != 0 &&  1) && (var26 >= -15 && var26 <= 15 && var26 != 0 &&  1) && (var27 >= -15 && var27 <= 15 && var27 != 0 &&  1) && (var28 >= -15 && var28 <= 15 && var28 != 0 &&  1) && (var29 >= -15 && var29 <= 15 && var29 != 0 &&  1) && (var30 >= -15 && var30 <= 15 && var30 != 0 &&  1) && (var31 >= -15 && var31 <= 15 && var31 != 0 &&  1) && (var32 >= -15 && var32 <= 15 && var32 != 0 &&  1) && (var33 >= -15 && var33 <= 15 && var33 != 0 &&  1) && (var34 >= -15 && var34 <= 15 && var34 != 0 &&  1) && (var35 >= -15 && var35 <= 15 && var35 != 0 &&  1) && (var36 >= -15 && var36 <= 15 && var36 != 0 &&  1) && (var37 >= -15 && var37 <= 15 && var37 != 0 &&  1) && (var38 >= -15 && var38 <= 15 && var38 != 0 &&  1) && (var39 >= -15 && var39 <= 15 && var39 != 0 &&  1) && (var40 >= -15 && var40 <= 15 && var40 != 0 &&  1) && (var41 >= -15 && var41 <= 15 && var41 != 0 &&  1) && (var42 >= -15 && var42 <= 15 && var42 != 0 &&  1) && (var43 >= -15 && var43 <= 15 && var43 != 0 &&  1) && (var44 >= -15 && var44 <= 15 && var44 != 0 &&  1) && (var45 >= -15 && var45 <= 15 && var45 != 0 &&  1) && (var46 >= -15 && var46 <= 15 && var46 != 0 &&  1) && (var47 >= -15 && var47 <= 15 && var47 != 0 &&  1) && (var48 >= -15 && var48 <= 15 && var48 != 0 &&  1) && (var49 >= -15 && var49 <= 15 && var49 != 0 &&  1) && (var50 >= -15 && var50 <= 15 && var50 != 0 &&  1) && (var51 >= -15 && var51 <= 15 && var51 != 0 &&  1) && (var52 >= -15 && var52 <= 15 && var52 != 0 &&  1) && (var53 >= -15 && var53 <= 15 && var53 != 0 &&  1) && (var54 >= -15 && var54 <= 15 && var54 != 0 &&  1) && (var55 >= -15 && var55 <= 15 && var55 != 0 &&  1) && (var56 >= -15 && var56 <= 15 && var56 != 0 &&  1) && (var57 >= -15 && var57 <= 15 && var57 != 0 &&  1) && (var58 >= -15 && var58 <= 15 && var58 != 0 &&  1) && (var59 >= -15 && var59 <= 15 && var59 != 0 &&  1) && (var60 >= -15 && var60 <= 15 && var60 != 0 &&  1) && (var61 >= -15 && var61 <= 15 && var61 != 0 &&  1) && (var62 >= -15 && var62 <= 15 && var62 != 0 &&  1) && (var63 >= -15 && var63 <= 15 && var63 != 0 &&  1) && (var64 >= -15 && var64 <= 15 && var64 != 0 &&  1) && (var65 >= -15 && var65 <= 15 && var65 != 0 &&  1) && (var66 >= -15 && var66 <= 15 && var66 != 0 &&  1) && (var67 >= -15 && var67 <= 15 && var67 != 0 &&  1) && (var68 >= -15 && var68 <= 15 && var68 != 0 &&  1) && (var69 >= -15 && var69 <= 15 && var69 != 0 &&  1) && (var70 >= -15 && var70 <= 15 && var70 != 0 &&  1) && (var71 >= -15 && var71 <= 15 && var71 != 0 &&  1) && (var72 >= -15 && var72 <= 15 && var72 != 0 &&  1) && (var73 >= -15 && var73 <= 15 && var73 != 0 &&  1) && (var74 >= -15 && var74 <= 15 && var74 != 0 &&  1) && (var75 >= -15 && var75 <= 15 && var75 != 0 &&  1) && (var76 >= -15 && var76 <= 15 && var76 != 0 &&  1) && (var77 >= -15 && var77 <= 15 && var77 != 0 &&  1) && (var78 >= -15 && var78 <= 15 && var78 != 0 &&  1) && (var79 >= -15 && var79 <= 15 && var79 != 0 &&  1) && (var80 >= -15 && var80 <= 15 && var80 != 0 &&  1) && (var81 >= -15 && var81 <= 15 && var81 != 0 &&  1) && (var82 >= -15 && var82 <= 15 && var82 != 0 &&  1) && (var83 >= -15 && var83 <= 15 && var83 != 0 &&  1) && (var84 >= -15 && var84 <= 15 && var84 != 0 &&  1) && (var85 >= -15 && var85 <= 15 && var85 != 0 &&  1) && (var86 >= -15 && var86 <= 15 && var86 != 0 &&  1) && (var87 >= -15 && var87 <= 15 && var87 != 0 &&  1) && (var88 >= -15 && var88 <= 15 && var88 != 0 &&  1) && (var89 >= -15 && var89 <= 15 && var89 != 0 &&  1) && (var90 >= -15 && var90 <= 15 && var90 != 0 &&  1) && (var91 >= -15 && var91 <= 15 && var91 != 0 &&  1) && (var92 >= -15 && var92 <= 15 && var92 != 0 &&  1) && (var93 >= -15 && var93 <= 15 && var93 != 0 &&  1) && (var94 >= -15 && var94 <= 15 && var94 != 0 &&  1) && (var95 >= -15 && var95 <= 15 && var95 != 0 &&  1) && (var96 >= -15 && var96 <= 15 && var96 != 0 &&  1) && (var97 >= -15 && var97 <= 15 && var97 != 0 &&  1) && (var98 >= -15 && var98 <= 15 && var98 != 0 &&  1) && (var99 >= -15 && var99 <= 15 && var99 != 0 &&  1) && (var100 >= -15 && var100 <= 15 && var100 != 0 &&  1) && (var101 >= -15 && var101 <= 15 && var101 != 0 &&  1) && (var102 >= -15 && var102 <= 15 && var102 != 0 &&  1) && (var103 >= -15 && var103 <= 15 && var103 != 0 &&  1) && (var104 >= -15 && var104 <= 15 && var104 != 0 &&  1) && (var105 >= -15 && var105 <= 15 && var105 != 0 &&  1) && (var106 >= -15 && var106 <= 15 && var106 != 0 &&  1) && (var107 >= -15 && var107 <= 15 && var107 != 0 &&  1) && (var108 >= -15 && var108 <= 15 && var108 != 0 &&  1) && (var109 >= -15 && var109 <= 15 && var109 != 0 &&  1) && (var110 >= -15 && var110 <= 15 && var110 != 0 &&  1) && (var111 >= -15 && var111 <= 15 && var111 != 0 &&  1) && (var112 >= -15 && var112 <= 15 && var112 != 0 &&  1) && (var113 >= -15 && var113 <= 15 && var113 != 0 &&  1) && (var114 >= -15 && var114 <= 15 && var114 != 0 &&  1) && (var115 >= -15 && var115 <= 15 && var115 != 0 &&  1) && (var116 >= -15 && var116 <= 15 && var116 != 0 &&  1) && (var117 >= -15 && var117 <= 15 && var117 != 0 &&  1) && (var118 >= -15 && var118 <= 15 && var118 != 0 &&  1) && (var119 >= -15 && var119 <= 15 && var119 != 0 &&  1) && (var120 >= -15 && var120 <= 15 && var120 != 0 &&  1) && (var121 >= -15 && var121 <= 15 && var121 != 0 &&  1) && (var122 >= -15 && var122 <= 15 && var122 != 0 &&  1) && (var123 >= -15 && var123 <= 15 && var123 != 0 &&  1) && (var124 >= -15 && var124 <= 15 && var124 != 0 &&  1) && (var125 >= -15 && var125 <= 15 && var125 != 0 &&  1) && (var126 >= -15 && var126 <= 15 && var126 != 0 &&  1) && (var127 >= -15 && var127 <= 15 && var127 != 0 &&  1) && (var128 >= -15 && var128 <= 15 && var128 != 0 &&  1) && (var129 >= -15 && var129 <= 15 && var129 != 0 &&  1) && (var130 >= -15 && var130 <= 15 && var130 != 0 &&  1) && (var131 >= -15 && var131 <= 15 && var131 != 0 &&  1) && (var132 >= -15 && var132 <= 15 && var132 != 0 &&  1) &&  1))
myvar0 = 1;
else exit(0);
if(((var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var0!=var10) && (var0!=var11) && (var0!=var12) && (var0!=var13) && (var0!=var14) && (var0!=var15) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var1!=var10) && (var1!=var11) && (var1!=var12) && (var1!=var13) && (var1!=var14) && (var1!=var15) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var2!=var10) && (var2!=var11) && (var2!=var12) && (var2!=var13) && (var2!=var14) && (var2!=var15) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var3!=var10) && (var3!=var11) && (var3!=var12) && (var3!=var13) && (var3!=var14) && (var3!=var15) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var4!=var10) && (var4!=var11) && (var4!=var12) && (var4!=var13) && (var4!=var14) && (var4!=var15) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var5!=var10) && (var5!=var11) && (var5!=var12) && (var5!=var13) && (var5!=var14) && (var5!=var15) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var6!=var10) && (var6!=var11) && (var6!=var12) && (var6!=var13) && (var6!=var14) && (var6!=var15) && (var7!=var8) && (var7!=var9) && (var7!=var10) && (var7!=var11) && (var7!=var12) && (var7!=var13) && (var7!=var14) && (var7!=var15) && (var8!=var9) && (var8!=var10) && (var8!=var11) && (var8!=var12) && (var8!=var13) && (var8!=var14) && (var8!=var15) && (var9!=var10) && (var9!=var11) && (var9!=var12) && (var9!=var13) && (var9!=var14) && (var9!=var15) && (var10!=var11) && (var10!=var12) && (var10!=var13) && (var10!=var14) && (var10!=var15) && (var11!=var12) && (var11!=var13) && (var11!=var14) && (var11!=var15) && (var12!=var13) && (var12!=var14) && (var12!=var15) && (var13!=var14) && (var13!=var15) && (var14!=var15) &&  1))
myvar0 = 1;
else exit(0);
if(((var16!=var17) && (var16!=var18) && (var16!=var19) && (var16!=var20) && (var16!=var21) && (var16!=var22) && (var16!=var23) && (var16!=var24) && (var16!=var25) && (var16!=var26) && (var16!=var27) && (var16!=var28) && (var16!=var29) && (var16!=var30) && (var17!=var18) && (var17!=var19) && (var17!=var20) && (var17!=var21) && (var17!=var22) && (var17!=var23) && (var17!=var24) && (var17!=var25) && (var17!=var26) && (var17!=var27) && (var17!=var28) && (var17!=var29) && (var17!=var30) && (var18!=var19) && (var18!=var20) && (var18!=var21) && (var18!=var22) && (var18!=var23) && (var18!=var24) && (var18!=var25) && (var18!=var26) && (var18!=var27) && (var18!=var28) && (var18!=var29) && (var18!=var30) && (var19!=var20) && (var19!=var21) && (var19!=var22) && (var19!=var23) && (var19!=var24) && (var19!=var25) && (var19!=var26) && (var19!=var27) && (var19!=var28) && (var19!=var29) && (var19!=var30) && (var20!=var21) && (var20!=var22) && (var20!=var23) && (var20!=var24) && (var20!=var25) && (var20!=var26) && (var20!=var27) && (var20!=var28) && (var20!=var29) && (var20!=var30) && (var21!=var22) && (var21!=var23) && (var21!=var24) && (var21!=var25) && (var21!=var26) && (var21!=var27) && (var21!=var28) && (var21!=var29) && (var21!=var30) && (var22!=var23) && (var22!=var24) && (var22!=var25) && (var22!=var26) && (var22!=var27) && (var22!=var28) && (var22!=var29) && (var22!=var30) && (var23!=var24) && (var23!=var25) && (var23!=var26) && (var23!=var27) && (var23!=var28) && (var23!=var29) && (var23!=var30) && (var24!=var25) && (var24!=var26) && (var24!=var27) && (var24!=var28) && (var24!=var29) && (var24!=var30) && (var25!=var26) && (var25!=var27) && (var25!=var28) && (var25!=var29) && (var25!=var30) && (var26!=var27) && (var26!=var28) && (var26!=var29) && (var26!=var30) && (var27!=var28) && (var27!=var29) && (var27!=var30) && (var28!=var29) && (var28!=var30) && (var29!=var30) &&  1))
myvar0 = 1;
else exit(0);
if(((var31!=var32) && (var31!=var33) && (var31!=var34) && (var31!=var35) && (var31!=var36) && (var31!=var37) && (var31!=var38) && (var31!=var39) && (var31!=var40) && (var31!=var41) && (var31!=var42) && (var31!=var43) && (var31!=var44) && (var32!=var33) && (var32!=var34) && (var32!=var35) && (var32!=var36) && (var32!=var37) && (var32!=var38) && (var32!=var39) && (var32!=var40) && (var32!=var41) && (var32!=var42) && (var32!=var43) && (var32!=var44) && (var33!=var34) && (var33!=var35) && (var33!=var36) && (var33!=var37) && (var33!=var38) && (var33!=var39) && (var33!=var40) && (var33!=var41) && (var33!=var42) && (var33!=var43) && (var33!=var44) && (var34!=var35) && (var34!=var36) && (var34!=var37) && (var34!=var38) && (var34!=var39) && (var34!=var40) && (var34!=var41) && (var34!=var42) && (var34!=var43) && (var34!=var44) && (var35!=var36) && (var35!=var37) && (var35!=var38) && (var35!=var39) && (var35!=var40) && (var35!=var41) && (var35!=var42) && (var35!=var43) && (var35!=var44) && (var36!=var37) && (var36!=var38) && (var36!=var39) && (var36!=var40) && (var36!=var41) && (var36!=var42) && (var36!=var43) && (var36!=var44) && (var37!=var38) && (var37!=var39) && (var37!=var40) && (var37!=var41) && (var37!=var42) && (var37!=var43) && (var37!=var44) && (var38!=var39) && (var38!=var40) && (var38!=var41) && (var38!=var42) && (var38!=var43) && (var38!=var44) && (var39!=var40) && (var39!=var41) && (var39!=var42) && (var39!=var43) && (var39!=var44) && (var40!=var41) && (var40!=var42) && (var40!=var43) && (var40!=var44) && (var41!=var42) && (var41!=var43) && (var41!=var44) && (var42!=var43) && (var42!=var44) && (var43!=var44) &&  1))
myvar0 = 1;
else exit(0);
if(((var45!=var46) && (var45!=var47) && (var45!=var48) && (var45!=var49) && (var45!=var50) && (var45!=var51) && (var45!=var52) && (var45!=var53) && (var45!=var54) && (var45!=var55) && (var45!=var56) && (var45!=var57) && (var46!=var47) && (var46!=var48) && (var46!=var49) && (var46!=var50) && (var46!=var51) && (var46!=var52) && (var46!=var53) && (var46!=var54) && (var46!=var55) && (var46!=var56) && (var46!=var57) && (var47!=var48) && (var47!=var49) && (var47!=var50) && (var47!=var51) && (var47!=var52) && (var47!=var53) && (var47!=var54) && (var47!=var55) && (var47!=var56) && (var47!=var57) && (var48!=var49) && (var48!=var50) && (var48!=var51) && (var48!=var52) && (var48!=var53) && (var48!=var54) && (var48!=var55) && (var48!=var56) && (var48!=var57) && (var49!=var50) && (var49!=var51) && (var49!=var52) && (var49!=var53) && (var49!=var54) && (var49!=var55) && (var49!=var56) && (var49!=var57) && (var50!=var51) && (var50!=var52) && (var50!=var53) && (var50!=var54) && (var50!=var55) && (var50!=var56) && (var50!=var57) && (var51!=var52) && (var51!=var53) && (var51!=var54) && (var51!=var55) && (var51!=var56) && (var51!=var57) && (var52!=var53) && (var52!=var54) && (var52!=var55) && (var52!=var56) && (var52!=var57) && (var53!=var54) && (var53!=var55) && (var53!=var56) && (var53!=var57) && (var54!=var55) && (var54!=var56) && (var54!=var57) && (var55!=var56) && (var55!=var57) && (var56!=var57) &&  1))
myvar0 = 1;
else exit(0);
if(((var58!=var59) && (var58!=var60) && (var58!=var61) && (var58!=var62) && (var58!=var63) && (var58!=var64) && (var58!=var65) && (var58!=var66) && (var58!=var67) && (var58!=var68) && (var58!=var69) && (var59!=var60) && (var59!=var61) && (var59!=var62) && (var59!=var63) && (var59!=var64) && (var59!=var65) && (var59!=var66) && (var59!=var67) && (var59!=var68) && (var59!=var69) && (var60!=var61) && (var60!=var62) && (var60!=var63) && (var60!=var64) && (var60!=var65) && (var60!=var66) && (var60!=var67) && (var60!=var68) && (var60!=var69) && (var61!=var62) && (var61!=var63) && (var61!=var64) && (var61!=var65) && (var61!=var66) && (var61!=var67) && (var61!=var68) && (var61!=var69) && (var62!=var63) && (var62!=var64) && (var62!=var65) && (var62!=var66) && (var62!=var67) && (var62!=var68) && (var62!=var69) && (var63!=var64) && (var63!=var65) && (var63!=var66) && (var63!=var67) && (var63!=var68) && (var63!=var69) && (var64!=var65) && (var64!=var66) && (var64!=var67) && (var64!=var68) && (var64!=var69) && (var65!=var66) && (var65!=var67) && (var65!=var68) && (var65!=var69) && (var66!=var67) && (var66!=var68) && (var66!=var69) && (var67!=var68) && (var67!=var69) && (var68!=var69) &&  1))
myvar0 = 1;
else exit(0);
if(((var70!=var71) && (var70!=var72) && (var70!=var73) && (var70!=var74) && (var70!=var75) && (var70!=var76) && (var70!=var77) && (var70!=var78) && (var70!=var79) && (var70!=var80) && (var71!=var72) && (var71!=var73) && (var71!=var74) && (var71!=var75) && (var71!=var76) && (var71!=var77) && (var71!=var78) && (var71!=var79) && (var71!=var80) && (var72!=var73) && (var72!=var74) && (var72!=var75) && (var72!=var76) && (var72!=var77) && (var72!=var78) && (var72!=var79) && (var72!=var80) && (var73!=var74) && (var73!=var75) && (var73!=var76) && (var73!=var77) && (var73!=var78) && (var73!=var79) && (var73!=var80) && (var74!=var75) && (var74!=var76) && (var74!=var77) && (var74!=var78) && (var74!=var79) && (var74!=var80) && (var75!=var76) && (var75!=var77) && (var75!=var78) && (var75!=var79) && (var75!=var80) && (var76!=var77) && (var76!=var78) && (var76!=var79) && (var76!=var80) && (var77!=var78) && (var77!=var79) && (var77!=var80) && (var78!=var79) && (var78!=var80) && (var79!=var80) &&  1))
myvar0 = 1;
else exit(0);
if(((var81!=var82) && (var81!=var83) && (var81!=var84) && (var81!=var85) && (var81!=var86) && (var81!=var87) && (var81!=var88) && (var81!=var89) && (var81!=var90) && (var82!=var83) && (var82!=var84) && (var82!=var85) && (var82!=var86) && (var82!=var87) && (var82!=var88) && (var82!=var89) && (var82!=var90) && (var83!=var84) && (var83!=var85) && (var83!=var86) && (var83!=var87) && (var83!=var88) && (var83!=var89) && (var83!=var90) && (var84!=var85) && (var84!=var86) && (var84!=var87) && (var84!=var88) && (var84!=var89) && (var84!=var90) && (var85!=var86) && (var85!=var87) && (var85!=var88) && (var85!=var89) && (var85!=var90) && (var86!=var87) && (var86!=var88) && (var86!=var89) && (var86!=var90) && (var87!=var88) && (var87!=var89) && (var87!=var90) && (var88!=var89) && (var88!=var90) && (var89!=var90) &&  1))
myvar0 = 1;
else exit(0);
if(((var91!=var92) && (var91!=var93) && (var91!=var94) && (var91!=var95) && (var91!=var96) && (var91!=var97) && (var91!=var98) && (var91!=var99) && (var92!=var93) && (var92!=var94) && (var92!=var95) && (var92!=var96) && (var92!=var97) && (var92!=var98) && (var92!=var99) && (var93!=var94) && (var93!=var95) && (var93!=var96) && (var93!=var97) && (var93!=var98) && (var93!=var99) && (var94!=var95) && (var94!=var96) && (var94!=var97) && (var94!=var98) && (var94!=var99) && (var95!=var96) && (var95!=var97) && (var95!=var98) && (var95!=var99) && (var96!=var97) && (var96!=var98) && (var96!=var99) && (var97!=var98) && (var97!=var99) && (var98!=var99) &&  1))
myvar0 = 1;
else exit(0);
if(((var100!=var101) && (var100!=var102) && (var100!=var103) && (var100!=var104) && (var100!=var105) && (var100!=var106) && (var100!=var107) && (var101!=var102) && (var101!=var103) && (var101!=var104) && (var101!=var105) && (var101!=var106) && (var101!=var107) && (var102!=var103) && (var102!=var104) && (var102!=var105) && (var102!=var106) && (var102!=var107) && (var103!=var104) && (var103!=var105) && (var103!=var106) && (var103!=var107) && (var104!=var105) && (var104!=var106) && (var104!=var107) && (var105!=var106) && (var105!=var107) && (var106!=var107) &&  1))
myvar0 = 1;
else exit(0);
if(((var108!=var109) && (var108!=var110) && (var108!=var111) && (var108!=var112) && (var108!=var113) && (var108!=var114) && (var109!=var110) && (var109!=var111) && (var109!=var112) && (var109!=var113) && (var109!=var114) && (var110!=var111) && (var110!=var112) && (var110!=var113) && (var110!=var114) && (var111!=var112) && (var111!=var113) && (var111!=var114) && (var112!=var113) && (var112!=var114) && (var113!=var114) &&  1))
myvar0 = 1;
else exit(0);
if(((var115!=var116) && (var115!=var117) && (var115!=var118) && (var115!=var119) && (var115!=var120) && (var116!=var117) && (var116!=var118) && (var116!=var119) && (var116!=var120) && (var117!=var118) && (var117!=var119) && (var117!=var120) && (var118!=var119) && (var118!=var120) && (var119!=var120) &&  1))
myvar0 = 1;
else exit(0);
if(((var121!=var122) && (var121!=var123) && (var121!=var124) && (var121!=var125) && (var122!=var123) && (var122!=var124) && (var122!=var125) && (var123!=var124) && (var123!=var125) && (var124!=var125) &&  1))
myvar0 = 1;
else exit(0);
if(((var126!=var127) && (var126!=var128) && (var126!=var129) && (var127!=var128) && (var127!=var129) && (var128!=var129) &&  1))
myvar0 = 1;
else exit(0);
if(((var130!=var131) && (var130!=var132) && (var131!=var132) &&  1))
myvar0 = 1;
else exit(0);
if(((var0 - var1 == var16) && (var1 - var2 == var17) && (var2 - var3 == var18) && (var3 - var4 == var19) && (var4 - var5 == var20) && (var5 - var6 == var21) && (var6 - var7 == var22) && (var7 - var8 == var23) && (var8 - var9 == var24) && (var9 - var10 == var25) && (var10 - var11 == var26) && (var11 - var12 == var27) && (var12 - var13 == var28) && (var13 - var14 == var29) && (var14 - var15 == var30) && (var0 - var2 == var31) && (var1 - var3 == var32) && (var2 - var4 == var33) && (var3 - var5 == var34) && (var4 - var6 == var35) && (var5 - var7 == var36) && (var6 - var8 == var37) && (var7 - var9 == var38) && (var8 - var10 == var39) && (var9 - var11 == var40) && (var10 - var12 == var41) && (var11 - var13 == var42) && (var12 - var14 == var43) && (var13 - var15 == var44) && (var0 - var3 == var45) && (var1 - var4 == var46) && (var2 - var5 == var47) && (var3 - var6 == var48) && (var4 - var7 == var49) && (var5 - var8 == var50) && (var6 - var9 == var51) && (var7 - var10 == var52) && (var8 - var11 == var53) && (var9 - var12 == var54) && (var10 - var13 == var55) && (var11 - var14 == var56) && (var12 - var15 == var57) && (var0 - var4 == var58) && (var1 - var5 == var59) && (var2 - var6 == var60) && (var3 - var7 == var61) && (var4 - var8 == var62) && (var5 - var9 == var63) && (var6 - var10 == var64) && (var7 - var11 == var65) && (var8 - var12 == var66) && (var9 - var13 == var67) && (var10 - var14 == var68) && (var11 - var15 == var69) && (var0 - var5 == var70) && (var1 - var6 == var71) && (var2 - var7 == var72) && (var3 - var8 == var73) && (var4 - var9 == var74) && (var5 - var10 == var75) && (var6 - var11 == var76) && (var7 - var12 == var77) && (var8 - var13 == var78) && (var9 - var14 == var79) && (var10 - var15 == var80) && (var0 - var6 == var81) && (var1 - var7 == var82) && (var2 - var8 == var83) && (var3 - var9 == var84) && (var4 - var10 == var85) && (var5 - var11 == var86) && (var6 - var12 == var87) && (var7 - var13 == var88) && (var8 - var14 == var89) && (var9 - var15 == var90) && (var0 - var7 == var91) && (var1 - var8 == var92) && (var2 - var9 == var93) && (var3 - var10 == var94) && (var4 - var11 == var95) && (var5 - var12 == var96) && (var6 - var13 == var97) && (var7 - var14 == var98) && (var8 - var15 == var99) && (var0 - var8 == var100) && (var1 - var9 == var101) && (var2 - var10 == var102) && (var3 - var11 == var103) && (var4 - var12 == var104) && (var5 - var13 == var105) && (var6 - var14 == var106) && (var7 - var15 == var107) && (var0 - var9 == var108) && (var1 - var10 == var109) && (var2 - var11 == var110) && (var3 - var12 == var111) && (var4 - var13 == var112) && (var5 - var14 == var113) && (var6 - var15 == var114) && (var0 - var10 == var115) && (var1 - var11 == var116) && (var2 - var12 == var117) && (var3 - var13 == var118) && (var4 - var14 == var119) && (var5 - var15 == var120) && (var0 - var11 == var121) && (var1 - var12 == var122) && (var2 - var13 == var123) && (var3 - var14 == var124) && (var4 - var15 == var125) && (var0 - var12 == var126) && (var1 - var13 == var127) && (var2 - var14 == var128) && (var3 - var15 == var129) && (var0 - var13 == var130) && (var1 - var14 == var131) && (var2 - var15 == var132) &&  1))
myvar0 = 1;
else exit(0);
if((((var0 - var14) != (var1 - var15)) &&  1))
myvar0 = 1;
else exit(0);
int cntdis = 1;
int exten = 1;
if( myvar0 == 1 )
cntdis = 1;
else cntdis = 0;
if( cntdis == 1 && exten == 1)
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
31 y[15]
32 y[16]
33 y[17]
34 y[18]
35 y[19]
36 y[20]
37 y[21]
38 y[22]
39 y[23]
40 y[24]
41 y[25]
42 y[26]
43 y[27]
44 y[28]
45 y[29]
46 y[30]
47 y[31]
48 y[32]
49 y[33]
50 y[34]
51 y[35]
52 y[36]
53 y[37]
54 y[38]
55 y[39]
56 y[40]
57 y[41]
58 y[42]
59 y[43]
60 y[44]
61 y[45]
62 y[46]
63 y[47]
64 y[48]
65 y[49]
66 y[50]
67 y[51]
68 y[52]
69 y[53]
70 y[54]
71 y[55]
72 y[56]
73 y[57]
74 y[58]
75 y[59]
76 y[60]
77 y[61]
78 y[62]
79 y[63]
80 y[64]
81 y[65]
82 y[66]
83 y[67]
84 y[68]
85 y[69]
86 y[70]
87 y[71]
88 y[72]
89 y[73]
90 y[74]
91 y[75]
92 y[76]
93 y[77]
94 y[78]
95 y[79]
96 y[80]
97 y[81]
98 y[82]
99 y[83]
100 y[84]
101 y[85]
102 y[86]
103 y[87]
104 y[88]
105 y[89]
106 y[90]
107 y[91]
108 y[92]
109 y[93]
110 y[94]
111 y[95]
112 y[96]
113 y[97]
114 y[98]
115 y[99]
116 y[100]
117 y[101]
118 y[102]
119 y[103]
120 y[104]
121 y[105]
122 y[106]
123 y[107]
124 y[108]
125 y[109]
126 y[110]
127 y[111]
128 y[112]
129 y[113]
130 y[114]
131 y[115]
132 y[116]
 */}
