
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
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
int myvar0 = 1;
if(((var0 >= 0 & var0 <= 11) & (var1 >= 0 & var1 <= 11) & (var2 >= 0 & var2 <= 11) & (var3 >= 0 & var3 <= 11) & (var4 >= 0 & var4 <= 11) & (var5 >= 0 & var5 <= 11) & (var6 >= 0 & var6 <= 11) & (var7 >= 0 & var7 <= 11) & (var8 >= 0 & var8 <= 11) & (var9 >= 0 & var9 <= 11) & (var10 >= 0 & var10 <= 11) & (var11 >= 0 & var11 <= 11) & (var12 >= 0 & var12 <= 11) & (var13 >= 0 & var13 <= 11) & (var14 >= 0 & var14 <= 11) & (var15 >= 0 & var15 <= 11) & (var16 >= 0 & var16 <= 11) & (var17 >= 0 & var17 <= 11) & (var18 >= 0 & var18 <= 11) & (var19 >= 0 & var19 <= 11) & (var20 >= 0 & var20 <= 11) & (var21 >= 0 & var21 <= 11) & (var22 >= 0 & var22 <= 11) & (var23 >= 0 & var23 <= 11) & (var24 >= 0 & var24 <= 11) & (var25 >= 0 & var25 <= 11) & (var26 >= 0 & var26 <= 11) & (var27 >= 0 & var27 <= 11) & (var28 >= 0 & var28 <= 11) & (var29 >= 0 & var29 <= 11) & (var30 >= 0 & var30 <= 11) & (var31 >= 0 & var31 <= 11) & (var32 >= 0 & var32 <= 11) & (var33 >= 0 & var33 <= 11) & (var34 >= 0 & var34 <= 11) & (var35 >= 0 & var35 <= 11) & (var36 >= 0 & var36 <= 11) & (var37 >= 0 & var37 <= 11) & (var38 >= 0 & var38 <= 11) & (var39 >= 0 & var39 <= 11) & (var40 >= 0 & var40 <= 11) & (var41 >= 0 & var41 <= 11) & (var42 >= 0 & var42 <= 11) & (var43 >= 0 & var43 <= 11) & (var44 >= 0 & var44 <= 11) & (var45 >= 0 & var45 <= 11) & (var46 >= 0 & var46 <= 11) & (var47 >= 0 & var47 <= 11) & (var48 >= 0 & var48 <= 11) & (var49 >= 0 & var49 <= 11) & (var50 >= 0 & var50 <= 11) & (var51 >= 0 & var51 <= 11) & (var52 >= 0 & var52 <= 11) & (var53 >= 0 & var53 <= 11) & (var54 >= 0 & var54 <= 11) & (var55 >= 0 & var55 <= 11) & (var56 >= 0 & var56 <= 11) & (var57 >= 0 & var57 <= 11) & (var58 >= 0 & var58 <= 11) & (var59 >= 0 & var59 <= 11) & (var60 >= 0 & var60 <= 11) & (var61 >= 0 & var61 <= 11) & (var62 >= 0 & var62 <= 11) & (var63 >= 0 & var63 <= 11) & (var64 >= 0 & var64 <= 11) & (var65 >= 0 & var65 <= 11) & (var66 >= 0 & var66 <= 11) & (var67 >= 0 & var67 <= 11) & (var68 >= 0 & var68 <= 11) & (var69 >= 0 & var69 <= 11) & (var70 >= 0 & var70 <= 11) & (var71 >= 0 & var71 <= 11) & (var72 >= 0 & var72 <= 11) & (var73 >= 0 & var73 <= 11) & (var74 >= 0 & var74 <= 11) & (var75 >= 0 & var75 <= 11) & (var76 >= 0 & var76 <= 11) & (var77 >= 0 & var77 <= 11) & (var78 >= 0 & var78 <= 11) & (var79 >= 0 & var79 <= 11) & (var80 >= 0 & var80 <= 11) & (var81 >= 0 & var81 <= 11) & (var82 >= 0 & var82 <= 11) & (var83 >= 0 & var83 <= 11) & (var84 >= 0 & var84 <= 11) & (var85 >= 0 & var85 <= 11) & (var86 >= 0 & var86 <= 11) & (var87 >= 0 & var87 <= 11) & (var88 >= 0 & var88 <= 11) & (var89 >= 0 & var89 <= 11) & (var90 >= 0 & var90 <= 11) & (var91 >= 0 & var91 <= 11) & (var92 >= 0 & var92 <= 11) & (var93 >= 0 & var93 <= 11) & (var94 >= 0 & var94 <= 11) & (var95 >= 0 & var95 <= 11) & (var96 >= 0 & var96 <= 11) & (var97 >= 0 & var97 <= 11) & (var98 >= 0 & var98 <= 11) & (var99 >= 0 & var99 <= 11) & (var100 >= 0 & var100 <= 11) & (var101 >= 0 & var101 <= 11) & (var102 >= 0 & var102 <= 11) & (var103 >= 0 & var103 <= 11) & (var104 >= 0 & var104 <= 11) & (var105 >= 0 & var105 <= 11) & (var106 >= 0 & var106 <= 11) & (var107 >= 0 & var107 <= 11) & (var108 >= 0 & var108 <= 11) & (var109 >= 0 & var109 <= 11) & (var110 >= 0 & var110 <= 11) & (var111 >= 0 & var111 <= 11) & (var112 >= 0 & var112 <= 11) & (var113 >= 0 & var113 <= 11) & (var114 >= 0 & var114 <= 11) & (var115 >= 0 & var115 <= 11) & (var116 >= 0 & var116 <= 11) & (var117 >= 0 & var117 <= 11) & (var118 >= 0 & var118 <= 11) & (var119 >= 0 & var119 <= 11) & (var120 >= 0 & var120 <= 11) & (var121 >= 0 & var121 <= 11) & (var122 >= 0 & var122 <= 11) & (var123 >= 0 & var123 <= 11) & (var124 >= 0 & var124 <= 11) & (var125 >= 0 & var125 <= 11) & (var126 >= 0 & var126 <= 11) & (var127 >= 0 & var127 <= 11) & (var128 >= 0 & var128 <= 11) & (var129 >= 0 & var129 <= 11) & (var130 >= 0 & var130 <= 11) & (var131 >= 0 & var131 <= 11) & (var132 >= 0 & var132 <= 11) & (var133 >= 0 & var133 <= 11) & (var134 >= 0 & var134 <= 11) & (var135 >= 0 & var135 <= 11) & (var136 >= 0 & var136 <= 11) & (var137 >= 0 & var137 <= 11) & (var138 >= 0 & var138 <= 11) & (var139 >= 0 & var139 <= 11) & (var140 >= 0 & var140 <= 11) & (var141 >= 0 & var141 <= 11) & (var142 >= 0 & var142 <= 11) & (var143 >= 0 & var143 <= 11) &  1))
myvar0 = 1;
else exit(0);
if(( 1))
myvar0 = 1;
else exit(0);
if(((var2 != var124 & var2 + var124 >=2 ) & (var2 != var127 & var2 + var127 >=2 ) & (var2 != var133 & var2 + var133 >=2 ) & (var2 != var140 & var2 + var140 >=2 ) & (var2 != var33 & var2 + var33 >=2 ) & (var2 != var36 & var2 + var36 >=2 ) & (var2 != var46 & var2 + var46 >=2 ) & (var2 != var47 & var2 + var47 >=2 ) & (var2 != var64 & var2 + var64 >=2 ) & (var2 != var89 & var2 + var89 >=2 ) & (var2 != var95 & var2 + var95 >=2 ) & (var31 != var1 & var31 + var1 >=2 ) & (var31 != var108 & var31 + var108 >=2 ) & (var31 != var114 & var31 + var114 >=2 ) & (var31 != var121 & var31 + var121 >=2 ) & (var31 != var128 & var31 + var128 >=2 ) & (var31 != var129 & var31 + var129 >=2 ) & (var31 != var135 & var31 + var135 >=2 ) & (var31 != var142 & var31 + var142 >=2 ) & (var31 != var40 & var31 + var40 >=2 ) & (var31 != var59 & var31 + var59 >=2 ) & (var31 != var6 & var31 + var6 >=2 ) & (var34 != var104 & var34 + var104 >=2 ) & (var34 != var126 & var34 + var126 >=2 ) & (var34 != var132 & var34 + var132 >=2 ) & (var34 != var136 & var34 + var136 >=2 ) & (var34 != var29 & var34 + var29 >=2 ) & (var34 != var48 & var34 + var48 >=2 ) & (var34 != var5 & var34 + var5 >=2 ) & (var34 != var78 & var34 + var78 >=2 ) & (var34 != var94 & var34 + var94 >=2 ) & (var34 != var97 & var34 + var97 >=2 ) & (var34 != var98 & var34 + var98 >=2 ) & (var42 != var111 & var42 + var111 >=2 ) & (var42 != var113 & var42 + var113 >=2 ) & (var42 != var117 & var42 + var117 >=2 ) & (var42 != var125 & var42 + var125 >=2 ) & (var42 != var13 & var42 + var13 >=2 ) & (var42 != var130 & var42 + var130 >=2 ) & (var42 != var143 & var42 + var143 >=2 ) & (var42 != var45 & var42 + var45 >=2 ) & (var42 != var79 & var42 + var79 >=2 ) & (var42 != var84 & var42 + var84 >=2 ) & (var42 != var90 & var42 + var90 >=2 ) & (var50 != var105 & var50 + var105 >=2 ) & (var50 != var14 & var50 + var14 >=2 ) & (var50 != var141 & var50 + var141 >=2 ) & (var50 != var18 & var50 + var18 >=2 ) & (var50 != var22 & var50 + var22 >=2 ) & (var50 != var28 & var50 + var28 >=2 ) & (var50 != var43 & var50 + var43 >=2 ) & (var50 != var49 & var50 + var49 >=2 ) & (var50 != var52 & var50 + var52 >=2 ) & (var50 != var56 & var50 + var56 >=2 ) & (var50 != var87 & var50 + var87 >=2 ) & (var69 != var106 & var69 + var106 >=2 ) & (var69 != var11 & var69 + var11 >=2 ) & (var69 != var112 & var69 + var112 >=2 ) & (var69 != var139 & var69 + var139 >=2 ) & (var69 != var15 & var69 + var15 >=2 ) & (var69 != var16 & var69 + var16 >=2 ) & (var69 != var32 & var69 + var32 >=2 ) & (var69 != var38 & var69 + var38 >=2 ) & (var69 != var60 & var69 + var60 >=2 ) & (var69 != var75 & var69 + var75 >=2 ) & (var69 != var99 & var69 + var99 >=2 ) & (var70 != var107 & var70 + var107 >=2 ) & (var70 != var119 & var70 + var119 >=2 ) & (var70 != var120 & var70 + var120 >=2 ) & (var70 != var131 & var70 + var131 >=2 ) & (var70 != var17 & var70 + var17 >=2 ) & (var70 != var23 & var70 + var23 >=2 ) & (var70 != var24 & var70 + var24 >=2 ) & (var70 != var44 & var70 + var44 >=2 ) & (var70 != var61 & var70 + var61 >=2 ) & (var70 != var88 & var70 + var88 >=2 ) & (var70 != var92 & var70 + var92 >=2 ) & (var73 != var100 & var73 + var100 >=2 ) & (var73 != var26 & var73 + var26 >=2 ) & (var73 != var37 & var73 + var37 >=2 ) & (var73 != var39 & var73 + var39 >=2 ) & (var73 != var51 & var73 + var51 >=2 ) & (var73 != var54 & var73 + var54 >=2 ) & (var73 != var7 & var73 + var7 >=2 ) & (var73 != var72 & var73 + var72 >=2 ) & (var73 != var74 & var73 + var74 >=2 ) & (var73 != var83 & var73 + var83 >=2 ) & (var73 != var96 & var73 + var96 >=2 ) & (var77 != var101 & var77 + var101 >=2 ) & (var77 != var122 & var77 + var122 >=2 ) & (var77 != var20 & var77 + var20 >=2 ) & (var77 != var27 & var77 + var27 >=2 ) & (var77 != var30 & var77 + var30 >=2 ) & (var77 != var4 & var77 + var4 >=2 ) & (var77 != var41 & var77 + var41 >=2 ) & (var77 != var62 & var77 + var62 >=2 ) & (var77 != var67 & var77 + var67 >=2 ) & (var77 != var76 & var77 + var76 >=2 ) & (var77 != var82 & var77 + var82 >=2 ) & (var85 != var116 & var85 + var116 >=2 ) & (var85 != var118 & var85 + var118 >=2 ) & (var85 != var138 & var85 + var138 >=2 ) & (var85 != var19 & var85 + var19 >=2 ) & (var85 != var35 & var85 + var35 >=2 ) & (var85 != var53 & var85 + var53 >=2 ) & (var85 != var57 & var85 + var57 >=2 ) & (var85 != var68 & var85 + var68 >=2 ) & (var85 != var8 & var85 + var8 >=2 ) & (var85 != var81 & var85 + var81 >=2 ) & (var85 != var91 & var85 + var91 >=2 ) & (var93 != var0 & var93 + var0 >=2 ) & (var93 != var102 & var93 + var102 >=2 ) & (var93 != var110 & var93 + var110 >=2 ) & (var93 != var123 & var93 + var123 >=2 ) & (var93 != var134 & var93 + var134 >=2 ) & (var93 != var25 & var93 + var25 >=2 ) & (var93 != var63 & var93 + var63 >=2 ) & (var93 != var65 & var93 + var65 >=2 ) & (var93 != var66 & var93 + var66 >=2 ) & (var93 != var80 & var93 + var80 >=2 ) & (var93 != var86 & var93 + var86 >=2 ) &  1))
myvar0 = 1;
else exit(0);
if((( 0 > (var0 - var123)*(var123 - var0)) & ( 0 > (var0 - var134)*(var134 - var0)) & ( 0 > (var0 - var25)*(var25 - var0)) & ( 0 > (var0 - var65)*(var65 - var0)) & ( 0 > (var1 - var108)*(var108 - var1)) & ( 0 > (var1 - var135)*(var135 - var1)) & ( 0 > (var10 - var12)*(var12 - var10)) & ( 0 > (var10 - var137)*(var137 - var10)) & ( 0 > (var10 - var21)*(var21 - var10)) & ( 0 > (var100 - var51)*(var51 - var100)) & ( 0 > (var100 - var7)*(var7 - var100)) & ( 0 > (var100 - var96)*(var96 - var100)) & ( 0 > (var101 - var20)*(var20 - var101)) & ( 0 > (var101 - var27)*(var27 - var101)) & ( 0 > (var101 - var30)*(var30 - var101)) & ( 0 > (var101 - var4)*(var4 - var101)) & ( 0 > (var102 - var110)*(var110 - var102)) & ( 0 > (var102 - var63)*(var63 - var102)) & ( 0 > (var102 - var65)*(var65 - var102)) & ( 0 > (var102 - var66)*(var66 - var102)) & ( 0 > (var102 - var80)*(var80 - var102)) & ( 0 > (var102 - var86)*(var86 - var102)) & ( 0 > (var103 - var137)*(var137 - var103)) & ( 0 > (var104 - var126)*(var126 - var104)) & ( 0 > (var104 - var136)*(var136 - var104)) & ( 0 > (var105 - var141)*(var141 - var105)) & ( 0 > (var106 - var60)*(var60 - var106)) & ( 0 > (var109 - var103)*(var103 - var109)) & ( 0 > (var109 - var137)*(var137 - var109)) & ( 0 > (var11 - var106)*(var106 - var11)) & ( 0 > (var11 - var60)*(var60 - var11)) & ( 0 > (var110 - var134)*(var134 - var110)) & ( 0 > (var110 - var66)*(var66 - var110)) & ( 0 > (var110 - var80)*(var80 - var110)) & ( 0 > (var110 - var86)*(var86 - var110)) & ( 0 > (var112 - var60)*(var60 - var112)) & ( 0 > (var113 - var111)*(var111 - var113)) & ( 0 > (var114 - var1)*(var1 - var114)) & ( 0 > (var114 - var108)*(var108 - var114)) & ( 0 > (var114 - var128)*(var128 - var114)) & ( 0 > (var114 - var142)*(var142 - var114)) & ( 0 > (var114 - var40)*(var40 - var114)) & ( 0 > (var114 - var59)*(var59 - var114)) & ( 0 > (var115 - var103)*(var103 - var115)) & ( 0 > (var115 - var137)*(var137 - var115)) & ( 0 > (var115 - var58)*(var58 - var115)) & ( 0 > (var116 - var138)*(var138 - var116)) & ( 0 > (var116 - var81)*(var81 - var116)) & ( 0 > (var117 - var113)*(var113 - var117)) & ( 0 > (var117 - var125)*(var125 - var117)) & ( 0 > (var117 - var130)*(var130 - var117)) & ( 0 > (var117 - var143)*(var143 - var117)) & ( 0 > (var117 - var79)*(var79 - var117)) & ( 0 > (var117 - var84)*(var84 - var117)) & ( 0 > (var118 - var116)*(var116 - var118)) & ( 0 > (var118 - var138)*(var138 - var118)) & ( 0 > (var118 - var19)*(var19 - var118)) & ( 0 > (var118 - var53)*(var53 - var118)) & ( 0 > (var118 - var8)*(var8 - var118)) & ( 0 > (var118 - var81)*(var81 - var118)) & ( 0 > (var118 - var91)*(var91 - var118)) & ( 0 > (var119 - var107)*(var107 - var119)) & ( 0 > (var12 - var103)*(var103 - var12)) & ( 0 > (var12 - var109)*(var109 - var12)) & ( 0 > (var120 - var119)*(var119 - var120)) & ( 0 > (var120 - var131)*(var131 - var120)) & ( 0 > (var120 - var17)*(var17 - var120)) & ( 0 > (var120 - var24)*(var24 - var120)) & ( 0 > (var120 - var61)*(var61 - var120)) & ( 0 > (var120 - var92)*(var92 - var120)) & ( 0 > (var121 - var108)*(var108 - var121)) & ( 0 > (var121 - var128)*(var128 - var121)) & ( 0 > (var121 - var129)*(var129 - var121)) & ( 0 > (var121 - var40)*(var40 - var121)) & ( 0 > (var121 - var59)*(var59 - var121)) & ( 0 > (var122 - var101)*(var101 - var122)) & ( 0 > (var122 - var20)*(var20 - var122)) & ( 0 > (var122 - var27)*(var27 - var122)) & ( 0 > (var122 - var76)*(var76 - var122)) & ( 0 > (var123 - var134)*(var134 - var123)) & ( 0 > (var123 - var65)*(var65 - var123)) & ( 0 > (var123 - var66)*(var66 - var123)) & ( 0 > (var123 - var80)*(var80 - var123)) & ( 0 > (var123 - var86)*(var86 - var123)) & ( 0 > (var124 - var127)*(var127 - var124)) & ( 0 > (var124 - var140)*(var140 - var124)) & ( 0 > (var124 - var36)*(var36 - var124)) & ( 0 > (var124 - var46)*(var46 - var124)) & ( 0 > (var125 - var111)*(var111 - var125)) & ( 0 > (var125 - var13)*(var13 - var125)) & ( 0 > (var125 - var45)*(var45 - var125)) & ( 0 > (var126 - var132)*(var132 - var126)) & ( 0 > (var127 - var33)*(var33 - var127)) & ( 0 > (var127 - var64)*(var64 - var127)) & ( 0 > (var128 - var1)*(var1 - var128)) & ( 0 > (var128 - var129)*(var129 - var128)) & ( 0 > (var128 - var142)*(var142 - var128)) & ( 0 > (var129 - var1)*(var1 - var129)) & ( 0 > (var13 - var111)*(var111 - var13)) & ( 0 > (var13 - var113)*(var113 - var13)) & ( 0 > (var13 - var130)*(var130 - var13)) & ( 0 > (var13 - var45)*(var45 - var13)) & ( 0 > (var130 - var111)*(var111 - var130)) & ( 0 > (var132 - var136)*(var136 - var132)) & ( 0 > (var133 - var127)*(var127 - var133)) & ( 0 > (var133 - var140)*(var140 - var133)) & ( 0 > (var133 - var33)*(var33 - var133)) & ( 0 > (var133 - var95)*(var95 - var133)) & ( 0 > (var134 - var65)*(var65 - var134)) & ( 0 > (var139 - var16)*(var16 - var139)) & ( 0 > (var139 - var38)*(var38 - var139)) & ( 0 > (var139 - var75)*(var75 - var139)) & ( 0 > (var14 - var105)*(var105 - var14)) & ( 0 > (var14 - var28)*(var28 - var14)) & ( 0 > (var14 - var52)*(var52 - var14)) & ( 0 > (var14 - var87)*(var87 - var14)) & ( 0 > (var140 - var127)*(var127 - var140)) & ( 0 > (var140 - var33)*(var33 - var140)) & ( 0 > (var142 - var108)*(var108 - var142)) & ( 0 > (var142 - var129)*(var129 - var142)) & ( 0 > (var15 - var11)*(var11 - var15)) & ( 0 > (var15 - var38)*(var38 - var15)) & ( 0 > (var15 - var60)*(var60 - var15)) & ( 0 > (var15 - var75)*(var75 - var15)) & ( 0 > (var16 - var106)*(var106 - var16)) & ( 0 > (var16 - var112)*(var112 - var16)) & ( 0 > (var16 - var38)*(var38 - var16)) & ( 0 > (var17 - var107)*(var107 - var17)) & ( 0 > (var17 - var119)*(var119 - var17)) & ( 0 > (var17 - var131)*(var131 - var17)) & ( 0 > (var17 - var61)*(var61 - var17)) & ( 0 > (var18 - var105)*(var105 - var18)) & ( 0 > (var18 - var28)*(var28 - var18)) & ( 0 > (var18 - var49)*(var49 - var18)) & ( 0 > (var18 - var87)*(var87 - var18)) & ( 0 > (var20 - var27)*(var27 - var20)) & ( 0 > (var20 - var4)*(var4 - var20)) & ( 0 > (var21 - var137)*(var137 - var21)) & ( 0 > (var22 - var105)*(var105 - var22)) & ( 0 > (var22 - var14)*(var14 - var22)) & ( 0 > (var22 - var18)*(var18 - var22)) & ( 0 > (var22 - var28)*(var28 - var22)) & ( 0 > (var22 - var49)*(var49 - var22)) & ( 0 > (var23 - var119)*(var119 - var23)) & ( 0 > (var23 - var120)*(var120 - var23)) & ( 0 > (var23 - var131)*(var131 - var23)) & ( 0 > (var23 - var17)*(var17 - var23)) & ( 0 > (var23 - var24)*(var24 - var23)) & ( 0 > (var23 - var92)*(var92 - var23)) & ( 0 > (var24 - var107)*(var107 - var24)) & ( 0 > (var24 - var131)*(var131 - var24)) & ( 0 > (var24 - var61)*(var61 - var24)) & ( 0 > (var24 - var92)*(var92 - var24)) & ( 0 > (var25 - var123)*(var123 - var25)) & ( 0 > (var25 - var134)*(var134 - var25)) & ( 0 > (var25 - var65)*(var65 - var25)) & ( 0 > (var25 - var66)*(var66 - var25)) & ( 0 > (var25 - var80)*(var80 - var25)) & ( 0 > (var26 - var100)*(var100 - var26)) & ( 0 > (var26 - var37)*(var37 - var26)) & ( 0 > (var26 - var51)*(var51 - var26)) & ( 0 > (var26 - var54)*(var54 - var26)) & ( 0 > (var26 - var72)*(var72 - var26)) & ( 0 > (var26 - var74)*(var74 - var26)) & ( 0 > (var26 - var83)*(var83 - var26)) & ( 0 > (var26 - var96)*(var96 - var26)) & ( 0 > (var28 - var141)*(var141 - var28)) & ( 0 > (var28 - var49)*(var49 - var28)) & ( 0 > (var28 - var87)*(var87 - var28)) & ( 0 > (var29 - var132)*(var132 - var29)) & ( 0 > (var29 - var97)*(var97 - var29)) & ( 0 > (var3 - var103)*(var103 - var3)) & ( 0 > (var3 - var109)*(var109 - var3)) & ( 0 > (var3 - var137)*(var137 - var3)) & ( 0 > (var3 - var58)*(var58 - var3)) & ( 0 > (var3 - var9)*(var9 - var3)) & ( 0 > (var30 - var4)*(var4 - var30)) & ( 0 > (var32 - var15)*(var15 - var32)) & ( 0 > (var32 - var16)*(var16 - var32)) & ( 0 > (var32 - var60)*(var60 - var32)) & ( 0 > (var35 - var138)*(var138 - var35)) & ( 0 > (var36 - var127)*(var127 - var36)) & ( 0 > (var37 - var72)*(var72 - var37)) & ( 0 > (var37 - var96)*(var96 - var37)) & ( 0 > (var38 - var11)*(var11 - var38)) & ( 0 > (var38 - var60)*(var60 - var38)) & ( 0 > (var40 - var108)*(var108 - var40)) & ( 0 > (var40 - var142)*(var142 - var40)) & ( 0 > (var41 - var122)*(var122 - var41)) & ( 0 > (var41 - var27)*(var27 - var41)) & ( 0 > (var41 - var4)*(var4 - var41)) & ( 0 > (var41 - var76)*(var76 - var41)) & ( 0 > (var43 - var105)*(var105 - var43)) & ( 0 > (var43 - var14)*(var14 - var43)) & ( 0 > (var43 - var141)*(var141 - var43)) & ( 0 > (var43 - var22)*(var22 - var43)) & ( 0 > (var43 - var49)*(var49 - var43)) & ( 0 > (var43 - var56)*(var56 - var43)) & ( 0 > (var44 - var107)*(var107 - var44)) & ( 0 > (var44 - var23)*(var23 - var44)) & ( 0 > (var44 - var24)*(var24 - var44)) & ( 0 > (var44 - var61)*(var61 - var44)) & ( 0 > (var46 - var127)*(var127 - var46)) & ( 0 > (var46 - var140)*(var140 - var46)) & ( 0 > (var46 - var33)*(var33 - var46)) & ( 0 > (var46 - var95)*(var95 - var46)) & ( 0 > (var47 - var133)*(var133 - var47)) & ( 0 > (var47 - var33)*(var33 - var47)) & ( 0 > (var47 - var36)*(var36 - var47)) & ( 0 > (var48 - var104)*(var104 - var48)) & ( 0 > (var48 - var126)*(var126 - var48)) & ( 0 > (var48 - var132)*(var132 - var48)) & ( 0 > (var48 - var29)*(var29 - var48)) & ( 0 > (var48 - var94)*(var94 - var48)) & ( 0 > (var48 - var97)*(var97 - var48)) & ( 0 > (var49 - var105)*(var105 - var49)) & ( 0 > (var49 - var141)*(var141 - var49)) & ( 0 > (var49 - var87)*(var87 - var49)) & ( 0 > (var5 - var126)*(var126 - var5)) & ( 0 > (var5 - var132)*(var132 - var5)) & ( 0 > (var5 - var136)*(var136 - var5)) & ( 0 > (var5 - var29)*(var29 - var5)) & ( 0 > (var5 - var94)*(var94 - var5)) & ( 0 > (var5 - var97)*(var97 - var5)) & ( 0 > (var51 - var39)*(var39 - var51)) & ( 0 > (var51 - var54)*(var54 - var51)) & ( 0 > (var51 - var72)*(var72 - var51)) & ( 0 > (var51 - var96)*(var96 - var51)) & ( 0 > (var52 - var141)*(var141 - var52)) & ( 0 > (var52 - var28)*(var28 - var52)) & ( 0 > (var53 - var138)*(var138 - var53)) & ( 0 > (var53 - var19)*(var19 - var53)) & ( 0 > (var53 - var35)*(var35 - var53)) & ( 0 > (var53 - var81)*(var81 - var53)) & ( 0 > (var54 - var74)*(var74 - var54)) & ( 0 > (var55 - var10)*(var10 - var55)) & ( 0 > (var55 - var103)*(var103 - var55)) & ( 0 > (var55 - var21)*(var21 - var55)) & ( 0 > (var55 - var58)*(var58 - var55)) & ( 0 > (var55 - var71)*(var71 - var55)) & ( 0 > (var56 - var105)*(var105 - var56)) & ( 0 > (var56 - var14)*(var14 - var56)) & ( 0 > (var56 - var49)*(var49 - var56)) & ( 0 > (var56 - var52)*(var52 - var56)) & ( 0 > (var57 - var116)*(var116 - var57)) & ( 0 > (var57 - var138)*(var138 - var57)) & ( 0 > (var57 - var35)*(var35 - var57)) & ( 0 > (var57 - var8)*(var8 - var57)) & ( 0 > (var58 - var103)*(var103 - var58)) & ( 0 > (var58 - var12)*(var12 - var58)) & ( 0 > (var6 - var128)*(var128 - var6)) & ( 0 > (var6 - var129)*(var129 - var6)) & ( 0 > (var6 - var142)*(var142 - var6)) & ( 0 > (var6 - var40)*(var40 - var6)) & ( 0 > (var6 - var59)*(var59 - var6)) & ( 0 > (var61 - var131)*(var131 - var61)) & ( 0 > (var62 - var122)*(var122 - var62)) & ( 0 > (var62 - var27)*(var27 - var62)) & ( 0 > (var62 - var67)*(var67 - var62)) & ( 0 > (var63 - var134)*(var134 - var63)) & ( 0 > (var63 - var65)*(var65 - var63)) & ( 0 > (var64 - var33)*(var33 - var64)) & ( 0 > (var67 - var27)*(var27 - var67)) & ( 0 > (var68 - var118)*(var118 - var68)) & ( 0 > (var68 - var53)*(var53 - var68)) & ( 0 > (var68 - var8)*(var8 - var68)) & ( 0 > (var68 - var81)*(var81 - var68)) & ( 0 > (var68 - var91)*(var91 - var68)) & ( 0 > (var7 - var37)*(var37 - var7)) & ( 0 > (var7 - var39)*(var39 - var7)) & ( 0 > (var7 - var54)*(var54 - var7)) & ( 0 > (var7 - var72)*(var72 - var7)) & ( 0 > (var7 - var74)*(var74 - var7)) & ( 0 > (var7 - var96)*(var96 - var7)) & ( 0 > (var71 - var10)*(var10 - var71)) & ( 0 > (var72 - var39)*(var39 - var72)) & ( 0 > (var72 - var54)*(var54 - var72)) & ( 0 > (var72 - var96)*(var96 - var72)) & ( 0 > (var74 - var39)*(var39 - var74)) & ( 0 > (var74 - var96)*(var96 - var74)) & ( 0 > (var75 - var60)*(var60 - var75)) & ( 0 > (var75 - var99)*(var99 - var75)) & ( 0 > (var76 - var101)*(var101 - var76)) & ( 0 > (var76 - var20)*(var20 - var76)) & ( 0 > (var76 - var27)*(var27 - var76)) & ( 0 > (var78 - var132)*(var132 - var78)) & ( 0 > (var78 - var94)*(var94 - var78)) & ( 0 > (var78 - var98)*(var98 - var78)) & ( 0 > (var79 - var111)*(var111 - var79)) & ( 0 > (var79 - var113)*(var113 - var79)) & ( 0 > (var79 - var125)*(var125 - var79)) & ( 0 > (var79 - var143)*(var143 - var79)) & ( 0 > (var79 - var45)*(var45 - var79)) & ( 0 > (var80 - var134)*(var134 - var80)) & ( 0 > (var80 - var65)*(var65 - var80)) & ( 0 > (var80 - var86)*(var86 - var80)) & ( 0 > (var81 - var138)*(var138 - var81)) & ( 0 > (var81 - var19)*(var19 - var81)) & ( 0 > (var81 - var8)*(var8 - var81)) & ( 0 > (var82 - var101)*(var101 - var82)) & ( 0 > (var82 - var20)*(var20 - var82)) & ( 0 > (var82 - var41)*(var41 - var82)) & ( 0 > (var83 - var51)*(var51 - var83)) & ( 0 > (var83 - var7)*(var7 - var83)) & ( 0 > (var83 - var96)*(var96 - var83)) & ( 0 > (var84 - var111)*(var111 - var84)) & ( 0 > (var84 - var113)*(var113 - var84)) & ( 0 > (var84 - var125)*(var125 - var84)) & ( 0 > (var84 - var130)*(var130 - var84)) & ( 0 > (var84 - var45)*(var45 - var84)) & ( 0 > (var86 - var134)*(var134 - var86)) & ( 0 > (var86 - var65)*(var65 - var86)) & ( 0 > (var87 - var141)*(var141 - var87)) & ( 0 > (var88 - var23)*(var23 - var88)) & ( 0 > (var88 - var24)*(var24 - var88)) & ( 0 > (var89 - var133)*(var133 - var89)) & ( 0 > (var89 - var46)*(var46 - var89)) & ( 0 > (var89 - var47)*(var47 - var89)) & ( 0 > (var89 - var95)*(var95 - var89)) & ( 0 > (var9 - var10)*(var10 - var9)) & ( 0 > (var9 - var103)*(var103 - var9)) & ( 0 > (var9 - var109)*(var109 - var9)) & ( 0 > (var9 - var12)*(var12 - var9)) & ( 0 > (var9 - var21)*(var21 - var9)) & ( 0 > (var9 - var58)*(var58 - var9)) & ( 0 > (var90 - var111)*(var111 - var90)) & ( 0 > (var90 - var117)*(var117 - var90)) & ( 0 > (var90 - var125)*(var125 - var90)) & ( 0 > (var90 - var13)*(var13 - var90)) & ( 0 > (var90 - var130)*(var130 - var90)) & ( 0 > (var90 - var45)*(var45 - var90)) & ( 0 > (var91 - var138)*(var138 - var91)) & ( 0 > (var91 - var19)*(var19 - var91)) & ( 0 > (var91 - var35)*(var35 - var91)) & ( 0 > (var91 - var53)*(var53 - var91)) & ( 0 > (var91 - var8)*(var8 - var91)) & ( 0 > (var91 - var81)*(var81 - var91)) & ( 0 > (var92 - var107)*(var107 - var92)) & ( 0 > (var92 - var61)*(var61 - var92)) & ( 0 > (var94 - var126)*(var126 - var94)) & ( 0 > (var95 - var33)*(var33 - var95)) & ( 0 > (var96 - var39)*(var39 - var96)) & ( 0 > (var97 - var136)*(var136 - var97)) & ( 0 > (var98 - var29)*(var29 - var98)) & ( 0 > (var98 - var97)*(var97 - var98)) & ( 0 > (var99 - var106)*(var106 - var99)) & ( 0 > (var99 - var60)*(var60 - var99)) &  1))
myvar0 = 1;
else exit(0);
if(((var0 != var102) & (var0 != var110) & (var0 != var63) & (var0 != var66) & (var0 != var80) & (var0 != var86) & (var10 != var103) & (var10 != var109) & (var100 != var37) & (var100 != var39) & (var100 != var54) & (var100 != var72) & (var100 != var74) & (var102 != var123) & (var102 != var134) & (var102 != var25) & (var104 != var132) & (var105 != var87) & (var108 != var135) & (var11 != var112) & (var110 != var123) & (var110 != var25) & (var110 != var65) & (var111 != var143) & (var112 != var106) & (var113 != var130) & (var113 != var143) & (var114 != var129) & (var114 != var135) & (var114 != var6) & (var115 != var10) & (var115 != var109) & (var115 != var12) & (var115 != var21) & (var115 != var71) & (var116 != var19) & (var116 != var35) & (var116 != var53) & (var116 != var8) & (var117 != var111) & (var117 != var13) & (var117 != var45) & (var118 != var35) & (var119 != var131) & (var119 != var61) & (var119 != var92) & (var12 != var137) & (var12 != var21) & (var120 != var107) & (var121 != var1) & (var121 != var114) & (var121 != var135) & (var121 != var142) & (var121 != var6) & (var122 != var30) & (var122 != var4) & (var124 != var133) & (var124 != var33) & (var124 != var47) & (var124 != var64) & (var124 != var95) & (var125 != var113) & (var125 != var130) & (var125 != var143) & (var126 != var136) & (var127 != var95) & (var128 != var108) & (var128 != var135) & (var128 != var40) & (var128 != var59) & (var129 != var108) & (var129 != var135) & (var129 != var59) & (var13 != var143) & (var130 != var143) & (var131 != var107) & (var133 != var36) & (var133 != var46) & (var133 != var64) & (var134 != var66) & (var139 != var106) & (var139 != var11) & (var139 != var112) & (var139 != var60) & (var139 != var99) & (var14 != var141) & (var14 != var18) & (var14 != var49) & (var140 != var36) & (var140 != var64) & (var140 != var95) & (var142 != var1) & (var142 != var135) & (var142 != var59) & (var15 != var106) & (var15 != var112) & (var15 != var139) & (var15 != var16) & (var15 != var99) & (var16 != var11) & (var16 != var60) & (var16 != var75) & (var16 != var99) & (var17 != var24) & (var17 != var92) & (var18 != var141) & (var18 != var52) & (var19 != var138) & (var20 != var30) & (var21 != var103) & (var21 != var109) & (var22 != var141) & (var22 != var52) & (var22 != var87) & (var23 != var107) & (var23 != var61) & (var24 != var119) & (var25 != var86) & (var26 != var39) & (var26 != var7) & (var28 != var105) & (var29 != var104) & (var29 != var126) & (var29 != var136) & (var29 != var94) & (var3 != var10) & (var3 != var115) & (var3 != var12) & (var3 != var21) & (var3 != var71) & (var30 != var27) & (var32 != var106) & (var32 != var11) & (var32 != var112) & (var32 != var139) & (var32 != var38) & (var32 != var75) & (var32 != var99) & (var35 != var19) & (var35 != var8) & (var36 != var33) & (var36 != var64) & (var36 != var95) & (var37 != var39) & (var37 != var54) & (var37 != var74) & (var38 != var106) & (var38 != var112) & (var38 != var99) & (var4 != var27) & (var40 != var1) & (var40 != var129) & (var40 != var135) & (var40 != var59) & (var41 != var101) & (var41 != var20) & (var41 != var30) & (var41 != var62) & (var41 != var67) & (var43 != var18) & (var43 != var28) & (var43 != var52) & (var43 != var87) & (var44 != var119) & (var44 != var120) & (var44 != var131) & (var44 != var17) & (var44 != var92) & (var45 != var111) & (var45 != var113) & (var45 != var130) & (var45 != var143) & (var46 != var36) & (var46 != var64) & (var47 != var127) & (var47 != var140) & (var47 != var46) & (var47 != var64) & (var47 != var95) & (var48 != var136) & (var48 != var98) & (var5 != var104) & (var5 != var48) & (var5 != var78) & (var5 != var98) & (var51 != var37) & (var51 != var7) & (var51 != var74) & (var52 != var105) & (var52 != var49) & (var52 != var87) & (var53 != var8) & (var54 != var39) & (var54 != var96) & (var55 != var109) & (var55 != var115) & (var55 != var12) & (var55 != var137) & (var55 != var3) & (var55 != var9) & (var56 != var141) & (var56 != var18) & (var56 != var22) & (var56 != var28) & (var56 != var87) & (var57 != var118) & (var57 != var19) & (var57 != var53) & (var57 != var81) & (var57 != var91) & (var58 != var10) & (var58 != var109) & (var58 != var137) & (var58 != var21) & (var58 != var71) & (var59 != var1) & (var59 != var108) & (var59 != var135) & (var6 != var1) & (var6 != var108) & (var6 != var135) & (var61 != var107) & (var62 != var101) & (var62 != var20) & (var62 != var30) & (var62 != var4) & (var62 != var76) & (var63 != var110) & (var63 != var123) & (var63 != var25) & (var63 != var66) & (var63 != var80) & (var63 != var86) & (var64 != var95) & (var66 != var65) & (var67 != var101) & (var67 != var122) & (var67 != var20) & (var67 != var30) & (var67 != var4) & (var67 != var76) & (var68 != var116) & (var68 != var138) & (var68 != var19) & (var68 != var35) & (var68 != var57) & (var71 != var103) & (var71 != var109) & (var71 != var12) & (var71 != var137) & (var71 != var21) & (var72 != var74) & (var75 != var106) & (var75 != var11) & (var75 != var112) & (var75 != var38) & (var76 != var30) & (var76 != var4) & (var78 != var104) & (var78 != var126) & (var78 != var136) & (var78 != var29) & (var78 != var48) & (var78 != var97) & (var79 != var13) & (var79 != var130) & (var79 != var84) & (var8 != var138) & (var8 != var19) & (var80 != var66) & (var81 != var35) & (var82 != var122) & (var82 != var27) & (var82 != var30) & (var82 != var4) & (var82 != var62) & (var82 != var67) & (var82 != var76) & (var83 != var100) & (var83 != var37) & (var83 != var39) & (var83 != var54) & (var83 != var72) & (var83 != var74) & (var84 != var13) & (var84 != var143) & (var86 != var66) & (var88 != var107) & (var88 != var119) & (var88 != var120) & (var88 != var131) & (var88 != var17) & (var88 != var44) & (var88 != var61) & (var88 != var92) & (var89 != var124) & (var89 != var127) & (var89 != var140) & (var89 != var33) & (var89 != var36) & (var89 != var64) & (var9 != var115) & (var9 != var137) & (var9 != var71) & (var90 != var113) & (var90 != var143) & (var90 != var79) & (var90 != var84) & (var91 != var116) & (var92 != var131) & (var94 != var104) & (var94 != var132) & (var94 != var136) & (var97 != var104) & (var97 != var126) & (var97 != var132) & (var97 != var94) & (var98 != var104) & (var98 != var126) & (var98 != var132) & (var98 != var136) & (var98 != var94) & (var99 != var11) & (var99 != var112) & (var10 == var34) & (var103 == var42) & (var109 == var69) & (var115 == var85) & (var12 == var77) & (var21 == var2) & (var3 == var73) & (var55 == var50) & (var58 == var31) & (var71 == var93) & (var9 == var70) &  1))
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
64 x[64]
65 x[65]
66 x[66]
67 x[67]
68 x[68]
69 x[69]
70 x[70]
71 x[71]
72 x[72]
73 x[73]
74 x[74]
75 x[75]
76 x[76]
77 x[77]
78 x[78]
79 x[79]
80 x[80]
81 x[81]
82 x[82]
83 x[83]
84 x[84]
85 x[85]
86 x[86]
87 x[87]
88 x[88]
89 x[89]
90 x[90]
91 x[91]
92 x[92]
93 x[93]
94 x[94]
95 x[95]
96 x[96]
97 x[97]
98 x[98]
99 x[99]
100 x[100]
101 x[101]
102 x[102]
103 x[103]
104 x[104]
105 x[105]
106 x[106]
107 x[107]
108 x[108]
109 x[109]
110 x[110]
111 x[111]
112 x[112]
113 x[113]
114 x[114]
115 x[115]
116 x[116]
117 x[117]
118 x[118]
119 x[119]
120 x[120]
121 x[121]
122 x[122]
123 x[123]
124 x[124]
125 x[125]
126 x[126]
127 x[127]
128 x[128]
129 x[129]
130 x[130]
131 x[131]
132 x[132]
133 x[133]
134 x[134]
135 x[135]
136 x[136]
137 x[137]
138 x[138]
139 x[139]
140 x[140]
141 x[141]
142 x[142]
143 x[143]
 */}
