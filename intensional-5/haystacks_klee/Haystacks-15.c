
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
int myvar0 = 1;
if((var0 >= 0) & (var0 <= 14)) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 14)) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 14)) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 14)) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 14)) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 14)) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 14)) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 14)) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 14)) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 14)) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 14)) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 14)) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 0) & (var12 <= 14)) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 0) & (var13 <= 14)) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 0) & (var14 <= 14)) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 0) & (var15 <= 14)) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 0) & (var16 <= 14)) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 0) & (var17 <= 14)) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 0) & (var18 <= 14)) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 0) & (var19 <= 14)) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 0) & (var20 <= 14)) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 0) & (var21 <= 14)) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 0) & (var22 <= 14)) {myvar0= 1;}
else {exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((var23 >= 0) & (var23 <= 14)) {myvar0= 1;}
else {exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((var24 >= 0) & (var24 <= 14)) {myvar0= 1;}
else {exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((var25 >= 0) & (var25 <= 14)) {myvar0= 1;}
else {exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((var26 >= 0) & (var26 <= 14)) {myvar0= 1;}
else {exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((var27 >= 0) & (var27 <= 14)) {myvar0= 1;}
else {exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((var28 >= 0) & (var28 <= 14)) {myvar0= 1;}
else {exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((var29 >= 0) & (var29 <= 14)) {myvar0= 1;}
else {exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((var30 >= 0) & (var30 <= 14)) {myvar0= 1;}
else {exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((var31 >= 0) & (var31 <= 14)) {myvar0= 1;}
else {exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((var32 >= 0) & (var32 <= 14)) {myvar0= 1;}
else {exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((var33 >= 0) & (var33 <= 14)) {myvar0= 1;}
else {exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((var34 >= 0) & (var34 <= 14)) {myvar0= 1;}
else {exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((var35 >= 0) & (var35 <= 14)) {myvar0= 1;}
else {exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((var36 >= 0) & (var36 <= 14)) {myvar0= 1;}
else {exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((var37 >= 0) & (var37 <= 14)) {myvar0= 1;}
else {exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((var38 >= 0) & (var38 <= 14)) {myvar0= 1;}
else {exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((var39 >= 0) & (var39 <= 14)) {myvar0= 1;}
else {exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((var40 >= 0) & (var40 <= 14)) {myvar0= 1;}
else {exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((var41 >= 0) & (var41 <= 14)) {myvar0= 1;}
else {exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((var42 >= 0) & (var42 <= 14)) {myvar0= 1;}
else {exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((var43 >= 0) & (var43 <= 14)) {myvar0= 1;}
else {exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((var44 >= 0) & (var44 <= 14)) {myvar0= 1;}
else {exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((var45 >= 0) & (var45 <= 14)) {myvar0= 1;}
else {exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((var46 >= 0) & (var46 <= 14)) {myvar0= 1;}
else {exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((var47 >= 0) & (var47 <= 14)) {myvar0= 1;}
else {exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((var48 >= 0) & (var48 <= 14)) {myvar0= 1;}
else {exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((var49 >= 0) & (var49 <= 14)) {myvar0= 1;}
else {exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((var50 >= 0) & (var50 <= 14)) {myvar0= 1;}
else {exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((var51 >= 0) & (var51 <= 14)) {myvar0= 1;}
else {exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((var52 >= 0) & (var52 <= 14)) {myvar0= 1;}
else {exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((var53 >= 0) & (var53 <= 14)) {myvar0= 1;}
else {exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((var54 >= 0) & (var54 <= 14)) {myvar0= 1;}
else {exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((var55 >= 0) & (var55 <= 14)) {myvar0= 1;}
else {exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((var56 >= 0) & (var56 <= 14)) {myvar0= 1;}
else {exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((var57 >= 0) & (var57 <= 14)) {myvar0= 1;}
else {exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((var58 >= 0) & (var58 <= 14)) {myvar0= 1;}
else {exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((var59 >= 0) & (var59 <= 14)) {myvar0= 1;}
else {exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((var60 >= 0) & (var60 <= 14)) {myvar0= 1;}
else {exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((var61 >= 0) & (var61 <= 14)) {myvar0= 1;}
else {exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((var62 >= 0) & (var62 <= 14)) {myvar0= 1;}
else {exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((var63 >= 0) & (var63 <= 14)) {myvar0= 1;}
else {exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((var64 >= 0) & (var64 <= 14)) {myvar0= 1;}
else {exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((var65 >= 0) & (var65 <= 14)) {myvar0= 1;}
else {exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((var66 >= 0) & (var66 <= 14)) {myvar0= 1;}
else {exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((var67 >= 0) & (var67 <= 14)) {myvar0= 1;}
else {exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((var68 >= 0) & (var68 <= 14)) {myvar0= 1;}
else {exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((var69 >= 0) & (var69 <= 14)) {myvar0= 1;}
else {exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((var70 >= 0) & (var70 <= 14)) {myvar0= 1;}
else {exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((var71 >= 0) & (var71 <= 14)) {myvar0= 1;}
else {exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((var72 >= 0) & (var72 <= 14)) {myvar0= 1;}
else {exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((var73 >= 0) & (var73 <= 14)) {myvar0= 1;}
else {exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((var74 >= 0) & (var74 <= 14)) {myvar0= 1;}
else {exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((var75 >= 0) & (var75 <= 14)) {myvar0= 1;}
else {exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((var76 >= 0) & (var76 <= 14)) {myvar0= 1;}
else {exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((var77 >= 0) & (var77 <= 14)) {myvar0= 1;}
else {exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((var78 >= 0) & (var78 <= 14)) {myvar0= 1;}
else {exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((var79 >= 0) & (var79 <= 14)) {myvar0= 1;}
else {exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((var80 >= 0) & (var80 <= 14)) {myvar0= 1;}
else {exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((var81 >= 0) & (var81 <= 14)) {myvar0= 1;}
else {exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((var82 >= 0) & (var82 <= 14)) {myvar0= 1;}
else {exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((var83 >= 0) & (var83 <= 14)) {myvar0= 1;}
else {exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((var84 >= 0) & (var84 <= 14)) {myvar0= 1;}
else {exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((var85 >= 0) & (var85 <= 14)) {myvar0= 1;}
else {exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((var86 >= 0) & (var86 <= 14)) {myvar0= 1;}
else {exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((var87 >= 0) & (var87 <= 14)) {myvar0= 1;}
else {exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((var88 >= 0) & (var88 <= 14)) {myvar0= 1;}
else {exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((var89 >= 0) & (var89 <= 14)) {myvar0= 1;}
else {exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((var90 >= 0) & (var90 <= 14)) {myvar0= 1;}
else {exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((var91 >= 0) & (var91 <= 14)) {myvar0= 1;}
else {exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((var92 >= 0) & (var92 <= 14)) {myvar0= 1;}
else {exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((var93 >= 0) & (var93 <= 14)) {myvar0= 1;}
else {exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((var94 >= 0) & (var94 <= 14)) {myvar0= 1;}
else {exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((var95 >= 0) & (var95 <= 14)) {myvar0= 1;}
else {exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((var96 >= 0) & (var96 <= 14)) {myvar0= 1;}
else {exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((var97 >= 0) & (var97 <= 14)) {myvar0= 1;}
else {exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((var98 >= 0) & (var98 <= 14)) {myvar0= 1;}
else {exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((var99 >= 0) & (var99 <= 14)) {myvar0= 1;}
else {exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((var100 >= 0) & (var100 <= 14)) {myvar0= 1;}
else {exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((var101 >= 0) & (var101 <= 14)) {myvar0= 1;}
else {exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((var102 >= 0) & (var102 <= 14)) {myvar0= 1;}
else {exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((var103 >= 0) & (var103 <= 14)) {myvar0= 1;}
else {exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((var104 >= 0) & (var104 <= 14)) {myvar0= 1;}
else {exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((var105 >= 0) & (var105 <= 14)) {myvar0= 1;}
else {exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((var106 >= 0) & (var106 <= 14)) {myvar0= 1;}
else {exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((var107 >= 0) & (var107 <= 14)) {myvar0= 1;}
else {exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((var108 >= 0) & (var108 <= 14)) {myvar0= 1;}
else {exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((var109 >= 0) & (var109 <= 14)) {myvar0= 1;}
else {exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((var110 >= 0) & (var110 <= 14)) {myvar0= 1;}
else {exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((var111 >= 0) & (var111 <= 14)) {myvar0= 1;}
else {exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((var112 >= 0) & (var112 <= 14)) {myvar0= 1;}
else {exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((var113 >= 0) & (var113 <= 14)) {myvar0= 1;}
else {exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((var114 >= 0) & (var114 <= 14)) {myvar0= 1;}
else {exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((var115 >= 0) & (var115 <= 14)) {myvar0= 1;}
else {exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((var116 >= 0) & (var116 <= 14)) {myvar0= 1;}
else {exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((var117 >= 0) & (var117 <= 14)) {myvar0= 1;}
else {exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((var118 >= 0) & (var118 <= 14)) {myvar0= 1;}
else {exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((var119 >= 0) & (var119 <= 14)) {myvar0= 1;}
else {exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((var120 >= 0) & (var120 <= 14)) {myvar0= 1;}
else {exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((var121 >= 0) & (var121 <= 14)) {myvar0= 1;}
else {exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((var122 >= 0) & (var122 <= 14)) {myvar0= 1;}
else {exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((var123 >= 0) & (var123 <= 14)) {myvar0= 1;}
else {exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((var124 >= 0) & (var124 <= 14)) {myvar0= 1;}
else {exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((var125 >= 0) & (var125 <= 14)) {myvar0= 1;}
else {exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((var126 >= 0) & (var126 <= 14)) {myvar0= 1;}
else {exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((var127 >= 0) & (var127 <= 14)) {myvar0= 1;}
else {exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((var128 >= 0) & (var128 <= 14)) {myvar0= 1;}
else {exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((var129 >= 0) & (var129 <= 14)) {myvar0= 1;}
else {exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((var130 >= 0) & (var130 <= 14)) {myvar0= 1;}
else {exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((var131 >= 0) & (var131 <= 14)) {myvar0= 1;}
else {exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((var132 >= 0) & (var132 <= 14)) {myvar0= 1;}
else {exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((var133 >= 0) & (var133 <= 14)) {myvar0= 1;}
else {exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((var134 >= 0) & (var134 <= 14)) {myvar0= 1;}
else {exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((var135 >= 0) & (var135 <= 14)) {myvar0= 1;}
else {exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((var136 >= 0) & (var136 <= 14)) {myvar0= 1;}
else {exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((var137 >= 0) & (var137 <= 14)) {myvar0= 1;}
else {exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((var138 >= 0) & (var138 <= 14)) {myvar0= 1;}
else {exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((var139 >= 0) & (var139 <= 14)) {myvar0= 1;}
else {exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((var140 >= 0) & (var140 <= 14)) {myvar0= 1;}
else {exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((var141 >= 0) & (var141 <= 14)) {myvar0= 1;}
else {exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((var142 >= 0) & (var142 <= 14)) {myvar0= 1;}
else {exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((var143 >= 0) & (var143 <= 14)) {myvar0= 1;}
else {exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((var144 >= 0) & (var144 <= 14)) {myvar0= 1;}
else {exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((var145 >= 0) & (var145 <= 14)) {myvar0= 1;}
else {exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((var146 >= 0) & (var146 <= 14)) {myvar0= 1;}
else {exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((var147 >= 0) & (var147 <= 14)) {myvar0= 1;}
else {exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((var148 >= 0) & (var148 <= 14)) {myvar0= 1;}
else {exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((var149 >= 0) & (var149 <= 14)) {myvar0= 1;}
else {exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((var150 >= 0) & (var150 <= 14)) {myvar0= 1;}
else {exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((var151 >= 0) & (var151 <= 14)) {myvar0= 1;}
else {exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((var152 >= 0) & (var152 <= 14)) {myvar0= 1;}
else {exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((var153 >= 0) & (var153 <= 14)) {myvar0= 1;}
else {exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((var154 >= 0) & (var154 <= 14)) {myvar0= 1;}
else {exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((var155 >= 0) & (var155 <= 14)) {myvar0= 1;}
else {exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((var156 >= 0) & (var156 <= 14)) {myvar0= 1;}
else {exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((var157 >= 0) & (var157 <= 14)) {myvar0= 1;}
else {exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((var158 >= 0) & (var158 <= 14)) {myvar0= 1;}
else {exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((var159 >= 0) & (var159 <= 14)) {myvar0= 1;}
else {exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((var160 >= 0) & (var160 <= 14)) {myvar0= 1;}
else {exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((var161 >= 0) & (var161 <= 14)) {myvar0= 1;}
else {exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((var162 >= 0) & (var162 <= 14)) {myvar0= 1;}
else {exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((var163 >= 0) & (var163 <= 14)) {myvar0= 1;}
else {exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((var164 >= 0) & (var164 <= 14)) {myvar0= 1;}
else {exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((var165 >= 0) & (var165 <= 14)) {myvar0= 1;}
else {exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((var166 >= 0) & (var166 <= 14)) {myvar0= 1;}
else {exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((var167 >= 0) & (var167 <= 14)) {myvar0= 1;}
else {exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((var168 >= 0) & (var168 <= 14)) {myvar0= 1;}
else {exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((var169 >= 0) & (var169 <= 14)) {myvar0= 1;}
else {exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((var170 >= 0) & (var170 <= 14)) {myvar0= 1;}
else {exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((var171 >= 0) & (var171 <= 14)) {myvar0= 1;}
else {exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((var172 >= 0) & (var172 <= 14)) {myvar0= 1;}
else {exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((var173 >= 0) & (var173 <= 14)) {myvar0= 1;}
else {exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((var174 >= 0) & (var174 <= 14)) {myvar0= 1;}
else {exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((var175 >= 0) & (var175 <= 14)) {myvar0= 1;}
else {exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((var176 >= 0) & (var176 <= 14)) {myvar0= 1;}
else {exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((var177 >= 0) & (var177 <= 14)) {myvar0= 1;}
else {exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((var178 >= 0) & (var178 <= 14)) {myvar0= 1;}
else {exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((var179 >= 0) & (var179 <= 14)) {myvar0= 1;}
else {exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((var180 >= 0) & (var180 <= 14)) {myvar0= 1;}
else {exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((var181 >= 0) & (var181 <= 14)) {myvar0= 1;}
else {exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((var182 >= 0) & (var182 <= 14)) {myvar0= 1;}
else {exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((var183 >= 0) & (var183 <= 14)) {myvar0= 1;}
else {exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((var184 >= 0) & (var184 <= 14)) {myvar0= 1;}
else {exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((var185 >= 0) & (var185 <= 14)) {myvar0= 1;}
else {exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((var186 >= 0) & (var186 <= 14)) {myvar0= 1;}
else {exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((var187 >= 0) & (var187 <= 14)) {myvar0= 1;}
else {exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((var188 >= 0) & (var188 <= 14)) {myvar0= 1;}
else {exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((var189 >= 0) & (var189 <= 14)) {myvar0= 1;}
else {exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((var190 >= 0) & (var190 <= 14)) {myvar0= 1;}
else {exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((var191 >= 0) & (var191 <= 14)) {myvar0= 1;}
else {exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((var192 >= 0) & (var192 <= 14)) {myvar0= 1;}
else {exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((var193 >= 0) & (var193 <= 14)) {myvar0= 1;}
else {exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((var194 >= 0) & (var194 <= 14)) {myvar0= 1;}
else {exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((var195 >= 0) & (var195 <= 14)) {myvar0= 1;}
else {exit(0);}
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
if((var196 >= 0) & (var196 <= 14)) {myvar0= 1;}
else {exit(0);}
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
if((var197 >= 0) & (var197 <= 14)) {myvar0= 1;}
else {exit(0);}
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
if((var198 >= 0) & (var198 <= 14)) {myvar0= 1;}
else {exit(0);}
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
if((var199 >= 0) & (var199 <= 14)) {myvar0= 1;}
else {exit(0);}
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
if((var200 >= 0) & (var200 <= 14)) {myvar0= 1;}
else {exit(0);}
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
if((var201 >= 0) & (var201 <= 14)) {myvar0= 1;}
else {exit(0);}
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
if((var202 >= 0) & (var202 <= 14)) {myvar0= 1;}
else {exit(0);}
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
if((var203 >= 0) & (var203 <= 14)) {myvar0= 1;}
else {exit(0);}
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
if((var204 >= 0) & (var204 <= 14)) {myvar0= 1;}
else {exit(0);}
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
if((var205 >= 0) & (var205 <= 14)) {myvar0= 1;}
else {exit(0);}
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
if((var206 >= 0) & (var206 <= 14)) {myvar0= 1;}
else {exit(0);}
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
if((var207 >= 0) & (var207 <= 14)) {myvar0= 1;}
else {exit(0);}
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
if((var208 >= 0) & (var208 <= 14)) {myvar0= 1;}
else {exit(0);}
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
if((var209 >= 0) & (var209 <= 14)) {myvar0= 1;}
else {exit(0);}
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
if((var210 >= 0) & (var210 <= 14)) {myvar0= 1;}
else {exit(0);}
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
if((var211 >= 0) & (var211 <= 14)) {myvar0= 1;}
else {exit(0);}
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
if((var212 >= 0) & (var212 <= 14)) {myvar0= 1;}
else {exit(0);}
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
if((var213 >= 0) & (var213 <= 14)) {myvar0= 1;}
else {exit(0);}
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
if((var214 >= 0) & (var214 <= 14)) {myvar0= 1;}
else {exit(0);}
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
if((var215 >= 0) & (var215 <= 14)) {myvar0= 1;}
else {exit(0);}
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
if((var216 >= 0) & (var216 <= 14)) {myvar0= 1;}
else {exit(0);}
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
if((var217 >= 0) & (var217 <= 14)) {myvar0= 1;}
else {exit(0);}
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
if((var218 >= 0) & (var218 <= 14)) {myvar0= 1;}
else {exit(0);}
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
if((var219 >= 0) & (var219 <= 14)) {myvar0= 1;}
else {exit(0);}
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
if((var220 >= 0) & (var220 <= 14)) {myvar0= 1;}
else {exit(0);}
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
if((var221 >= 0) & (var221 <= 14)) {myvar0= 1;}
else {exit(0);}
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
if((var222 >= 0) & (var222 <= 14)) {myvar0= 1;}
else {exit(0);}
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
if((var223 >= 0) & (var223 <= 14)) {myvar0= 1;}
else {exit(0);}
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
if((var224 >= 0) & (var224 <= 14)) {myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var101)*(var101 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var168)*(var168 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var98)*(var98 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var109)*(var109 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var136)*(var136 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var160)*(var160 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var178)*(var178 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var188)*(var188 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var29)*(var29 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var51)*(var51 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var8)*(var8 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var16)*(var16 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var20)*(var20 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var87)*(var87 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var96)*(var96 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var180)*(var180 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var199)*(var199 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var101 - var162)*(var162 - var101)){myvar0= 1;}
else {exit(0);}
if(0 > (var101 - var163)*(var163 - var101)){myvar0= 1;}
else {exit(0);}
if(0 > (var103 - var84)*(var84 - var103)){myvar0= 1;}
else {exit(0);}
if(0 > (var103 - var88)*(var88 - var103)){myvar0= 1;}
else {exit(0);}
if(0 > (var103 - var93)*(var93 - var103)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var127)*(var127 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var15)*(var15 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var152)*(var152 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var217)*(var217 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var73)*(var73 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var124)*(var124 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var134)*(var134 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var190)*(var190 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var215)*(var215 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var108 - var67)*(var67 - var108)){myvar0= 1;}
else {exit(0);}
if(0 > (var110 - var111)*(var111 - var110)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var207)*(var207 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var71)*(var71 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var14)*(var14 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var162)*(var162 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var163)*(var163 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var55)*(var55 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var114 - var105)*(var105 - var114)){myvar0= 1;}
else {exit(0);}
if(0 > (var114 - var119)*(var119 - var114)){myvar0= 1;}
else {exit(0);}
if(0 > (var114 - var211)*(var211 - var114)){myvar0= 1;}
else {exit(0);}
if(0 > (var114 - var24)*(var24 - var114)){myvar0= 1;}
else {exit(0);}
if(0 > (var115 - var221)*(var221 - var115)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var10)*(var10 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var155)*(var155 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var16)*(var16 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var20)*(var20 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var213)*(var213 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var32)*(var32 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var87)*(var87 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var91)*(var91 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var118 - var47)*(var47 - var118)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var111)*(var111 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var157)*(var157 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var184)*(var184 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var26)*(var26 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var83)*(var83 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var122 - var105)*(var105 - var122)){myvar0= 1;}
else {exit(0);}
if(0 > (var122 - var119)*(var119 - var122)){myvar0= 1;}
else {exit(0);}
if(0 > (var122 - var211)*(var211 - var122)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var112)*(var112 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var167)*(var167 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var128)*(var128 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var134)*(var134 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var150)*(var150 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var151)*(var151 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var190)*(var190 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var127 - var217)*(var217 - var127)){myvar0= 1;}
else {exit(0);}
if(0 > (var129 - var11)*(var11 - var129)){myvar0= 1;}
else {exit(0);}
if(0 > (var129 - var146)*(var146 - var129)){myvar0= 1;}
else {exit(0);}
if(0 > (var129 - var153)*(var153 - var129)){myvar0= 1;}
else {exit(0);}
if(0 > (var129 - var78)*(var78 - var129)){myvar0= 1;}
else {exit(0);}
if(0 > (var13 - var199)*(var199 - var13)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var136)*(var136 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var140)*(var140 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var160)*(var160 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var178)*(var178 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var192)*(var192 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var29)*(var29 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var4)*(var4 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var64)*(var64 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var68)*(var68 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var10)*(var10 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var16)*(var16 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var166)*(var166 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var32)*(var32 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var75)*(var75 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var91)*(var91 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var96)*(var96 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var133 - var17)*(var17 - var133)){myvar0= 1;}
else {exit(0);}
if(0 > (var133 - var93)*(var93 - var133)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var128)*(var128 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var150)*(var150 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var151)*(var151 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var190)*(var190 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var216)*(var216 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var135 - var148)*(var148 - var135)){myvar0= 1;}
else {exit(0);}
if(0 > (var135 - var165)*(var165 - var135)){myvar0= 1;}
else {exit(0);}
if(0 > (var135 - var208)*(var208 - var135)){myvar0= 1;}
else {exit(0);}
if(0 > (var135 - var210)*(var210 - var135)){myvar0= 1;}
else {exit(0);}
if(0 > (var135 - var57)*(var57 - var135)){myvar0= 1;}
else {exit(0);}
if(0 > (var135 - var58)*(var58 - var135)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var109)*(var109 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var140)*(var140 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var188)*(var188 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var192)*(var192 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var29)*(var29 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var4)*(var4 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var64)*(var64 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var137 - var214)*(var214 - var137)){myvar0= 1;}
else {exit(0);}
if(0 > (var137 - var224)*(var224 - var137)){myvar0= 1;}
else {exit(0);}
if(0 > (var137 - var53)*(var53 - var137)){myvar0= 1;}
else {exit(0);}
if(0 > (var137 - var56)*(var56 - var137)){myvar0= 1;}
else {exit(0);}
if(0 > (var138 - var167)*(var167 - var138)){myvar0= 1;}
else {exit(0);}
if(0 > (var138 - var207)*(var207 - var138)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var137)*(var137 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var214)*(var214 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var224)*(var224 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var46)*(var46 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var53)*(var53 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var101)*(var101 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var162)*(var162 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var168)*(var168 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var141 - var170)*(var170 - var141)){myvar0= 1;}
else {exit(0);}
if(0 > (var141 - var31)*(var31 - var141)){myvar0= 1;}
else {exit(0);}
if(0 > (var141 - var33)*(var33 - var141)){myvar0= 1;}
else {exit(0);}
if(0 > (var142 - var108)*(var108 - var142)){myvar0= 1;}
else {exit(0);}
if(0 > (var142 - var67)*(var67 - var142)){myvar0= 1;}
else {exit(0);}
if(0 > (var143 - var17)*(var17 - var143)){myvar0= 1;}
else {exit(0);}
if(0 > (var143 - var221)*(var221 - var143)){myvar0= 1;}
else {exit(0);}
if(0 > (var143 - var84)*(var84 - var143)){myvar0= 1;}
else {exit(0);}
if(0 > (var143 - var88)*(var88 - var143)){myvar0= 1;}
else {exit(0);}
if(0 > (var143 - var93)*(var93 - var143)){myvar0= 1;}
else {exit(0);}
if(0 > (var145 - var102)*(var102 - var145)){myvar0= 1;}
else {exit(0);}
if(0 > (var145 - var135)*(var135 - var145)){myvar0= 1;}
else {exit(0);}
if(0 > (var145 - var154)*(var154 - var145)){myvar0= 1;}
else {exit(0);}
if(0 > (var145 - var185)*(var185 - var145)){myvar0= 1;}
else {exit(0);}
if(0 > (var145 - var66)*(var66 - var145)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var11)*(var11 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var153)*(var153 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var195)*(var195 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var200)*(var200 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var35)*(var35 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var78)*(var78 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var141)*(var141 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var31)*(var31 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var33)*(var33 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var36)*(var36 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var42)*(var42 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var80)*(var80 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var9)*(var9 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var92)*(var92 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var197)*(var197 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var208)*(var208 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var210)*(var210 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var58)*(var58 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var149 - var138)*(var138 - var149)){myvar0= 1;}
else {exit(0);}
if(0 > (var149 - var172)*(var172 - var149)){myvar0= 1;}
else {exit(0);}
if(0 > (var149 - var189)*(var189 - var149)){myvar0= 1;}
else {exit(0);}
if(0 > (var15 - var217)*(var217 - var15)){myvar0= 1;}
else {exit(0);}
if(0 > (var151 - var128)*(var128 - var151)){myvar0= 1;}
else {exit(0);}
if(0 > (var152 - var126)*(var126 - var152)){myvar0= 1;}
else {exit(0);}
if(0 > (var152 - var217)*(var217 - var152)){myvar0= 1;}
else {exit(0);}
if(0 > (var152 - var219)*(var219 - var152)){myvar0= 1;}
else {exit(0);}
if(0 > (var152 - var47)*(var47 - var152)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var183)*(var183 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var2)*(var2 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var155 - var16)*(var16 - var155)){myvar0= 1;}
else {exit(0);}
if(0 > (var156 - var11)*(var11 - var156)){myvar0= 1;}
else {exit(0);}
if(0 > (var156 - var153)*(var153 - var156)){myvar0= 1;}
else {exit(0);}
if(0 > (var156 - var183)*(var183 - var156)){myvar0= 1;}
else {exit(0);}
if(0 > (var157 - var110)*(var110 - var157)){myvar0= 1;}
else {exit(0);}
if(0 > (var157 - var26)*(var26 - var157)){myvar0= 1;}
else {exit(0);}
if(0 > (var157 - var83)*(var83 - var157)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var146)*(var146 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var153)*(var153 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var156)*(var156 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var183)*(var183 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var35)*(var35 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var78)*(var78 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var159 - var13)*(var13 - var159)){myvar0= 1;}
else {exit(0);}
if(0 > (var159 - var179)*(var179 - var159)){myvar0= 1;}
else {exit(0);}
if(0 > (var159 - var3)*(var3 - var159)){myvar0= 1;}
else {exit(0);}
if(0 > (var159 - var40)*(var40 - var159)){myvar0= 1;}
else {exit(0);}
if(0 > (var16 - var166)*(var166 - var16)){myvar0= 1;}
else {exit(0);}
if(0 > (var16 - var213)*(var213 - var16)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var136)*(var136 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var64)*(var64 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var141)*(var141 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var170)*(var170 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var31)*(var31 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var42)*(var42 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var80)*(var80 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var164 - var107)*(var107 - var164)){myvar0= 1;}
else {exit(0);}
if(0 > (var164 - var124)*(var124 - var164)){myvar0= 1;}
else {exit(0);}
if(0 > (var164 - var134)*(var134 - var164)){myvar0= 1;}
else {exit(0);}
if(0 > (var164 - var216)*(var216 - var164)){myvar0= 1;}
else {exit(0);}
if(0 > (var165 - var148)*(var148 - var165)){myvar0= 1;}
else {exit(0);}
if(0 > (var165 - var208)*(var208 - var165)){myvar0= 1;}
else {exit(0);}
if(0 > (var165 - var210)*(var210 - var165)){myvar0= 1;}
else {exit(0);}
if(0 > (var165 - var99)*(var99 - var165)){myvar0= 1;}
else {exit(0);}
if(0 > (var168 - var163)*(var163 - var168)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var115)*(var115 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var221)*(var221 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var69)*(var69 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var93)*(var93 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var17 - var221)*(var221 - var17)){myvar0= 1;}
else {exit(0);}
if(0 > (var17 - var93)*(var93 - var17)){myvar0= 1;}
else {exit(0);}
if(0 > (var170 - var31)*(var31 - var170)){myvar0= 1;}
else {exit(0);}
if(0 > (var170 - var5)*(var5 - var170)){myvar0= 1;}
else {exit(0);}
if(0 > (var170 - var80)*(var80 - var170)){myvar0= 1;}
else {exit(0);}
if(0 > (var170 - var92)*(var92 - var170)){myvar0= 1;}
else {exit(0);}
if(0 > (var172 - var112)*(var112 - var172)){myvar0= 1;}
else {exit(0);}
if(0 > (var172 - var167)*(var167 - var172)){myvar0= 1;}
else {exit(0);}
if(0 > (var172 - var71)*(var71 - var172)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var13)*(var13 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var180)*(var180 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var199)*(var199 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var212)*(var212 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var3)*(var3 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var40)*(var40 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var60)*(var60 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var13)*(var13 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var159)*(var159 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var176)*(var176 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var199)*(var199 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var60)*(var60 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var175 - var124)*(var124 - var175)){myvar0= 1;}
else {exit(0);}
if(0 > (var175 - var134)*(var134 - var175)){myvar0= 1;}
else {exit(0);}
if(0 > (var175 - var150)*(var150 - var175)){myvar0= 1;}
else {exit(0);}
if(0 > (var175 - var45)*(var45 - var175)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var13)*(var13 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var159)*(var159 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var203)*(var203 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var212)*(var212 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var40)*(var40 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var60)*(var60 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var177 - var137)*(var137 - var177)){myvar0= 1;}
else {exit(0);}
if(0 > (var177 - var181)*(var181 - var177)){myvar0= 1;}
else {exit(0);}
if(0 > (var177 - var224)*(var224 - var177)){myvar0= 1;}
else {exit(0);}
if(0 > (var177 - var53)*(var53 - var177)){myvar0= 1;}
else {exit(0);}
if(0 > (var177 - var62)*(var62 - var177)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var109)*(var109 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var140)*(var140 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var4)*(var4 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var179 - var199)*(var199 - var179)){myvar0= 1;}
else {exit(0);}
if(0 > (var179 - var203)*(var203 - var179)){myvar0= 1;}
else {exit(0);}
if(0 > (var18 - var191)*(var191 - var18)){myvar0= 1;}
else {exit(0);}
if(0 > (var18 - var59)*(var59 - var18)){myvar0= 1;}
else {exit(0);}
if(0 > (var18 - var67)*(var67 - var18)){myvar0= 1;}
else {exit(0);}
if(0 > (var180 - var13)*(var13 - var180)){myvar0= 1;}
else {exit(0);}
if(0 > (var180 - var179)*(var179 - var180)){myvar0= 1;}
else {exit(0);}
if(0 > (var180 - var199)*(var199 - var180)){myvar0= 1;}
else {exit(0);}
if(0 > (var180 - var212)*(var212 - var180)){myvar0= 1;}
else {exit(0);}
if(0 > (var180 - var3)*(var3 - var180)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var224)*(var224 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var182 - var139)*(var139 - var182)){myvar0= 1;}
else {exit(0);}
if(0 > (var182 - var181)*(var181 - var182)){myvar0= 1;}
else {exit(0);}
if(0 > (var182 - var220)*(var220 - var182)){myvar0= 1;}
else {exit(0);}
if(0 > (var182 - var53)*(var53 - var182)){myvar0= 1;}
else {exit(0);}
if(0 > (var183 - var2)*(var2 - var183)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var111)*(var111 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var121)*(var121 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var41)*(var41 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var83)*(var83 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var89)*(var89 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var95)*(var95 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var102)*(var102 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var154)*(var154 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var165)*(var165 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var210)*(var210 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var57)*(var57 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var66)*(var66 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var186 - var105)*(var105 - var186)){myvar0= 1;}
else {exit(0);}
if(0 > (var186 - var114)*(var114 - var186)){myvar0= 1;}
else {exit(0);}
if(0 > (var186 - var119)*(var119 - var186)){myvar0= 1;}
else {exit(0);}
if(0 > (var186 - var193)*(var193 - var186)){myvar0= 1;}
else {exit(0);}
if(0 > (var186 - var206)*(var206 - var186)){myvar0= 1;}
else {exit(0);}
if(0 > (var186 - var223)*(var223 - var186)){myvar0= 1;}
else {exit(0);}
if(0 > (var187 - var101)*(var101 - var187)){myvar0= 1;}
else {exit(0);}
if(0 > (var187 - var14)*(var14 - var187)){myvar0= 1;}
else {exit(0);}
if(0 > (var187 - var37)*(var37 - var187)){myvar0= 1;}
else {exit(0);}
if(0 > (var188 - var109)*(var109 - var188)){myvar0= 1;}
else {exit(0);}
if(0 > (var188 - var140)*(var140 - var188)){myvar0= 1;}
else {exit(0);}
if(0 > (var188 - var29)*(var29 - var188)){myvar0= 1;}
else {exit(0);}
if(0 > (var188 - var4)*(var4 - var188)){myvar0= 1;}
else {exit(0);}
if(0 > (var189 - var112)*(var112 - var189)){myvar0= 1;}
else {exit(0);}
if(0 > (var189 - var71)*(var71 - var189)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var191)*(var191 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var194)*(var194 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var59)*(var59 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var67)*(var67 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var72)*(var72 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var81)*(var81 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var191 - var108)*(var108 - var191)){myvar0= 1;}
else {exit(0);}
if(0 > (var191 - var67)*(var67 - var191)){myvar0= 1;}
else {exit(0);}
if(0 > (var192 - var109)*(var109 - var192)){myvar0= 1;}
else {exit(0);}
if(0 > (var192 - var178)*(var178 - var192)){myvar0= 1;}
else {exit(0);}
if(0 > (var192 - var188)*(var188 - var192)){myvar0= 1;}
else {exit(0);}
if(0 > (var192 - var29)*(var29 - var192)){myvar0= 1;}
else {exit(0);}
if(0 > (var192 - var64)*(var64 - var192)){myvar0= 1;}
else {exit(0);}
if(0 > (var193 - var114)*(var114 - var193)){myvar0= 1;}
else {exit(0);}
if(0 > (var193 - var122)*(var122 - var193)){myvar0= 1;}
else {exit(0);}
if(0 > (var193 - var211)*(var211 - var193)){myvar0= 1;}
else {exit(0);}
if(0 > (var193 - var24)*(var24 - var193)){myvar0= 1;}
else {exit(0);}
if(0 > (var193 - var50)*(var50 - var193)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var108)*(var108 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var142)*(var142 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var18)*(var18 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var191)*(var191 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var153)*(var153 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var2)*(var2 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var35)*(var35 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var78)*(var78 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var112)*(var112 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var123)*(var123 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var167)*(var167 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var207)*(var207 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var71)*(var71 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var154)*(var154 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var208)*(var208 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var210)*(var210 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var57)*(var57 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var66)*(var66 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var99)*(var99 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var2 - var78)*(var78 - var2)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var16)*(var16 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var213)*(var213 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var87)*(var87 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var200 - var183)*(var183 - var200)){myvar0= 1;}
else {exit(0);}
if(0 > (var200 - var195)*(var195 - var200)){myvar0= 1;}
else {exit(0);}
if(0 > (var200 - var78)*(var78 - var200)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var118)*(var118 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var15)*(var15 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var152)*(var152 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var217)*(var217 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var219)*(var219 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var47)*(var47 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var73)*(var73 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var203 - var3)*(var3 - var203)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var110)*(var110 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var120)*(var120 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var121)*(var121 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var157)*(var157 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var184)*(var184 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var26)*(var26 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var41)*(var41 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var89)*(var89 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var95)*(var95 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var205 - var108)*(var108 - var205)){myvar0= 1;}
else {exit(0);}
if(0 > (var205 - var59)*(var59 - var205)){myvar0= 1;}
else {exit(0);}
if(0 > (var205 - var63)*(var63 - var205)){myvar0= 1;}
else {exit(0);}
if(0 > (var205 - var67)*(var67 - var205)){myvar0= 1;}
else {exit(0);}
if(0 > (var206 - var50)*(var50 - var206)){myvar0= 1;}
else {exit(0);}
if(0 > (var207 - var71)*(var71 - var207)){myvar0= 1;}
else {exit(0);}
if(0 > (var208 - var57)*(var57 - var208)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var101)*(var101 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var113)*(var113 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var163)*(var163 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var168)*(var168 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var55)*(var55 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var61)*(var61 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var85)*(var85 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var112)*(var112 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var123)*(var123 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var167)*(var167 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var196)*(var196 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var207)*(var207 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var71)*(var71 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var210 - var102)*(var102 - var210)){myvar0= 1;}
else {exit(0);}
if(0 > (var210 - var154)*(var154 - var210)){myvar0= 1;}
else {exit(0);}
if(0 > (var211 - var119)*(var119 - var211)){myvar0= 1;}
else {exit(0);}
if(0 > (var212 - var203)*(var203 - var212)){myvar0= 1;}
else {exit(0);}
if(0 > (var212 - var3)*(var3 - var212)){myvar0= 1;}
else {exit(0);}
if(0 > (var213 - var166)*(var166 - var213)){myvar0= 1;}
else {exit(0);}
if(0 > (var214 - var181)*(var181 - var214)){myvar0= 1;}
else {exit(0);}
if(0 > (var214 - var224)*(var224 - var214)){myvar0= 1;}
else {exit(0);}
if(0 > (var214 - var56)*(var56 - var214)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var124)*(var124 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var134)*(var134 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var151)*(var151 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var190)*(var190 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var217)*(var217 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var47)*(var47 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var73)*(var73 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var106)*(var106 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var118)*(var118 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var152)*(var152 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var219)*(var219 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var28)*(var28 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var220 - var139)*(var139 - var220)){myvar0= 1;}
else {exit(0);}
if(0 > (var220 - var181)*(var181 - var220)){myvar0= 1;}
else {exit(0);}
if(0 > (var220 - var46)*(var46 - var220)){myvar0= 1;}
else {exit(0);}
if(0 > (var220 - var56)*(var56 - var220)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var153)*(var153 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var156)*(var156 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var2)*(var2 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var78)*(var78 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var223 - var119)*(var119 - var223)){myvar0= 1;}
else {exit(0);}
if(0 > (var223 - var193)*(var193 - var223)){myvar0= 1;}
else {exit(0);}
if(0 > (var223 - var24)*(var24 - var223)){myvar0= 1;}
else {exit(0);}
if(0 > (var24 - var105)*(var105 - var24)){myvar0= 1;}
else {exit(0);}
if(0 > (var24 - var119)*(var119 - var24)){myvar0= 1;}
else {exit(0);}
if(0 > (var24 - var122)*(var122 - var24)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var115)*(var115 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var143)*(var143 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var169)*(var169 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var69)*(var69 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var88)*(var88 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var27 - var117)*(var117 - var27)){myvar0= 1;}
else {exit(0);}
if(0 > (var27 - var16)*(var16 - var27)){myvar0= 1;}
else {exit(0);}
if(0 > (var27 - var32)*(var32 - var27)){myvar0= 1;}
else {exit(0);}
if(0 > (var27 - var96)*(var96 - var27)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var126)*(var126 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var152)*(var152 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var202)*(var202 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var217)*(var217 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var29 - var140)*(var140 - var29)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var147)*(var147 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var161)*(var161 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var170)*(var170 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var31)*(var31 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var42)*(var42 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var80)*(var80 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var9)*(var9 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var92)*(var92 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var33)*(var33 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var5)*(var5 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var32 - var16)*(var16 - var32)){myvar0= 1;}
else {exit(0);}
if(0 > (var32 - var213)*(var213 - var32)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var105)*(var105 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var119)*(var119 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var122)*(var122 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var211)*(var211 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var50)*(var50 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var35 - var2)*(var2 - var35)){myvar0= 1;}
else {exit(0);}
if(0 > (var35 - var78)*(var78 - var35)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var42)*(var42 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var80)*(var80 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var9)*(var9 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var92)*(var92 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var14)*(var14 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var162)*(var162 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var163)*(var163 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var168)*(var168 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var61)*(var61 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var112)*(var112 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var123)*(var123 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var149)*(var149 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var189)*(var189 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var196)*(var196 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var207)*(var207 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var94)*(var94 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var39 - var138)*(var138 - var39)){myvar0= 1;}
else {exit(0);}
if(0 > (var40 - var199)*(var199 - var40)){myvar0= 1;}
else {exit(0);}
if(0 > (var40 - var212)*(var212 - var40)){myvar0= 1;}
else {exit(0);}
if(0 > (var41 - var121)*(var121 - var41)){myvar0= 1;}
else {exit(0);}
if(0 > (var41 - var95)*(var95 - var41)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var170)*(var170 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var31)*(var31 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var5)*(var5 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var80)*(var80 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var9)*(var9 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var92)*(var92 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var103)*(var103 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var84)*(var84 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var93)*(var93 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var115)*(var115 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var17)*(var17 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var221)*(var221 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var25)*(var25 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var43)*(var43 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var69)*(var69 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var84)*(var84 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var88)*(var88 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var93)*(var93 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var45 - var128)*(var128 - var45)){myvar0= 1;}
else {exit(0);}
if(0 > (var45 - var151)*(var151 - var45)){myvar0= 1;}
else {exit(0);}
if(0 > (var45 - var164)*(var164 - var45)){myvar0= 1;}
else {exit(0);}
if(0 > (var46 - var137)*(var137 - var46)){myvar0= 1;}
else {exit(0);}
if(0 > (var46 - var181)*(var181 - var46)){myvar0= 1;}
else {exit(0);}
if(0 > (var46 - var214)*(var214 - var46)){myvar0= 1;}
else {exit(0);}
if(0 > (var46 - var53)*(var53 - var46)){myvar0= 1;}
else {exit(0);}
if(0 > (var47 - var127)*(var127 - var47)){myvar0= 1;}
else {exit(0);}
if(0 > (var47 - var15)*(var15 - var47)){myvar0= 1;}
else {exit(0);}
if(0 > (var47 - var73)*(var73 - var47)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var181)*(var181 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var214)*(var214 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var224)*(var224 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var46)*(var46 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var56)*(var56 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var105)*(var105 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var119)*(var119 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var160)*(var160 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var178)*(var178 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var188)*(var188 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var29)*(var29 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var4)*(var4 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var64)*(var64 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var68)*(var68 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var8)*(var8 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var224)*(var224 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var56)*(var56 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var128)*(var128 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var134)*(var134 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var151)*(var151 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var14)*(var14 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var168)*(var168 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var187)*(var187 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var85)*(var85 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var98)*(var98 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var56 - var181)*(var181 - var56)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var102)*(var102 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var154)*(var154 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var210)*(var210 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var102)*(var102 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var210)*(var210 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var124)*(var124 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var128)*(var128 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var150)*(var150 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var164)*(var164 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var190)*(var190 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var100)*(var100 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var159)*(var159 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var179)*(var179 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var180)*(var180 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var203)*(var203 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var212)*(var212 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var61 - var14)*(var14 - var61)){myvar0= 1;}
else {exit(0);}
if(0 > (var61 - var162)*(var162 - var61)){myvar0= 1;}
else {exit(0);}
if(0 > (var61 - var168)*(var168 - var61)){myvar0= 1;}
else {exit(0);}
if(0 > (var61 - var85)*(var85 - var61)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var137)*(var137 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var214)*(var214 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var46)*(var46 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var53)*(var53 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var56)*(var56 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var108)*(var108 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var198)*(var198 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var64 - var140)*(var140 - var64)){myvar0= 1;}
else {exit(0);}
if(0 > (var65 - var111)*(var111 - var65)){myvar0= 1;}
else {exit(0);}
if(0 > (var65 - var184)*(var184 - var65)){myvar0= 1;}
else {exit(0);}
if(0 > (var65 - var26)*(var26 - var65)){myvar0= 1;}
else {exit(0);}
if(0 > (var65 - var41)*(var41 - var65)){myvar0= 1;}
else {exit(0);}
if(0 > (var65 - var95)*(var95 - var65)){myvar0= 1;}
else {exit(0);}
if(0 > (var66 - var208)*(var208 - var66)){myvar0= 1;}
else {exit(0);}
if(0 > (var66 - var57)*(var57 - var66)){myvar0= 1;}
else {exit(0);}
if(0 > (var66 - var58)*(var58 - var66)){myvar0= 1;}
else {exit(0);}
if(0 > (var67 - var59)*(var59 - var67)){myvar0= 1;}
else {exit(0);}
if(0 > (var68 - var109)*(var109 - var68)){myvar0= 1;}
else {exit(0);}
if(0 > (var68 - var136)*(var136 - var68)){myvar0= 1;}
else {exit(0);}
if(0 > (var68 - var140)*(var140 - var68)){myvar0= 1;}
else {exit(0);}
if(0 > (var68 - var192)*(var192 - var68)){myvar0= 1;}
else {exit(0);}
if(0 > (var69 - var115)*(var115 - var69)){myvar0= 1;}
else {exit(0);}
if(0 > (var69 - var133)*(var133 - var69)){myvar0= 1;}
else {exit(0);}
if(0 > (var69 - var88)*(var88 - var69)){myvar0= 1;}
else {exit(0);}
if(0 > (var7 - var108)*(var108 - var7)){myvar0= 1;}
else {exit(0);}
if(0 > (var7 - var142)*(var142 - var7)){myvar0= 1;}
else {exit(0);}
if(0 > (var7 - var191)*(var191 - var7)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var118)*(var118 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var127)*(var127 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var15)*(var15 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var152)*(var152 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var202)*(var202 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var219)*(var219 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var22)*(var22 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var28)*(var28 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var47)*(var47 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var108)*(var108 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var191)*(var191 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var194)*(var194 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var198)*(var198 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var59)*(var59 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var63)*(var63 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var7)*(var7 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var73 - var15)*(var15 - var73)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var110)*(var110 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var111)*(var111 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var120)*(var120 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var157)*(var157 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var184)*(var184 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var26)*(var26 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var65)*(var65 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var83)*(var83 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var89)*(var89 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var74 - var95)*(var95 - var74)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var117)*(var117 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var166)*(var166 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var20)*(var20 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var32)*(var32 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var91)*(var91 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var96)*(var96 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var161)*(var161 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var30)*(var30 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var31)*(var31 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var33)*(var33 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var5)*(var5 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var80)*(var80 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var9)*(var9 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var92)*(var92 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var181)*(var181 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var220)*(var220 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var224)*(var224 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var48)*(var48 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var56)*(var56 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var109)*(var109 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var136)*(var136 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var140)*(var140 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var160)*(var160 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var178)*(var178 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var188)*(var188 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var29)*(var29 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var64)*(var64 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var80 - var5)*(var5 - var80)){myvar0= 1;}
else {exit(0);}
if(0 > (var81 - var142)*(var142 - var81)){myvar0= 1;}
else {exit(0);}
if(0 > (var81 - var191)*(var191 - var81)){myvar0= 1;}
else {exit(0);}
if(0 > (var81 - var194)*(var194 - var81)){myvar0= 1;}
else {exit(0);}
if(0 > (var81 - var198)*(var198 - var81)){myvar0= 1;}
else {exit(0);}
if(0 > (var81 - var205)*(var205 - var81)){myvar0= 1;}
else {exit(0);}
if(0 > (var81 - var63)*(var63 - var81)){myvar0= 1;}
else {exit(0);}
if(0 > (var81 - var7)*(var7 - var81)){myvar0= 1;}
else {exit(0);}
if(0 > (var83 - var111)*(var111 - var83)){myvar0= 1;}
else {exit(0);}
if(0 > (var83 - var121)*(var121 - var83)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var17)*(var17 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var221)*(var221 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var85 - var101)*(var101 - var85)){myvar0= 1;}
else {exit(0);}
if(0 > (var85 - var14)*(var14 - var85)){myvar0= 1;}
else {exit(0);}
if(0 > (var85 - var168)*(var168 - var85)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var119)*(var119 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var122)*(var122 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var206)*(var206 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var211)*(var211 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var24)*(var24 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var88 - var133)*(var133 - var88)){myvar0= 1;}
else {exit(0);}
if(0 > (var88 - var17)*(var17 - var88)){myvar0= 1;}
else {exit(0);}
if(0 > (var89 - var111)*(var111 - var89)){myvar0= 1;}
else {exit(0);}
if(0 > (var89 - var121)*(var121 - var89)){myvar0= 1;}
else {exit(0);}
if(0 > (var89 - var26)*(var26 - var89)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var170)*(var170 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var31)*(var31 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var33)*(var33 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var5)*(var5 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var80)*(var80 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var146)*(var146 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var156)*(var156 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var195)*(var195 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var2)*(var2 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var200)*(var200 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var222)*(var222 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var35)*(var35 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var78)*(var78 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var155)*(var155 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var16)*(var16 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var20)*(var20 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var32)*(var32 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var87)*(var87 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var92 - var31)*(var31 - var92)){myvar0= 1;}
else {exit(0);}
if(0 > (var92 - var33)*(var33 - var92)){myvar0= 1;}
else {exit(0);}
if(0 > (var93 - var115)*(var115 - var93)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var112)*(var112 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var123)*(var123 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var138)*(var138 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var149)*(var149 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var172)*(var172 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var196)*(var196 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var207)*(var207 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var71)*(var71 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var121)*(var121 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var26)*(var26 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var96 - var16)*(var16 - var96)){myvar0= 1;}
else {exit(0);}
if(0 > (var96 - var166)*(var166 - var96)){myvar0= 1;}
else {exit(0);}
if(0 > (var96 - var32)*(var32 - var96)){myvar0= 1;}
else {exit(0);}
if(0 > (var97 - var105)*(var105 - var97)){myvar0= 1;}
else {exit(0);}
if(0 > (var97 - var122)*(var122 - var97)){myvar0= 1;}
else {exit(0);}
if(0 > (var97 - var186)*(var186 - var97)){myvar0= 1;}
else {exit(0);}
if(0 > (var97 - var211)*(var211 - var97)){myvar0= 1;}
else {exit(0);}
if(0 > (var97 - var34)*(var34 - var97)){myvar0= 1;}
else {exit(0);}
if(0 > (var97 - var50)*(var50 - var97)){myvar0= 1;}
else {exit(0);}
if(0 > (var98 - var101)*(var101 - var98)){myvar0= 1;}
else {exit(0);}
if(0 > (var98 - var14)*(var14 - var98)){myvar0= 1;}
else {exit(0);}
if(0 > (var98 - var163)*(var163 - var98)){myvar0= 1;}
else {exit(0);}
if(0 > (var98 - var85)*(var85 - var98)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var102)*(var102 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var208)*(var208 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var210)*(var210 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var57)*(var57 - var99)){myvar0= 1;}
else {exit(0);}
if(var0 != var14){myvar0= 1;}
else {exit(0);}
if(var0 != var162){myvar0= 1;}
else {exit(0);}
if(var0 != var163){myvar0= 1;}
else {exit(0);}
if(var0 != var187){myvar0= 1;}
else {exit(0);}
if(var0 != var37){myvar0= 1;}
else {exit(0);}
if(var0 != var61){myvar0= 1;}
else {exit(0);}
if(var0 != var85){myvar0= 1;}
else {exit(0);}
if(var1 != var130){myvar0= 1;}
else {exit(0);}
if(var1 != var140){myvar0= 1;}
else {exit(0);}
if(var1 != var192){myvar0= 1;}
else {exit(0);}
if(var1 != var4){myvar0= 1;}
else {exit(0);}
if(var1 != var64){myvar0= 1;}
else {exit(0);}
if(var1 != var68){myvar0= 1;}
else {exit(0);}
if(var10 != var155){myvar0= 1;}
else {exit(0);}
if(var10 != var166){myvar0= 1;}
else {exit(0);}
if(var10 != var213){myvar0= 1;}
else {exit(0);}
if(var10 != var32){myvar0= 1;}
else {exit(0);}
if(var100 != var13){myvar0= 1;}
else {exit(0);}
if(var100 != var179){myvar0= 1;}
else {exit(0);}
if(var100 != var203){myvar0= 1;}
else {exit(0);}
if(var100 != var212){myvar0= 1;}
else {exit(0);}
if(var100 != var3){myvar0= 1;}
else {exit(0);}
if(var100 != var40){myvar0= 1;}
else {exit(0);}
if(var102 != var154){myvar0= 1;}
else {exit(0);}
if(var103 != var115){myvar0= 1;}
else {exit(0);}
if(var103 != var133){myvar0= 1;}
else {exit(0);}
if(var103 != var143){myvar0= 1;}
else {exit(0);}
if(var103 != var17){myvar0= 1;}
else {exit(0);}
if(var103 != var221){myvar0= 1;}
else {exit(0);}
if(var103 != var69){myvar0= 1;}
else {exit(0);}
if(var105 != var119){myvar0= 1;}
else {exit(0);}
if(var105 != var211){myvar0= 1;}
else {exit(0);}
if(var106 != var118){myvar0= 1;}
else {exit(0);}
if(var106 != var126){myvar0= 1;}
else {exit(0);}
if(var106 != var219){myvar0= 1;}
else {exit(0);}
if(var106 != var47){myvar0= 1;}
else {exit(0);}
if(var107 != var128){myvar0= 1;}
else {exit(0);}
if(var107 != var150){myvar0= 1;}
else {exit(0);}
if(var107 != var151){myvar0= 1;}
else {exit(0);}
if(var107 != var216){myvar0= 1;}
else {exit(0);}
if(var107 != var54){myvar0= 1;}
else {exit(0);}
if(var108 != var59){myvar0= 1;}
else {exit(0);}
if(var11 != var153){myvar0= 1;}
else {exit(0);}
if(var11 != var183){myvar0= 1;}
else {exit(0);}
if(var11 != var2){myvar0= 1;}
else {exit(0);}
if(var11 != var35){myvar0= 1;}
else {exit(0);}
if(var11 != var78){myvar0= 1;}
else {exit(0);}
if(var110 != var121){myvar0= 1;}
else {exit(0);}
if(var110 != var26){myvar0= 1;}
else {exit(0);}
if(var110 != var41){myvar0= 1;}
else {exit(0);}
if(var110 != var83){myvar0= 1;}
else {exit(0);}
if(var110 != var89){myvar0= 1;}
else {exit(0);}
if(var110 != var95){myvar0= 1;}
else {exit(0);}
if(var111 != var121){myvar0= 1;}
else {exit(0);}
if(var111 != var26){myvar0= 1;}
else {exit(0);}
if(var111 != var95){myvar0= 1;}
else {exit(0);}
if(var112 != var167){myvar0= 1;}
else {exit(0);}
if(var113 != var0){myvar0= 1;}
else {exit(0);}
if(var113 != var101){myvar0= 1;}
else {exit(0);}
if(var113 != var168){myvar0= 1;}
else {exit(0);}
if(var113 != var187){myvar0= 1;}
else {exit(0);}
if(var113 != var37){myvar0= 1;}
else {exit(0);}
if(var113 != var61){myvar0= 1;}
else {exit(0);}
if(var113 != var85){myvar0= 1;}
else {exit(0);}
if(var113 != var98){myvar0= 1;}
else {exit(0);}
if(var114 != var122){myvar0= 1;}
else {exit(0);}
if(var114 != var50){myvar0= 1;}
else {exit(0);}
if(var117 != var166){myvar0= 1;}
else {exit(0);}
if(var117 != var96){myvar0= 1;}
else {exit(0);}
if(var118 != var126){myvar0= 1;}
else {exit(0);}
if(var118 != var127){myvar0= 1;}
else {exit(0);}
if(var118 != var15){myvar0= 1;}
else {exit(0);}
if(var118 != var217){myvar0= 1;}
else {exit(0);}
if(var118 != var219){myvar0= 1;}
else {exit(0);}
if(var118 != var73){myvar0= 1;}
else {exit(0);}
if(var120 != var110){myvar0= 1;}
else {exit(0);}
if(var120 != var121){myvar0= 1;}
else {exit(0);}
if(var120 != var41){myvar0= 1;}
else {exit(0);}
if(var120 != var89){myvar0= 1;}
else {exit(0);}
if(var120 != var95){myvar0= 1;}
else {exit(0);}
if(var121 != var26){myvar0= 1;}
else {exit(0);}
if(var123 != var138){myvar0= 1;}
else {exit(0);}
if(var123 != var172){myvar0= 1;}
else {exit(0);}
if(var123 != var189){myvar0= 1;}
else {exit(0);}
if(var123 != var207){myvar0= 1;}
else {exit(0);}
if(var123 != var71){myvar0= 1;}
else {exit(0);}
if(var124 != var216){myvar0= 1;}
else {exit(0);}
if(var124 != var54){myvar0= 1;}
else {exit(0);}
if(var127 != var126){myvar0= 1;}
else {exit(0);}
if(var127 != var15){myvar0= 1;}
else {exit(0);}
if(var128 != var190){myvar0= 1;}
else {exit(0);}
if(var129 != var156){myvar0= 1;}
else {exit(0);}
if(var129 != var183){myvar0= 1;}
else {exit(0);}
if(var129 != var195){myvar0= 1;}
else {exit(0);}
if(var129 != var2){myvar0= 1;}
else {exit(0);}
if(var129 != var200){myvar0= 1;}
else {exit(0);}
if(var129 != var222){myvar0= 1;}
else {exit(0);}
if(var129 != var35){myvar0= 1;}
else {exit(0);}
if(var13 != var179){myvar0= 1;}
else {exit(0);}
if(var13 != var203){myvar0= 1;}
else {exit(0);}
if(var13 != var212){myvar0= 1;}
else {exit(0);}
if(var13 != var3){myvar0= 1;}
else {exit(0);}
if(var130 != var109){myvar0= 1;}
else {exit(0);}
if(var130 != var188){myvar0= 1;}
else {exit(0);}
if(var131 != var117){myvar0= 1;}
else {exit(0);}
if(var131 != var155){myvar0= 1;}
else {exit(0);}
if(var131 != var20){myvar0= 1;}
else {exit(0);}
if(var131 != var213){myvar0= 1;}
else {exit(0);}
if(var131 != var27){myvar0= 1;}
else {exit(0);}
if(var131 != var87){myvar0= 1;}
else {exit(0);}
if(var133 != var115){myvar0= 1;}
else {exit(0);}
if(var133 != var221){myvar0= 1;}
else {exit(0);}
if(var133 != var84){myvar0= 1;}
else {exit(0);}
if(var135 != var102){myvar0= 1;}
else {exit(0);}
if(var135 != var154){myvar0= 1;}
else {exit(0);}
if(var135 != var197){myvar0= 1;}
else {exit(0);}
if(var135 != var66){myvar0= 1;}
else {exit(0);}
if(var135 != var99){myvar0= 1;}
else {exit(0);}
if(var136 != var178){myvar0= 1;}
else {exit(0);}
if(var137 != var181){myvar0= 1;}
else {exit(0);}
if(var138 != var112){myvar0= 1;}
else {exit(0);}
if(var138 != var172){myvar0= 1;}
else {exit(0);}
if(var138 != var189){myvar0= 1;}
else {exit(0);}
if(var138 != var71){myvar0= 1;}
else {exit(0);}
if(var139 != var181){myvar0= 1;}
else {exit(0);}
if(var139 != var48){myvar0= 1;}
else {exit(0);}
if(var139 != var56){myvar0= 1;}
else {exit(0);}
if(var14 != var163){myvar0= 1;}
else {exit(0);}
if(var140 != var109){myvar0= 1;}
else {exit(0);}
if(var140 != var4){myvar0= 1;}
else {exit(0);}
if(var141 != var42){myvar0= 1;}
else {exit(0);}
if(var141 != var5){myvar0= 1;}
else {exit(0);}
if(var141 != var80){myvar0= 1;}
else {exit(0);}
if(var141 != var9){myvar0= 1;}
else {exit(0);}
if(var141 != var92){myvar0= 1;}
else {exit(0);}
if(var142 != var198){myvar0= 1;}
else {exit(0);}
if(var142 != var59){myvar0= 1;}
else {exit(0);}
if(var142 != var63){myvar0= 1;}
else {exit(0);}
if(var143 != var115){myvar0= 1;}
else {exit(0);}
if(var143 != var133){myvar0= 1;}
else {exit(0);}
if(var143 != var69){myvar0= 1;}
else {exit(0);}
if(var145 != var148){myvar0= 1;}
else {exit(0);}
if(var145 != var165){myvar0= 1;}
else {exit(0);}
if(var145 != var197){myvar0= 1;}
else {exit(0);}
if(var145 != var208){myvar0= 1;}
else {exit(0);}
if(var145 != var210){myvar0= 1;}
else {exit(0);}
if(var145 != var57){myvar0= 1;}
else {exit(0);}
if(var145 != var58){myvar0= 1;}
else {exit(0);}
if(var145 != var99){myvar0= 1;}
else {exit(0);}
if(var146 != var156){myvar0= 1;}
else {exit(0);}
if(var146 != var183){myvar0= 1;}
else {exit(0);}
if(var146 != var2){myvar0= 1;}
else {exit(0);}
if(var147 != var161){myvar0= 1;}
else {exit(0);}
if(var147 != var170){myvar0= 1;}
else {exit(0);}
if(var147 != var5){myvar0= 1;}
else {exit(0);}
if(var148 != var102){myvar0= 1;}
else {exit(0);}
if(var148 != var154){myvar0= 1;}
else {exit(0);}
if(var148 != var57){myvar0= 1;}
else {exit(0);}
if(var148 != var66){myvar0= 1;}
else {exit(0);}
if(var148 != var99){myvar0= 1;}
else {exit(0);}
if(var149 != var112){myvar0= 1;}
else {exit(0);}
if(var149 != var123){myvar0= 1;}
else {exit(0);}
if(var149 != var167){myvar0= 1;}
else {exit(0);}
if(var149 != var196){myvar0= 1;}
else {exit(0);}
if(var149 != var207){myvar0= 1;}
else {exit(0);}
if(var149 != var71){myvar0= 1;}
else {exit(0);}
if(var15 != var126){myvar0= 1;}
else {exit(0);}
if(var150 != var128){myvar0= 1;}
else {exit(0);}
if(var150 != var190){myvar0= 1;}
else {exit(0);}
if(var151 != var150){myvar0= 1;}
else {exit(0);}
if(var151 != var190){myvar0= 1;}
else {exit(0);}
if(var152 != var118){myvar0= 1;}
else {exit(0);}
if(var152 != var127){myvar0= 1;}
else {exit(0);}
if(var152 != var15){myvar0= 1;}
else {exit(0);}
if(var152 != var73){myvar0= 1;}
else {exit(0);}
if(var153 != var78){myvar0= 1;}
else {exit(0);}
if(var155 != var166){myvar0= 1;}
else {exit(0);}
if(var155 != var20){myvar0= 1;}
else {exit(0);}
if(var155 != var213){myvar0= 1;}
else {exit(0);}
if(var155 != var32){myvar0= 1;}
else {exit(0);}
if(var155 != var87){myvar0= 1;}
else {exit(0);}
if(var156 != var195){myvar0= 1;}
else {exit(0);}
if(var156 != var2){myvar0= 1;}
else {exit(0);}
if(var156 != var200){myvar0= 1;}
else {exit(0);}
if(var156 != var35){myvar0= 1;}
else {exit(0);}
if(var156 != var78){myvar0= 1;}
else {exit(0);}
if(var157 != var111){myvar0= 1;}
else {exit(0);}
if(var157 != var121){myvar0= 1;}
else {exit(0);}
if(var157 != var41){myvar0= 1;}
else {exit(0);}
if(var157 != var89){myvar0= 1;}
else {exit(0);}
if(var157 != var95){myvar0= 1;}
else {exit(0);}
if(var158 != var11){myvar0= 1;}
else {exit(0);}
if(var158 != var129){myvar0= 1;}
else {exit(0);}
if(var158 != var195){myvar0= 1;}
else {exit(0);}
if(var158 != var2){myvar0= 1;}
else {exit(0);}
if(var158 != var200){myvar0= 1;}
else {exit(0);}
if(var158 != var222){myvar0= 1;}
else {exit(0);}
if(var158 != var90){myvar0= 1;}
else {exit(0);}
if(var159 != var100){myvar0= 1;}
else {exit(0);}
if(var159 != var180){myvar0= 1;}
else {exit(0);}
if(var159 != var199){myvar0= 1;}
else {exit(0);}
if(var159 != var203){myvar0= 1;}
else {exit(0);}
if(var159 != var212){myvar0= 1;}
else {exit(0);}
if(var16 != var87){myvar0= 1;}
else {exit(0);}
if(var160 != var109){myvar0= 1;}
else {exit(0);}
if(var160 != var140){myvar0= 1;}
else {exit(0);}
if(var160 != var178){myvar0= 1;}
else {exit(0);}
if(var160 != var188){myvar0= 1;}
else {exit(0);}
if(var160 != var192){myvar0= 1;}
else {exit(0);}
if(var160 != var29){myvar0= 1;}
else {exit(0);}
if(var160 != var4){myvar0= 1;}
else {exit(0);}
if(var161 != var33){myvar0= 1;}
else {exit(0);}
if(var161 != var5){myvar0= 1;}
else {exit(0);}
if(var161 != var9){myvar0= 1;}
else {exit(0);}
if(var161 != var92){myvar0= 1;}
else {exit(0);}
if(var163 != var162){myvar0= 1;}
else {exit(0);}
if(var164 != var128){myvar0= 1;}
else {exit(0);}
if(var164 != var150){myvar0= 1;}
else {exit(0);}
if(var164 != var151){myvar0= 1;}
else {exit(0);}
if(var164 != var190){myvar0= 1;}
else {exit(0);}
if(var164 != var215){myvar0= 1;}
else {exit(0);}
if(var164 != var54){myvar0= 1;}
else {exit(0);}
if(var165 != var102){myvar0= 1;}
else {exit(0);}
if(var165 != var154){myvar0= 1;}
else {exit(0);}
if(var165 != var197){myvar0= 1;}
else {exit(0);}
if(var165 != var57){myvar0= 1;}
else {exit(0);}
if(var165 != var58){myvar0= 1;}
else {exit(0);}
if(var165 != var66){myvar0= 1;}
else {exit(0);}
if(var166 != var87){myvar0= 1;}
else {exit(0);}
if(var168 != var101){myvar0= 1;}
else {exit(0);}
if(var168 != var162){myvar0= 1;}
else {exit(0);}
if(var169 != var103){myvar0= 1;}
else {exit(0);}
if(var169 != var133){myvar0= 1;}
else {exit(0);}
if(var169 != var143){myvar0= 1;}
else {exit(0);}
if(var169 != var17){myvar0= 1;}
else {exit(0);}
if(var169 != var84){myvar0= 1;}
else {exit(0);}
if(var169 != var88){myvar0= 1;}
else {exit(0);}
if(var17 != var115){myvar0= 1;}
else {exit(0);}
if(var170 != var33){myvar0= 1;}
else {exit(0);}
if(var172 != var189){myvar0= 1;}
else {exit(0);}
if(var172 != var207){myvar0= 1;}
else {exit(0);}
if(var173 != var100){myvar0= 1;}
else {exit(0);}
if(var173 != var159){myvar0= 1;}
else {exit(0);}
if(var173 != var179){myvar0= 1;}
else {exit(0);}
if(var173 != var203){myvar0= 1;}
else {exit(0);}
if(var174 != var100){myvar0= 1;}
else {exit(0);}
if(var174 != var173){myvar0= 1;}
else {exit(0);}
if(var174 != var179){myvar0= 1;}
else {exit(0);}
if(var174 != var180){myvar0= 1;}
else {exit(0);}
if(var174 != var203){myvar0= 1;}
else {exit(0);}
if(var174 != var212){myvar0= 1;}
else {exit(0);}
if(var174 != var3){myvar0= 1;}
else {exit(0);}
if(var174 != var40){myvar0= 1;}
else {exit(0);}
if(var175 != var107){myvar0= 1;}
else {exit(0);}
if(var175 != var128){myvar0= 1;}
else {exit(0);}
if(var175 != var151){myvar0= 1;}
else {exit(0);}
if(var175 != var164){myvar0= 1;}
else {exit(0);}
if(var175 != var190){myvar0= 1;}
else {exit(0);}
if(var175 != var215){myvar0= 1;}
else {exit(0);}
if(var175 != var216){myvar0= 1;}
else {exit(0);}
if(var175 != var54){myvar0= 1;}
else {exit(0);}
if(var176 != var100){myvar0= 1;}
else {exit(0);}
if(var176 != var173){myvar0= 1;}
else {exit(0);}
if(var176 != var179){myvar0= 1;}
else {exit(0);}
if(var176 != var180){myvar0= 1;}
else {exit(0);}
if(var176 != var199){myvar0= 1;}
else {exit(0);}
if(var176 != var3){myvar0= 1;}
else {exit(0);}
if(var177 != var139){myvar0= 1;}
else {exit(0);}
if(var177 != var182){myvar0= 1;}
else {exit(0);}
if(var177 != var214){myvar0= 1;}
else {exit(0);}
if(var177 != var220){myvar0= 1;}
else {exit(0);}
if(var177 != var46){myvar0= 1;}
else {exit(0);}
if(var177 != var48){myvar0= 1;}
else {exit(0);}
if(var177 != var56){myvar0= 1;}
else {exit(0);}
if(var177 != var77){myvar0= 1;}
else {exit(0);}
if(var178 != var29){myvar0= 1;}
else {exit(0);}
if(var178 != var64){myvar0= 1;}
else {exit(0);}
if(var179 != var3){myvar0= 1;}
else {exit(0);}
if(var18 != var108){myvar0= 1;}
else {exit(0);}
if(var18 != var142){myvar0= 1;}
else {exit(0);}
if(var18 != var198){myvar0= 1;}
else {exit(0);}
if(var18 != var205){myvar0= 1;}
else {exit(0);}
if(var18 != var63){myvar0= 1;}
else {exit(0);}
if(var180 != var203){myvar0= 1;}
else {exit(0);}
if(var180 != var40){myvar0= 1;}
else {exit(0);}
if(var182 != var137){myvar0= 1;}
else {exit(0);}
if(var182 != var214){myvar0= 1;}
else {exit(0);}
if(var182 != var224){myvar0= 1;}
else {exit(0);}
if(var182 != var46){myvar0= 1;}
else {exit(0);}
if(var182 != var48){myvar0= 1;}
else {exit(0);}
if(var182 != var56){myvar0= 1;}
else {exit(0);}
if(var182 != var62){myvar0= 1;}
else {exit(0);}
if(var182 != var77){myvar0= 1;}
else {exit(0);}
if(var183 != var78){myvar0= 1;}
else {exit(0);}
if(var184 != var110){myvar0= 1;}
else {exit(0);}
if(var184 != var157){myvar0= 1;}
else {exit(0);}
if(var184 != var26){myvar0= 1;}
else {exit(0);}
if(var185 != var135){myvar0= 1;}
else {exit(0);}
if(var185 != var148){myvar0= 1;}
else {exit(0);}
if(var185 != var197){myvar0= 1;}
else {exit(0);}
if(var185 != var208){myvar0= 1;}
else {exit(0);}
if(var185 != var58){myvar0= 1;}
else {exit(0);}
if(var185 != var99){myvar0= 1;}
else {exit(0);}
if(var186 != var122){myvar0= 1;}
else {exit(0);}
if(var186 != var211){myvar0= 1;}
else {exit(0);}
if(var186 != var24){myvar0= 1;}
else {exit(0);}
if(var186 != var34){myvar0= 1;}
else {exit(0);}
if(var186 != var50){myvar0= 1;}
else {exit(0);}
if(var186 != var86){myvar0= 1;}
else {exit(0);}
if(var187 != var162){myvar0= 1;}
else {exit(0);}
if(var187 != var163){myvar0= 1;}
else {exit(0);}
if(var187 != var168){myvar0= 1;}
else {exit(0);}
if(var187 != var61){myvar0= 1;}
else {exit(0);}
if(var187 != var85){myvar0= 1;}
else {exit(0);}
if(var187 != var98){myvar0= 1;}
else {exit(0);}
if(var188 != var178){myvar0= 1;}
else {exit(0);}
if(var188 != var64){myvar0= 1;}
else {exit(0);}
if(var189 != var167){myvar0= 1;}
else {exit(0);}
if(var189 != var207){myvar0= 1;}
else {exit(0);}
if(var19 != var108){myvar0= 1;}
else {exit(0);}
if(var19 != var142){myvar0= 1;}
else {exit(0);}
if(var19 != var18){myvar0= 1;}
else {exit(0);}
if(var19 != var198){myvar0= 1;}
else {exit(0);}
if(var19 != var205){myvar0= 1;}
else {exit(0);}
if(var19 != var63){myvar0= 1;}
else {exit(0);}
if(var19 != var7){myvar0= 1;}
else {exit(0);}
if(var191 != var142){myvar0= 1;}
else {exit(0);}
if(var191 != var198){myvar0= 1;}
else {exit(0);}
if(var191 != var205){myvar0= 1;}
else {exit(0);}
if(var191 != var59){myvar0= 1;}
else {exit(0);}
if(var191 != var63){myvar0= 1;}
else {exit(0);}
if(var192 != var140){myvar0= 1;}
else {exit(0);}
if(var192 != var4){myvar0= 1;}
else {exit(0);}
if(var193 != var105){myvar0= 1;}
else {exit(0);}
if(var193 != var119){myvar0= 1;}
else {exit(0);}
if(var194 != var198){myvar0= 1;}
else {exit(0);}
if(var194 != var205){myvar0= 1;}
else {exit(0);}
if(var194 != var59){myvar0= 1;}
else {exit(0);}
if(var194 != var63){myvar0= 1;}
else {exit(0);}
if(var194 != var67){myvar0= 1;}
else {exit(0);}
if(var194 != var7){myvar0= 1;}
else {exit(0);}
if(var195 != var11){myvar0= 1;}
else {exit(0);}
if(var195 != var183){myvar0= 1;}
else {exit(0);}
if(var196 != var138){myvar0= 1;}
else {exit(0);}
if(var196 != var172){myvar0= 1;}
else {exit(0);}
if(var196 != var189){myvar0= 1;}
else {exit(0);}
if(var197 != var102){myvar0= 1;}
else {exit(0);}
if(var197 != var58){myvar0= 1;}
else {exit(0);}
if(var198 != var108){myvar0= 1;}
else {exit(0);}
if(var198 != var59){myvar0= 1;}
else {exit(0);}
if(var198 != var67){myvar0= 1;}
else {exit(0);}
if(var199 != var203){myvar0= 1;}
else {exit(0);}
if(var199 != var3){myvar0= 1;}
else {exit(0);}
if(var20 != var166){myvar0= 1;}
else {exit(0);}
if(var20 != var32){myvar0= 1;}
else {exit(0);}
if(var200 != var11){myvar0= 1;}
else {exit(0);}
if(var200 != var153){myvar0= 1;}
else {exit(0);}
if(var200 != var2){myvar0= 1;}
else {exit(0);}
if(var200 != var35){myvar0= 1;}
else {exit(0);}
if(var202 != var106){myvar0= 1;}
else {exit(0);}
if(var202 != var126){myvar0= 1;}
else {exit(0);}
if(var202 != var127){myvar0= 1;}
else {exit(0);}
if(var204 != var111){myvar0= 1;}
else {exit(0);}
if(var204 != var65){myvar0= 1;}
else {exit(0);}
if(var204 != var74){myvar0= 1;}
else {exit(0);}
if(var204 != var83){myvar0= 1;}
else {exit(0);}
if(var205 != var142){myvar0= 1;}
else {exit(0);}
if(var205 != var198){myvar0= 1;}
else {exit(0);}
if(var206 != var105){myvar0= 1;}
else {exit(0);}
if(var206 != var114){myvar0= 1;}
else {exit(0);}
if(var206 != var119){myvar0= 1;}
else {exit(0);}
if(var206 != var122){myvar0= 1;}
else {exit(0);}
if(var206 != var193){myvar0= 1;}
else {exit(0);}
if(var206 != var211){myvar0= 1;}
else {exit(0);}
if(var206 != var223){myvar0= 1;}
else {exit(0);}
if(var206 != var24){myvar0= 1;}
else {exit(0);}
if(var206 != var34){myvar0= 1;}
else {exit(0);}
if(var207 != var167){myvar0= 1;}
else {exit(0);}
if(var208 != var102){myvar0= 1;}
else {exit(0);}
if(var208 != var154){myvar0= 1;}
else {exit(0);}
if(var208 != var210){myvar0= 1;}
else {exit(0);}
if(var209 != var0){myvar0= 1;}
else {exit(0);}
if(var209 != var14){myvar0= 1;}
else {exit(0);}
if(var209 != var162){myvar0= 1;}
else {exit(0);}
if(var209 != var187){myvar0= 1;}
else {exit(0);}
if(var209 != var37){myvar0= 1;}
else {exit(0);}
if(var209 != var98){myvar0= 1;}
else {exit(0);}
if(var21 != var138){myvar0= 1;}
else {exit(0);}
if(var21 != var149){myvar0= 1;}
else {exit(0);}
if(var21 != var172){myvar0= 1;}
else {exit(0);}
if(var21 != var189){myvar0= 1;}
else {exit(0);}
if(var21 != var38){myvar0= 1;}
else {exit(0);}
if(var21 != var39){myvar0= 1;}
else {exit(0);}
if(var21 != var94){myvar0= 1;}
else {exit(0);}
if(var212 != var179){myvar0= 1;}
else {exit(0);}
if(var212 != var199){myvar0= 1;}
else {exit(0);}
if(var213 != var87){myvar0= 1;}
else {exit(0);}
if(var214 != var53){myvar0= 1;}
else {exit(0);}
if(var215 != var128){myvar0= 1;}
else {exit(0);}
if(var215 != var150){myvar0= 1;}
else {exit(0);}
if(var215 != var190){myvar0= 1;}
else {exit(0);}
if(var215 != var216){myvar0= 1;}
else {exit(0);}
if(var215 != var54){myvar0= 1;}
else {exit(0);}
if(var216 != var128){myvar0= 1;}
else {exit(0);}
if(var216 != var150){myvar0= 1;}
else {exit(0);}
if(var216 != var151){myvar0= 1;}
else {exit(0);}
if(var217 != var126){myvar0= 1;}
else {exit(0);}
if(var219 != var126){myvar0= 1;}
else {exit(0);}
if(var219 != var127){myvar0= 1;}
else {exit(0);}
if(var219 != var15){myvar0= 1;}
else {exit(0);}
if(var22 != var126){myvar0= 1;}
else {exit(0);}
if(var22 != var127){myvar0= 1;}
else {exit(0);}
if(var22 != var15){myvar0= 1;}
else {exit(0);}
if(var22 != var202){myvar0= 1;}
else {exit(0);}
if(var22 != var217){myvar0= 1;}
else {exit(0);}
if(var22 != var47){myvar0= 1;}
else {exit(0);}
if(var22 != var73){myvar0= 1;}
else {exit(0);}
if(var220 != var137){myvar0= 1;}
else {exit(0);}
if(var220 != var214){myvar0= 1;}
else {exit(0);}
if(var220 != var224){myvar0= 1;}
else {exit(0);}
if(var220 != var48){myvar0= 1;}
else {exit(0);}
if(var220 != var53){myvar0= 1;}
else {exit(0);}
if(var222 != var11){myvar0= 1;}
else {exit(0);}
if(var222 != var146){myvar0= 1;}
else {exit(0);}
if(var222 != var183){myvar0= 1;}
else {exit(0);}
if(var222 != var195){myvar0= 1;}
else {exit(0);}
if(var222 != var200){myvar0= 1;}
else {exit(0);}
if(var222 != var35){myvar0= 1;}
else {exit(0);}
if(var223 != var105){myvar0= 1;}
else {exit(0);}
if(var223 != var114){myvar0= 1;}
else {exit(0);}
if(var223 != var122){myvar0= 1;}
else {exit(0);}
if(var223 != var211){myvar0= 1;}
else {exit(0);}
if(var223 != var34){myvar0= 1;}
else {exit(0);}
if(var223 != var50){myvar0= 1;}
else {exit(0);}
if(var24 != var211){myvar0= 1;}
else {exit(0);}
if(var24 != var50){myvar0= 1;}
else {exit(0);}
if(var25 != var103){myvar0= 1;}
else {exit(0);}
if(var25 != var133){myvar0= 1;}
else {exit(0);}
if(var25 != var17){myvar0= 1;}
else {exit(0);}
if(var25 != var221){myvar0= 1;}
else {exit(0);}
if(var25 != var43){myvar0= 1;}
else {exit(0);}
if(var25 != var84){myvar0= 1;}
else {exit(0);}
if(var25 != var93){myvar0= 1;}
else {exit(0);}
if(var27 != var10){myvar0= 1;}
else {exit(0);}
if(var27 != var155){myvar0= 1;}
else {exit(0);}
if(var27 != var166){myvar0= 1;}
else {exit(0);}
if(var27 != var20){myvar0= 1;}
else {exit(0);}
if(var27 != var213){myvar0= 1;}
else {exit(0);}
if(var27 != var75){myvar0= 1;}
else {exit(0);}
if(var27 != var87){myvar0= 1;}
else {exit(0);}
if(var27 != var91){myvar0= 1;}
else {exit(0);}
if(var28 != var106){myvar0= 1;}
else {exit(0);}
if(var28 != var118){myvar0= 1;}
else {exit(0);}
if(var28 != var127){myvar0= 1;}
else {exit(0);}
if(var28 != var15){myvar0= 1;}
else {exit(0);}
if(var28 != var219){myvar0= 1;}
else {exit(0);}
if(var28 != var47){myvar0= 1;}
else {exit(0);}
if(var28 != var73){myvar0= 1;}
else {exit(0);}
if(var29 != var109){myvar0= 1;}
else {exit(0);}
if(var29 != var4){myvar0= 1;}
else {exit(0);}
if(var29 != var64){myvar0= 1;}
else {exit(0);}
if(var30 != var141){myvar0= 1;}
else {exit(0);}
if(var30 != var33){myvar0= 1;}
else {exit(0);}
if(var30 != var36){myvar0= 1;}
else {exit(0);}
if(var30 != var5){myvar0= 1;}
else {exit(0);}
if(var32 != var166){myvar0= 1;}
else {exit(0);}
if(var32 != var87){myvar0= 1;}
else {exit(0);}
if(var33 != var5){myvar0= 1;}
else {exit(0);}
if(var34 != var114){myvar0= 1;}
else {exit(0);}
if(var34 != var193){myvar0= 1;}
else {exit(0);}
if(var34 != var24){myvar0= 1;}
else {exit(0);}
if(var35 != var153){myvar0= 1;}
else {exit(0);}
if(var35 != var183){myvar0= 1;}
else {exit(0);}
if(var36 != var141){myvar0= 1;}
else {exit(0);}
if(var36 != var161){myvar0= 1;}
else {exit(0);}
if(var36 != var170){myvar0= 1;}
else {exit(0);}
if(var36 != var31){myvar0= 1;}
else {exit(0);}
if(var36 != var33){myvar0= 1;}
else {exit(0);}
if(var36 != var5){myvar0= 1;}
else {exit(0);}
if(var37 != var101){myvar0= 1;}
else {exit(0);}
if(var37 != var85){myvar0= 1;}
else {exit(0);}
if(var37 != var98){myvar0= 1;}
else {exit(0);}
if(var38 != var138){myvar0= 1;}
else {exit(0);}
if(var38 != var167){myvar0= 1;}
else {exit(0);}
if(var38 != var172){myvar0= 1;}
else {exit(0);}
if(var38 != var71){myvar0= 1;}
else {exit(0);}
if(var39 != var112){myvar0= 1;}
else {exit(0);}
if(var39 != var123){myvar0= 1;}
else {exit(0);}
if(var39 != var149){myvar0= 1;}
else {exit(0);}
if(var39 != var167){myvar0= 1;}
else {exit(0);}
if(var39 != var172){myvar0= 1;}
else {exit(0);}
if(var39 != var189){myvar0= 1;}
else {exit(0);}
if(var39 != var196){myvar0= 1;}
else {exit(0);}
if(var39 != var207){myvar0= 1;}
else {exit(0);}
if(var39 != var38){myvar0= 1;}
else {exit(0);}
if(var39 != var71){myvar0= 1;}
else {exit(0);}
if(var39 != var94){myvar0= 1;}
else {exit(0);}
if(var4 != var109){myvar0= 1;}
else {exit(0);}
if(var40 != var13){myvar0= 1;}
else {exit(0);}
if(var40 != var179){myvar0= 1;}
else {exit(0);}
if(var40 != var203){myvar0= 1;}
else {exit(0);}
if(var40 != var3){myvar0= 1;}
else {exit(0);}
if(var41 != var111){myvar0= 1;}
else {exit(0);}
if(var41 != var26){myvar0= 1;}
else {exit(0);}
if(var42 != var33){myvar0= 1;}
else {exit(0);}
if(var43 != var115){myvar0= 1;}
else {exit(0);}
if(var43 != var133){myvar0= 1;}
else {exit(0);}
if(var43 != var143){myvar0= 1;}
else {exit(0);}
if(var43 != var169){myvar0= 1;}
else {exit(0);}
if(var43 != var17){myvar0= 1;}
else {exit(0);}
if(var43 != var221){myvar0= 1;}
else {exit(0);}
if(var43 != var69){myvar0= 1;}
else {exit(0);}
if(var43 != var88){myvar0= 1;}
else {exit(0);}
if(var44 != var103){myvar0= 1;}
else {exit(0);}
if(var44 != var133){myvar0= 1;}
else {exit(0);}
if(var44 != var143){myvar0= 1;}
else {exit(0);}
if(var44 != var169){myvar0= 1;}
else {exit(0);}
if(var45 != var107){myvar0= 1;}
else {exit(0);}
if(var45 != var124){myvar0= 1;}
else {exit(0);}
if(var45 != var134){myvar0= 1;}
else {exit(0);}
if(var45 != var150){myvar0= 1;}
else {exit(0);}
if(var45 != var190){myvar0= 1;}
else {exit(0);}
if(var45 != var215){myvar0= 1;}
else {exit(0);}
if(var45 != var216){myvar0= 1;}
else {exit(0);}
if(var45 != var54){myvar0= 1;}
else {exit(0);}
if(var46 != var224){myvar0= 1;}
else {exit(0);}
if(var46 != var56){myvar0= 1;}
else {exit(0);}
if(var47 != var126){myvar0= 1;}
else {exit(0);}
if(var47 != var217){myvar0= 1;}
else {exit(0);}
if(var48 != var137){myvar0= 1;}
else {exit(0);}
if(var48 != var53){myvar0= 1;}
else {exit(0);}
if(var50 != var122){myvar0= 1;}
else {exit(0);}
if(var50 != var211){myvar0= 1;}
else {exit(0);}
if(var51 != var109){myvar0= 1;}
else {exit(0);}
if(var51 != var130){myvar0= 1;}
else {exit(0);}
if(var51 != var136){myvar0= 1;}
else {exit(0);}
if(var51 != var140){myvar0= 1;}
else {exit(0);}
if(var51 != var192){myvar0= 1;}
else {exit(0);}
if(var53 != var181){myvar0= 1;}
else {exit(0);}
if(var54 != var150){myvar0= 1;}
else {exit(0);}
if(var54 != var190){myvar0= 1;}
else {exit(0);}
if(var54 != var216){myvar0= 1;}
else {exit(0);}
if(var55 != var0){myvar0= 1;}
else {exit(0);}
if(var55 != var101){myvar0= 1;}
else {exit(0);}
if(var55 != var162){myvar0= 1;}
else {exit(0);}
if(var55 != var163){myvar0= 1;}
else {exit(0);}
if(var55 != var37){myvar0= 1;}
else {exit(0);}
if(var55 != var61){myvar0= 1;}
else {exit(0);}
if(var56 != var224){myvar0= 1;}
else {exit(0);}
if(var58 != var154){myvar0= 1;}
else {exit(0);}
if(var58 != var208){myvar0= 1;}
else {exit(0);}
if(var58 != var57){myvar0= 1;}
else {exit(0);}
if(var58 != var99){myvar0= 1;}
else {exit(0);}
if(var6 != var107){myvar0= 1;}
else {exit(0);}
if(var6 != var134){myvar0= 1;}
else {exit(0);}
if(var6 != var151){myvar0= 1;}
else {exit(0);}
if(var6 != var175){myvar0= 1;}
else {exit(0);}
if(var6 != var215){myvar0= 1;}
else {exit(0);}
if(var6 != var216){myvar0= 1;}
else {exit(0);}
if(var6 != var45){myvar0= 1;}
else {exit(0);}
if(var6 != var54){myvar0= 1;}
else {exit(0);}
if(var60 != var13){myvar0= 1;}
else {exit(0);}
if(var60 != var199){myvar0= 1;}
else {exit(0);}
if(var60 != var3){myvar0= 1;}
else {exit(0);}
if(var60 != var40){myvar0= 1;}
else {exit(0);}
if(var61 != var101){myvar0= 1;}
else {exit(0);}
if(var61 != var163){myvar0= 1;}
else {exit(0);}
if(var61 != var98){myvar0= 1;}
else {exit(0);}
if(var62 != var139){myvar0= 1;}
else {exit(0);}
if(var62 != var181){myvar0= 1;}
else {exit(0);}
if(var62 != var220){myvar0= 1;}
else {exit(0);}
if(var62 != var224){myvar0= 1;}
else {exit(0);}
if(var62 != var48){myvar0= 1;}
else {exit(0);}
if(var63 != var59){myvar0= 1;}
else {exit(0);}
if(var63 != var67){myvar0= 1;}
else {exit(0);}
if(var64 != var109){myvar0= 1;}
else {exit(0);}
if(var64 != var4){myvar0= 1;}
else {exit(0);}
if(var65 != var110){myvar0= 1;}
else {exit(0);}
if(var65 != var120){myvar0= 1;}
else {exit(0);}
if(var65 != var121){myvar0= 1;}
else {exit(0);}
if(var65 != var157){myvar0= 1;}
else {exit(0);}
if(var65 != var83){myvar0= 1;}
else {exit(0);}
if(var65 != var89){myvar0= 1;}
else {exit(0);}
if(var66 != var102){myvar0= 1;}
else {exit(0);}
if(var66 != var154){myvar0= 1;}
else {exit(0);}
if(var66 != var210){myvar0= 1;}
else {exit(0);}
if(var66 != var99){myvar0= 1;}
else {exit(0);}
if(var68 != var160){myvar0= 1;}
else {exit(0);}
if(var68 != var178){myvar0= 1;}
else {exit(0);}
if(var68 != var188){myvar0= 1;}
else {exit(0);}
if(var68 != var29){myvar0= 1;}
else {exit(0);}
if(var68 != var4){myvar0= 1;}
else {exit(0);}
if(var68 != var64){myvar0= 1;}
else {exit(0);}
if(var69 != var17){myvar0= 1;}
else {exit(0);}
if(var69 != var221){myvar0= 1;}
else {exit(0);}
if(var69 != var84){myvar0= 1;}
else {exit(0);}
if(var69 != var93){myvar0= 1;}
else {exit(0);}
if(var7 != var18){myvar0= 1;}
else {exit(0);}
if(var7 != var198){myvar0= 1;}
else {exit(0);}
if(var7 != var205){myvar0= 1;}
else {exit(0);}
if(var7 != var59){myvar0= 1;}
else {exit(0);}
if(var7 != var63){myvar0= 1;}
else {exit(0);}
if(var7 != var67){myvar0= 1;}
else {exit(0);}
if(var70 != var106){myvar0= 1;}
else {exit(0);}
if(var70 != var126){myvar0= 1;}
else {exit(0);}
if(var70 != var217){myvar0= 1;}
else {exit(0);}
if(var70 != var73){myvar0= 1;}
else {exit(0);}
if(var71 != var167){myvar0= 1;}
else {exit(0);}
if(var72 != var142){myvar0= 1;}
else {exit(0);}
if(var72 != var18){myvar0= 1;}
else {exit(0);}
if(var72 != var205){myvar0= 1;}
else {exit(0);}
if(var72 != var67){myvar0= 1;}
else {exit(0);}
if(var72 != var81){myvar0= 1;}
else {exit(0);}
if(var73 != var126){myvar0= 1;}
else {exit(0);}
if(var73 != var127){myvar0= 1;}
else {exit(0);}
if(var73 != var217){myvar0= 1;}
else {exit(0);}
if(var74 != var121){myvar0= 1;}
else {exit(0);}
if(var74 != var41){myvar0= 1;}
else {exit(0);}
if(var75 != var10){myvar0= 1;}
else {exit(0);}
if(var75 != var155){myvar0= 1;}
else {exit(0);}
if(var75 != var16){myvar0= 1;}
else {exit(0);}
if(var75 != var213){myvar0= 1;}
else {exit(0);}
if(var75 != var87){myvar0= 1;}
else {exit(0);}
if(var76 != var141){myvar0= 1;}
else {exit(0);}
if(var76 != var147){myvar0= 1;}
else {exit(0);}
if(var76 != var170){myvar0= 1;}
else {exit(0);}
if(var76 != var36){myvar0= 1;}
else {exit(0);}
if(var76 != var42){myvar0= 1;}
else {exit(0);}
if(var77 != var137){myvar0= 1;}
else {exit(0);}
if(var77 != var139){myvar0= 1;}
else {exit(0);}
if(var77 != var214){myvar0= 1;}
else {exit(0);}
if(var77 != var46){myvar0= 1;}
else {exit(0);}
if(var77 != var53){myvar0= 1;}
else {exit(0);}
if(var77 != var62){myvar0= 1;}
else {exit(0);}
if(var8 != var130){myvar0= 1;}
else {exit(0);}
if(var8 != var192){myvar0= 1;}
else {exit(0);}
if(var8 != var4){myvar0= 1;}
else {exit(0);}
if(var8 != var68){myvar0= 1;}
else {exit(0);}
if(var80 != var31){myvar0= 1;}
else {exit(0);}
if(var80 != var33){myvar0= 1;}
else {exit(0);}
if(var80 != var92){myvar0= 1;}
else {exit(0);}
if(var81 != var108){myvar0= 1;}
else {exit(0);}
if(var81 != var18){myvar0= 1;}
else {exit(0);}
if(var81 != var59){myvar0= 1;}
else {exit(0);}
if(var81 != var67){myvar0= 1;}
else {exit(0);}
if(var83 != var26){myvar0= 1;}
else {exit(0);}
if(var83 != var41){myvar0= 1;}
else {exit(0);}
if(var83 != var89){myvar0= 1;}
else {exit(0);}
if(var83 != var95){myvar0= 1;}
else {exit(0);}
if(var84 != var115){myvar0= 1;}
else {exit(0);}
if(var84 != var93){myvar0= 1;}
else {exit(0);}
if(var85 != var162){myvar0= 1;}
else {exit(0);}
if(var85 != var163){myvar0= 1;}
else {exit(0);}
if(var86 != var105){myvar0= 1;}
else {exit(0);}
if(var86 != var114){myvar0= 1;}
else {exit(0);}
if(var86 != var193){myvar0= 1;}
else {exit(0);}
if(var86 != var223){myvar0= 1;}
else {exit(0);}
if(var86 != var34){myvar0= 1;}
else {exit(0);}
if(var86 != var50){myvar0= 1;}
else {exit(0);}
if(var88 != var115){myvar0= 1;}
else {exit(0);}
if(var88 != var221){myvar0= 1;}
else {exit(0);}
if(var88 != var84){myvar0= 1;}
else {exit(0);}
if(var88 != var93){myvar0= 1;}
else {exit(0);}
if(var89 != var41){myvar0= 1;}
else {exit(0);}
if(var89 != var95){myvar0= 1;}
else {exit(0);}
if(var9 != var92){myvar0= 1;}
else {exit(0);}
if(var90 != var11){myvar0= 1;}
else {exit(0);}
if(var90 != var129){myvar0= 1;}
else {exit(0);}
if(var90 != var153){myvar0= 1;}
else {exit(0);}
if(var90 != var183){myvar0= 1;}
else {exit(0);}
if(var91 != var10){myvar0= 1;}
else {exit(0);}
if(var91 != var166){myvar0= 1;}
else {exit(0);}
if(var91 != var213){myvar0= 1;}
else {exit(0);}
if(var91 != var96){myvar0= 1;}
else {exit(0);}
if(var92 != var5){myvar0= 1;}
else {exit(0);}
if(var93 != var221){myvar0= 1;}
else {exit(0);}
if(var94 != var167){myvar0= 1;}
else {exit(0);}
if(var94 != var189){myvar0= 1;}
else {exit(0);}
if(var96 != var155){myvar0= 1;}
else {exit(0);}
if(var96 != var20){myvar0= 1;}
else {exit(0);}
if(var96 != var213){myvar0= 1;}
else {exit(0);}
if(var96 != var87){myvar0= 1;}
else {exit(0);}
if(var97 != var114){myvar0= 1;}
else {exit(0);}
if(var97 != var119){myvar0= 1;}
else {exit(0);}
if(var97 != var193){myvar0= 1;}
else {exit(0);}
if(var97 != var206){myvar0= 1;}
else {exit(0);}
if(var97 != var223){myvar0= 1;}
else {exit(0);}
if(var97 != var24){myvar0= 1;}
else {exit(0);}
if(var97 != var86){myvar0= 1;}
else {exit(0);}
if(var98 != var162){myvar0= 1;}
else {exit(0);}
if(var98 != var168){myvar0= 1;}
else {exit(0);}
if(var99 != var154){myvar0= 1;}
else {exit(0);}
if(var1 == var116){myvar0= 1;}
else {exit(0);}
if(var130 == var52){myvar0= 1;}
else {exit(0);}
if(var136 == var201){myvar0= 1;}
else {exit(0);}
if(var140 == var218){myvar0= 1;}
else {exit(0);}
if(var160 == var132){myvar0= 1;}
else {exit(0);}
if(var178 == var49){myvar0= 1;}
else {exit(0);}
if(var188 == var12){myvar0= 1;}
else {exit(0);}
if(var192 == var23){myvar0= 1;}
else {exit(0);}
if(var29 == var79){myvar0= 1;}
else {exit(0);}
if(var4 == var144){myvar0= 1;}
else {exit(0);}
if(var51 == var104){myvar0= 1;}
else {exit(0);}
if(var64 == var82){myvar0= 1;}
else {exit(0);}
if(var68 == var171){myvar0= 1;}
else {exit(0);}
if(var8 == var125){myvar0= 1;}
else {exit(0);}
if((var104 != var108) & (var104 + var108 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var142) & (var104 + var142 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var18) & (var104 + var18 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var19) & (var104 + var19 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var191) & (var104 + var191 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var194) & (var104 + var194 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var198) & (var104 + var198 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var205) & (var104 + var205 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var59) & (var104 + var59 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var63) & (var104 + var63 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var67) & (var104 + var67 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var7) & (var104 + var7 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var72) & (var104 + var72 >=2 )){myvar0= 1;}
else {exit(0);}
if((var104 != var81) & (var104 + var81 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var141) & (var116 + var141 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var147) & (var116 + var147 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var161) & (var116 + var161 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var170) & (var116 + var170 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var30) & (var116 + var30 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var31) & (var116 + var31 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var33) & (var116 + var33 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var36) & (var116 + var36 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var42) & (var116 + var42 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var5) & (var116 + var5 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var76) & (var116 + var76 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var80) & (var116 + var80 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var9) & (var116 + var9 >=2 )){myvar0= 1;}
else {exit(0);}
if((var116 != var92) & (var116 + var92 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var103) & (var12 + var103 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var115) & (var12 + var115 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var133) & (var12 + var133 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var143) & (var12 + var143 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var169) & (var12 + var169 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var17) & (var12 + var17 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var221) & (var12 + var221 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var25) & (var12 + var25 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var43) & (var12 + var43 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var44) & (var12 + var44 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var69) & (var12 + var69 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var84) & (var12 + var84 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var88) & (var12 + var88 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var93) & (var12 + var93 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var110) & (var125 + var110 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var111) & (var125 + var111 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var120) & (var125 + var120 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var121) & (var125 + var121 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var157) & (var125 + var157 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var184) & (var125 + var184 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var204) & (var125 + var204 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var26) & (var125 + var26 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var41) & (var125 + var41 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var65) & (var125 + var65 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var74) & (var125 + var74 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var83) & (var125 + var83 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var89) & (var125 + var89 >=2 )){myvar0= 1;}
else {exit(0);}
if((var125 != var95) & (var125 + var95 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var106) & (var132 + var106 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var118) & (var132 + var118 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var126) & (var132 + var126 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var127) & (var132 + var127 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var15) & (var132 + var15 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var152) & (var132 + var152 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var202) & (var132 + var202 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var217) & (var132 + var217 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var219) & (var132 + var219 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var22) & (var132 + var22 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var28) & (var132 + var28 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var47) & (var132 + var47 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var70) & (var132 + var70 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var73) & (var132 + var73 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var137) & (var144 + var137 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var139) & (var144 + var139 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var177) & (var144 + var177 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var181) & (var144 + var181 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var182) & (var144 + var182 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var214) & (var144 + var214 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var220) & (var144 + var220 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var224) & (var144 + var224 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var46) & (var144 + var46 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var48) & (var144 + var48 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var53) & (var144 + var53 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var56) & (var144 + var56 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var62) & (var144 + var62 >=2 )){myvar0= 1;}
else {exit(0);}
if((var144 != var77) & (var144 + var77 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var0) & (var171 + var0 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var101) & (var171 + var101 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var113) & (var171 + var113 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var14) & (var171 + var14 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var162) & (var171 + var162 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var163) & (var171 + var163 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var168) & (var171 + var168 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var187) & (var171 + var187 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var209) & (var171 + var209 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var37) & (var171 + var37 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var55) & (var171 + var55 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var61) & (var171 + var61 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var85) & (var171 + var85 >=2 )){myvar0= 1;}
else {exit(0);}
if((var171 != var98) & (var171 + var98 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var10) & (var201 + var10 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var117) & (var201 + var117 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var131) & (var201 + var131 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var155) & (var201 + var155 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var16) & (var201 + var16 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var166) & (var201 + var166 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var20) & (var201 + var20 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var213) & (var201 + var213 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var27) & (var201 + var27 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var32) & (var201 + var32 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var75) & (var201 + var75 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var87) & (var201 + var87 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var91) & (var201 + var91 >=2 )){myvar0= 1;}
else {exit(0);}
if((var201 != var96) & (var201 + var96 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var105) & (var218 + var105 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var114) & (var218 + var114 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var119) & (var218 + var119 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var122) & (var218 + var122 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var186) & (var218 + var186 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var193) & (var218 + var193 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var206) & (var218 + var206 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var211) & (var218 + var211 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var223) & (var218 + var223 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var24) & (var218 + var24 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var34) & (var218 + var34 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var50) & (var218 + var50 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var86) & (var218 + var86 >=2 )){myvar0= 1;}
else {exit(0);}
if((var218 != var97) & (var218 + var97 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var11) & (var23 + var11 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var129) & (var23 + var129 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var146) & (var23 + var146 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var153) & (var23 + var153 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var156) & (var23 + var156 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var158) & (var23 + var158 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var183) & (var23 + var183 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var195) & (var23 + var195 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var2) & (var23 + var2 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var200) & (var23 + var200 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var222) & (var23 + var222 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var35) & (var23 + var35 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var78) & (var23 + var78 >=2 )){myvar0= 1;}
else {exit(0);}
if((var23 != var90) & (var23 + var90 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var100) & (var49 + var100 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var13) & (var49 + var13 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var159) & (var49 + var159 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var173) & (var49 + var173 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var174) & (var49 + var174 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var176) & (var49 + var176 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var179) & (var49 + var179 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var180) & (var49 + var180 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var199) & (var49 + var199 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var203) & (var49 + var203 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var212) & (var49 + var212 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var3) & (var49 + var3 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var40) & (var49 + var40 >=2 )){myvar0= 1;}
else {exit(0);}
if((var49 != var60) & (var49 + var60 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var112) & (var52 + var112 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var123) & (var52 + var123 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var138) & (var52 + var138 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var149) & (var52 + var149 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var167) & (var52 + var167 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var172) & (var52 + var172 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var189) & (var52 + var189 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var196) & (var52 + var196 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var207) & (var52 + var207 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var21) & (var52 + var21 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var38) & (var52 + var38 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var39) & (var52 + var39 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var71) & (var52 + var71 >=2 )){myvar0= 1;}
else {exit(0);}
if((var52 != var94) & (var52 + var94 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var107) & (var79 + var107 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var124) & (var79 + var124 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var128) & (var79 + var128 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var134) & (var79 + var134 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var150) & (var79 + var150 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var151) & (var79 + var151 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var164) & (var79 + var164 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var175) & (var79 + var175 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var190) & (var79 + var190 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var215) & (var79 + var215 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var216) & (var79 + var216 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var45) & (var79 + var45 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var54) & (var79 + var54 >=2 )){myvar0= 1;}
else {exit(0);}
if((var79 != var6) & (var79 + var6 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var102) & (var82 + var102 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var135) & (var82 + var135 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var145) & (var82 + var145 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var148) & (var82 + var148 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var154) & (var82 + var154 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var165) & (var82 + var165 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var185) & (var82 + var185 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var197) & (var82 + var197 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var208) & (var82 + var208 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var210) & (var82 + var210 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var57) & (var82 + var57 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var58) & (var82 + var58 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var66) & (var82 + var66 >=2 )){myvar0= 1;}
else {exit(0);}
if((var82 != var99) & (var82 + var99 >=2 )){myvar0= 1;}
else {exit(0);}
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
169 x[169]
170 x[170]
171 x[171]
172 x[172]
173 x[173]
174 x[174]
175 x[175]
176 x[176]
177 x[177]
178 x[178]
179 x[179]
180 x[180]
181 x[181]
182 x[182]
183 x[183]
184 x[184]
185 x[185]
186 x[186]
187 x[187]
188 x[188]
189 x[189]
190 x[190]
191 x[191]
192 x[192]
193 x[193]
194 x[194]
195 x[195]
196 x[196]
197 x[197]
198 x[198]
199 x[199]
200 x[200]
201 x[201]
202 x[202]
203 x[203]
204 x[204]
205 x[205]
206 x[206]
207 x[207]
208 x[208]
209 x[209]
210 x[210]
211 x[211]
212 x[212]
213 x[213]
214 x[214]
215 x[215]
216 x[216]
217 x[217]
218 x[218]
219 x[219]
220 x[220]
221 x[221]
222 x[222]
223 x[223]
224 x[224]
 */}
