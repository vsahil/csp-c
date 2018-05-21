
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
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if(!((var0 >= 0 && var0 <= 12) && (var1 >= 0 && var1 <= 12) && (var2 >= 0 && var2 <= 12) && (var3 >= 0 && var3 <= 12) && (var4 >= 0 && var4 <= 12) && (var5 >= 0 && var5 <= 12) && (var6 >= 0 && var6 <= 12) && (var7 >= 0 && var7 <= 12) && (var8 >= 0 && var8 <= 12) && (var9 >= 0 && var9 <= 12) && (var10 >= 0 && var10 <= 12) && (var11 >= 0 && var11 <= 12) && (var12 >= 0 && var12 <= 12) && (var13 >= 0 && var13 <= 12) && (var14 >= 0 && var14 <= 12) && (var15 >= 0 && var15 <= 12) && (var16 >= 0 && var16 <= 12) && (var17 >= 0 && var17 <= 12) && (var18 >= 0 && var18 <= 12) && (var19 >= 0 && var19 <= 12) && (var20 >= 0 && var20 <= 12) && (var21 >= 0 && var21 <= 12) && (var22 >= 0 && var22 <= 12) && (var23 >= 0 && var23 <= 12) && (var24 >= 0 && var24 <= 12) && (var25 >= 0 && var25 <= 12) && (var26 >= 0 && var26 <= 12) && (var27 >= 0 && var27 <= 12) && (var28 >= 0 && var28 <= 12) && (var29 >= 0 && var29 <= 12) && (var30 >= 0 && var30 <= 12) && (var31 >= 0 && var31 <= 12) && (var32 >= 0 && var32 <= 12) && (var33 >= 0 && var33 <= 12) && (var34 >= 0 && var34 <= 12) && (var35 >= 0 && var35 <= 12) && (var36 >= 0 && var36 <= 12) && (var37 >= 0 && var37 <= 12) && (var38 >= 0 && var38 <= 12) && (var39 >= 0 && var39 <= 12) && (var40 >= 0 && var40 <= 12) && (var41 >= 0 && var41 <= 12) && (var42 >= 0 && var42 <= 12) && (var43 >= 0 && var43 <= 12) && (var44 >= 0 && var44 <= 12) && (var45 >= 0 && var45 <= 12) && (var46 >= 0 && var46 <= 12) && (var47 >= 0 && var47 <= 12) && (var48 >= 0 && var48 <= 12) && (var49 >= 0 && var49 <= 12) && (var50 >= 0 && var50 <= 12) && (var51 >= 0 && var51 <= 12) && (var52 >= 0 && var52 <= 12) && (var53 >= 0 && var53 <= 12) && (var54 >= 0 && var54 <= 12) && (var55 >= 0 && var55 <= 12) && (var56 >= 0 && var56 <= 12) && (var57 >= 0 && var57 <= 12) && (var58 >= 0 && var58 <= 12) && (var59 >= 0 && var59 <= 12) && (var60 >= 0 && var60 <= 12) && (var61 >= 0 && var61 <= 12) && (var62 >= 0 && var62 <= 12) && (var63 >= 0 && var63 <= 12) && (var64 >= 0 && var64 <= 12) && (var65 >= 0 && var65 <= 12) && (var66 >= 0 && var66 <= 12) && (var67 >= 0 && var67 <= 12) && (var68 >= 0 && var68 <= 12) && (var69 >= 0 && var69 <= 12) && (var70 >= 0 && var70 <= 12) && (var71 >= 0 && var71 <= 12) && (var72 >= 0 && var72 <= 12) && (var73 >= 0 && var73 <= 12) && (var74 >= 0 && var74 <= 12) && (var75 >= 0 && var75 <= 12) && (var76 >= 0 && var76 <= 12) && (var77 >= 0 && var77 <= 12) && (var78 >= 0 && var78 <= 12) && (var79 >= 0 && var79 <= 12) && (var80 >= 0 && var80 <= 12) && (var81 >= 0 && var81 <= 12) && (var82 >= 0 && var82 <= 12) && (var83 >= 0 && var83 <= 12) && (var84 >= 0 && var84 <= 12) && (var85 >= 0 && var85 <= 12) && (var86 >= 0 && var86 <= 12) && (var87 >= 0 && var87 <= 12) && (var88 >= 0 && var88 <= 12) && (var89 >= 0 && var89 <= 12) && (var90 >= 0 && var90 <= 12) && (var91 >= 0 && var91 <= 12) && (var92 >= 0 && var92 <= 12) && (var93 >= 0 && var93 <= 12) && (var94 >= 0 && var94 <= 12) && (var95 >= 0 && var95 <= 12) && (var96 >= 0 && var96 <= 12) && (var97 >= 0 && var97 <= 12) && (var98 >= 0 && var98 <= 12) && (var99 >= 0 && var99 <= 12) && (var100 >= 0 && var100 <= 12) && (var101 >= 0 && var101 <= 12) && (var102 >= 0 && var102 <= 12) && (var103 >= 0 && var103 <= 12) && (var104 >= 0 && var104 <= 12) && (var105 >= 0 && var105 <= 12) && (var106 >= 0 && var106 <= 12) && (var107 >= 0 && var107 <= 12) && (var108 >= 0 && var108 <= 12) && (var109 >= 0 && var109 <= 12) && (var110 >= 0 && var110 <= 12) && (var111 >= 0 && var111 <= 12) && (var112 >= 0 && var112 <= 12) && (var113 >= 0 && var113 <= 12) && (var114 >= 0 && var114 <= 12) && (var115 >= 0 && var115 <= 12) && (var116 >= 0 && var116 <= 12) && (var117 >= 0 && var117 <= 12) && (var118 >= 0 && var118 <= 12) && (var119 >= 0 && var119 <= 12) && (var120 >= 0 && var120 <= 12) && (var121 >= 0 && var121 <= 12) && (var122 >= 0 && var122 <= 12) && (var123 >= 0 && var123 <= 12) && (var124 >= 0 && var124 <= 12) && (var125 >= 0 && var125 <= 12) && (var126 >= 0 && var126 <= 12) && (var127 >= 0 && var127 <= 12) && (var128 >= 0 && var128 <= 12) && (var129 >= 0 && var129 <= 12) && (var130 >= 0 && var130 <= 12) && (var131 >= 0 && var131 <= 12) && (var132 >= 0 && var132 <= 12) && (var133 >= 0 && var133 <= 12) && (var134 >= 0 && var134 <= 12) && (var135 >= 0 && var135 <= 12) && (var136 >= 0 && var136 <= 12) && (var137 >= 0 && var137 <= 12) && (var138 >= 0 && var138 <= 12) && (var139 >= 0 && var139 <= 12) && (var140 >= 0 && var140 <= 12) && (var141 >= 0 && var141 <= 12) && (var142 >= 0 && var142 <= 12) && (var143 >= 0 && var143 <= 12) && (var144 >= 0 && var144 <= 12) && (var145 >= 0 && var145 <= 12) && (var146 >= 0 && var146 <= 12) && (var147 >= 0 && var147 <= 12) && (var148 >= 0 && var148 <= 12) && (var149 >= 0 && var149 <= 12) && (var150 >= 0 && var150 <= 12) && (var151 >= 0 && var151 <= 12) && (var152 >= 0 && var152 <= 12) && (var153 >= 0 && var153 <= 12) && (var154 >= 0 && var154 <= 12) && (var155 >= 0 && var155 <= 12) && (var156 >= 0 && var156 <= 12) && (var157 >= 0 && var157 <= 12) && (var158 >= 0 && var158 <= 12) && (var159 >= 0 && var159 <= 12) && (var160 >= 0 && var160 <= 12) && (var161 >= 0 && var161 <= 12) && (var162 >= 0 && var162 <= 12) && (var163 >= 0 && var163 <= 12) && (var164 >= 0 && var164 <= 12) && (var165 >= 0 && var165 <= 12) && (var166 >= 0 && var166 <= 12) && (var167 >= 0 && var167 <= 12) && (var168 >= 0 && var168 <= 12) &&  1))
exit(0);
if(!( 1))
exit(0);
if(!((var18 != var102 && var18 + var102 >=2 ) && (var18 != var104 && var18 + var104 >=2 ) && (var18 != var119 && var18 + var119 >=2 ) && (var18 != var12 && var18 + var12 >=2 ) && (var18 != var127 && var18 + var127 >=2 ) && (var18 != var128 && var18 + var128 >=2 ) && (var18 != var13 && var18 + var13 >=2 ) && (var18 != var145 && var18 + var145 >=2 ) && (var18 != var29 && var18 + var29 >=2 ) && (var18 != var50 && var18 + var50 >=2 ) && (var18 != var77 && var18 + var77 >=2 ) && (var18 != var84 && var18 + var84 >=2 ) && (var25 != var103 && var25 + var103 >=2 ) && (var25 != var137 && var25 + var137 >=2 ) && (var25 != var146 && var25 + var146 >=2 ) && (var25 != var156 && var25 + var156 >=2 ) && (var25 != var157 && var25 + var157 >=2 ) && (var25 != var167 && var25 + var167 >=2 ) && (var25 != var44 && var25 + var44 >=2 ) && (var25 != var46 && var25 + var46 >=2 ) && (var25 != var60 && var25 + var60 >=2 ) && (var25 != var74 && var25 + var74 >=2 ) && (var25 != var78 && var25 + var78 >=2 ) && (var25 != var96 && var25 + var96 >=2 ) && (var49 != var105 && var49 + var105 >=2 ) && (var49 != var120 && var49 + var120 >=2 ) && (var49 != var122 && var49 + var122 >=2 ) && (var49 != var125 && var49 + var125 >=2 ) && (var49 != var134 && var49 + var134 >=2 ) && (var49 != var142 && var49 + var142 >=2 ) && (var49 != var150 && var49 + var150 >=2 ) && (var49 != var159 && var49 + var159 >=2 ) && (var49 != var19 && var49 + var19 >=2 ) && (var49 != var32 && var49 + var32 >=2 ) && (var49 != var58 && var49 + var58 >=2 ) && (var49 != var93 && var49 + var93 >=2 ) && (var52 != var133 && var52 + var133 >=2 ) && (var52 != var136 && var52 + var136 >=2 ) && (var52 != var161 && var52 + var161 >=2 ) && (var52 != var164 && var52 + var164 >=2 ) && (var52 != var2 && var52 + var2 >=2 ) && (var52 != var34 && var52 + var34 >=2 ) && (var52 != var54 && var52 + var54 >=2 ) && (var52 != var66 && var52 + var66 >=2 ) && (var52 != var72 && var52 + var72 >=2 ) && (var52 != var8 && var52 + var8 >=2 ) && (var52 != var88 && var52 + var88 >=2 ) && (var52 != var99 && var52 + var99 >=2 ) && (var55 != var144 && var55 + var144 >=2 ) && (var55 != var148 && var55 + var148 >=2 ) && (var55 != var155 && var55 + var155 >=2 ) && (var55 != var160 && var55 + var160 >=2 ) && (var55 != var168 && var55 + var168 >=2 ) && (var55 != var17 && var55 + var17 >=2 ) && (var55 != var21 && var55 + var21 >=2 ) && (var55 != var28 && var55 + var28 >=2 ) && (var55 != var47 && var55 + var47 >=2 ) && (var55 != var51 && var55 + var51 >=2 ) && (var55 != var61 && var55 + var61 >=2 ) && (var55 != var70 && var55 + var70 >=2 ) && (var56 != var10 && var56 + var10 >=2 ) && (var56 != var100 && var56 + var100 >=2 ) && (var56 != var111 && var56 + var111 >=2 ) && (var56 != var123 && var56 + var123 >=2 ) && (var56 != var132 && var56 + var132 >=2 ) && (var56 != var140 && var56 + var140 >=2 ) && (var56 != var154 && var56 + var154 >=2 ) && (var56 != var20 && var56 + var20 >=2 ) && (var56 != var27 && var56 + var27 >=2 ) && (var56 != var39 && var56 + var39 >=2 ) && (var56 != var71 && var56 + var71 >=2 ) && (var56 != var87 && var56 + var87 >=2 ) && (var57 != var116 && var57 + var116 >=2 ) && (var57 != var131 && var57 + var131 >=2 ) && (var57 != var135 && var57 + var135 >=2 ) && (var57 != var149 && var57 + var149 >=2 ) && (var57 != var166 && var57 + var166 >=2 ) && (var57 != var23 && var57 + var23 >=2 ) && (var57 != var24 && var57 + var24 >=2 ) && (var57 != var3 && var57 + var3 >=2 ) && (var57 != var38 && var57 + var38 >=2 ) && (var57 != var45 && var57 + var45 >=2 ) && (var57 != var86 && var57 + var86 >=2 ) && (var57 != var90 && var57 + var90 >=2 ) && (var6 != var101 && var6 + var101 >=2 ) && (var6 != var109 && var6 + var109 >=2 ) && (var6 != var110 && var6 + var110 >=2 ) && (var6 != var117 && var6 + var117 >=2 ) && (var6 != var129 && var6 + var129 >=2 ) && (var6 != var31 && var6 + var31 >=2 ) && (var6 != var37 && var6 + var37 >=2 ) && (var6 != var42 && var6 + var42 >=2 ) && (var6 != var67 && var6 + var67 >=2 ) && (var6 != var76 && var6 + var76 >=2 ) && (var6 != var80 && var6 + var80 >=2 ) && (var6 != var98 && var6 + var98 >=2 ) && (var65 != var1 && var65 + var1 >=2 ) && (var65 != var107 && var65 + var107 >=2 ) && (var65 != var11 && var65 + var11 >=2 ) && (var65 != var112 && var65 + var112 >=2 ) && (var65 != var113 && var65 + var113 >=2 ) && (var65 != var130 && var65 + var130 >=2 ) && (var65 != var139 && var65 + var139 >=2 ) && (var65 != var143 && var65 + var143 >=2 ) && (var65 != var162 && var65 + var162 >=2 ) && (var65 != var163 && var65 + var163 >=2 ) && (var65 != var5 && var65 + var5 >=2 ) && (var65 != var7 && var65 + var7 >=2 ) && (var69 != var0 && var69 + var0 >=2 ) && (var69 != var121 && var69 + var121 >=2 ) && (var69 != var126 && var69 + var126 >=2 ) && (var69 != var147 && var69 + var147 >=2 ) && (var69 != var16 && var69 + var16 >=2 ) && (var69 != var165 && var69 + var165 >=2 ) && (var69 != var63 && var69 + var63 >=2 ) && (var69 != var64 && var69 + var64 >=2 ) && (var69 != var75 && var69 + var75 >=2 ) && (var69 != var82 && var69 + var82 >=2 ) && (var69 != var83 && var69 + var83 >=2 ) && (var69 != var94 && var69 + var94 >=2 ) && (var81 != var106 && var81 + var106 >=2 ) && (var81 != var108 && var81 + var108 >=2 ) && (var81 != var115 && var81 + var115 >=2 ) && (var81 != var138 && var81 + var138 >=2 ) && (var81 != var15 && var81 + var15 >=2 ) && (var81 != var151 && var81 + var151 >=2 ) && (var81 != var152 && var81 + var152 >=2 ) && (var81 != var158 && var81 + var158 >=2 ) && (var81 != var4 && var81 + var4 >=2 ) && (var81 != var40 && var81 + var40 >=2 ) && (var81 != var73 && var81 + var73 >=2 ) && (var81 != var9 && var81 + var9 >=2 ) && (var89 != var114 && var89 + var114 >=2 ) && (var89 != var118 && var89 + var118 >=2 ) && (var89 != var124 && var89 + var124 >=2 ) && (var89 != var153 && var89 + var153 >=2 ) && (var89 != var22 && var89 + var22 >=2 ) && (var89 != var30 && var89 + var30 >=2 ) && (var89 != var33 && var89 + var33 >=2 ) && (var89 != var35 && var89 + var35 >=2 ) && (var89 != var36 && var89 + var36 >=2 ) && (var89 != var43 && var89 + var43 >=2 ) && (var89 != var62 && var89 + var62 >=2 ) && (var89 != var85 && var89 + var85 >=2 ) &&  1))
exit(0);
if(!(( 0 > (var0 - var126)*(var126 - var0)) && ( 0 > (var0 - var16)*(var16 - var0)) && ( 0 > (var0 - var165)*(var165 - var0)) && ( 0 > (var0 - var64)*(var64 - var0)) && ( 0 > (var1 - var130)*(var130 - var1)) && ( 0 > (var10 - var111)*(var111 - var10)) && ( 0 > (var10 - var123)*(var123 - var10)) && ( 0 > (var10 - var20)*(var20 - var10)) && ( 0 > (var101 - var110)*(var110 - var101)) && ( 0 > (var101 - var129)*(var129 - var101)) && ( 0 > (var102 - var127)*(var127 - var102)) && ( 0 > (var102 - var50)*(var50 - var102)) && ( 0 > (var103 - var146)*(var146 - var103)) && ( 0 > (var103 - var156)*(var156 - var103)) && ( 0 > (var103 - var167)*(var167 - var103)) && ( 0 > (var103 - var44)*(var44 - var103)) && ( 0 > (var103 - var46)*(var46 - var103)) && ( 0 > (var103 - var60)*(var60 - var103)) && ( 0 > (var103 - var78)*(var78 - var103)) && ( 0 > (var103 - var96)*(var96 - var103)) && ( 0 > (var104 - var119)*(var119 - var104)) && ( 0 > (var104 - var127)*(var127 - var104)) && ( 0 > (var104 - var29)*(var29 - var104)) && ( 0 > (var105 - var122)*(var122 - var105)) && ( 0 > (var105 - var125)*(var125 - var105)) && ( 0 > (var105 - var134)*(var134 - var105)) && ( 0 > (var105 - var19)*(var19 - var105)) && ( 0 > (var105 - var32)*(var32 - var105)) && ( 0 > (var106 - var115)*(var115 - var106)) && ( 0 > (var106 - var40)*(var40 - var106)) && ( 0 > (var106 - var73)*(var73 - var106)) && ( 0 > (var107 - var1)*(var1 - var107)) && ( 0 > (var107 - var112)*(var112 - var107)) && ( 0 > (var107 - var130)*(var130 - var107)) && ( 0 > (var108 - var106)*(var106 - var108)) && ( 0 > (var108 - var115)*(var115 - var108)) && ( 0 > (var108 - var15)*(var15 - var108)) && ( 0 > (var108 - var152)*(var152 - var108)) && ( 0 > (var108 - var158)*(var158 - var108)) && ( 0 > (var108 - var73)*(var73 - var108)) && ( 0 > (var108 - var9)*(var9 - var108)) && ( 0 > (var109 - var129)*(var129 - var109)) && ( 0 > (var109 - var42)*(var42 - var109)) && ( 0 > (var109 - var80)*(var80 - var109)) && ( 0 > (var11 - var112)*(var112 - var11)) && ( 0 > (var110 - var42)*(var42 - var110)) && ( 0 > (var110 - var80)*(var80 - var110)) && ( 0 > (var110 - var98)*(var98 - var110)) && ( 0 > (var112 - var139)*(var139 - var112)) && ( 0 > (var113 - var11)*(var11 - var113)) && ( 0 > (var113 - var130)*(var130 - var113)) && ( 0 > (var113 - var139)*(var139 - var113)) && ( 0 > (var113 - var143)*(var143 - var113)) && ( 0 > (var113 - var162)*(var162 - var113)) && ( 0 > (var113 - var5)*(var5 - var113)) && ( 0 > (var114 - var22)*(var22 - var114)) && ( 0 > (var114 - var33)*(var33 - var114)) && ( 0 > (var114 - var85)*(var85 - var114)) && ( 0 > (var116 - var135)*(var135 - var116)) && ( 0 > (var116 - var149)*(var149 - var116)) && ( 0 > (var116 - var90)*(var90 - var116)) && ( 0 > (var117 - var101)*(var101 - var117)) && ( 0 > (var117 - var129)*(var129 - var117)) && ( 0 > (var117 - var80)*(var80 - var117)) && ( 0 > (var118 - var153)*(var153 - var118)) && ( 0 > (var118 - var30)*(var30 - var118)) && ( 0 > (var118 - var33)*(var33 - var118)) && ( 0 > (var118 - var35)*(var35 - var118)) && ( 0 > (var118 - var36)*(var36 - var118)) && ( 0 > (var119 - var127)*(var127 - var119)) && ( 0 > (var12 - var127)*(var127 - var12)) && ( 0 > (var121 - var0)*(var0 - var121)) && ( 0 > (var121 - var126)*(var126 - var121)) && ( 0 > (var121 - var16)*(var16 - var121)) && ( 0 > (var121 - var165)*(var165 - var121)) && ( 0 > (var121 - var75)*(var75 - var121)) && ( 0 > (var122 - var120)*(var120 - var122)) && ( 0 > (var122 - var134)*(var134 - var122)) && ( 0 > (var122 - var142)*(var142 - var122)) && ( 0 > (var122 - var19)*(var19 - var122)) && ( 0 > (var123 - var100)*(var100 - var123)) && ( 0 > (var123 - var111)*(var111 - var123)) && ( 0 > (var123 - var20)*(var20 - var123)) && ( 0 > (var124 - var153)*(var153 - var124)) && ( 0 > (var124 - var22)*(var22 - var124)) && ( 0 > (var124 - var30)*(var30 - var124)) && ( 0 > (var124 - var33)*(var33 - var124)) && ( 0 > (var124 - var35)*(var35 - var124)) && ( 0 > (var124 - var62)*(var62 - var124)) && ( 0 > (var125 - var142)*(var142 - var125)) && ( 0 > (var125 - var159)*(var159 - var125)) && ( 0 > (var125 - var32)*(var32 - var125)) && ( 0 > (var128 - var12)*(var12 - var128)) && ( 0 > (var128 - var13)*(var13 - var128)) && ( 0 > (var128 - var145)*(var145 - var128)) && ( 0 > (var128 - var29)*(var29 - var128)) && ( 0 > (var128 - var50)*(var50 - var128)) && ( 0 > (var129 - var110)*(var110 - var129)) && ( 0 > (var129 - var98)*(var98 - var129)) && ( 0 > (var13 - var104)*(var104 - var13)) && ( 0 > (var13 - var119)*(var119 - var13)) && ( 0 > (var13 - var12)*(var12 - var13)) && ( 0 > (var13 - var29)*(var29 - var13)) && ( 0 > (var130 - var112)*(var112 - var130)) && ( 0 > (var131 - var135)*(var135 - var131)) && ( 0 > (var131 - var86)*(var86 - var131)) && ( 0 > (var132 - var20)*(var20 - var132)) && ( 0 > (var132 - var87)*(var87 - var132)) && ( 0 > (var133 - var161)*(var161 - var133)) && ( 0 > (var134 - var120)*(var120 - var134)) && ( 0 > (var134 - var142)*(var142 - var134)) && ( 0 > (var135 - var24)*(var24 - var135)) && ( 0 > (var135 - var45)*(var45 - var135)) && ( 0 > (var136 - var161)*(var161 - var136)) && ( 0 > (var136 - var2)*(var2 - var136)) && ( 0 > (var136 - var34)*(var34 - var136)) && ( 0 > (var136 - var66)*(var66 - var136)) && ( 0 > (var136 - var72)*(var72 - var136)) && ( 0 > (var136 - var88)*(var88 - var136)) && ( 0 > (var137 - var156)*(var156 - var137)) && ( 0 > (var137 - var157)*(var157 - var137)) && ( 0 > (var137 - var167)*(var167 - var137)) && ( 0 > (var137 - var60)*(var60 - var137)) && ( 0 > (var137 - var78)*(var78 - var137)) && ( 0 > (var138 - var115)*(var115 - var138)) && ( 0 > (var138 - var73)*(var73 - var138)) && ( 0 > (var14 - var26)*(var26 - var14)) && ( 0 > (var14 - var41)*(var41 - var14)) && ( 0 > (var14 - var68)*(var68 - var14)) && ( 0 > (var140 - var100)*(var100 - var140)) && ( 0 > (var140 - var123)*(var123 - var140)) && ( 0 > (var140 - var132)*(var132 - var140)) && ( 0 > (var140 - var154)*(var154 - var140)) && ( 0 > (var140 - var27)*(var27 - var140)) && ( 0 > (var140 - var39)*(var39 - var140)) && ( 0 > (var140 - var71)*(var71 - var140)) && ( 0 > (var140 - var87)*(var87 - var140)) && ( 0 > (var141 - var14)*(var14 - var141)) && ( 0 > (var141 - var26)*(var26 - var141)) && ( 0 > (var141 - var68)*(var68 - var141)) && ( 0 > (var141 - var97)*(var97 - var141)) && ( 0 > (var143 - var107)*(var107 - var143)) && ( 0 > (var143 - var130)*(var130 - var143)) && ( 0 > (var144 - var168)*(var168 - var144)) && ( 0 > (var144 - var17)*(var17 - var144)) && ( 0 > (var144 - var21)*(var21 - var144)) && ( 0 > (var144 - var28)*(var28 - var144)) && ( 0 > (var144 - var47)*(var47 - var144)) && ( 0 > (var144 - var51)*(var51 - var144)) && ( 0 > (var144 - var70)*(var70 - var144)) && ( 0 > (var145 - var102)*(var102 - var145)) && ( 0 > (var145 - var119)*(var119 - var145)) && ( 0 > (var145 - var127)*(var127 - var145)) && ( 0 > (var145 - var29)*(var29 - var145)) && ( 0 > (var145 - var50)*(var50 - var145)) && ( 0 > (var146 - var157)*(var157 - var146)) && ( 0 > (var146 - var167)*(var167 - var146)) && ( 0 > (var146 - var60)*(var60 - var146)) && ( 0 > (var146 - var96)*(var96 - var146)) && ( 0 > (var147 - var126)*(var126 - var147)) && ( 0 > (var147 - var16)*(var16 - var147)) && ( 0 > (var147 - var94)*(var94 - var147)) && ( 0 > (var148 - var144)*(var144 - var148)) && ( 0 > (var148 - var155)*(var155 - var148)) && ( 0 > (var148 - var160)*(var160 - var148)) && ( 0 > (var148 - var17)*(var17 - var148)) && ( 0 > (var148 - var21)*(var21 - var148)) && ( 0 > (var148 - var28)*(var28 - var148)) && ( 0 > (var148 - var61)*(var61 - var148)) && ( 0 > (var149 - var131)*(var131 - var149)) && ( 0 > (var149 - var23)*(var23 - var149)) && ( 0 > (var149 - var24)*(var24 - var149)) && ( 0 > (var149 - var38)*(var38 - var149)) && ( 0 > (var149 - var86)*(var86 - var149)) && ( 0 > (var15 - var106)*(var106 - var15)) && ( 0 > (var15 - var151)*(var151 - var15)) && ( 0 > (var15 - var4)*(var4 - var15)) && ( 0 > (var15 - var40)*(var40 - var15)) && ( 0 > (var15 - var73)*(var73 - var15)) && ( 0 > (var150 - var120)*(var120 - var150)) && ( 0 > (var150 - var142)*(var142 - var150)) && ( 0 > (var150 - var19)*(var19 - var150)) && ( 0 > (var151 - var106)*(var106 - var151)) && ( 0 > (var151 - var115)*(var115 - var151)) && ( 0 > (var151 - var152)*(var152 - var151)) && ( 0 > (var151 - var40)*(var40 - var151)) && ( 0 > (var151 - var73)*(var73 - var151)) && ( 0 > (var152 - var4)*(var4 - var152)) && ( 0 > (var152 - var40)*(var40 - var152)) && ( 0 > (var152 - var73)*(var73 - var152)) && ( 0 > (var153 - var33)*(var33 - var153)) && ( 0 > (var153 - var35)*(var35 - var153)) && ( 0 > (var154 - var111)*(var111 - var154)) && ( 0 > (var154 - var132)*(var132 - var154)) && ( 0 > (var154 - var20)*(var20 - var154)) && ( 0 > (var155 - var51)*(var51 - var155)) && ( 0 > (var156 - var167)*(var167 - var156)) && ( 0 > (var156 - var44)*(var44 - var156)) && ( 0 > (var156 - var60)*(var60 - var156)) && ( 0 > (var158 - var115)*(var115 - var158)) && ( 0 > (var159 - var142)*(var142 - var159)) && ( 0 > (var16 - var165)*(var165 - var16)) && ( 0 > (var16 - var64)*(var64 - var16)) && ( 0 > (var160 - var17)*(var17 - var160)) && ( 0 > (var162 - var107)*(var107 - var162)) && ( 0 > (var162 - var11)*(var11 - var162)) && ( 0 > (var162 - var139)*(var139 - var162)) && ( 0 > (var163 - var1)*(var1 - var163)) && ( 0 > (var163 - var112)*(var112 - var163)) && ( 0 > (var163 - var130)*(var130 - var163)) && ( 0 > (var163 - var139)*(var139 - var163)) && ( 0 > (var163 - var143)*(var143 - var163)) && ( 0 > (var163 - var5)*(var5 - var163)) && ( 0 > (var163 - var7)*(var7 - var163)) && ( 0 > (var164 - var133)*(var133 - var164)) && ( 0 > (var166 - var131)*(var131 - var166)) && ( 0 > (var166 - var23)*(var23 - var166)) && ( 0 > (var166 - var45)*(var45 - var166)) && ( 0 > (var166 - var86)*(var86 - var166)) && ( 0 > (var168 - var17)*(var17 - var168)) && ( 0 > (var168 - var21)*(var21 - var168)) && ( 0 > (var168 - var51)*(var51 - var168)) && ( 0 > (var168 - var70)*(var70 - var168)) && ( 0 > (var17 - var21)*(var21 - var17)) && ( 0 > (var17 - var28)*(var28 - var17)) && ( 0 > (var19 - var120)*(var120 - var19)) && ( 0 > (var19 - var134)*(var134 - var19)) && ( 0 > (var19 - var142)*(var142 - var19)) && ( 0 > (var2 - var161)*(var161 - var2)) && ( 0 > (var2 - var164)*(var164 - var2)) && ( 0 > (var2 - var88)*(var88 - var2)) && ( 0 > (var23 - var24)*(var24 - var23)) && ( 0 > (var23 - var38)*(var38 - var23)) && ( 0 > (var24 - var86)*(var86 - var24)) && ( 0 > (var26 - var97)*(var97 - var26)) && ( 0 > (var27 - var123)*(var123 - var27)) && ( 0 > (var27 - var132)*(var132 - var27)) && ( 0 > (var27 - var20)*(var20 - var27)) && ( 0 > (var29 - var119)*(var119 - var29)) && ( 0 > (var29 - var127)*(var127 - var29)) && ( 0 > (var3 - var116)*(var116 - var3)) && ( 0 > (var3 - var131)*(var131 - var3)) && ( 0 > (var3 - var166)*(var166 - var3)) && ( 0 > (var3 - var38)*(var38 - var3)) && ( 0 > (var3 - var45)*(var45 - var3)) && ( 0 > (var30 - var33)*(var33 - var30)) && ( 0 > (var30 - var36)*(var36 - var30)) && ( 0 > (var31 - var109)*(var109 - var31)) && ( 0 > (var31 - var117)*(var117 - var31)) && ( 0 > (var31 - var37)*(var37 - var31)) && ( 0 > (var31 - var42)*(var42 - var31)) && ( 0 > (var31 - var76)*(var76 - var31)) && ( 0 > (var31 - var80)*(var80 - var31)) && ( 0 > (var31 - var98)*(var98 - var31)) && ( 0 > (var32 - var120)*(var120 - var32)) && ( 0 > (var32 - var142)*(var142 - var32)) && ( 0 > (var32 - var19)*(var19 - var32)) && ( 0 > (var34 - var133)*(var133 - var34)) && ( 0 > (var34 - var2)*(var2 - var34)) && ( 0 > (var36 - var22)*(var22 - var36)) && ( 0 > (var36 - var33)*(var33 - var36)) && ( 0 > (var36 - var35)*(var35 - var36)) && ( 0 > (var37 - var101)*(var101 - var37)) && ( 0 > (var37 - var110)*(var110 - var37)) && ( 0 > (var37 - var129)*(var129 - var37)) && ( 0 > (var37 - var98)*(var98 - var37)) && ( 0 > (var38 - var135)*(var135 - var38)) && ( 0 > (var39 - var111)*(var111 - var39)) && ( 0 > (var39 - var123)*(var123 - var39)) && ( 0 > (var4 - var106)*(var106 - var4)) && ( 0 > (var41 - var97)*(var97 - var41)) && ( 0 > (var43 - var114)*(var114 - var43)) && ( 0 > (var43 - var118)*(var118 - var43)) && ( 0 > (var43 - var153)*(var153 - var43)) && ( 0 > (var43 - var30)*(var30 - var43)) && ( 0 > (var43 - var36)*(var36 - var43)) && ( 0 > (var43 - var85)*(var85 - var43)) && ( 0 > (var44 - var167)*(var167 - var44)) && ( 0 > (var45 - var24)*(var24 - var45)) && ( 0 > (var46 - var137)*(var137 - var46)) && ( 0 > (var46 - var146)*(var146 - var46)) && ( 0 > (var46 - var156)*(var156 - var46)) && ( 0 > (var46 - var157)*(var157 - var46)) && ( 0 > (var46 - var167)*(var167 - var46)) && ( 0 > (var46 - var44)*(var44 - var46)) && ( 0 > (var46 - var60)*(var60 - var46)) && ( 0 > (var46 - var78)*(var78 - var46)) && ( 0 > (var47 - var28)*(var28 - var47)) && ( 0 > (var47 - var51)*(var51 - var47)) && ( 0 > (var47 - var61)*(var61 - var47)) && ( 0 > (var47 - var70)*(var70 - var47)) && ( 0 > (var48 - var14)*(var14 - var48)) && ( 0 > (var48 - var26)*(var26 - var48)) && ( 0 > (var48 - var53)*(var53 - var48)) && ( 0 > (var48 - var97)*(var97 - var48)) && ( 0 > (var5 - var112)*(var112 - var5)) && ( 0 > (var5 - var143)*(var143 - var5)) && ( 0 > (var53 - var26)*(var26 - var53)) && ( 0 > (var53 - var41)*(var41 - var53)) && ( 0 > (var54 - var133)*(var133 - var54)) && ( 0 > (var54 - var136)*(var136 - var54)) && ( 0 > (var54 - var161)*(var161 - var54)) && ( 0 > (var54 - var164)*(var164 - var54)) && ( 0 > (var54 - var2)*(var2 - var54)) && ( 0 > (var54 - var34)*(var34 - var54)) && ( 0 > (var54 - var66)*(var66 - var54)) && ( 0 > (var54 - var8)*(var8 - var54)) && ( 0 > (var54 - var88)*(var88 - var54)) && ( 0 > (var58 - var120)*(var120 - var58)) && ( 0 > (var58 - var122)*(var122 - var58)) && ( 0 > (var58 - var159)*(var159 - var58)) && ( 0 > (var59 - var26)*(var26 - var59)) && ( 0 > (var59 - var41)*(var41 - var59)) && ( 0 > (var60 - var157)*(var157 - var60)) && ( 0 > (var60 - var167)*(var167 - var60)) && ( 0 > (var61 - var160)*(var160 - var61)) && ( 0 > (var61 - var21)*(var21 - var61)) && ( 0 > (var61 - var28)*(var28 - var61)) && ( 0 > (var62 - var118)*(var118 - var62)) && ( 0 > (var62 - var153)*(var153 - var62)) && ( 0 > (var62 - var30)*(var30 - var62)) && ( 0 > (var62 - var33)*(var33 - var62)) && ( 0 > (var63 - var147)*(var147 - var63)) && ( 0 > (var63 - var16)*(var16 - var63)) && ( 0 > (var63 - var64)*(var64 - var63)) && ( 0 > (var63 - var94)*(var94 - var63)) && ( 0 > (var64 - var126)*(var126 - var64)) && ( 0 > (var66 - var133)*(var133 - var66)) && ( 0 > (var66 - var164)*(var164 - var66)) && ( 0 > (var66 - var88)*(var88 - var66)) && ( 0 > (var67 - var109)*(var109 - var67)) && ( 0 > (var67 - var110)*(var110 - var67)) && ( 0 > (var67 - var37)*(var37 - var67)) && ( 0 > (var67 - var42)*(var42 - var67)) && ( 0 > (var68 - var26)*(var26 - var68)) && ( 0 > (var68 - var53)*(var53 - var68)) && ( 0 > (var68 - var59)*(var59 - var68)) && ( 0 > (var7 - var107)*(var107 - var7)) && ( 0 > (var7 - var11)*(var11 - var7)) && ( 0 > (var7 - var112)*(var112 - var7)) && ( 0 > (var7 - var130)*(var130 - var7)) && ( 0 > (var7 - var139)*(var139 - var7)) && ( 0 > (var7 - var143)*(var143 - var7)) && ( 0 > (var70 - var160)*(var160 - var70)) && ( 0 > (var70 - var21)*(var21 - var70)) && ( 0 > (var70 - var28)*(var28 - var70)) && ( 0 > (var70 - var51)*(var51 - var70)) && ( 0 > (var71 - var10)*(var10 - var71)) && ( 0 > (var71 - var123)*(var123 - var71)) && ( 0 > (var71 - var132)*(var132 - var71)) && ( 0 > (var71 - var20)*(var20 - var71)) && ( 0 > (var72 - var133)*(var133 - var72)) && ( 0 > (var72 - var161)*(var161 - var72)) && ( 0 > (var72 - var164)*(var164 - var72)) && ( 0 > (var72 - var66)*(var66 - var72)) && ( 0 > (var72 - var88)*(var88 - var72)) && ( 0 > (var73 - var40)*(var40 - var73)) && ( 0 > (var74 - var103)*(var103 - var74)) && ( 0 > (var74 - var137)*(var137 - var74)) && ( 0 > (var74 - var46)*(var46 - var74)) && ( 0 > (var74 - var60)*(var60 - var74)) && ( 0 > (var76 - var101)*(var101 - var76)) && ( 0 > (var76 - var42)*(var42 - var76)) && ( 0 > (var76 - var98)*(var98 - var76)) && ( 0 > (var77 - var13)*(var13 - var77)) && ( 0 > (var77 - var50)*(var50 - var77)) && ( 0 > (var78 - var157)*(var157 - var78)) && ( 0 > (var78 - var60)*(var60 - var78)) && ( 0 > (var79 - var14)*(var14 - var79)) && ( 0 > (var79 - var26)*(var26 - var79)) && ( 0 > (var79 - var41)*(var41 - var79)) && ( 0 > (var79 - var48)*(var48 - var79)) && ( 0 > (var8 - var161)*(var161 - var8)) && ( 0 > (var8 - var164)*(var164 - var8)) && ( 0 > (var8 - var34)*(var34 - var8)) && ( 0 > (var80 - var42)*(var42 - var80)) && ( 0 > (var82 - var0)*(var0 - var82)) && ( 0 > (var82 - var126)*(var126 - var82)) && ( 0 > (var82 - var147)*(var147 - var82)) && ( 0 > (var82 - var16)*(var16 - var82)) && ( 0 > (var82 - var64)*(var64 - var82)) && ( 0 > (var82 - var83)*(var83 - var82)) && ( 0 > (var82 - var94)*(var94 - var82)) && ( 0 > (var83 - var0)*(var0 - var83)) && ( 0 > (var83 - var121)*(var121 - var83)) && ( 0 > (var83 - var126)*(var126 - var83)) && ( 0 > (var83 - var147)*(var147 - var83)) && ( 0 > (var83 - var16)*(var16 - var83)) && ( 0 > (var83 - var165)*(var165 - var83)) && ( 0 > (var83 - var63)*(var63 - var83)) && ( 0 > (var83 - var64)*(var64 - var83)) && ( 0 > (var83 - var75)*(var75 - var83)) && ( 0 > (var83 - var94)*(var94 - var83)) && ( 0 > (var84 - var119)*(var119 - var84)) && ( 0 > (var84 - var12)*(var12 - var84)) && ( 0 > (var84 - var77)*(var77 - var84)) && ( 0 > (var85 - var118)*(var118 - var85)) && ( 0 > (var85 - var153)*(var153 - var85)) && ( 0 > (var85 - var22)*(var22 - var85)) && ( 0 > (var85 - var33)*(var33 - var85)) && ( 0 > (var85 - var35)*(var35 - var85)) && ( 0 > (var85 - var36)*(var36 - var85)) && ( 0 > (var87 - var111)*(var111 - var87)) && ( 0 > (var88 - var133)*(var133 - var88)) && ( 0 > (var9 - var106)*(var106 - var9)) && ( 0 > (var9 - var115)*(var115 - var9)) && ( 0 > (var9 - var138)*(var138 - var9)) && ( 0 > (var9 - var15)*(var15 - var9)) && ( 0 > (var9 - var151)*(var151 - var9)) && ( 0 > (var9 - var152)*(var152 - var9)) && ( 0 > (var9 - var4)*(var4 - var9)) && ( 0 > (var9 - var40)*(var40 - var9)) && ( 0 > (var90 - var131)*(var131 - var90)) && ( 0 > (var90 - var149)*(var149 - var90)) && ( 0 > (var90 - var24)*(var24 - var90)) && ( 0 > (var91 - var14)*(var14 - var91)) && ( 0 > (var91 - var141)*(var141 - var91)) && ( 0 > (var91 - var79)*(var79 - var91)) && ( 0 > (var91 - var92)*(var92 - var91)) && ( 0 > (var91 - var95)*(var95 - var91)) && ( 0 > (var91 - var97)*(var97 - var91)) && ( 0 > (var92 - var141)*(var141 - var92)) && ( 0 > (var92 - var26)*(var26 - var92)) && ( 0 > (var92 - var48)*(var48 - var92)) && ( 0 > (var92 - var53)*(var53 - var92)) && ( 0 > (var93 - var142)*(var142 - var93)) && ( 0 > (var93 - var159)*(var159 - var93)) && ( 0 > (var93 - var32)*(var32 - var93)) && ( 0 > (var94 - var126)*(var126 - var94)) && ( 0 > (var94 - var16)*(var16 - var94)) && ( 0 > (var94 - var75)*(var75 - var94)) && ( 0 > (var95 - var26)*(var26 - var95)) && ( 0 > (var95 - var41)*(var41 - var95)) && ( 0 > (var95 - var53)*(var53 - var95)) && ( 0 > (var95 - var59)*(var59 - var95)) && ( 0 > (var95 - var79)*(var79 - var95)) && ( 0 > (var95 - var97)*(var97 - var95)) && ( 0 > (var96 - var44)*(var44 - var96)) && ( 0 > (var99 - var136)*(var136 - var99)) && ( 0 > (var99 - var161)*(var161 - var99)) && ( 0 > (var99 - var164)*(var164 - var99)) && ( 0 > (var99 - var34)*(var34 - var99)) && ( 0 > (var99 - var54)*(var54 - var99)) && ( 0 > (var99 - var88)*(var88 - var99)) &&  1))
exit(0);
if(!((var0 != var75) && (var1 != var11) && (var1 != var112) && (var1 != var139) && (var10 != var100) && (var10 != var132) && (var10 != var154) && (var10 != var87) && (var100 != var111) && (var100 != var20) && (var100 != var87) && (var101 != var42) && (var101 != var80) && (var101 != var98) && (var102 != var104) && (var102 != var119) && (var102 != var12) && (var102 != var13) && (var102 != var29) && (var103 != var137) && (var103 != var157) && (var104 != var12) && (var105 != var120) && (var105 != var142) && (var105 != var150) && (var105 != var159) && (var105 != var58) && (var107 != var11) && (var107 != var139) && (var108 != var138) && (var108 != var151) && (var108 != var4) && (var108 != var40) && (var109 != var101) && (var109 != var110) && (var109 != var117) && (var109 != var37) && (var109 != var98) && (var11 != var130) && (var11 != var139) && (var113 != var1) && (var113 != var107) && (var113 != var112) && (var113 != var7) && (var114 != var118) && (var114 != var124) && (var114 != var153) && (var114 != var30) && (var114 != var35) && (var114 != var36) && (var114 != var62) && (var116 != var131) && (var116 != var23) && (var116 != var24) && (var116 != var38) && (var116 != var45) && (var116 != var86) && (var117 != var110) && (var117 != var42) && (var117 != var98) && (var118 != var22) && (var12 != var119) && (var12 != var29) && (var121 != var147) && (var121 != var64) && (var121 != var94) && (var122 != var159) && (var122 != var32) && (var123 != var132) && (var123 != var154) && (var123 != var87) && (var124 != var118) && (var124 != var36) && (var125 != var120) && (var125 != var122) && (var125 != var134) && (var125 != var150) && (var125 != var19) && (var125 != var58) && (var126 != var75) && (var128 != var102) && (var128 != var104) && (var128 != var119) && (var128 != var127) && (var128 != var77) && (var129 != var42) && (var129 != var80) && (var13 != var127) && (var130 != var139) && (var131 != var24) && (var131 != var38) && (var131 != var45) && (var132 != var100) && (var132 != var111) && (var134 != var159) && (var135 != var86) && (var136 != var133) && (var136 != var164) && (var136 != var8) && (var137 != var44) && (var137 != var96) && (var138 != var106) && (var138 != var151) && (var138 != var152) && (var138 != var158) && (var138 != var4) && (var138 != var40) && (var14 != var53) && (var14 != var59) && (var14 != var97) && (var140 != var10) && (var140 != var111) && (var140 != var20) && (var141 != var41) && (var141 != var48) && (var141 != var53) && (var141 != var59) && (var141 != var79) && (var141 != var95) && (var142 != var120) && (var143 != var1) && (var143 != var11) && (var143 != var112) && (var143 != var139) && (var144 != var155) && (var144 != var160) && (var144 != var61) && (var145 != var104) && (var145 != var12) && (var145 != var13) && (var146 != var137) && (var146 != var156) && (var146 != var44) && (var146 != var78) && (var147 != var0) && (var147 != var165) && (var147 != var64) && (var147 != var75) && (var148 != var168) && (var148 != var47) && (var148 != var51) && (var148 != var70) && (var149 != var135) && (var149 != var45) && (var15 != var115) && (var15 != var138) && (var15 != var152) && (var15 != var158) && (var150 != var122) && (var150 != var134) && (var150 != var159) && (var150 != var32) && (var151 != var4) && (var152 != var106) && (var152 != var115) && (var154 != var100) && (var154 != var87) && (var155 != var160) && (var155 != var17) && (var155 != var21) && (var155 != var28) && (var155 != var61) && (var155 != var70) && (var156 != var157) && (var157 != var167) && (var158 != var106) && (var158 != var151) && (var158 != var152) && (var158 != var4) && (var158 != var40) && (var158 != var73) && (var159 != var120) && (var16 != var126) && (var16 != var75) && (var160 != var21) && (var160 != var28) && (var160 != var51) && (var162 != var1) && (var162 != var112) && (var162 != var130) && (var162 != var143) && (var162 != var5) && (var162 != var7) && (var163 != var107) && (var163 != var11) && (var163 != var113) && (var163 != var162) && (var164 != var161) && (var165 != var126) && (var165 != var64) && (var165 != var75) && (var166 != var116) && (var166 != var135) && (var166 != var149) && (var166 != var24) && (var166 != var38) && (var166 != var90) && (var168 != var155) && (var168 != var160) && (var168 != var28) && (var168 != var61) && (var19 != var159) && (var2 != var133) && (var2 != var66) && (var2 != var72) && (var20 != var111) && (var22 != var153) && (var22 != var33) && (var22 != var35) && (var23 != var131) && (var23 != var135) && (var23 != var45) && (var23 != var86) && (var26 != var41) && (var27 != var10) && (var27 != var100) && (var27 != var111) && (var27 != var154) && (var27 != var39) && (var27 != var87) && (var28 != var21) && (var3 != var135) && (var3 != var149) && (var3 != var23) && (var3 != var24) && (var3 != var86) && (var3 != var90) && (var30 != var153) && (var30 != var22) && (var30 != var35) && (var31 != var101) && (var31 != var110) && (var31 != var129) && (var31 != var67) && (var32 != var134) && (var32 != var159) && (var34 != var161) && (var34 != var164) && (var34 != var66) && (var34 != var72) && (var34 != var88) && (var35 != var33) && (var36 != var153) && (var37 != var117) && (var37 != var42) && (var37 != var80) && (var38 != var24) && (var38 != var45) && (var38 != var86) && (var39 != var10) && (var39 != var100) && (var39 != var132) && (var39 != var154) && (var39 != var20) && (var39 != var87) && (var4 != var115) && (var4 != var40) && (var4 != var73) && (var40 != var115) && (var43 != var124) && (var43 != var22) && (var43 != var33) && (var43 != var35) && (var43 != var62) && (var44 != var157) && (var44 != var60) && (var45 != var86) && (var46 != var96) && (var47 != var155) && (var47 != var160) && (var47 != var168) && (var47 != var17) && (var47 != var21) && (var48 != var41) && (var48 != var59) && (var48 != var68) && (var5 != var1) && (var5 != var107) && (var5 != var11) && (var5 != var130) && (var5 != var139) && (var5 != var7) && (var50 != var104) && (var50 != var119) && (var50 != var12) && (var50 != var127) && (var50 != var13) && (var50 != var29) && (var51 != var17) && (var51 != var21) && (var51 != var28) && (var53 != var59) && (var53 != var97) && (var54 != var72) && (var58 != var134) && (var58 != var142) && (var58 != var150) && (var58 != var19) && (var58 != var32) && (var59 != var97) && (var61 != var17) && (var61 != var51) && (var62 != var22) && (var62 != var35) && (var62 != var36) && (var63 != var0) && (var63 != var121) && (var63 != var126) && (var63 != var165) && (var63 != var75) && (var64 != var75) && (var66 != var161) && (var67 != var101) && (var67 != var117) && (var67 != var129) && (var67 != var80) && (var67 != var98) && (var68 != var41) && (var68 != var97) && (var7 != var1) && (var70 != var17) && (var70 != var61) && (var71 != var100) && (var71 != var111) && (var71 != var154) && (var71 != var27) && (var71 != var39) && (var71 != var87) && (var73 != var115) && (var74 != var146) && (var74 != var156) && (var74 != var157) && (var74 != var167) && (var74 != var44) && (var74 != var78) && (var74 != var96) && (var76 != var109) && (var76 != var110) && (var76 != var117) && (var76 != var129) && (var76 != var37) && (var76 != var67) && (var76 != var80) && (var77 != var102) && (var77 != var104) && (var77 != var119) && (var77 != var12) && (var77 != var127) && (var77 != var145) && (var77 != var29) && (var78 != var156) && (var78 != var167) && (var78 != var44) && (var79 != var53) && (var79 != var59) && (var79 != var68) && (var79 != var97) && (var8 != var133) && (var8 != var2) && (var8 != var66) && (var8 != var72) && (var8 != var88) && (var80 != var98) && (var82 != var121) && (var82 != var165) && (var82 != var63) && (var82 != var75) && (var84 != var102) && (var84 != var104) && (var84 != var127) && (var84 != var128) && (var84 != var13) && (var84 != var145) && (var84 != var29) && (var84 != var50) && (var85 != var124) && (var85 != var30) && (var85 != var62) && (var87 != var20) && (var88 != var161) && (var88 != var164) && (var9 != var158) && (var9 != var73) && (var90 != var135) && (var90 != var23) && (var90 != var38) && (var90 != var45) && (var90 != var86) && (var91 != var26) && (var91 != var41) && (var91 != var48) && (var91 != var53) && (var91 != var59) && (var91 != var68) && (var92 != var14) && (var92 != var41) && (var92 != var59) && (var92 != var68) && (var92 != var79) && (var92 != var95) && (var92 != var97) && (var93 != var105) && (var93 != var120) && (var93 != var122) && (var93 != var125) && (var93 != var134) && (var93 != var150) && (var93 != var19) && (var93 != var58) && (var94 != var0) && (var94 != var165) && (var94 != var64) && (var95 != var14) && (var95 != var48) && (var95 != var68) && (var96 != var156) && (var96 != var157) && (var96 != var167) && (var96 != var60) && (var96 != var78) && (var98 != var42) && (var99 != var133) && (var99 != var2) && (var99 != var66) && (var99 != var72) && (var99 != var8) && (var14 == var6) && (var141 == var25) && (var26 == var55) && (var41 == var65) && (var48 == var18) && (var53 == var81) && (var59 == var57) && (var68 == var49) && (var79 == var69) && (var91 == var52) && (var92 == var89) && (var95 == var56) &&  1))
exit(0);
int cntdis = 1;
int exten = 1;
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
144 x[144]
145 x[145]
146 x[146]
147 x[147]
148 x[148]
149 x[149]
150 x[150]
151 x[151]
152 x[152]
153 x[153]
154 x[154]
155 x[155]
156 x[156]
157 x[157]
158 x[158]
159 x[159]
160 x[160]
161 x[161]
162 x[162]
163 x[163]
164 x[164]
165 x[165]
166 x[166]
167 x[167]
168 x[168]
 */}
