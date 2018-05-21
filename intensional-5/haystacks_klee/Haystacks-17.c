
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
if((var0 >= 0) & (var0 <= 16)) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 16)) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 16)) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 16)) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 16)) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 16)) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 16)) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 16)) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 16)) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 16)) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 16)) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 16)) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 0) & (var12 <= 16)) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 0) & (var13 <= 16)) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 0) & (var14 <= 16)) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 0) & (var15 <= 16)) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 0) & (var16 <= 16)) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 0) & (var17 <= 16)) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 0) & (var18 <= 16)) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 0) & (var19 <= 16)) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 0) & (var20 <= 16)) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 0) & (var21 <= 16)) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 0) & (var22 <= 16)) {myvar0= 1;}
else {exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((var23 >= 0) & (var23 <= 16)) {myvar0= 1;}
else {exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((var24 >= 0) & (var24 <= 16)) {myvar0= 1;}
else {exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((var25 >= 0) & (var25 <= 16)) {myvar0= 1;}
else {exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((var26 >= 0) & (var26 <= 16)) {myvar0= 1;}
else {exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((var27 >= 0) & (var27 <= 16)) {myvar0= 1;}
else {exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((var28 >= 0) & (var28 <= 16)) {myvar0= 1;}
else {exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((var29 >= 0) & (var29 <= 16)) {myvar0= 1;}
else {exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((var30 >= 0) & (var30 <= 16)) {myvar0= 1;}
else {exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((var31 >= 0) & (var31 <= 16)) {myvar0= 1;}
else {exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((var32 >= 0) & (var32 <= 16)) {myvar0= 1;}
else {exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((var33 >= 0) & (var33 <= 16)) {myvar0= 1;}
else {exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((var34 >= 0) & (var34 <= 16)) {myvar0= 1;}
else {exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((var35 >= 0) & (var35 <= 16)) {myvar0= 1;}
else {exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((var36 >= 0) & (var36 <= 16)) {myvar0= 1;}
else {exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((var37 >= 0) & (var37 <= 16)) {myvar0= 1;}
else {exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((var38 >= 0) & (var38 <= 16)) {myvar0= 1;}
else {exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((var39 >= 0) & (var39 <= 16)) {myvar0= 1;}
else {exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((var40 >= 0) & (var40 <= 16)) {myvar0= 1;}
else {exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((var41 >= 0) & (var41 <= 16)) {myvar0= 1;}
else {exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((var42 >= 0) & (var42 <= 16)) {myvar0= 1;}
else {exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((var43 >= 0) & (var43 <= 16)) {myvar0= 1;}
else {exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((var44 >= 0) & (var44 <= 16)) {myvar0= 1;}
else {exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((var45 >= 0) & (var45 <= 16)) {myvar0= 1;}
else {exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((var46 >= 0) & (var46 <= 16)) {myvar0= 1;}
else {exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((var47 >= 0) & (var47 <= 16)) {myvar0= 1;}
else {exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((var48 >= 0) & (var48 <= 16)) {myvar0= 1;}
else {exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((var49 >= 0) & (var49 <= 16)) {myvar0= 1;}
else {exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((var50 >= 0) & (var50 <= 16)) {myvar0= 1;}
else {exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((var51 >= 0) & (var51 <= 16)) {myvar0= 1;}
else {exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((var52 >= 0) & (var52 <= 16)) {myvar0= 1;}
else {exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((var53 >= 0) & (var53 <= 16)) {myvar0= 1;}
else {exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((var54 >= 0) & (var54 <= 16)) {myvar0= 1;}
else {exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((var55 >= 0) & (var55 <= 16)) {myvar0= 1;}
else {exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((var56 >= 0) & (var56 <= 16)) {myvar0= 1;}
else {exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((var57 >= 0) & (var57 <= 16)) {myvar0= 1;}
else {exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((var58 >= 0) & (var58 <= 16)) {myvar0= 1;}
else {exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((var59 >= 0) & (var59 <= 16)) {myvar0= 1;}
else {exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((var60 >= 0) & (var60 <= 16)) {myvar0= 1;}
else {exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((var61 >= 0) & (var61 <= 16)) {myvar0= 1;}
else {exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((var62 >= 0) & (var62 <= 16)) {myvar0= 1;}
else {exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((var63 >= 0) & (var63 <= 16)) {myvar0= 1;}
else {exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((var64 >= 0) & (var64 <= 16)) {myvar0= 1;}
else {exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((var65 >= 0) & (var65 <= 16)) {myvar0= 1;}
else {exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((var66 >= 0) & (var66 <= 16)) {myvar0= 1;}
else {exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((var67 >= 0) & (var67 <= 16)) {myvar0= 1;}
else {exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((var68 >= 0) & (var68 <= 16)) {myvar0= 1;}
else {exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((var69 >= 0) & (var69 <= 16)) {myvar0= 1;}
else {exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((var70 >= 0) & (var70 <= 16)) {myvar0= 1;}
else {exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((var71 >= 0) & (var71 <= 16)) {myvar0= 1;}
else {exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((var72 >= 0) & (var72 <= 16)) {myvar0= 1;}
else {exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((var73 >= 0) & (var73 <= 16)) {myvar0= 1;}
else {exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((var74 >= 0) & (var74 <= 16)) {myvar0= 1;}
else {exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((var75 >= 0) & (var75 <= 16)) {myvar0= 1;}
else {exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((var76 >= 0) & (var76 <= 16)) {myvar0= 1;}
else {exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((var77 >= 0) & (var77 <= 16)) {myvar0= 1;}
else {exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((var78 >= 0) & (var78 <= 16)) {myvar0= 1;}
else {exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((var79 >= 0) & (var79 <= 16)) {myvar0= 1;}
else {exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((var80 >= 0) & (var80 <= 16)) {myvar0= 1;}
else {exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((var81 >= 0) & (var81 <= 16)) {myvar0= 1;}
else {exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((var82 >= 0) & (var82 <= 16)) {myvar0= 1;}
else {exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((var83 >= 0) & (var83 <= 16)) {myvar0= 1;}
else {exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((var84 >= 0) & (var84 <= 16)) {myvar0= 1;}
else {exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((var85 >= 0) & (var85 <= 16)) {myvar0= 1;}
else {exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((var86 >= 0) & (var86 <= 16)) {myvar0= 1;}
else {exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((var87 >= 0) & (var87 <= 16)) {myvar0= 1;}
else {exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((var88 >= 0) & (var88 <= 16)) {myvar0= 1;}
else {exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((var89 >= 0) & (var89 <= 16)) {myvar0= 1;}
else {exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((var90 >= 0) & (var90 <= 16)) {myvar0= 1;}
else {exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((var91 >= 0) & (var91 <= 16)) {myvar0= 1;}
else {exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((var92 >= 0) & (var92 <= 16)) {myvar0= 1;}
else {exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((var93 >= 0) & (var93 <= 16)) {myvar0= 1;}
else {exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((var94 >= 0) & (var94 <= 16)) {myvar0= 1;}
else {exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((var95 >= 0) & (var95 <= 16)) {myvar0= 1;}
else {exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((var96 >= 0) & (var96 <= 16)) {myvar0= 1;}
else {exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((var97 >= 0) & (var97 <= 16)) {myvar0= 1;}
else {exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((var98 >= 0) & (var98 <= 16)) {myvar0= 1;}
else {exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((var99 >= 0) & (var99 <= 16)) {myvar0= 1;}
else {exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((var100 >= 0) & (var100 <= 16)) {myvar0= 1;}
else {exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((var101 >= 0) & (var101 <= 16)) {myvar0= 1;}
else {exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((var102 >= 0) & (var102 <= 16)) {myvar0= 1;}
else {exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((var103 >= 0) & (var103 <= 16)) {myvar0= 1;}
else {exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((var104 >= 0) & (var104 <= 16)) {myvar0= 1;}
else {exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((var105 >= 0) & (var105 <= 16)) {myvar0= 1;}
else {exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((var106 >= 0) & (var106 <= 16)) {myvar0= 1;}
else {exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((var107 >= 0) & (var107 <= 16)) {myvar0= 1;}
else {exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((var108 >= 0) & (var108 <= 16)) {myvar0= 1;}
else {exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((var109 >= 0) & (var109 <= 16)) {myvar0= 1;}
else {exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((var110 >= 0) & (var110 <= 16)) {myvar0= 1;}
else {exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((var111 >= 0) & (var111 <= 16)) {myvar0= 1;}
else {exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((var112 >= 0) & (var112 <= 16)) {myvar0= 1;}
else {exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((var113 >= 0) & (var113 <= 16)) {myvar0= 1;}
else {exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((var114 >= 0) & (var114 <= 16)) {myvar0= 1;}
else {exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((var115 >= 0) & (var115 <= 16)) {myvar0= 1;}
else {exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((var116 >= 0) & (var116 <= 16)) {myvar0= 1;}
else {exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((var117 >= 0) & (var117 <= 16)) {myvar0= 1;}
else {exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((var118 >= 0) & (var118 <= 16)) {myvar0= 1;}
else {exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((var119 >= 0) & (var119 <= 16)) {myvar0= 1;}
else {exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((var120 >= 0) & (var120 <= 16)) {myvar0= 1;}
else {exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((var121 >= 0) & (var121 <= 16)) {myvar0= 1;}
else {exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((var122 >= 0) & (var122 <= 16)) {myvar0= 1;}
else {exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((var123 >= 0) & (var123 <= 16)) {myvar0= 1;}
else {exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((var124 >= 0) & (var124 <= 16)) {myvar0= 1;}
else {exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((var125 >= 0) & (var125 <= 16)) {myvar0= 1;}
else {exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((var126 >= 0) & (var126 <= 16)) {myvar0= 1;}
else {exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((var127 >= 0) & (var127 <= 16)) {myvar0= 1;}
else {exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((var128 >= 0) & (var128 <= 16)) {myvar0= 1;}
else {exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((var129 >= 0) & (var129 <= 16)) {myvar0= 1;}
else {exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((var130 >= 0) & (var130 <= 16)) {myvar0= 1;}
else {exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((var131 >= 0) & (var131 <= 16)) {myvar0= 1;}
else {exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((var132 >= 0) & (var132 <= 16)) {myvar0= 1;}
else {exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((var133 >= 0) & (var133 <= 16)) {myvar0= 1;}
else {exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((var134 >= 0) & (var134 <= 16)) {myvar0= 1;}
else {exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((var135 >= 0) & (var135 <= 16)) {myvar0= 1;}
else {exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((var136 >= 0) & (var136 <= 16)) {myvar0= 1;}
else {exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((var137 >= 0) & (var137 <= 16)) {myvar0= 1;}
else {exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((var138 >= 0) & (var138 <= 16)) {myvar0= 1;}
else {exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((var139 >= 0) & (var139 <= 16)) {myvar0= 1;}
else {exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((var140 >= 0) & (var140 <= 16)) {myvar0= 1;}
else {exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((var141 >= 0) & (var141 <= 16)) {myvar0= 1;}
else {exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((var142 >= 0) & (var142 <= 16)) {myvar0= 1;}
else {exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((var143 >= 0) & (var143 <= 16)) {myvar0= 1;}
else {exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((var144 >= 0) & (var144 <= 16)) {myvar0= 1;}
else {exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((var145 >= 0) & (var145 <= 16)) {myvar0= 1;}
else {exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((var146 >= 0) & (var146 <= 16)) {myvar0= 1;}
else {exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((var147 >= 0) & (var147 <= 16)) {myvar0= 1;}
else {exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((var148 >= 0) & (var148 <= 16)) {myvar0= 1;}
else {exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((var149 >= 0) & (var149 <= 16)) {myvar0= 1;}
else {exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((var150 >= 0) & (var150 <= 16)) {myvar0= 1;}
else {exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((var151 >= 0) & (var151 <= 16)) {myvar0= 1;}
else {exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((var152 >= 0) & (var152 <= 16)) {myvar0= 1;}
else {exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((var153 >= 0) & (var153 <= 16)) {myvar0= 1;}
else {exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((var154 >= 0) & (var154 <= 16)) {myvar0= 1;}
else {exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((var155 >= 0) & (var155 <= 16)) {myvar0= 1;}
else {exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((var156 >= 0) & (var156 <= 16)) {myvar0= 1;}
else {exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((var157 >= 0) & (var157 <= 16)) {myvar0= 1;}
else {exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((var158 >= 0) & (var158 <= 16)) {myvar0= 1;}
else {exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((var159 >= 0) & (var159 <= 16)) {myvar0= 1;}
else {exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((var160 >= 0) & (var160 <= 16)) {myvar0= 1;}
else {exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((var161 >= 0) & (var161 <= 16)) {myvar0= 1;}
else {exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((var162 >= 0) & (var162 <= 16)) {myvar0= 1;}
else {exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((var163 >= 0) & (var163 <= 16)) {myvar0= 1;}
else {exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((var164 >= 0) & (var164 <= 16)) {myvar0= 1;}
else {exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((var165 >= 0) & (var165 <= 16)) {myvar0= 1;}
else {exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((var166 >= 0) & (var166 <= 16)) {myvar0= 1;}
else {exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((var167 >= 0) & (var167 <= 16)) {myvar0= 1;}
else {exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((var168 >= 0) & (var168 <= 16)) {myvar0= 1;}
else {exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((var169 >= 0) & (var169 <= 16)) {myvar0= 1;}
else {exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((var170 >= 0) & (var170 <= 16)) {myvar0= 1;}
else {exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((var171 >= 0) & (var171 <= 16)) {myvar0= 1;}
else {exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((var172 >= 0) & (var172 <= 16)) {myvar0= 1;}
else {exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((var173 >= 0) & (var173 <= 16)) {myvar0= 1;}
else {exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((var174 >= 0) & (var174 <= 16)) {myvar0= 1;}
else {exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((var175 >= 0) & (var175 <= 16)) {myvar0= 1;}
else {exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((var176 >= 0) & (var176 <= 16)) {myvar0= 1;}
else {exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((var177 >= 0) & (var177 <= 16)) {myvar0= 1;}
else {exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((var178 >= 0) & (var178 <= 16)) {myvar0= 1;}
else {exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((var179 >= 0) & (var179 <= 16)) {myvar0= 1;}
else {exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((var180 >= 0) & (var180 <= 16)) {myvar0= 1;}
else {exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((var181 >= 0) & (var181 <= 16)) {myvar0= 1;}
else {exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((var182 >= 0) & (var182 <= 16)) {myvar0= 1;}
else {exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((var183 >= 0) & (var183 <= 16)) {myvar0= 1;}
else {exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((var184 >= 0) & (var184 <= 16)) {myvar0= 1;}
else {exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((var185 >= 0) & (var185 <= 16)) {myvar0= 1;}
else {exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((var186 >= 0) & (var186 <= 16)) {myvar0= 1;}
else {exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((var187 >= 0) & (var187 <= 16)) {myvar0= 1;}
else {exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((var188 >= 0) & (var188 <= 16)) {myvar0= 1;}
else {exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((var189 >= 0) & (var189 <= 16)) {myvar0= 1;}
else {exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((var190 >= 0) & (var190 <= 16)) {myvar0= 1;}
else {exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((var191 >= 0) & (var191 <= 16)) {myvar0= 1;}
else {exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((var192 >= 0) & (var192 <= 16)) {myvar0= 1;}
else {exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((var193 >= 0) & (var193 <= 16)) {myvar0= 1;}
else {exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((var194 >= 0) & (var194 <= 16)) {myvar0= 1;}
else {exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((var195 >= 0) & (var195 <= 16)) {myvar0= 1;}
else {exit(0);}
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
if((var196 >= 0) & (var196 <= 16)) {myvar0= 1;}
else {exit(0);}
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
if((var197 >= 0) & (var197 <= 16)) {myvar0= 1;}
else {exit(0);}
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
if((var198 >= 0) & (var198 <= 16)) {myvar0= 1;}
else {exit(0);}
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
if((var199 >= 0) & (var199 <= 16)) {myvar0= 1;}
else {exit(0);}
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
if((var200 >= 0) & (var200 <= 16)) {myvar0= 1;}
else {exit(0);}
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
if((var201 >= 0) & (var201 <= 16)) {myvar0= 1;}
else {exit(0);}
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
if((var202 >= 0) & (var202 <= 16)) {myvar0= 1;}
else {exit(0);}
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
if((var203 >= 0) & (var203 <= 16)) {myvar0= 1;}
else {exit(0);}
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
if((var204 >= 0) & (var204 <= 16)) {myvar0= 1;}
else {exit(0);}
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
if((var205 >= 0) & (var205 <= 16)) {myvar0= 1;}
else {exit(0);}
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
if((var206 >= 0) & (var206 <= 16)) {myvar0= 1;}
else {exit(0);}
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
if((var207 >= 0) & (var207 <= 16)) {myvar0= 1;}
else {exit(0);}
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
if((var208 >= 0) & (var208 <= 16)) {myvar0= 1;}
else {exit(0);}
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
if((var209 >= 0) & (var209 <= 16)) {myvar0= 1;}
else {exit(0);}
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
if((var210 >= 0) & (var210 <= 16)) {myvar0= 1;}
else {exit(0);}
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
if((var211 >= 0) & (var211 <= 16)) {myvar0= 1;}
else {exit(0);}
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
if((var212 >= 0) & (var212 <= 16)) {myvar0= 1;}
else {exit(0);}
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
if((var213 >= 0) & (var213 <= 16)) {myvar0= 1;}
else {exit(0);}
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
if((var214 >= 0) & (var214 <= 16)) {myvar0= 1;}
else {exit(0);}
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
if((var215 >= 0) & (var215 <= 16)) {myvar0= 1;}
else {exit(0);}
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
if((var216 >= 0) & (var216 <= 16)) {myvar0= 1;}
else {exit(0);}
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
if((var217 >= 0) & (var217 <= 16)) {myvar0= 1;}
else {exit(0);}
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
if((var218 >= 0) & (var218 <= 16)) {myvar0= 1;}
else {exit(0);}
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
if((var219 >= 0) & (var219 <= 16)) {myvar0= 1;}
else {exit(0);}
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
if((var220 >= 0) & (var220 <= 16)) {myvar0= 1;}
else {exit(0);}
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
if((var221 >= 0) & (var221 <= 16)) {myvar0= 1;}
else {exit(0);}
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
if((var222 >= 0) & (var222 <= 16)) {myvar0= 1;}
else {exit(0);}
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
if((var223 >= 0) & (var223 <= 16)) {myvar0= 1;}
else {exit(0);}
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
if((var224 >= 0) & (var224 <= 16)) {myvar0= 1;}
else {exit(0);}
int var225;
klee_make_symbolic(&var225, sizeof(var225), "var225");
if((var225 >= 0) & (var225 <= 16)) {myvar0= 1;}
else {exit(0);}
int var226;
klee_make_symbolic(&var226, sizeof(var226), "var226");
if((var226 >= 0) & (var226 <= 16)) {myvar0= 1;}
else {exit(0);}
int var227;
klee_make_symbolic(&var227, sizeof(var227), "var227");
if((var227 >= 0) & (var227 <= 16)) {myvar0= 1;}
else {exit(0);}
int var228;
klee_make_symbolic(&var228, sizeof(var228), "var228");
if((var228 >= 0) & (var228 <= 16)) {myvar0= 1;}
else {exit(0);}
int var229;
klee_make_symbolic(&var229, sizeof(var229), "var229");
if((var229 >= 0) & (var229 <= 16)) {myvar0= 1;}
else {exit(0);}
int var230;
klee_make_symbolic(&var230, sizeof(var230), "var230");
if((var230 >= 0) & (var230 <= 16)) {myvar0= 1;}
else {exit(0);}
int var231;
klee_make_symbolic(&var231, sizeof(var231), "var231");
if((var231 >= 0) & (var231 <= 16)) {myvar0= 1;}
else {exit(0);}
int var232;
klee_make_symbolic(&var232, sizeof(var232), "var232");
if((var232 >= 0) & (var232 <= 16)) {myvar0= 1;}
else {exit(0);}
int var233;
klee_make_symbolic(&var233, sizeof(var233), "var233");
if((var233 >= 0) & (var233 <= 16)) {myvar0= 1;}
else {exit(0);}
int var234;
klee_make_symbolic(&var234, sizeof(var234), "var234");
if((var234 >= 0) & (var234 <= 16)) {myvar0= 1;}
else {exit(0);}
int var235;
klee_make_symbolic(&var235, sizeof(var235), "var235");
if((var235 >= 0) & (var235 <= 16)) {myvar0= 1;}
else {exit(0);}
int var236;
klee_make_symbolic(&var236, sizeof(var236), "var236");
if((var236 >= 0) & (var236 <= 16)) {myvar0= 1;}
else {exit(0);}
int var237;
klee_make_symbolic(&var237, sizeof(var237), "var237");
if((var237 >= 0) & (var237 <= 16)) {myvar0= 1;}
else {exit(0);}
int var238;
klee_make_symbolic(&var238, sizeof(var238), "var238");
if((var238 >= 0) & (var238 <= 16)) {myvar0= 1;}
else {exit(0);}
int var239;
klee_make_symbolic(&var239, sizeof(var239), "var239");
if((var239 >= 0) & (var239 <= 16)) {myvar0= 1;}
else {exit(0);}
int var240;
klee_make_symbolic(&var240, sizeof(var240), "var240");
if((var240 >= 0) & (var240 <= 16)) {myvar0= 1;}
else {exit(0);}
int var241;
klee_make_symbolic(&var241, sizeof(var241), "var241");
if((var241 >= 0) & (var241 <= 16)) {myvar0= 1;}
else {exit(0);}
int var242;
klee_make_symbolic(&var242, sizeof(var242), "var242");
if((var242 >= 0) & (var242 <= 16)) {myvar0= 1;}
else {exit(0);}
int var243;
klee_make_symbolic(&var243, sizeof(var243), "var243");
if((var243 >= 0) & (var243 <= 16)) {myvar0= 1;}
else {exit(0);}
int var244;
klee_make_symbolic(&var244, sizeof(var244), "var244");
if((var244 >= 0) & (var244 <= 16)) {myvar0= 1;}
else {exit(0);}
int var245;
klee_make_symbolic(&var245, sizeof(var245), "var245");
if((var245 >= 0) & (var245 <= 16)) {myvar0= 1;}
else {exit(0);}
int var246;
klee_make_symbolic(&var246, sizeof(var246), "var246");
if((var246 >= 0) & (var246 <= 16)) {myvar0= 1;}
else {exit(0);}
int var247;
klee_make_symbolic(&var247, sizeof(var247), "var247");
if((var247 >= 0) & (var247 <= 16)) {myvar0= 1;}
else {exit(0);}
int var248;
klee_make_symbolic(&var248, sizeof(var248), "var248");
if((var248 >= 0) & (var248 <= 16)) {myvar0= 1;}
else {exit(0);}
int var249;
klee_make_symbolic(&var249, sizeof(var249), "var249");
if((var249 >= 0) & (var249 <= 16)) {myvar0= 1;}
else {exit(0);}
int var250;
klee_make_symbolic(&var250, sizeof(var250), "var250");
if((var250 >= 0) & (var250 <= 16)) {myvar0= 1;}
else {exit(0);}
int var251;
klee_make_symbolic(&var251, sizeof(var251), "var251");
if((var251 >= 0) & (var251 <= 16)) {myvar0= 1;}
else {exit(0);}
int var252;
klee_make_symbolic(&var252, sizeof(var252), "var252");
if((var252 >= 0) & (var252 <= 16)) {myvar0= 1;}
else {exit(0);}
int var253;
klee_make_symbolic(&var253, sizeof(var253), "var253");
if((var253 >= 0) & (var253 <= 16)) {myvar0= 1;}
else {exit(0);}
int var254;
klee_make_symbolic(&var254, sizeof(var254), "var254");
if((var254 >= 0) & (var254 <= 16)) {myvar0= 1;}
else {exit(0);}
int var255;
klee_make_symbolic(&var255, sizeof(var255), "var255");
if((var255 >= 0) & (var255 <= 16)) {myvar0= 1;}
else {exit(0);}
int var256;
klee_make_symbolic(&var256, sizeof(var256), "var256");
if((var256 >= 0) & (var256 <= 16)) {myvar0= 1;}
else {exit(0);}
int var257;
klee_make_symbolic(&var257, sizeof(var257), "var257");
if((var257 >= 0) & (var257 <= 16)) {myvar0= 1;}
else {exit(0);}
int var258;
klee_make_symbolic(&var258, sizeof(var258), "var258");
if((var258 >= 0) & (var258 <= 16)) {myvar0= 1;}
else {exit(0);}
int var259;
klee_make_symbolic(&var259, sizeof(var259), "var259");
if((var259 >= 0) & (var259 <= 16)) {myvar0= 1;}
else {exit(0);}
int var260;
klee_make_symbolic(&var260, sizeof(var260), "var260");
if((var260 >= 0) & (var260 <= 16)) {myvar0= 1;}
else {exit(0);}
int var261;
klee_make_symbolic(&var261, sizeof(var261), "var261");
if((var261 >= 0) & (var261 <= 16)) {myvar0= 1;}
else {exit(0);}
int var262;
klee_make_symbolic(&var262, sizeof(var262), "var262");
if((var262 >= 0) & (var262 <= 16)) {myvar0= 1;}
else {exit(0);}
int var263;
klee_make_symbolic(&var263, sizeof(var263), "var263");
if((var263 >= 0) & (var263 <= 16)) {myvar0= 1;}
else {exit(0);}
int var264;
klee_make_symbolic(&var264, sizeof(var264), "var264");
if((var264 >= 0) & (var264 <= 16)) {myvar0= 1;}
else {exit(0);}
int var265;
klee_make_symbolic(&var265, sizeof(var265), "var265");
if((var265 >= 0) & (var265 <= 16)) {myvar0= 1;}
else {exit(0);}
int var266;
klee_make_symbolic(&var266, sizeof(var266), "var266");
if((var266 >= 0) & (var266 <= 16)) {myvar0= 1;}
else {exit(0);}
int var267;
klee_make_symbolic(&var267, sizeof(var267), "var267");
if((var267 >= 0) & (var267 <= 16)) {myvar0= 1;}
else {exit(0);}
int var268;
klee_make_symbolic(&var268, sizeof(var268), "var268");
if((var268 >= 0) & (var268 <= 16)) {myvar0= 1;}
else {exit(0);}
int var269;
klee_make_symbolic(&var269, sizeof(var269), "var269");
if((var269 >= 0) & (var269 <= 16)) {myvar0= 1;}
else {exit(0);}
int var270;
klee_make_symbolic(&var270, sizeof(var270), "var270");
if((var270 >= 0) & (var270 <= 16)) {myvar0= 1;}
else {exit(0);}
int var271;
klee_make_symbolic(&var271, sizeof(var271), "var271");
if((var271 >= 0) & (var271 <= 16)) {myvar0= 1;}
else {exit(0);}
int var272;
klee_make_symbolic(&var272, sizeof(var272), "var272");
if((var272 >= 0) & (var272 <= 16)) {myvar0= 1;}
else {exit(0);}
int var273;
klee_make_symbolic(&var273, sizeof(var273), "var273");
if((var273 >= 0) & (var273 <= 16)) {myvar0= 1;}
else {exit(0);}
int var274;
klee_make_symbolic(&var274, sizeof(var274), "var274");
if((var274 >= 0) & (var274 <= 16)) {myvar0= 1;}
else {exit(0);}
int var275;
klee_make_symbolic(&var275, sizeof(var275), "var275");
if((var275 >= 0) & (var275 <= 16)) {myvar0= 1;}
else {exit(0);}
int var276;
klee_make_symbolic(&var276, sizeof(var276), "var276");
if((var276 >= 0) & (var276 <= 16)) {myvar0= 1;}
else {exit(0);}
int var277;
klee_make_symbolic(&var277, sizeof(var277), "var277");
if((var277 >= 0) & (var277 <= 16)) {myvar0= 1;}
else {exit(0);}
int var278;
klee_make_symbolic(&var278, sizeof(var278), "var278");
if((var278 >= 0) & (var278 <= 16)) {myvar0= 1;}
else {exit(0);}
int var279;
klee_make_symbolic(&var279, sizeof(var279), "var279");
if((var279 >= 0) & (var279 <= 16)) {myvar0= 1;}
else {exit(0);}
int var280;
klee_make_symbolic(&var280, sizeof(var280), "var280");
if((var280 >= 0) & (var280 <= 16)) {myvar0= 1;}
else {exit(0);}
int var281;
klee_make_symbolic(&var281, sizeof(var281), "var281");
if((var281 >= 0) & (var281 <= 16)) {myvar0= 1;}
else {exit(0);}
int var282;
klee_make_symbolic(&var282, sizeof(var282), "var282");
if((var282 >= 0) & (var282 <= 16)) {myvar0= 1;}
else {exit(0);}
int var283;
klee_make_symbolic(&var283, sizeof(var283), "var283");
if((var283 >= 0) & (var283 <= 16)) {myvar0= 1;}
else {exit(0);}
int var284;
klee_make_symbolic(&var284, sizeof(var284), "var284");
if((var284 >= 0) & (var284 <= 16)) {myvar0= 1;}
else {exit(0);}
int var285;
klee_make_symbolic(&var285, sizeof(var285), "var285");
if((var285 >= 0) & (var285 <= 16)) {myvar0= 1;}
else {exit(0);}
int var286;
klee_make_symbolic(&var286, sizeof(var286), "var286");
if((var286 >= 0) & (var286 <= 16)) {myvar0= 1;}
else {exit(0);}
int var287;
klee_make_symbolic(&var287, sizeof(var287), "var287");
if((var287 >= 0) & (var287 <= 16)) {myvar0= 1;}
else {exit(0);}
int var288;
klee_make_symbolic(&var288, sizeof(var288), "var288");
if((var288 >= 0) & (var288 <= 16)) {myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var1)*(var1 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var126)*(var126 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var128)*(var128 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var136)*(var136 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var221)*(var221 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var232)*(var232 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var266)*(var266 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var74)*(var74 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var0 - var76)*(var76 - var0)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var221)*(var221 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var266)*(var266 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var74)*(var74 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var130)*(var130 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var14)*(var14 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var152)*(var152 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var180)*(var180 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var252)*(var252 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var35)*(var35 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var10 - var87)*(var87 - var10)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var191)*(var191 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var220)*(var220 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var249)*(var249 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var39)*(var39 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var40)*(var40 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var46)*(var46 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var100 - var70)*(var70 - var100)){myvar0= 1;}
else {exit(0);}
if(0 > (var101 - var5)*(var5 - var101)){myvar0= 1;}
else {exit(0);}
if(0 > (var102 - var125)*(var125 - var102)){myvar0= 1;}
else {exit(0);}
if(0 > (var102 - var156)*(var156 - var102)){myvar0= 1;}
else {exit(0);}
if(0 > (var102 - var174)*(var174 - var102)){myvar0= 1;}
else {exit(0);}
if(0 > (var102 - var189)*(var189 - var102)){myvar0= 1;}
else {exit(0);}
if(0 > (var102 - var32)*(var32 - var102)){myvar0= 1;}
else {exit(0);}
if(0 > (var102 - var36)*(var36 - var102)){myvar0= 1;}
else {exit(0);}
if(0 > (var102 - var54)*(var54 - var102)){myvar0= 1;}
else {exit(0);}
if(0 > (var103 - var207)*(var207 - var103)){myvar0= 1;}
else {exit(0);}
if(0 > (var103 - var217)*(var217 - var103)){myvar0= 1;}
else {exit(0);}
if(0 > (var103 - var34)*(var34 - var103)){myvar0= 1;}
else {exit(0);}
if(0 > (var104 - var183)*(var183 - var104)){myvar0= 1;}
else {exit(0);}
if(0 > (var104 - var184)*(var184 - var104)){myvar0= 1;}
else {exit(0);}
if(0 > (var104 - var280)*(var280 - var104)){myvar0= 1;}
else {exit(0);}
if(0 > (var104 - var73)*(var73 - var104)){myvar0= 1;}
else {exit(0);}
if(0 > (var105 - var118)*(var118 - var105)){myvar0= 1;}
else {exit(0);}
if(0 > (var105 - var175)*(var175 - var105)){myvar0= 1;}
else {exit(0);}
if(0 > (var105 - var214)*(var214 - var105)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var100)*(var100 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var191)*(var191 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var200)*(var200 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var220)*(var220 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var249)*(var249 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var258)*(var258 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var39)*(var39 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var40)*(var40 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var106 - var46)*(var46 - var106)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var194)*(var194 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var218)*(var218 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var238)*(var238 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var244)*(var244 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var107 - var263)*(var263 - var107)){myvar0= 1;}
else {exit(0);}
if(0 > (var109 - var119)*(var119 - var109)){myvar0= 1;}
else {exit(0);}
if(0 > (var109 - var121)*(var121 - var109)){myvar0= 1;}
else {exit(0);}
if(0 > (var109 - var223)*(var223 - var109)){myvar0= 1;}
else {exit(0);}
if(0 > (var109 - var244)*(var244 - var109)){myvar0= 1;}
else {exit(0);}
if(0 > (var109 - var85)*(var85 - var109)){myvar0= 1;}
else {exit(0);}
if(0 > (var109 - var94)*(var94 - var109)){myvar0= 1;}
else {exit(0);}
if(0 > (var11 - var100)*(var100 - var11)){myvar0= 1;}
else {exit(0);}
if(0 > (var11 - var191)*(var191 - var11)){myvar0= 1;}
else {exit(0);}
if(0 > (var11 - var220)*(var220 - var11)){myvar0= 1;}
else {exit(0);}
if(0 > (var11 - var258)*(var258 - var11)){myvar0= 1;}
else {exit(0);}
if(0 > (var11 - var39)*(var39 - var11)){myvar0= 1;}
else {exit(0);}
if(0 > (var11 - var40)*(var40 - var11)){myvar0= 1;}
else {exit(0);}
if(0 > (var11 - var46)*(var46 - var11)){myvar0= 1;}
else {exit(0);}
if(0 > (var110 - var137)*(var137 - var110)){myvar0= 1;}
else {exit(0);}
if(0 > (var110 - var19)*(var19 - var110)){myvar0= 1;}
else {exit(0);}
if(0 > (var110 - var272)*(var272 - var110)){myvar0= 1;}
else {exit(0);}
if(0 > (var110 - var283)*(var283 - var110)){myvar0= 1;}
else {exit(0);}
if(0 > (var110 - var29)*(var29 - var110)){myvar0= 1;}
else {exit(0);}
if(0 > (var110 - var96)*(var96 - var110)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var122)*(var122 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var146)*(var146 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var16)*(var16 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var170)*(var170 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var21)*(var21 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var24)*(var24 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var257)*(var257 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var112 - var270)*(var270 - var112)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var145)*(var145 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var207)*(var207 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var217)*(var217 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var250)*(var250 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var113 - var26)*(var26 - var113)){myvar0= 1;}
else {exit(0);}
if(0 > (var114 - var122)*(var122 - var114)){myvar0= 1;}
else {exit(0);}
if(0 > (var114 - var16)*(var16 - var114)){myvar0= 1;}
else {exit(0);}
if(0 > (var114 - var24)*(var24 - var114)){myvar0= 1;}
else {exit(0);}
if(0 > (var115 - var141)*(var141 - var115)){myvar0= 1;}
else {exit(0);}
if(0 > (var115 - var166)*(var166 - var115)){myvar0= 1;}
else {exit(0);}
if(0 > (var115 - var285)*(var285 - var115)){myvar0= 1;}
else {exit(0);}
if(0 > (var115 - var58)*(var58 - var115)){myvar0= 1;}
else {exit(0);}
if(0 > (var115 - var64)*(var64 - var115)){myvar0= 1;}
else {exit(0);}
if(0 > (var116 - var234)*(var234 - var116)){myvar0= 1;}
else {exit(0);}
if(0 > (var116 - var268)*(var268 - var116)){myvar0= 1;}
else {exit(0);}
if(0 > (var116 - var68)*(var68 - var116)){myvar0= 1;}
else {exit(0);}
if(0 > (var117 - var234)*(var234 - var117)){myvar0= 1;}
else {exit(0);}
if(0 > (var119 - var121)*(var121 - var119)){myvar0= 1;}
else {exit(0);}
if(0 > (var119 - var244)*(var244 - var119)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var1)*(var1 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var126)*(var126 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var221)*(var221 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var266)*(var266 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var120 - var74)*(var74 - var120)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var137)*(var137 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var142)*(var142 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var144)*(var144 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var188)*(var188 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var283)*(var283 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var29)*(var29 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var123 - var95)*(var95 - var123)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var184)*(var184 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var242)*(var242 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var124 - var73)*(var73 - var124)){myvar0= 1;}
else {exit(0);}
if(0 > (var125 - var17)*(var17 - var125)){myvar0= 1;}
else {exit(0);}
if(0 > (var125 - var277)*(var277 - var125)){myvar0= 1;}
else {exit(0);}
if(0 > (var125 - var32)*(var32 - var125)){myvar0= 1;}
else {exit(0);}
if(0 > (var125 - var54)*(var54 - var125)){myvar0= 1;}
else {exit(0);}
if(0 > (var128 - var1)*(var1 - var128)){myvar0= 1;}
else {exit(0);}
if(0 > (var128 - var120)*(var120 - var128)){myvar0= 1;}
else {exit(0);}
if(0 > (var128 - var221)*(var221 - var128)){myvar0= 1;}
else {exit(0);}
if(0 > (var128 - var232)*(var232 - var128)){myvar0= 1;}
else {exit(0);}
if(0 > (var129 - var135)*(var135 - var129)){myvar0= 1;}
else {exit(0);}
if(0 > (var129 - var34)*(var34 - var129)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var152)*(var152 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var180)*(var180 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var252)*(var252 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var35)*(var35 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var89)*(var89 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var130 - var9)*(var9 - var130)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var159)*(var159 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var231)*(var231 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var55)*(var55 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var57)*(var57 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var61)*(var61 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var66)*(var66 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var131 - var99)*(var99 - var131)){myvar0= 1;}
else {exit(0);}
if(0 > (var133 - var179)*(var179 - var133)){myvar0= 1;}
else {exit(0);}
if(0 > (var133 - var242)*(var242 - var133)){myvar0= 1;}
else {exit(0);}
if(0 > (var133 - var280)*(var280 - var133)){myvar0= 1;}
else {exit(0);}
if(0 > (var133 - var82)*(var82 - var133)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var180)*(var180 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var235)*(var235 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var42)*(var42 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var134 - var9)*(var9 - var134)){myvar0= 1;}
else {exit(0);}
if(0 > (var135 - var145)*(var145 - var135)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var1)*(var1 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var128)*(var128 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var136 - var266)*(var266 - var136)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var141)*(var141 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var287)*(var287 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var139 - var65)*(var65 - var139)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var130)*(var130 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var180)*(var180 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var87)*(var87 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var89)*(var89 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var9)*(var9 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var140 - var122)*(var122 - var140)){myvar0= 1;}
else {exit(0);}
if(0 > (var141 - var138)*(var138 - var141)){myvar0= 1;}
else {exit(0);}
if(0 > (var141 - var212)*(var212 - var141)){myvar0= 1;}
else {exit(0);}
if(0 > (var142 - var137)*(var137 - var142)){myvar0= 1;}
else {exit(0);}
if(0 > (var142 - var29)*(var29 - var142)){myvar0= 1;}
else {exit(0);}
if(0 > (var142 - var52)*(var52 - var142)){myvar0= 1;}
else {exit(0);}
if(0 > (var143 - var119)*(var119 - var143)){myvar0= 1;}
else {exit(0);}
if(0 > (var143 - var223)*(var223 - var143)){myvar0= 1;}
else {exit(0);}
if(0 > (var144 - var137)*(var137 - var144)){myvar0= 1;}
else {exit(0);}
if(0 > (var144 - var142)*(var142 - var144)){myvar0= 1;}
else {exit(0);}
if(0 > (var144 - var188)*(var188 - var144)){myvar0= 1;}
else {exit(0);}
if(0 > (var144 - var19)*(var19 - var144)){myvar0= 1;}
else {exit(0);}
if(0 > (var144 - var211)*(var211 - var144)){myvar0= 1;}
else {exit(0);}
if(0 > (var144 - var283)*(var283 - var144)){myvar0= 1;}
else {exit(0);}
if(0 > (var144 - var29)*(var29 - var144)){myvar0= 1;}
else {exit(0);}
if(0 > (var145 - var186)*(var186 - var145)){myvar0= 1;}
else {exit(0);}
if(0 > (var145 - var207)*(var207 - var145)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var114)*(var114 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var122)*(var122 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var140)*(var140 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var148)*(var148 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var16)*(var16 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var146 - var278)*(var278 - var146)){myvar0= 1;}
else {exit(0);}
if(0 > (var147 - var177)*(var177 - var147)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var122)*(var122 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var16)*(var16 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var24)*(var24 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var257)*(var257 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var270)*(var270 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var148 - var278)*(var278 - var148)){myvar0= 1;}
else {exit(0);}
if(0 > (var149 - var176)*(var176 - var149)){myvar0= 1;}
else {exit(0);}
if(0 > (var149 - var192)*(var192 - var149)){myvar0= 1;}
else {exit(0);}
if(0 > (var149 - var2)*(var2 - var149)){myvar0= 1;}
else {exit(0);}
if(0 > (var149 - var233)*(var233 - var149)){myvar0= 1;}
else {exit(0);}
if(0 > (var151 - var192)*(var192 - var151)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var182)*(var182 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var230)*(var230 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var247)*(var247 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var288)*(var288 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var49)*(var49 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var56)*(var56 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var153 - var98)*(var98 - var153)){myvar0= 1;}
else {exit(0);}
if(0 > (var154 - var100)*(var100 - var154)){myvar0= 1;}
else {exit(0);}
if(0 > (var154 - var249)*(var249 - var154)){myvar0= 1;}
else {exit(0);}
if(0 > (var154 - var258)*(var258 - var154)){myvar0= 1;}
else {exit(0);}
if(0 > (var154 - var39)*(var39 - var154)){myvar0= 1;}
else {exit(0);}
if(0 > (var154 - var40)*(var40 - var154)){myvar0= 1;}
else {exit(0);}
if(0 > (var154 - var46)*(var46 - var154)){myvar0= 1;}
else {exit(0);}
if(0 > (var154 - var70)*(var70 - var154)){myvar0= 1;}
else {exit(0);}
if(0 > (var155 - var13)*(var13 - var155)){myvar0= 1;}
else {exit(0);}
if(0 > (var155 - var213)*(var213 - var155)){myvar0= 1;}
else {exit(0);}
if(0 > (var155 - var226)*(var226 - var155)){myvar0= 1;}
else {exit(0);}
if(0 > (var155 - var243)*(var243 - var155)){myvar0= 1;}
else {exit(0);}
if(0 > (var155 - var37)*(var37 - var155)){myvar0= 1;}
else {exit(0);}
if(0 > (var155 - var69)*(var69 - var155)){myvar0= 1;}
else {exit(0);}
if(0 > (var156 - var189)*(var189 - var156)){myvar0= 1;}
else {exit(0);}
if(0 > (var156 - var277)*(var277 - var156)){myvar0= 1;}
else {exit(0);}
if(0 > (var156 - var36)*(var36 - var156)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var165)*(var165 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var167)*(var167 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var158 - var168)*(var168 - var158)){myvar0= 1;}
else {exit(0);}
if(0 > (var159 - var66)*(var66 - var159)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var105)*(var105 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var177)*(var177 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var214)*(var214 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var23)*(var23 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var286)*(var286 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var160 - var77)*(var77 - var160)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var159)*(var159 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var229)*(var229 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var57)*(var57 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var62)*(var62 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var66)*(var66 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var161 - var97)*(var97 - var161)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var100)*(var100 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var11)*(var11 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var220)*(var220 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var249)*(var249 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var258)*(var258 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var39)*(var39 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var40)*(var40 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var46)*(var46 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var70)*(var70 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var162 - var83)*(var83 - var162)){myvar0= 1;}
else {exit(0);}
if(0 > (var163 - var13)*(var13 - var163)){myvar0= 1;}
else {exit(0);}
if(0 > (var163 - var155)*(var155 - var163)){myvar0= 1;}
else {exit(0);}
if(0 > (var163 - var276)*(var276 - var163)){myvar0= 1;}
else {exit(0);}
if(0 > (var163 - var69)*(var69 - var163)){myvar0= 1;}
else {exit(0);}
if(0 > (var165 - var193)*(var193 - var165)){myvar0= 1;}
else {exit(0);}
if(0 > (var166 - var138)*(var138 - var166)){myvar0= 1;}
else {exit(0);}
if(0 > (var166 - var141)*(var141 - var166)){myvar0= 1;}
else {exit(0);}
if(0 > (var166 - var212)*(var212 - var166)){myvar0= 1;}
else {exit(0);}
if(0 > (var166 - var285)*(var285 - var166)){myvar0= 1;}
else {exit(0);}
if(0 > (var167 - var165)*(var165 - var167)){myvar0= 1;}
else {exit(0);}
if(0 > (var167 - var193)*(var193 - var167)){myvar0= 1;}
else {exit(0);}
if(0 > (var167 - var246)*(var246 - var167)){myvar0= 1;}
else {exit(0);}
if(0 > (var168 - var165)*(var165 - var168)){myvar0= 1;}
else {exit(0);}
if(0 > (var168 - var246)*(var246 - var168)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var187)*(var187 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var237)*(var237 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var247)*(var247 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var49)*(var49 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var56)*(var56 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var169 - var98)*(var98 - var169)){myvar0= 1;}
else {exit(0);}
if(0 > (var170 - var114)*(var114 - var170)){myvar0= 1;}
else {exit(0);}
if(0 > (var170 - var122)*(var122 - var170)){myvar0= 1;}
else {exit(0);}
if(0 > (var171 - var117)*(var117 - var171)){myvar0= 1;}
else {exit(0);}
if(0 > (var171 - var234)*(var234 - var171)){myvar0= 1;}
else {exit(0);}
if(0 > (var171 - var245)*(var245 - var171)){myvar0= 1;}
else {exit(0);}
if(0 > (var171 - var48)*(var48 - var171)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var171)*(var171 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var228)*(var228 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var234)*(var234 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var268)*(var268 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var27)*(var27 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var173 - var59)*(var59 - var173)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var156)*(var156 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var17)*(var17 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var189)*(var189 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var174 - var277)*(var277 - var174)){myvar0= 1;}
else {exit(0);}
if(0 > (var175 - var147)*(var147 - var175)){myvar0= 1;}
else {exit(0);}
if(0 > (var175 - var177)*(var177 - var175)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var151)*(var151 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var176 - var192)*(var192 - var176)){myvar0= 1;}
else {exit(0);}
if(0 > (var177 - var118)*(var118 - var177)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var174)*(var174 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var189)*(var189 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var224)*(var224 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var28)*(var28 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var178 - var32)*(var32 - var178)){myvar0= 1;}
else {exit(0);}
if(0 > (var179 - var82)*(var82 - var179)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var0)*(var0 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var1)*(var1 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var136)*(var136 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var221)*(var221 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var232)*(var232 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var266)*(var266 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var181 - var76)*(var76 - var181)){myvar0= 1;}
else {exit(0);}
if(0 > (var182 - var187)*(var187 - var182)){myvar0= 1;}
else {exit(0);}
if(0 > (var182 - var247)*(var247 - var182)){myvar0= 1;}
else {exit(0);}
if(0 > (var182 - var288)*(var288 - var182)){myvar0= 1;}
else {exit(0);}
if(0 > (var183 - var82)*(var82 - var183)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var179)*(var179 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var45)*(var45 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var47)*(var47 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var184 - var82)*(var82 - var184)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var110)*(var110 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var137)*(var137 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var19)*(var19 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var254)*(var254 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var52)*(var52 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var185 - var96)*(var96 - var185)){myvar0= 1;}
else {exit(0);}
if(0 > (var187 - var247)*(var247 - var187)){myvar0= 1;}
else {exit(0);}
if(0 > (var188 - var137)*(var137 - var188)){myvar0= 1;}
else {exit(0);}
if(0 > (var188 - var52)*(var52 - var188)){myvar0= 1;}
else {exit(0);}
if(0 > (var188 - var96)*(var96 - var188)){myvar0= 1;}
else {exit(0);}
if(0 > (var189 - var32)*(var32 - var189)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var137)*(var137 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var188)*(var188 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var29)*(var29 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var96)*(var96 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var190 - var138)*(var138 - var190)){myvar0= 1;}
else {exit(0);}
if(0 > (var190 - var212)*(var212 - var190)){myvar0= 1;}
else {exit(0);}
if(0 > (var190 - var285)*(var285 - var190)){myvar0= 1;}
else {exit(0);}
if(0 > (var190 - var287)*(var287 - var190)){myvar0= 1;}
else {exit(0);}
if(0 > (var190 - var64)*(var64 - var190)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var109)*(var109 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var143)*(var143 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var223)*(var223 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var238)*(var238 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var244)*(var244 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var263)*(var263 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var75)*(var75 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var194 - var85)*(var85 - var194)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var155)*(var155 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var163)*(var163 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var201)*(var201 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var213)*(var213 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var226)*(var226 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var276)*(var276 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var7)*(var7 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var195 - var79)*(var79 - var195)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var116)*(var116 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var117)*(var117 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var173)*(var173 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var234)*(var234 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var268)*(var268 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var27)*(var27 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var48)*(var48 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var59)*(var59 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var196 - var68)*(var68 - var196)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var101)*(var101 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var206)*(var206 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var216)*(var216 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var233)*(var233 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var197 - var259)*(var259 - var197)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var115)*(var115 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var141)*(var141 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var166)*(var166 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var190)*(var190 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var212)*(var212 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var260)*(var260 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var65)*(var65 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var198 - var72)*(var72 - var198)){myvar0= 1;}
else {exit(0);}
if(0 > (var199 - var167)*(var167 - var199)){myvar0= 1;}
else {exit(0);}
if(0 > (var199 - var168)*(var168 - var199)){myvar0= 1;}
else {exit(0);}
if(0 > (var199 - var209)*(var209 - var199)){myvar0= 1;}
else {exit(0);}
if(0 > (var199 - var274)*(var274 - var199)){myvar0= 1;}
else {exit(0);}
if(0 > (var199 - var88)*(var88 - var199)){myvar0= 1;}
else {exit(0);}
if(0 > (var2 - var151)*(var151 - var2)){myvar0= 1;}
else {exit(0);}
if(0 > (var2 - var176)*(var176 - var2)){myvar0= 1;}
else {exit(0);}
if(0 > (var2 - var192)*(var192 - var2)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var176)*(var176 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var259)*(var259 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var92)*(var92 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var200 - var191)*(var191 - var200)){myvar0= 1;}
else {exit(0);}
if(0 > (var200 - var258)*(var258 - var200)){myvar0= 1;}
else {exit(0);}
if(0 > (var200 - var39)*(var39 - var200)){myvar0= 1;}
else {exit(0);}
if(0 > (var200 - var70)*(var70 - var200)){myvar0= 1;}
else {exit(0);}
if(0 > (var201 - var13)*(var13 - var201)){myvar0= 1;}
else {exit(0);}
if(0 > (var201 - var37)*(var37 - var201)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var10)*(var10 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var134)*(var134 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var152)*(var152 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var180)*(var180 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var235)*(var235 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var252)*(var252 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var35)*(var35 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var87)*(var87 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var202 - var89)*(var89 - var202)){myvar0= 1;}
else {exit(0);}
if(0 > (var203 - var167)*(var167 - var203)){myvar0= 1;}
else {exit(0);}
if(0 > (var203 - var199)*(var199 - var203)){myvar0= 1;}
else {exit(0);}
if(0 > (var203 - var209)*(var209 - var203)){myvar0= 1;}
else {exit(0);}
if(0 > (var203 - var274)*(var274 - var203)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var130)*(var130 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var14)*(var14 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var152)*(var152 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var252)*(var252 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var264)*(var264 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var35)*(var35 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var87)*(var87 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var204 - var9)*(var9 - var204)){myvar0= 1;}
else {exit(0);}
if(0 > (var205 - var199)*(var199 - var205)){myvar0= 1;}
else {exit(0);}
if(0 > (var205 - var209)*(var209 - var205)){myvar0= 1;}
else {exit(0);}
if(0 > (var205 - var251)*(var251 - var205)){myvar0= 1;}
else {exit(0);}
if(0 > (var206 - var149)*(var149 - var206)){myvar0= 1;}
else {exit(0);}
if(0 > (var206 - var151)*(var151 - var206)){myvar0= 1;}
else {exit(0);}
if(0 > (var206 - var192)*(var192 - var206)){myvar0= 1;}
else {exit(0);}
if(0 > (var206 - var216)*(var216 - var206)){myvar0= 1;}
else {exit(0);}
if(0 > (var206 - var259)*(var259 - var206)){myvar0= 1;}
else {exit(0);}
if(0 > (var206 - var284)*(var284 - var206)){myvar0= 1;}
else {exit(0);}
if(0 > (var208 - var147)*(var147 - var208)){myvar0= 1;}
else {exit(0);}
if(0 > (var208 - var175)*(var175 - var208)){myvar0= 1;}
else {exit(0);}
if(0 > (var208 - var239)*(var239 - var208)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var165)*(var165 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var168)*(var168 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var193)*(var193 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var246)*(var246 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var209 - var274)*(var274 - var209)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var140)*(var140 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var170)*(var170 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var278)*(var278 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var210 - var156)*(var156 - var210)){myvar0= 1;}
else {exit(0);}
if(0 > (var210 - var277)*(var277 - var210)){myvar0= 1;}
else {exit(0);}
if(0 > (var210 - var32)*(var32 - var210)){myvar0= 1;}
else {exit(0);}
if(0 > (var210 - var36)*(var36 - var210)){myvar0= 1;}
else {exit(0);}
if(0 > (var211 - var254)*(var254 - var211)){myvar0= 1;}
else {exit(0);}
if(0 > (var211 - var272)*(var272 - var211)){myvar0= 1;}
else {exit(0);}
if(0 > (var211 - var283)*(var283 - var211)){myvar0= 1;}
else {exit(0);}
if(0 > (var212 - var138)*(var138 - var212)){myvar0= 1;}
else {exit(0);}
if(0 > (var213 - var255)*(var255 - var213)){myvar0= 1;}
else {exit(0);}
if(0 > (var213 - var4)*(var4 - var213)){myvar0= 1;}
else {exit(0);}
if(0 > (var213 - var69)*(var69 - var213)){myvar0= 1;}
else {exit(0);}
if(0 > (var214 - var118)*(var118 - var214)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var184)*(var184 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var280)*(var280 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var45)*(var45 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var47)*(var47 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var215 - var82)*(var82 - var215)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var101)*(var101 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var149)*(var149 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var151)*(var151 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var192)*(var192 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var20)*(var20 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var233)*(var233 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var284)*(var284 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var5)*(var5 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var216 - var92)*(var92 - var216)){myvar0= 1;}
else {exit(0);}
if(0 > (var217 - var80)*(var80 - var217)){myvar0= 1;}
else {exit(0);}
if(0 > (var218 - var121)*(var121 - var218)){myvar0= 1;}
else {exit(0);}
if(0 > (var218 - var143)*(var143 - var218)){myvar0= 1;}
else {exit(0);}
if(0 > (var218 - var223)*(var223 - var218)){myvar0= 1;}
else {exit(0);}
if(0 > (var218 - var85)*(var85 - var218)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var103)*(var103 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var113)*(var113 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var129)*(var129 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var135)*(var135 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var145)*(var145 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var26)*(var26 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var34)*(var34 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var219 - var80)*(var80 - var219)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var133)*(var133 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var179)*(var179 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var183)*(var183 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var215)*(var215 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var242)*(var242 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var279)*(var279 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var280)*(var280 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var45)*(var45 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var47)*(var47 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var73)*(var73 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var82)*(var82 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var122)*(var122 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var140)*(var140 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var146)*(var146 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var16)*(var16 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var170)*(var170 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var21)*(var21 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var24)*(var24 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var270)*(var270 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var278)*(var278 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var222 - var67)*(var67 - var222)){myvar0= 1;}
else {exit(0);}
if(0 > (var223 - var119)*(var119 - var223)){myvar0= 1;}
else {exit(0);}
if(0 > (var223 - var121)*(var121 - var223)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var102)*(var102 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var156)*(var156 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var174)*(var174 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var267)*(var267 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var277)*(var277 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var28)*(var28 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var36)*(var36 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var224 - var54)*(var54 - var224)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var191)*(var191 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var200)*(var200 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var220)*(var220 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var249)*(var249 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var39)*(var39 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var40)*(var40 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var46)*(var46 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var225 - var70)*(var70 - var225)){myvar0= 1;}
else {exit(0);}
if(0 > (var226 - var243)*(var243 - var226)){myvar0= 1;}
else {exit(0);}
if(0 > (var226 - var255)*(var255 - var226)){myvar0= 1;}
else {exit(0);}
if(0 > (var226 - var69)*(var69 - var226)){myvar0= 1;}
else {exit(0);}
if(0 > (var227 - var147)*(var147 - var227)){myvar0= 1;}
else {exit(0);}
if(0 > (var227 - var175)*(var175 - var227)){myvar0= 1;}
else {exit(0);}
if(0 > (var227 - var208)*(var208 - var227)){myvar0= 1;}
else {exit(0);}
if(0 > (var227 - var214)*(var214 - var227)){myvar0= 1;}
else {exit(0);}
if(0 > (var228 - var116)*(var116 - var228)){myvar0= 1;}
else {exit(0);}
if(0 > (var228 - var171)*(var171 - var228)){myvar0= 1;}
else {exit(0);}
if(0 > (var228 - var59)*(var59 - var228)){myvar0= 1;}
else {exit(0);}
if(0 > (var228 - var68)*(var68 - var228)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var105)*(var105 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var118)*(var118 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var147)*(var147 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var177)*(var177 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var214)*(var214 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var227)*(var227 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var30)*(var30 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var230 - var98)*(var98 - var230)){myvar0= 1;}
else {exit(0);}
if(0 > (var231 - var229)*(var229 - var231)){myvar0= 1;}
else {exit(0);}
if(0 > (var232 - var221)*(var221 - var232)){myvar0= 1;}
else {exit(0);}
if(0 > (var232 - var266)*(var266 - var232)){myvar0= 1;}
else {exit(0);}
if(0 > (var232 - var74)*(var74 - var232)){myvar0= 1;}
else {exit(0);}
if(0 > (var233 - var151)*(var151 - var233)){myvar0= 1;}
else {exit(0);}
if(0 > (var233 - var2)*(var2 - var233)){myvar0= 1;}
else {exit(0);}
if(0 > (var235 - var130)*(var130 - var235)){myvar0= 1;}
else {exit(0);}
if(0 > (var235 - var152)*(var152 - var235)){myvar0= 1;}
else {exit(0);}
if(0 > (var235 - var35)*(var35 - var235)){myvar0= 1;}
else {exit(0);}
if(0 > (var237 - var187)*(var187 - var237)){myvar0= 1;}
else {exit(0);}
if(0 > (var237 - var247)*(var247 - var237)){myvar0= 1;}
else {exit(0);}
if(0 > (var237 - var288)*(var288 - var237)){myvar0= 1;}
else {exit(0);}
if(0 > (var237 - var33)*(var33 - var237)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var109)*(var109 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var119)*(var119 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var121)*(var121 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var143)*(var143 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var218)*(var218 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var223)*(var223 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var244)*(var244 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var238 - var85)*(var85 - var238)){myvar0= 1;}
else {exit(0);}
if(0 > (var239 - var175)*(var175 - var239)){myvar0= 1;}
else {exit(0);}
if(0 > (var239 - var177)*(var177 - var239)){myvar0= 1;}
else {exit(0);}
if(0 > (var24 - var122)*(var122 - var24)){myvar0= 1;}
else {exit(0);}
if(0 > (var240 - var159)*(var159 - var240)){myvar0= 1;}
else {exit(0);}
if(0 > (var240 - var161)*(var161 - var240)){myvar0= 1;}
else {exit(0);}
if(0 > (var240 - var282)*(var282 - var240)){myvar0= 1;}
else {exit(0);}
if(0 > (var240 - var44)*(var44 - var240)){myvar0= 1;}
else {exit(0);}
if(0 > (var240 - var55)*(var55 - var240)){myvar0= 1;}
else {exit(0);}
if(0 > (var240 - var61)*(var61 - var240)){myvar0= 1;}
else {exit(0);}
if(0 > (var241 - var117)*(var117 - var241)){myvar0= 1;}
else {exit(0);}
if(0 > (var241 - var171)*(var171 - var241)){myvar0= 1;}
else {exit(0);}
if(0 > (var241 - var234)*(var234 - var241)){myvar0= 1;}
else {exit(0);}
if(0 > (var241 - var245)*(var245 - var241)){myvar0= 1;}
else {exit(0);}
if(0 > (var241 - var68)*(var68 - var241)){myvar0= 1;}
else {exit(0);}
if(0 > (var242 - var179)*(var179 - var242)){myvar0= 1;}
else {exit(0);}
if(0 > (var242 - var183)*(var183 - var242)){myvar0= 1;}
else {exit(0);}
if(0 > (var242 - var184)*(var184 - var242)){myvar0= 1;}
else {exit(0);}
if(0 > (var242 - var45)*(var45 - var242)){myvar0= 1;}
else {exit(0);}
if(0 > (var242 - var47)*(var47 - var242)){myvar0= 1;}
else {exit(0);}
if(0 > (var242 - var82)*(var82 - var242)){myvar0= 1;}
else {exit(0);}
if(0 > (var243 - var13)*(var13 - var243)){myvar0= 1;}
else {exit(0);}
if(0 > (var245 - var48)*(var48 - var245)){myvar0= 1;}
else {exit(0);}
if(0 > (var247 - var33)*(var33 - var247)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var134)*(var134 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var14)*(var14 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var152)*(var152 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var180)*(var180 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var235)*(var235 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var252)*(var252 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var264)*(var264 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var35)*(var35 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var87)*(var87 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var89)*(var89 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var248 - var9)*(var9 - var248)){myvar0= 1;}
else {exit(0);}
if(0 > (var249 - var200)*(var200 - var249)){myvar0= 1;}
else {exit(0);}
if(0 > (var249 - var220)*(var220 - var249)){myvar0= 1;}
else {exit(0);}
if(0 > (var249 - var39)*(var39 - var249)){myvar0= 1;}
else {exit(0);}
if(0 > (var249 - var46)*(var46 - var249)){myvar0= 1;}
else {exit(0);}
if(0 > (var249 - var70)*(var70 - var249)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var109)*(var109 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var119)*(var119 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var143)*(var143 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var194)*(var194 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var223)*(var223 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var244)*(var244 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var25 - var75)*(var75 - var25)){myvar0= 1;}
else {exit(0);}
if(0 > (var250 - var135)*(var135 - var250)){myvar0= 1;}
else {exit(0);}
if(0 > (var250 - var145)*(var145 - var250)){myvar0= 1;}
else {exit(0);}
if(0 > (var250 - var186)*(var186 - var250)){myvar0= 1;}
else {exit(0);}
if(0 > (var250 - var217)*(var217 - var250)){myvar0= 1;}
else {exit(0);}
if(0 > (var250 - var26)*(var26 - var250)){myvar0= 1;}
else {exit(0);}
if(0 > (var251 - var165)*(var165 - var251)){myvar0= 1;}
else {exit(0);}
if(0 > (var251 - var167)*(var167 - var251)){myvar0= 1;}
else {exit(0);}
if(0 > (var251 - var274)*(var274 - var251)){myvar0= 1;}
else {exit(0);}
if(0 > (var251 - var88)*(var88 - var251)){myvar0= 1;}
else {exit(0);}
if(0 > (var252 - var180)*(var180 - var252)){myvar0= 1;}
else {exit(0);}
if(0 > (var252 - var264)*(var264 - var252)){myvar0= 1;}
else {exit(0);}
if(0 > (var253 - var116)*(var116 - var253)){myvar0= 1;}
else {exit(0);}
if(0 > (var253 - var117)*(var117 - var253)){myvar0= 1;}
else {exit(0);}
if(0 > (var253 - var171)*(var171 - var253)){myvar0= 1;}
else {exit(0);}
if(0 > (var253 - var234)*(var234 - var253)){myvar0= 1;}
else {exit(0);}
if(0 > (var253 - var241)*(var241 - var253)){myvar0= 1;}
else {exit(0);}
if(0 > (var253 - var68)*(var68 - var253)){myvar0= 1;}
else {exit(0);}
if(0 > (var254 - var110)*(var110 - var254)){myvar0= 1;}
else {exit(0);}
if(0 > (var254 - var137)*(var137 - var254)){myvar0= 1;}
else {exit(0);}
if(0 > (var254 - var142)*(var142 - var254)){myvar0= 1;}
else {exit(0);}
if(0 > (var254 - var188)*(var188 - var254)){myvar0= 1;}
else {exit(0);}
if(0 > (var254 - var19)*(var19 - var254)){myvar0= 1;}
else {exit(0);}
if(0 > (var254 - var272)*(var272 - var254)){myvar0= 1;}
else {exit(0);}
if(0 > (var254 - var96)*(var96 - var254)){myvar0= 1;}
else {exit(0);}
if(0 > (var257 - var114)*(var114 - var257)){myvar0= 1;}
else {exit(0);}
if(0 > (var257 - var170)*(var170 - var257)){myvar0= 1;}
else {exit(0);}
if(0 > (var257 - var24)*(var24 - var257)){myvar0= 1;}
else {exit(0);}
if(0 > (var258 - var191)*(var191 - var258)){myvar0= 1;}
else {exit(0);}
if(0 > (var258 - var220)*(var220 - var258)){myvar0= 1;}
else {exit(0);}
if(0 > (var258 - var40)*(var40 - var258)){myvar0= 1;}
else {exit(0);}
if(0 > (var258 - var46)*(var46 - var258)){myvar0= 1;}
else {exit(0);}
if(0 > (var259 - var176)*(var176 - var259)){myvar0= 1;}
else {exit(0);}
if(0 > (var259 - var192)*(var192 - var259)){myvar0= 1;}
else {exit(0);}
if(0 > (var259 - var233)*(var233 - var259)){myvar0= 1;}
else {exit(0);}
if(0 > (var259 - var5)*(var5 - var259)){myvar0= 1;}
else {exit(0);}
if(0 > (var26 - var135)*(var135 - var26)){myvar0= 1;}
else {exit(0);}
if(0 > (var26 - var186)*(var186 - var26)){myvar0= 1;}
else {exit(0);}
if(0 > (var260 - var190)*(var190 - var260)){myvar0= 1;}
else {exit(0);}
if(0 > (var260 - var285)*(var285 - var260)){myvar0= 1;}
else {exit(0);}
if(0 > (var261 - var187)*(var187 - var261)){myvar0= 1;}
else {exit(0);}
if(0 > (var261 - var237)*(var237 - var261)){myvar0= 1;}
else {exit(0);}
if(0 > (var261 - var288)*(var288 - var261)){myvar0= 1;}
else {exit(0);}
if(0 > (var261 - var98)*(var98 - var261)){myvar0= 1;}
else {exit(0);}
if(0 > (var262 - var17)*(var17 - var262)){myvar0= 1;}
else {exit(0);}
if(0 > (var262 - var174)*(var174 - var262)){myvar0= 1;}
else {exit(0);}
if(0 > (var262 - var189)*(var189 - var262)){myvar0= 1;}
else {exit(0);}
if(0 > (var262 - var277)*(var277 - var262)){myvar0= 1;}
else {exit(0);}
if(0 > (var262 - var32)*(var32 - var262)){myvar0= 1;}
else {exit(0);}
if(0 > (var263 - var143)*(var143 - var263)){myvar0= 1;}
else {exit(0);}
if(0 > (var263 - var218)*(var218 - var263)){myvar0= 1;}
else {exit(0);}
if(0 > (var263 - var223)*(var223 - var263)){myvar0= 1;}
else {exit(0);}
if(0 > (var263 - var244)*(var244 - var263)){myvar0= 1;}
else {exit(0);}
if(0 > (var263 - var75)*(var75 - var263)){myvar0= 1;}
else {exit(0);}
if(0 > (var264 - var180)*(var180 - var264)){myvar0= 1;}
else {exit(0);}
if(0 > (var264 - var89)*(var89 - var264)){myvar0= 1;}
else {exit(0);}
if(0 > (var264 - var9)*(var9 - var264)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var1)*(var1 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var120)*(var120 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var128)*(var128 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var181)*(var181 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var232)*(var232 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var266)*(var266 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var53)*(var53 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var265 - var86)*(var86 - var265)){myvar0= 1;}
else {exit(0);}
if(0 > (var266 - var221)*(var221 - var266)){myvar0= 1;}
else {exit(0);}
if(0 > (var267 - var262)*(var262 - var267)){myvar0= 1;}
else {exit(0);}
if(0 > (var267 - var277)*(var277 - var267)){myvar0= 1;}
else {exit(0);}
if(0 > (var267 - var36)*(var36 - var267)){myvar0= 1;}
else {exit(0);}
if(0 > (var268 - var117)*(var117 - var268)){myvar0= 1;}
else {exit(0);}
if(0 > (var268 - var234)*(var234 - var268)){myvar0= 1;}
else {exit(0);}
if(0 > (var268 - var245)*(var245 - var268)){myvar0= 1;}
else {exit(0);}
if(0 > (var268 - var48)*(var48 - var268)){myvar0= 1;}
else {exit(0);}
if(0 > (var269 - var232)*(var232 - var269)){myvar0= 1;}
else {exit(0);}
if(0 > (var269 - var266)*(var266 - var269)){myvar0= 1;}
else {exit(0);}
if(0 > (var269 - var53)*(var53 - var269)){myvar0= 1;}
else {exit(0);}
if(0 > (var269 - var74)*(var74 - var269)){myvar0= 1;}
else {exit(0);}
if(0 > (var269 - var76)*(var76 - var269)){myvar0= 1;}
else {exit(0);}
if(0 > (var27 - var117)*(var117 - var27)){myvar0= 1;}
else {exit(0);}
if(0 > (var27 - var234)*(var234 - var27)){myvar0= 1;}
else {exit(0);}
if(0 > (var270 - var114)*(var114 - var270)){myvar0= 1;}
else {exit(0);}
if(0 > (var270 - var140)*(var140 - var270)){myvar0= 1;}
else {exit(0);}
if(0 > (var270 - var170)*(var170 - var270)){myvar0= 1;}
else {exit(0);}
if(0 > (var270 - var21)*(var21 - var270)){myvar0= 1;}
else {exit(0);}
if(0 > (var270 - var24)*(var24 - var270)){myvar0= 1;}
else {exit(0);}
if(0 > (var270 - var278)*(var278 - var270)){myvar0= 1;}
else {exit(0);}
if(0 > (var271 - var104)*(var104 - var271)){myvar0= 1;}
else {exit(0);}
if(0 > (var271 - var179)*(var179 - var271)){myvar0= 1;}
else {exit(0);}
if(0 > (var271 - var242)*(var242 - var271)){myvar0= 1;}
else {exit(0);}
if(0 > (var271 - var280)*(var280 - var271)){myvar0= 1;}
else {exit(0);}
if(0 > (var271 - var45)*(var45 - var271)){myvar0= 1;}
else {exit(0);}
if(0 > (var271 - var47)*(var47 - var271)){myvar0= 1;}
else {exit(0);}
if(0 > (var272 - var137)*(var137 - var272)){myvar0= 1;}
else {exit(0);}
if(0 > (var272 - var19)*(var19 - var272)){myvar0= 1;}
else {exit(0);}
if(0 > (var272 - var96)*(var96 - var272)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var138)*(var138 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var139)*(var139 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var141)*(var141 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var166)*(var166 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var190)*(var190 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var198)*(var198 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var260)*(var260 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var285)*(var285 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var58)*(var58 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var273 - var64)*(var64 - var273)){myvar0= 1;}
else {exit(0);}
if(0 > (var274 - var158)*(var158 - var274)){myvar0= 1;}
else {exit(0);}
if(0 > (var274 - var168)*(var168 - var274)){myvar0= 1;}
else {exit(0);}
if(0 > (var274 - var193)*(var193 - var274)){myvar0= 1;}
else {exit(0);}
if(0 > (var275 - var131)*(var131 - var275)){myvar0= 1;}
else {exit(0);}
if(0 > (var275 - var44)*(var44 - var275)){myvar0= 1;}
else {exit(0);}
if(0 > (var275 - var55)*(var55 - var275)){myvar0= 1;}
else {exit(0);}
if(0 > (var275 - var61)*(var61 - var275)){myvar0= 1;}
else {exit(0);}
if(0 > (var275 - var62)*(var62 - var275)){myvar0= 1;}
else {exit(0);}
if(0 > (var275 - var99)*(var99 - var275)){myvar0= 1;}
else {exit(0);}
if(0 > (var276 - var201)*(var201 - var276)){myvar0= 1;}
else {exit(0);}
if(0 > (var276 - var213)*(var213 - var276)){myvar0= 1;}
else {exit(0);}
if(0 > (var276 - var255)*(var255 - var276)){myvar0= 1;}
else {exit(0);}
if(0 > (var276 - var37)*(var37 - var276)){myvar0= 1;}
else {exit(0);}
if(0 > (var276 - var4)*(var4 - var276)){myvar0= 1;}
else {exit(0);}
if(0 > (var277 - var17)*(var17 - var277)){myvar0= 1;}
else {exit(0);}
if(0 > (var277 - var189)*(var189 - var277)){myvar0= 1;}
else {exit(0);}
if(0 > (var277 - var36)*(var36 - var277)){myvar0= 1;}
else {exit(0);}
if(0 > (var278 - var122)*(var122 - var278)){myvar0= 1;}
else {exit(0);}
if(0 > (var278 - var140)*(var140 - var278)){myvar0= 1;}
else {exit(0);}
if(0 > (var278 - var16)*(var16 - var278)){myvar0= 1;}
else {exit(0);}
if(0 > (var278 - var24)*(var24 - var278)){myvar0= 1;}
else {exit(0);}
if(0 > (var279 - var183)*(var183 - var279)){myvar0= 1;}
else {exit(0);}
if(0 > (var279 - var184)*(var184 - var279)){myvar0= 1;}
else {exit(0);}
if(0 > (var279 - var215)*(var215 - var279)){myvar0= 1;}
else {exit(0);}
if(0 > (var279 - var73)*(var73 - var279)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var189)*(var189 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var210)*(var210 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var36)*(var36 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var280 - var179)*(var179 - var280)){myvar0= 1;}
else {exit(0);}
if(0 > (var280 - var242)*(var242 - var280)){myvar0= 1;}
else {exit(0);}
if(0 > (var280 - var45)*(var45 - var280)){myvar0= 1;}
else {exit(0);}
if(0 > (var280 - var47)*(var47 - var280)){myvar0= 1;}
else {exit(0);}
if(0 > (var280 - var82)*(var82 - var280)){myvar0= 1;}
else {exit(0);}
if(0 > (var281 - var113)*(var113 - var281)){myvar0= 1;}
else {exit(0);}
if(0 > (var281 - var135)*(var135 - var281)){myvar0= 1;}
else {exit(0);}
if(0 > (var281 - var186)*(var186 - var281)){myvar0= 1;}
else {exit(0);}
if(0 > (var281 - var207)*(var207 - var281)){myvar0= 1;}
else {exit(0);}
if(0 > (var281 - var217)*(var217 - var281)){myvar0= 1;}
else {exit(0);}
if(0 > (var281 - var219)*(var219 - var281)){myvar0= 1;}
else {exit(0);}
if(0 > (var281 - var6)*(var6 - var281)){myvar0= 1;}
else {exit(0);}
if(0 > (var282 - var159)*(var159 - var282)){myvar0= 1;}
else {exit(0);}
if(0 > (var282 - var161)*(var161 - var282)){myvar0= 1;}
else {exit(0);}
if(0 > (var282 - var229)*(var229 - var282)){myvar0= 1;}
else {exit(0);}
if(0 > (var282 - var57)*(var57 - var282)){myvar0= 1;}
else {exit(0);}
if(0 > (var282 - var61)*(var61 - var282)){myvar0= 1;}
else {exit(0);}
if(0 > (var282 - var62)*(var62 - var282)){myvar0= 1;}
else {exit(0);}
if(0 > (var282 - var66)*(var66 - var282)){myvar0= 1;}
else {exit(0);}
if(0 > (var283 - var188)*(var188 - var283)){myvar0= 1;}
else {exit(0);}
if(0 > (var283 - var96)*(var96 - var283)){myvar0= 1;}
else {exit(0);}
if(0 > (var284 - var149)*(var149 - var284)){myvar0= 1;}
else {exit(0);}
if(0 > (var284 - var176)*(var176 - var284)){myvar0= 1;}
else {exit(0);}
if(0 > (var284 - var2)*(var2 - var284)){myvar0= 1;}
else {exit(0);}
if(0 > (var284 - var20)*(var20 - var284)){myvar0= 1;}
else {exit(0);}
if(0 > (var285 - var141)*(var141 - var285)){myvar0= 1;}
else {exit(0);}
if(0 > (var286 - var118)*(var118 - var286)){myvar0= 1;}
else {exit(0);}
if(0 > (var286 - var147)*(var147 - var286)){myvar0= 1;}
else {exit(0);}
if(0 > (var286 - var175)*(var175 - var286)){myvar0= 1;}
else {exit(0);}
if(0 > (var286 - var177)*(var177 - var286)){myvar0= 1;}
else {exit(0);}
if(0 > (var286 - var208)*(var208 - var286)){myvar0= 1;}
else {exit(0);}
if(0 > (var286 - var214)*(var214 - var286)){myvar0= 1;}
else {exit(0);}
if(0 > (var286 - var227)*(var227 - var286)){myvar0= 1;}
else {exit(0);}
if(0 > (var287 - var138)*(var138 - var287)){myvar0= 1;}
else {exit(0);}
if(0 > (var287 - var141)*(var141 - var287)){myvar0= 1;}
else {exit(0);}
if(0 > (var287 - var65)*(var65 - var287)){myvar0= 1;}
else {exit(0);}
if(0 > (var288 - var187)*(var187 - var288)){myvar0= 1;}
else {exit(0);}
if(0 > (var288 - var247)*(var247 - var288)){myvar0= 1;}
else {exit(0);}
if(0 > (var29 - var188)*(var188 - var29)){myvar0= 1;}
else {exit(0);}
if(0 > (var29 - var96)*(var96 - var29)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var105)*(var105 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var160)*(var160 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var175)*(var175 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var177)*(var177 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var227)*(var227 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var23)*(var23 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var239)*(var239 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var286)*(var286 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var30)*(var30 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var60)*(var60 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var177)*(var177 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var208)*(var208 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var227)*(var227 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var239)*(var239 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var187)*(var187 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var230)*(var230 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var261)*(var261 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var288)*(var288 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var38)*(var38 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var49)*(var49 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var50)*(var50 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var56)*(var56 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var98)*(var98 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var145)*(var145 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var207)*(var207 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var26)*(var26 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var35 - var152)*(var152 - var35)){myvar0= 1;}
else {exit(0);}
if(0 > (var35 - var252)*(var252 - var35)){myvar0= 1;}
else {exit(0);}
if(0 > (var35 - var264)*(var264 - var35)){myvar0= 1;}
else {exit(0);}
if(0 > (var35 - var89)*(var89 - var35)){myvar0= 1;}
else {exit(0);}
if(0 > (var35 - var9)*(var9 - var35)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var17)*(var17 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var32)*(var32 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var13)*(var13 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var243)*(var243 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var255)*(var255 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var4)*(var4 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var37 - var69)*(var69 - var37)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var182)*(var182 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var230)*(var230 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var237)*(var237 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var261)*(var261 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var33)*(var33 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var49)*(var49 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var38 - var56)*(var56 - var38)){myvar0= 1;}
else {exit(0);}
if(0 > (var4 - var13)*(var13 - var4)){myvar0= 1;}
else {exit(0);}
if(0 > (var40 - var220)*(var220 - var40)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var10)*(var10 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var130)*(var130 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var14)*(var14 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var152)*(var152 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var180)*(var180 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var235)*(var235 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var35)*(var35 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var87)*(var87 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var9)*(var9 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var121)*(var121 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var143)*(var143 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var218)*(var218 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var223)*(var223 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var244)*(var244 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var85)*(var85 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var131)*(var131 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var159)*(var159 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var62)*(var62 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var97)*(var97 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var44 - var99)*(var99 - var44)){myvar0= 1;}
else {exit(0);}
if(0 > (var45 - var183)*(var183 - var45)){myvar0= 1;}
else {exit(0);}
if(0 > (var45 - var82)*(var82 - var45)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var234)*(var234 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var49 - var237)*(var237 - var49)){myvar0= 1;}
else {exit(0);}
if(0 > (var49 - var33)*(var33 - var49)){myvar0= 1;}
else {exit(0);}
if(0 > (var49 - var98)*(var98 - var49)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var187)*(var187 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var230)*(var230 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var261)*(var261 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var288)*(var288 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var98)*(var98 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var176)*(var176 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var197)*(var197 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var2)*(var2 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var259)*(var259 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var5)*(var5 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var120)*(var120 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var128)*(var128 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var136)*(var136 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var221)*(var221 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var266)*(var266 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var156)*(var156 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var189)*(var189 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var210)*(var210 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var267)*(var267 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var54 - var277)*(var277 - var54)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var161)*(var161 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var61)*(var61 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var66)*(var66 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var97)*(var97 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var55 - var99)*(var99 - var55)){myvar0= 1;}
else {exit(0);}
if(0 > (var56 - var182)*(var182 - var56)){myvar0= 1;}
else {exit(0);}
if(0 > (var56 - var187)*(var187 - var56)){myvar0= 1;}
else {exit(0);}
if(0 > (var56 - var247)*(var247 - var56)){myvar0= 1;}
else {exit(0);}
if(0 > (var56 - var288)*(var288 - var56)){myvar0= 1;}
else {exit(0);}
if(0 > (var56 - var98)*(var98 - var56)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var229)*(var229 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var231)*(var231 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var61)*(var61 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var66)*(var66 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var166)*(var166 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var287)*(var287 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var64)*(var64 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var65)*(var65 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var103)*(var103 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var113)*(var113 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var135)*(var135 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var145)*(var145 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var207)*(var207 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var250)*(var250 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var34)*(var34 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var214)*(var214 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var60 - var239)*(var239 - var60)){myvar0= 1;}
else {exit(0);}
if(0 > (var61 - var229)*(var229 - var61)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var159)*(var159 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var231)*(var231 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var57)*(var57 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var66)*(var66 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var97)*(var97 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var103)*(var103 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var135)*(var135 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var145)*(var145 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var186)*(var186 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var207)*(var207 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var219)*(var219 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var64 - var139)*(var139 - var64)){myvar0= 1;}
else {exit(0);}
if(0 > (var64 - var212)*(var212 - var64)){myvar0= 1;}
else {exit(0);}
if(0 > (var64 - var65)*(var65 - var64)){myvar0= 1;}
else {exit(0);}
if(0 > (var64 - var72)*(var72 - var64)){myvar0= 1;}
else {exit(0);}
if(0 > (var66 - var229)*(var229 - var66)){myvar0= 1;}
else {exit(0);}
if(0 > (var66 - var231)*(var231 - var66)){myvar0= 1;}
else {exit(0);}
if(0 > (var67 - var114)*(var114 - var67)){myvar0= 1;}
else {exit(0);}
if(0 > (var67 - var16)*(var16 - var67)){myvar0= 1;}
else {exit(0);}
if(0 > (var67 - var257)*(var257 - var67)){myvar0= 1;}
else {exit(0);}
if(0 > (var67 - var278)*(var278 - var67)){myvar0= 1;}
else {exit(0);}
if(0 > (var67 - var71)*(var71 - var67)){myvar0= 1;}
else {exit(0);}
if(0 > (var68 - var117)*(var117 - var68)){myvar0= 1;}
else {exit(0);}
if(0 > (var69 - var13)*(var13 - var69)){myvar0= 1;}
else {exit(0);}
if(0 > (var69 - var243)*(var243 - var69)){myvar0= 1;}
else {exit(0);}
if(0 > (var7 - var155)*(var155 - var7)){myvar0= 1;}
else {exit(0);}
if(0 > (var7 - var201)*(var201 - var7)){myvar0= 1;}
else {exit(0);}
if(0 > (var7 - var243)*(var243 - var7)){myvar0= 1;}
else {exit(0);}
if(0 > (var7 - var69)*(var69 - var7)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var191)*(var191 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var220)*(var220 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var258)*(var258 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var39)*(var39 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var40)*(var40 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var70 - var46)*(var46 - var70)){myvar0= 1;}
else {exit(0);}
if(0 > (var71 - var114)*(var114 - var71)){myvar0= 1;}
else {exit(0);}
if(0 > (var71 - var21)*(var21 - var71)){myvar0= 1;}
else {exit(0);}
if(0 > (var71 - var257)*(var257 - var71)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var138)*(var138 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var141)*(var141 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var72 - var285)*(var285 - var72)){myvar0= 1;}
else {exit(0);}
if(0 > (var73 - var179)*(var179 - var73)){myvar0= 1;}
else {exit(0);}
if(0 > (var73 - var183)*(var183 - var73)){myvar0= 1;}
else {exit(0);}
if(0 > (var73 - var184)*(var184 - var73)){myvar0= 1;}
else {exit(0);}
if(0 > (var73 - var280)*(var280 - var73)){myvar0= 1;}
else {exit(0);}
if(0 > (var73 - var82)*(var82 - var73)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var121)*(var121 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var223)*(var223 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var43)*(var43 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var75 - var94)*(var94 - var75)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var120)*(var120 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var126)*(var126 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var128)*(var128 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var136)*(var136 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var221)*(var221 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var232)*(var232 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var266)*(var266 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var76 - var74)*(var74 - var76)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var118)*(var118 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var147)*(var147 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var214)*(var214 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var227)*(var227 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var77 - var60)*(var60 - var77)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var165)*(var165 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var168)*(var168 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var199)*(var199 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var203)*(var203 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var209)*(var209 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var246)*(var246 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var251)*(var251 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var274)*(var274 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var88)*(var88 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var78 - var91)*(var91 - var78)){myvar0= 1;}
else {exit(0);}
if(0 > (var79 - var213)*(var213 - var79)){myvar0= 1;}
else {exit(0);}
if(0 > (var79 - var226)*(var226 - var79)){myvar0= 1;}
else {exit(0);}
if(0 > (var79 - var37)*(var37 - var79)){myvar0= 1;}
else {exit(0);}
if(0 > (var79 - var4)*(var4 - var79)){myvar0= 1;}
else {exit(0);}
if(0 > (var80 - var135)*(var135 - var80)){myvar0= 1;}
else {exit(0);}
if(0 > (var80 - var145)*(var145 - var80)){myvar0= 1;}
else {exit(0);}
if(0 > (var83 - var191)*(var191 - var83)){myvar0= 1;}
else {exit(0);}
if(0 > (var83 - var220)*(var220 - var83)){myvar0= 1;}
else {exit(0);}
if(0 > (var83 - var39)*(var39 - var83)){myvar0= 1;}
else {exit(0);}
if(0 > (var83 - var46)*(var46 - var83)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var155)*(var155 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var195)*(var195 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var226)*(var226 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var276)*(var276 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var69)*(var69 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var7)*(var7 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var84 - var79)*(var79 - var84)){myvar0= 1;}
else {exit(0);}
if(0 > (var85 - var121)*(var121 - var85)){myvar0= 1;}
else {exit(0);}
if(0 > (var85 - var244)*(var244 - var85)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var120)*(var120 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var128)*(var128 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var136)*(var136 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var86 - var232)*(var232 - var86)){myvar0= 1;}
else {exit(0);}
if(0 > (var87 - var180)*(var180 - var87)){myvar0= 1;}
else {exit(0);}
if(0 > (var87 - var264)*(var264 - var87)){myvar0= 1;}
else {exit(0);}
if(0 > (var87 - var35)*(var35 - var87)){myvar0= 1;}
else {exit(0);}
if(0 > (var87 - var89)*(var89 - var87)){myvar0= 1;}
else {exit(0);}
if(0 > (var87 - var9)*(var9 - var87)){myvar0= 1;}
else {exit(0);}
if(0 > (var88 - var158)*(var158 - var88)){myvar0= 1;}
else {exit(0);}
if(0 > (var88 - var167)*(var167 - var88)){myvar0= 1;}
else {exit(0);}
if(0 > (var88 - var168)*(var168 - var88)){myvar0= 1;}
else {exit(0);}
if(0 > (var88 - var246)*(var246 - var88)){myvar0= 1;}
else {exit(0);}
if(0 > (var89 - var152)*(var152 - var89)){myvar0= 1;}
else {exit(0);}
if(0 > (var89 - var180)*(var180 - var89)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var180)*(var180 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var89)*(var89 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var196)*(var196 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var228)*(var228 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var241)*(var241 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var245)*(var245 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var253)*(var253 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var268)*(var268 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var27)*(var27 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var90 - var59)*(var59 - var90)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var165)*(var165 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var167)*(var167 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var168)*(var168 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var193)*(var193 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var199)*(var199 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var209)*(var209 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var274)*(var274 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var91 - var88)*(var88 - var91)){myvar0= 1;}
else {exit(0);}
if(0 > (var92 - var101)*(var101 - var92)){myvar0= 1;}
else {exit(0);}
if(0 > (var92 - var151)*(var151 - var92)){myvar0= 1;}
else {exit(0);}
if(0 > (var92 - var176)*(var176 - var92)){myvar0= 1;}
else {exit(0);}
if(0 > (var92 - var192)*(var192 - var92)){myvar0= 1;}
else {exit(0);}
if(0 > (var92 - var5)*(var5 - var92)){myvar0= 1;}
else {exit(0);}
if(0 > (var93 - var165)*(var165 - var93)){myvar0= 1;}
else {exit(0);}
if(0 > (var93 - var167)*(var167 - var93)){myvar0= 1;}
else {exit(0);}
if(0 > (var93 - var209)*(var209 - var93)){myvar0= 1;}
else {exit(0);}
if(0 > (var93 - var251)*(var251 - var93)){myvar0= 1;}
else {exit(0);}
if(0 > (var93 - var274)*(var274 - var93)){myvar0= 1;}
else {exit(0);}
if(0 > (var93 - var88)*(var88 - var93)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var121)*(var121 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var143)*(var143 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var94 - var85)*(var85 - var94)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var137)*(var137 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var144)*(var144 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var254)*(var254 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var272)*(var272 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var283)*(var283 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var29)*(var29 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var52)*(var52 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var95 - var96)*(var96 - var95)){myvar0= 1;}
else {exit(0);}
if(0 > (var96 - var137)*(var137 - var96)){myvar0= 1;}
else {exit(0);}
if(0 > (var98 - var182)*(var182 - var98)){myvar0= 1;}
else {exit(0);}
if(0 > (var98 - var187)*(var187 - var98)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var161)*(var161 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var229)*(var229 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var282)*(var282 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var61)*(var61 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var62)*(var62 - var99)){myvar0= 1;}
else {exit(0);}
if(0 > (var99 - var66)*(var66 - var99)){myvar0= 1;}
else {exit(0);}
if(var0 != var120){myvar0= 1;}
else {exit(0);}
if(var0 != var53){myvar0= 1;}
else {exit(0);}
if(var0 != var86){myvar0= 1;}
else {exit(0);}
if(var1 != var126){myvar0= 1;}
else {exit(0);}
if(var10 != var235){myvar0= 1;}
else {exit(0);}
if(var10 != var264){myvar0= 1;}
else {exit(0);}
if(var10 != var89){myvar0= 1;}
else {exit(0);}
if(var10 != var9){myvar0= 1;}
else {exit(0);}
if(var100 != var200){myvar0= 1;}
else {exit(0);}
if(var100 != var258){myvar0= 1;}
else {exit(0);}
if(var100 != var83){myvar0= 1;}
else {exit(0);}
if(var101 != var151){myvar0= 1;}
else {exit(0);}
if(var101 != var176){myvar0= 1;}
else {exit(0);}
if(var101 != var192){myvar0= 1;}
else {exit(0);}
if(var102 != var17){myvar0= 1;}
else {exit(0);}
if(var102 != var210){myvar0= 1;}
else {exit(0);}
if(var102 != var262){myvar0= 1;}
else {exit(0);}
if(var102 != var267){myvar0= 1;}
else {exit(0);}
if(var102 != var277){myvar0= 1;}
else {exit(0);}
if(var102 != var28){myvar0= 1;}
else {exit(0);}
if(var103 != var113){myvar0= 1;}
else {exit(0);}
if(var103 != var129){myvar0= 1;}
else {exit(0);}
if(var103 != var135){myvar0= 1;}
else {exit(0);}
if(var103 != var145){myvar0= 1;}
else {exit(0);}
if(var103 != var186){myvar0= 1;}
else {exit(0);}
if(var103 != var250){myvar0= 1;}
else {exit(0);}
if(var103 != var26){myvar0= 1;}
else {exit(0);}
if(var103 != var80){myvar0= 1;}
else {exit(0);}
if(var104 != var124){myvar0= 1;}
else {exit(0);}
if(var104 != var133){myvar0= 1;}
else {exit(0);}
if(var104 != var179){myvar0= 1;}
else {exit(0);}
if(var104 != var215){myvar0= 1;}
else {exit(0);}
if(var104 != var242){myvar0= 1;}
else {exit(0);}
if(var104 != var279){myvar0= 1;}
else {exit(0);}
if(var104 != var45){myvar0= 1;}
else {exit(0);}
if(var104 != var47){myvar0= 1;}
else {exit(0);}
if(var104 != var82){myvar0= 1;}
else {exit(0);}
if(var105 != var147){myvar0= 1;}
else {exit(0);}
if(var105 != var177){myvar0= 1;}
else {exit(0);}
if(var105 != var208){myvar0= 1;}
else {exit(0);}
if(var105 != var227){myvar0= 1;}
else {exit(0);}
if(var105 != var239){myvar0= 1;}
else {exit(0);}
if(var105 != var30){myvar0= 1;}
else {exit(0);}
if(var105 != var60){myvar0= 1;}
else {exit(0);}
if(var106 != var11){myvar0= 1;}
else {exit(0);}
if(var106 != var162){myvar0= 1;}
else {exit(0);}
if(var106 != var70){myvar0= 1;}
else {exit(0);}
if(var106 != var83){myvar0= 1;}
else {exit(0);}
if(var107 != var109){myvar0= 1;}
else {exit(0);}
if(var107 != var119){myvar0= 1;}
else {exit(0);}
if(var107 != var121){myvar0= 1;}
else {exit(0);}
if(var107 != var143){myvar0= 1;}
else {exit(0);}
if(var107 != var223){myvar0= 1;}
else {exit(0);}
if(var107 != var43){myvar0= 1;}
else {exit(0);}
if(var107 != var75){myvar0= 1;}
else {exit(0);}
if(var107 != var85){myvar0= 1;}
else {exit(0);}
if(var107 != var94){myvar0= 1;}
else {exit(0);}
if(var109 != var143){myvar0= 1;}
else {exit(0);}
if(var109 != var218){myvar0= 1;}
else {exit(0);}
if(var109 != var43){myvar0= 1;}
else {exit(0);}
if(var109 != var75){myvar0= 1;}
else {exit(0);}
if(var11 != var200){myvar0= 1;}
else {exit(0);}
if(var11 != var249){myvar0= 1;}
else {exit(0);}
if(var11 != var70){myvar0= 1;}
else {exit(0);}
if(var11 != var83){myvar0= 1;}
else {exit(0);}
if(var110 != var142){myvar0= 1;}
else {exit(0);}
if(var110 != var188){myvar0= 1;}
else {exit(0);}
if(var110 != var52){myvar0= 1;}
else {exit(0);}
if(var112 != var114){myvar0= 1;}
else {exit(0);}
if(var112 != var140){myvar0= 1;}
else {exit(0);}
if(var112 != var148){myvar0= 1;}
else {exit(0);}
if(var112 != var278){myvar0= 1;}
else {exit(0);}
if(var112 != var67){myvar0= 1;}
else {exit(0);}
if(var112 != var71){myvar0= 1;}
else {exit(0);}
if(var113 != var135){myvar0= 1;}
else {exit(0);}
if(var113 != var186){myvar0= 1;}
else {exit(0);}
if(var113 != var34){myvar0= 1;}
else {exit(0);}
if(var113 != var80){myvar0= 1;}
else {exit(0);}
if(var114 != var140){myvar0= 1;}
else {exit(0);}
if(var114 != var278){myvar0= 1;}
else {exit(0);}
if(var115 != var138){myvar0= 1;}
else {exit(0);}
if(var115 != var139){myvar0= 1;}
else {exit(0);}
if(var115 != var190){myvar0= 1;}
else {exit(0);}
if(var115 != var212){myvar0= 1;}
else {exit(0);}
if(var115 != var287){myvar0= 1;}
else {exit(0);}
if(var115 != var65){myvar0= 1;}
else {exit(0);}
if(var115 != var72){myvar0= 1;}
else {exit(0);}
if(var116 != var117){myvar0= 1;}
else {exit(0);}
if(var116 != var171){myvar0= 1;}
else {exit(0);}
if(var116 != var245){myvar0= 1;}
else {exit(0);}
if(var116 != var27){myvar0= 1;}
else {exit(0);}
if(var116 != var48){myvar0= 1;}
else {exit(0);}
if(var116 != var59){myvar0= 1;}
else {exit(0);}
if(var117 != var245){myvar0= 1;}
else {exit(0);}
if(var117 != var48){myvar0= 1;}
else {exit(0);}
if(var117 != var59){myvar0= 1;}
else {exit(0);}
if(var121 != var244){myvar0= 1;}
else {exit(0);}
if(var123 != var110){myvar0= 1;}
else {exit(0);}
if(var123 != var185){myvar0= 1;}
else {exit(0);}
if(var123 != var19){myvar0= 1;}
else {exit(0);}
if(var123 != var211){myvar0= 1;}
else {exit(0);}
if(var123 != var254){myvar0= 1;}
else {exit(0);}
if(var123 != var272){myvar0= 1;}
else {exit(0);}
if(var123 != var52){myvar0= 1;}
else {exit(0);}
if(var123 != var96){myvar0= 1;}
else {exit(0);}
if(var124 != var179){myvar0= 1;}
else {exit(0);}
if(var124 != var183){myvar0= 1;}
else {exit(0);}
if(var124 != var280){myvar0= 1;}
else {exit(0);}
if(var124 != var45){myvar0= 1;}
else {exit(0);}
if(var124 != var47){myvar0= 1;}
else {exit(0);}
if(var124 != var82){myvar0= 1;}
else {exit(0);}
if(var125 != var156){myvar0= 1;}
else {exit(0);}
if(var125 != var174){myvar0= 1;}
else {exit(0);}
if(var125 != var189){myvar0= 1;}
else {exit(0);}
if(var125 != var210){myvar0= 1;}
else {exit(0);}
if(var125 != var262){myvar0= 1;}
else {exit(0);}
if(var125 != var267){myvar0= 1;}
else {exit(0);}
if(var125 != var28){myvar0= 1;}
else {exit(0);}
if(var125 != var36){myvar0= 1;}
else {exit(0);}
if(var126 != var221){myvar0= 1;}
else {exit(0);}
if(var126 != var74){myvar0= 1;}
else {exit(0);}
if(var128 != var126){myvar0= 1;}
else {exit(0);}
if(var128 != var266){myvar0= 1;}
else {exit(0);}
if(var128 != var74){myvar0= 1;}
else {exit(0);}
if(var129 != var113){myvar0= 1;}
else {exit(0);}
if(var129 != var145){myvar0= 1;}
else {exit(0);}
if(var129 != var186){myvar0= 1;}
else {exit(0);}
if(var129 != var207){myvar0= 1;}
else {exit(0);}
if(var129 != var217){myvar0= 1;}
else {exit(0);}
if(var129 != var250){myvar0= 1;}
else {exit(0);}
if(var129 != var26){myvar0= 1;}
else {exit(0);}
if(var129 != var80){myvar0= 1;}
else {exit(0);}
if(var130 != var264){myvar0= 1;}
else {exit(0);}
if(var130 != var87){myvar0= 1;}
else {exit(0);}
if(var131 != var161){myvar0= 1;}
else {exit(0);}
if(var131 != var229){myvar0= 1;}
else {exit(0);}
if(var131 != var282){myvar0= 1;}
else {exit(0);}
if(var131 != var62){myvar0= 1;}
else {exit(0);}
if(var131 != var97){myvar0= 1;}
else {exit(0);}
if(var133 != var124){myvar0= 1;}
else {exit(0);}
if(var133 != var183){myvar0= 1;}
else {exit(0);}
if(var133 != var184){myvar0= 1;}
else {exit(0);}
if(var133 != var215){myvar0= 1;}
else {exit(0);}
if(var133 != var45){myvar0= 1;}
else {exit(0);}
if(var133 != var47){myvar0= 1;}
else {exit(0);}
if(var133 != var73){myvar0= 1;}
else {exit(0);}
if(var134 != var10){myvar0= 1;}
else {exit(0);}
if(var134 != var130){myvar0= 1;}
else {exit(0);}
if(var134 != var14){myvar0= 1;}
else {exit(0);}
if(var134 != var152){myvar0= 1;}
else {exit(0);}
if(var134 != var204){myvar0= 1;}
else {exit(0);}
if(var134 != var252){myvar0= 1;}
else {exit(0);}
if(var134 != var264){myvar0= 1;}
else {exit(0);}
if(var134 != var35){myvar0= 1;}
else {exit(0);}
if(var134 != var87){myvar0= 1;}
else {exit(0);}
if(var134 != var89){myvar0= 1;}
else {exit(0);}
if(var135 != var186){myvar0= 1;}
else {exit(0);}
if(var135 != var207){myvar0= 1;}
else {exit(0);}
if(var136 != var120){myvar0= 1;}
else {exit(0);}
if(var136 != var126){myvar0= 1;}
else {exit(0);}
if(var136 != var221){myvar0= 1;}
else {exit(0);}
if(var136 != var232){myvar0= 1;}
else {exit(0);}
if(var136 != var74){myvar0= 1;}
else {exit(0);}
if(var139 != var138){myvar0= 1;}
else {exit(0);}
if(var139 != var166){myvar0= 1;}
else {exit(0);}
if(var139 != var212){myvar0= 1;}
else {exit(0);}
if(var139 != var285){myvar0= 1;}
else {exit(0);}
if(var139 != var72){myvar0= 1;}
else {exit(0);}
if(var14 != var152){myvar0= 1;}
else {exit(0);}
if(var14 != var235){myvar0= 1;}
else {exit(0);}
if(var14 != var252){myvar0= 1;}
else {exit(0);}
if(var14 != var264){myvar0= 1;}
else {exit(0);}
if(var14 != var35){myvar0= 1;}
else {exit(0);}
if(var141 != var65){myvar0= 1;}
else {exit(0);}
if(var142 != var188){myvar0= 1;}
else {exit(0);}
if(var142 != var19){myvar0= 1;}
else {exit(0);}
if(var142 != var272){myvar0= 1;}
else {exit(0);}
if(var142 != var283){myvar0= 1;}
else {exit(0);}
if(var142 != var96){myvar0= 1;}
else {exit(0);}
if(var143 != var121){myvar0= 1;}
else {exit(0);}
if(var143 != var244){myvar0= 1;}
else {exit(0);}
if(var144 != var110){myvar0= 1;}
else {exit(0);}
if(var144 != var254){myvar0= 1;}
else {exit(0);}
if(var144 != var272){myvar0= 1;}
else {exit(0);}
if(var144 != var52){myvar0= 1;}
else {exit(0);}
if(var144 != var96){myvar0= 1;}
else {exit(0);}
if(var146 != var170){myvar0= 1;}
else {exit(0);}
if(var146 != var21){myvar0= 1;}
else {exit(0);}
if(var146 != var24){myvar0= 1;}
else {exit(0);}
if(var146 != var257){myvar0= 1;}
else {exit(0);}
if(var146 != var270){myvar0= 1;}
else {exit(0);}
if(var146 != var71){myvar0= 1;}
else {exit(0);}
if(var147 != var118){myvar0= 1;}
else {exit(0);}
if(var148 != var114){myvar0= 1;}
else {exit(0);}
if(var148 != var140){myvar0= 1;}
else {exit(0);}
if(var148 != var170){myvar0= 1;}
else {exit(0);}
if(var148 != var21){myvar0= 1;}
else {exit(0);}
if(var149 != var101){myvar0= 1;}
else {exit(0);}
if(var149 != var151){myvar0= 1;}
else {exit(0);}
if(var149 != var259){myvar0= 1;}
else {exit(0);}
if(var149 != var5){myvar0= 1;}
else {exit(0);}
if(var149 != var92){myvar0= 1;}
else {exit(0);}
if(var151 != var5){myvar0= 1;}
else {exit(0);}
if(var152 != var180){myvar0= 1;}
else {exit(0);}
if(var153 != var169){myvar0= 1;}
else {exit(0);}
if(var153 != var187){myvar0= 1;}
else {exit(0);}
if(var153 != var237){myvar0= 1;}
else {exit(0);}
if(var153 != var261){myvar0= 1;}
else {exit(0);}
if(var153 != var33){myvar0= 1;}
else {exit(0);}
if(var153 != var38){myvar0= 1;}
else {exit(0);}
if(var153 != var50){myvar0= 1;}
else {exit(0);}
if(var154 != var106){myvar0= 1;}
else {exit(0);}
if(var154 != var11){myvar0= 1;}
else {exit(0);}
if(var154 != var162){myvar0= 1;}
else {exit(0);}
if(var154 != var191){myvar0= 1;}
else {exit(0);}
if(var154 != var200){myvar0= 1;}
else {exit(0);}
if(var154 != var220){myvar0= 1;}
else {exit(0);}
if(var154 != var83){myvar0= 1;}
else {exit(0);}
if(var155 != var255){myvar0= 1;}
else {exit(0);}
if(var155 != var4){myvar0= 1;}
else {exit(0);}
if(var156 != var17){myvar0= 1;}
else {exit(0);}
if(var156 != var32){myvar0= 1;}
else {exit(0);}
if(var158 != var193){myvar0= 1;}
else {exit(0);}
if(var158 != var246){myvar0= 1;}
else {exit(0);}
if(var159 != var229){myvar0= 1;}
else {exit(0);}
if(var159 != var231){myvar0= 1;}
else {exit(0);}
if(var159 != var61){myvar0= 1;}
else {exit(0);}
if(var159 != var97){myvar0= 1;}
else {exit(0);}
if(var16 != var122){myvar0= 1;}
else {exit(0);}
if(var16 != var140){myvar0= 1;}
else {exit(0);}
if(var160 != var118){myvar0= 1;}
else {exit(0);}
if(var160 != var147){myvar0= 1;}
else {exit(0);}
if(var160 != var175){myvar0= 1;}
else {exit(0);}
if(var160 != var208){myvar0= 1;}
else {exit(0);}
if(var160 != var227){myvar0= 1;}
else {exit(0);}
if(var160 != var239){myvar0= 1;}
else {exit(0);}
if(var160 != var30){myvar0= 1;}
else {exit(0);}
if(var160 != var60){myvar0= 1;}
else {exit(0);}
if(var161 != var231){myvar0= 1;}
else {exit(0);}
if(var161 != var61){myvar0= 1;}
else {exit(0);}
if(var162 != var191){myvar0= 1;}
else {exit(0);}
if(var162 != var200){myvar0= 1;}
else {exit(0);}
if(var163 != var201){myvar0= 1;}
else {exit(0);}
if(var163 != var213){myvar0= 1;}
else {exit(0);}
if(var163 != var226){myvar0= 1;}
else {exit(0);}
if(var163 != var243){myvar0= 1;}
else {exit(0);}
if(var163 != var255){myvar0= 1;}
else {exit(0);}
if(var163 != var37){myvar0= 1;}
else {exit(0);}
if(var163 != var4){myvar0= 1;}
else {exit(0);}
if(var163 != var7){myvar0= 1;}
else {exit(0);}
if(var163 != var79){myvar0= 1;}
else {exit(0);}
if(var166 != var287){myvar0= 1;}
else {exit(0);}
if(var166 != var65){myvar0= 1;}
else {exit(0);}
if(var166 != var72){myvar0= 1;}
else {exit(0);}
if(var168 != var167){myvar0= 1;}
else {exit(0);}
if(var168 != var193){myvar0= 1;}
else {exit(0);}
if(var169 != var182){myvar0= 1;}
else {exit(0);}
if(var169 != var230){myvar0= 1;}
else {exit(0);}
if(var169 != var261){myvar0= 1;}
else {exit(0);}
if(var169 != var288){myvar0= 1;}
else {exit(0);}
if(var169 != var33){myvar0= 1;}
else {exit(0);}
if(var169 != var50){myvar0= 1;}
else {exit(0);}
if(var170 != var140){myvar0= 1;}
else {exit(0);}
if(var170 != var16){myvar0= 1;}
else {exit(0);}
if(var170 != var24){myvar0= 1;}
else {exit(0);}
if(var170 != var278){myvar0= 1;}
else {exit(0);}
if(var171 != var59){myvar0= 1;}
else {exit(0);}
if(var173 != var116){myvar0= 1;}
else {exit(0);}
if(var173 != var117){myvar0= 1;}
else {exit(0);}
if(var173 != var241){myvar0= 1;}
else {exit(0);}
if(var173 != var245){myvar0= 1;}
else {exit(0);}
if(var173 != var48){myvar0= 1;}
else {exit(0);}
if(var173 != var68){myvar0= 1;}
else {exit(0);}
if(var174 != var210){myvar0= 1;}
else {exit(0);}
if(var174 != var32){myvar0= 1;}
else {exit(0);}
if(var174 != var36){myvar0= 1;}
else {exit(0);}
if(var175 != var118){myvar0= 1;}
else {exit(0);}
if(var175 != var214){myvar0= 1;}
else {exit(0);}
if(var176 != var5){myvar0= 1;}
else {exit(0);}
if(var178 != var102){myvar0= 1;}
else {exit(0);}
if(var178 != var125){myvar0= 1;}
else {exit(0);}
if(var178 != var156){myvar0= 1;}
else {exit(0);}
if(var178 != var17){myvar0= 1;}
else {exit(0);}
if(var178 != var210){myvar0= 1;}
else {exit(0);}
if(var178 != var262){myvar0= 1;}
else {exit(0);}
if(var178 != var267){myvar0= 1;}
else {exit(0);}
if(var178 != var277){myvar0= 1;}
else {exit(0);}
if(var178 != var36){myvar0= 1;}
else {exit(0);}
if(var178 != var54){myvar0= 1;}
else {exit(0);}
if(var181 != var120){myvar0= 1;}
else {exit(0);}
if(var181 != var126){myvar0= 1;}
else {exit(0);}
if(var181 != var128){myvar0= 1;}
else {exit(0);}
if(var181 != var53){myvar0= 1;}
else {exit(0);}
if(var181 != var74){myvar0= 1;}
else {exit(0);}
if(var181 != var86){myvar0= 1;}
else {exit(0);}
if(var182 != var33){myvar0= 1;}
else {exit(0);}
if(var183 != var179){myvar0= 1;}
else {exit(0);}
if(var184 != var183){myvar0= 1;}
else {exit(0);}
if(var185 != var142){myvar0= 1;}
else {exit(0);}
if(var185 != var144){myvar0= 1;}
else {exit(0);}
if(var185 != var188){myvar0= 1;}
else {exit(0);}
if(var185 != var211){myvar0= 1;}
else {exit(0);}
if(var185 != var272){myvar0= 1;}
else {exit(0);}
if(var185 != var283){myvar0= 1;}
else {exit(0);}
if(var185 != var29){myvar0= 1;}
else {exit(0);}
if(var186 != var207){myvar0= 1;}
else {exit(0);}
if(var187 != var33){myvar0= 1;}
else {exit(0);}
if(var189 != var17){myvar0= 1;}
else {exit(0);}
if(var189 != var36){myvar0= 1;}
else {exit(0);}
if(var19 != var52){myvar0= 1;}
else {exit(0);}
if(var190 != var139){myvar0= 1;}
else {exit(0);}
if(var190 != var141){myvar0= 1;}
else {exit(0);}
if(var190 != var166){myvar0= 1;}
else {exit(0);}
if(var190 != var58){myvar0= 1;}
else {exit(0);}
if(var190 != var65){myvar0= 1;}
else {exit(0);}
if(var190 != var72){myvar0= 1;}
else {exit(0);}
if(var191 != var220){myvar0= 1;}
else {exit(0);}
if(var194 != var119){myvar0= 1;}
else {exit(0);}
if(var194 != var121){myvar0= 1;}
else {exit(0);}
if(var194 != var218){myvar0= 1;}
else {exit(0);}
if(var194 != var43){myvar0= 1;}
else {exit(0);}
if(var194 != var94){myvar0= 1;}
else {exit(0);}
if(var195 != var13){myvar0= 1;}
else {exit(0);}
if(var195 != var243){myvar0= 1;}
else {exit(0);}
if(var195 != var255){myvar0= 1;}
else {exit(0);}
if(var195 != var37){myvar0= 1;}
else {exit(0);}
if(var195 != var4){myvar0= 1;}
else {exit(0);}
if(var195 != var69){myvar0= 1;}
else {exit(0);}
if(var196 != var171){myvar0= 1;}
else {exit(0);}
if(var196 != var228){myvar0= 1;}
else {exit(0);}
if(var196 != var241){myvar0= 1;}
else {exit(0);}
if(var196 != var245){myvar0= 1;}
else {exit(0);}
if(var197 != var149){myvar0= 1;}
else {exit(0);}
if(var197 != var151){myvar0= 1;}
else {exit(0);}
if(var197 != var176){myvar0= 1;}
else {exit(0);}
if(var197 != var192){myvar0= 1;}
else {exit(0);}
if(var197 != var2){myvar0= 1;}
else {exit(0);}
if(var197 != var20){myvar0= 1;}
else {exit(0);}
if(var197 != var284){myvar0= 1;}
else {exit(0);}
if(var197 != var5){myvar0= 1;}
else {exit(0);}
if(var197 != var92){myvar0= 1;}
else {exit(0);}
if(var198 != var138){myvar0= 1;}
else {exit(0);}
if(var198 != var139){myvar0= 1;}
else {exit(0);}
if(var198 != var285){myvar0= 1;}
else {exit(0);}
if(var198 != var287){myvar0= 1;}
else {exit(0);}
if(var198 != var58){myvar0= 1;}
else {exit(0);}
if(var198 != var64){myvar0= 1;}
else {exit(0);}
if(var199 != var158){myvar0= 1;}
else {exit(0);}
if(var199 != var165){myvar0= 1;}
else {exit(0);}
if(var199 != var193){myvar0= 1;}
else {exit(0);}
if(var199 != var246){myvar0= 1;}
else {exit(0);}
if(var199 != var251){myvar0= 1;}
else {exit(0);}
if(var2 != var101){myvar0= 1;}
else {exit(0);}
if(var2 != var5){myvar0= 1;}
else {exit(0);}
if(var20 != var101){myvar0= 1;}
else {exit(0);}
if(var20 != var149){myvar0= 1;}
else {exit(0);}
if(var20 != var151){myvar0= 1;}
else {exit(0);}
if(var20 != var192){myvar0= 1;}
else {exit(0);}
if(var20 != var2){myvar0= 1;}
else {exit(0);}
if(var20 != var233){myvar0= 1;}
else {exit(0);}
if(var20 != var5){myvar0= 1;}
else {exit(0);}
if(var200 != var220){myvar0= 1;}
else {exit(0);}
if(var200 != var40){myvar0= 1;}
else {exit(0);}
if(var200 != var46){myvar0= 1;}
else {exit(0);}
if(var200 != var83){myvar0= 1;}
else {exit(0);}
if(var201 != var155){myvar0= 1;}
else {exit(0);}
if(var201 != var213){myvar0= 1;}
else {exit(0);}
if(var201 != var226){myvar0= 1;}
else {exit(0);}
if(var201 != var243){myvar0= 1;}
else {exit(0);}
if(var201 != var255){myvar0= 1;}
else {exit(0);}
if(var201 != var4){myvar0= 1;}
else {exit(0);}
if(var201 != var69){myvar0= 1;}
else {exit(0);}
if(var202 != var130){myvar0= 1;}
else {exit(0);}
if(var202 != var14){myvar0= 1;}
else {exit(0);}
if(var202 != var204){myvar0= 1;}
else {exit(0);}
if(var202 != var264){myvar0= 1;}
else {exit(0);}
if(var202 != var42){myvar0= 1;}
else {exit(0);}
if(var202 != var9){myvar0= 1;}
else {exit(0);}
if(var203 != var158){myvar0= 1;}
else {exit(0);}
if(var203 != var165){myvar0= 1;}
else {exit(0);}
if(var203 != var168){myvar0= 1;}
else {exit(0);}
if(var203 != var193){myvar0= 1;}
else {exit(0);}
if(var203 != var246){myvar0= 1;}
else {exit(0);}
if(var203 != var251){myvar0= 1;}
else {exit(0);}
if(var203 != var88){myvar0= 1;}
else {exit(0);}
if(var204 != var10){myvar0= 1;}
else {exit(0);}
if(var204 != var180){myvar0= 1;}
else {exit(0);}
if(var204 != var235){myvar0= 1;}
else {exit(0);}
if(var204 != var42){myvar0= 1;}
else {exit(0);}
if(var204 != var89){myvar0= 1;}
else {exit(0);}
if(var205 != var158){myvar0= 1;}
else {exit(0);}
if(var205 != var165){myvar0= 1;}
else {exit(0);}
if(var205 != var167){myvar0= 1;}
else {exit(0);}
if(var205 != var168){myvar0= 1;}
else {exit(0);}
if(var205 != var193){myvar0= 1;}
else {exit(0);}
if(var205 != var203){myvar0= 1;}
else {exit(0);}
if(var205 != var246){myvar0= 1;}
else {exit(0);}
if(var205 != var274){myvar0= 1;}
else {exit(0);}
if(var205 != var88){myvar0= 1;}
else {exit(0);}
if(var206 != var101){myvar0= 1;}
else {exit(0);}
if(var206 != var176){myvar0= 1;}
else {exit(0);}
if(var206 != var2){myvar0= 1;}
else {exit(0);}
if(var206 != var20){myvar0= 1;}
else {exit(0);}
if(var206 != var233){myvar0= 1;}
else {exit(0);}
if(var206 != var5){myvar0= 1;}
else {exit(0);}
if(var206 != var92){myvar0= 1;}
else {exit(0);}
if(var208 != var118){myvar0= 1;}
else {exit(0);}
if(var208 != var177){myvar0= 1;}
else {exit(0);}
if(var208 != var214){myvar0= 1;}
else {exit(0);}
if(var209 != var158){myvar0= 1;}
else {exit(0);}
if(var209 != var167){myvar0= 1;}
else {exit(0);}
if(var209 != var251){myvar0= 1;}
else {exit(0);}
if(var209 != var88){myvar0= 1;}
else {exit(0);}
if(var21 != var114){myvar0= 1;}
else {exit(0);}
if(var21 != var122){myvar0= 1;}
else {exit(0);}
if(var21 != var16){myvar0= 1;}
else {exit(0);}
if(var21 != var24){myvar0= 1;}
else {exit(0);}
if(var210 != var17){myvar0= 1;}
else {exit(0);}
if(var210 != var189){myvar0= 1;}
else {exit(0);}
if(var211 != var110){myvar0= 1;}
else {exit(0);}
if(var211 != var137){myvar0= 1;}
else {exit(0);}
if(var211 != var142){myvar0= 1;}
else {exit(0);}
if(var211 != var188){myvar0= 1;}
else {exit(0);}
if(var211 != var19){myvar0= 1;}
else {exit(0);}
if(var211 != var29){myvar0= 1;}
else {exit(0);}
if(var211 != var52){myvar0= 1;}
else {exit(0);}
if(var211 != var96){myvar0= 1;}
else {exit(0);}
if(var213 != var13){myvar0= 1;}
else {exit(0);}
if(var213 != var226){myvar0= 1;}
else {exit(0);}
if(var213 != var243){myvar0= 1;}
else {exit(0);}
if(var214 != var147){myvar0= 1;}
else {exit(0);}
if(var214 != var177){myvar0= 1;}
else {exit(0);}
if(var215 != var124){myvar0= 1;}
else {exit(0);}
if(var215 != var179){myvar0= 1;}
else {exit(0);}
if(var215 != var183){myvar0= 1;}
else {exit(0);}
if(var215 != var242){myvar0= 1;}
else {exit(0);}
if(var215 != var73){myvar0= 1;}
else {exit(0);}
if(var216 != var176){myvar0= 1;}
else {exit(0);}
if(var216 != var2){myvar0= 1;}
else {exit(0);}
if(var216 != var259){myvar0= 1;}
else {exit(0);}
if(var217 != var135){myvar0= 1;}
else {exit(0);}
if(var217 != var145){myvar0= 1;}
else {exit(0);}
if(var217 != var186){myvar0= 1;}
else {exit(0);}
if(var217 != var207){myvar0= 1;}
else {exit(0);}
if(var218 != var119){myvar0= 1;}
else {exit(0);}
if(var218 != var244){myvar0= 1;}
else {exit(0);}
if(var219 != var186){myvar0= 1;}
else {exit(0);}
if(var219 != var207){myvar0= 1;}
else {exit(0);}
if(var219 != var217){myvar0= 1;}
else {exit(0);}
if(var219 != var250){myvar0= 1;}
else {exit(0);}
if(var22 != var104){myvar0= 1;}
else {exit(0);}
if(var22 != var124){myvar0= 1;}
else {exit(0);}
if(var22 != var184){myvar0= 1;}
else {exit(0);}
if(var221 != var74){myvar0= 1;}
else {exit(0);}
if(var222 != var112){myvar0= 1;}
else {exit(0);}
if(var222 != var114){myvar0= 1;}
else {exit(0);}
if(var222 != var148){myvar0= 1;}
else {exit(0);}
if(var222 != var257){myvar0= 1;}
else {exit(0);}
if(var222 != var71){myvar0= 1;}
else {exit(0);}
if(var223 != var244){myvar0= 1;}
else {exit(0);}
if(var224 != var125){myvar0= 1;}
else {exit(0);}
if(var224 != var17){myvar0= 1;}
else {exit(0);}
if(var224 != var189){myvar0= 1;}
else {exit(0);}
if(var224 != var210){myvar0= 1;}
else {exit(0);}
if(var224 != var262){myvar0= 1;}
else {exit(0);}
if(var224 != var32){myvar0= 1;}
else {exit(0);}
if(var225 != var100){myvar0= 1;}
else {exit(0);}
if(var225 != var106){myvar0= 1;}
else {exit(0);}
if(var225 != var11){myvar0= 1;}
else {exit(0);}
if(var225 != var154){myvar0= 1;}
else {exit(0);}
if(var225 != var162){myvar0= 1;}
else {exit(0);}
if(var225 != var258){myvar0= 1;}
else {exit(0);}
if(var225 != var83){myvar0= 1;}
else {exit(0);}
if(var226 != var13){myvar0= 1;}
else {exit(0);}
if(var226 != var4){myvar0= 1;}
else {exit(0);}
if(var227 != var118){myvar0= 1;}
else {exit(0);}
if(var227 != var177){myvar0= 1;}
else {exit(0);}
if(var227 != var239){myvar0= 1;}
else {exit(0);}
if(var228 != var117){myvar0= 1;}
else {exit(0);}
if(var228 != var234){myvar0= 1;}
else {exit(0);}
if(var228 != var241){myvar0= 1;}
else {exit(0);}
if(var228 != var245){myvar0= 1;}
else {exit(0);}
if(var228 != var268){myvar0= 1;}
else {exit(0);}
if(var228 != var27){myvar0= 1;}
else {exit(0);}
if(var228 != var48){myvar0= 1;}
else {exit(0);}
if(var229 != var97){myvar0= 1;}
else {exit(0);}
if(var23 != var175){myvar0= 1;}
else {exit(0);}
if(var23 != var208){myvar0= 1;}
else {exit(0);}
if(var23 != var239){myvar0= 1;}
else {exit(0);}
if(var23 != var60){myvar0= 1;}
else {exit(0);}
if(var23 != var77){myvar0= 1;}
else {exit(0);}
if(var230 != var182){myvar0= 1;}
else {exit(0);}
if(var230 != var187){myvar0= 1;}
else {exit(0);}
if(var230 != var237){myvar0= 1;}
else {exit(0);}
if(var230 != var247){myvar0= 1;}
else {exit(0);}
if(var230 != var288){myvar0= 1;}
else {exit(0);}
if(var230 != var33){myvar0= 1;}
else {exit(0);}
if(var230 != var49){myvar0= 1;}
else {exit(0);}
if(var230 != var56){myvar0= 1;}
else {exit(0);}
if(var231 != var97){myvar0= 1;}
else {exit(0);}
if(var232 != var1){myvar0= 1;}
else {exit(0);}
if(var232 != var120){myvar0= 1;}
else {exit(0);}
if(var232 != var126){myvar0= 1;}
else {exit(0);}
if(var233 != var101){myvar0= 1;}
else {exit(0);}
if(var233 != var176){myvar0= 1;}
else {exit(0);}
if(var233 != var192){myvar0= 1;}
else {exit(0);}
if(var233 != var5){myvar0= 1;}
else {exit(0);}
if(var234 != var59){myvar0= 1;}
else {exit(0);}
if(var235 != var180){myvar0= 1;}
else {exit(0);}
if(var235 != var252){myvar0= 1;}
else {exit(0);}
if(var235 != var264){myvar0= 1;}
else {exit(0);}
if(var235 != var87){myvar0= 1;}
else {exit(0);}
if(var235 != var89){myvar0= 1;}
else {exit(0);}
if(var235 != var9){myvar0= 1;}
else {exit(0);}
if(var237 != var182){myvar0= 1;}
else {exit(0);}
if(var237 != var56){myvar0= 1;}
else {exit(0);}
if(var237 != var98){myvar0= 1;}
else {exit(0);}
if(var238 != var43){myvar0= 1;}
else {exit(0);}
if(var238 != var75){myvar0= 1;}
else {exit(0);}
if(var238 != var94){myvar0= 1;}
else {exit(0);}
if(var239 != var118){myvar0= 1;}
else {exit(0);}
if(var239 != var147){myvar0= 1;}
else {exit(0);}
if(var239 != var214){myvar0= 1;}
else {exit(0);}
if(var24 != var140){myvar0= 1;}
else {exit(0);}
if(var24 != var16){myvar0= 1;}
else {exit(0);}
if(var240 != var131){myvar0= 1;}
else {exit(0);}
if(var240 != var229){myvar0= 1;}
else {exit(0);}
if(var240 != var231){myvar0= 1;}
else {exit(0);}
if(var240 != var57){myvar0= 1;}
else {exit(0);}
if(var240 != var62){myvar0= 1;}
else {exit(0);}
if(var240 != var66){myvar0= 1;}
else {exit(0);}
if(var240 != var97){myvar0= 1;}
else {exit(0);}
if(var240 != var99){myvar0= 1;}
else {exit(0);}
if(var241 != var116){myvar0= 1;}
else {exit(0);}
if(var241 != var268){myvar0= 1;}
else {exit(0);}
if(var241 != var27){myvar0= 1;}
else {exit(0);}
if(var241 != var48){myvar0= 1;}
else {exit(0);}
if(var241 != var59){myvar0= 1;}
else {exit(0);}
if(var245 != var234){myvar0= 1;}
else {exit(0);}
if(var245 != var59){myvar0= 1;}
else {exit(0);}
if(var246 != var165){myvar0= 1;}
else {exit(0);}
if(var246 != var193){myvar0= 1;}
else {exit(0);}
if(var248 != var10){myvar0= 1;}
else {exit(0);}
if(var248 != var130){myvar0= 1;}
else {exit(0);}
if(var248 != var202){myvar0= 1;}
else {exit(0);}
if(var248 != var204){myvar0= 1;}
else {exit(0);}
if(var248 != var42){myvar0= 1;}
else {exit(0);}
if(var249 != var191){myvar0= 1;}
else {exit(0);}
if(var249 != var258){myvar0= 1;}
else {exit(0);}
if(var249 != var40){myvar0= 1;}
else {exit(0);}
if(var249 != var83){myvar0= 1;}
else {exit(0);}
if(var25 != var107){myvar0= 1;}
else {exit(0);}
if(var25 != var121){myvar0= 1;}
else {exit(0);}
if(var25 != var218){myvar0= 1;}
else {exit(0);}
if(var25 != var238){myvar0= 1;}
else {exit(0);}
if(var25 != var263){myvar0= 1;}
else {exit(0);}
if(var25 != var43){myvar0= 1;}
else {exit(0);}
if(var25 != var85){myvar0= 1;}
else {exit(0);}
if(var25 != var94){myvar0= 1;}
else {exit(0);}
if(var250 != var207){myvar0= 1;}
else {exit(0);}
if(var250 != var80){myvar0= 1;}
else {exit(0);}
if(var251 != var158){myvar0= 1;}
else {exit(0);}
if(var251 != var168){myvar0= 1;}
else {exit(0);}
if(var251 != var193){myvar0= 1;}
else {exit(0);}
if(var251 != var246){myvar0= 1;}
else {exit(0);}
if(var252 != var152){myvar0= 1;}
else {exit(0);}
if(var252 != var89){myvar0= 1;}
else {exit(0);}
if(var252 != var9){myvar0= 1;}
else {exit(0);}
if(var253 != var173){myvar0= 1;}
else {exit(0);}
if(var253 != var196){myvar0= 1;}
else {exit(0);}
if(var253 != var228){myvar0= 1;}
else {exit(0);}
if(var253 != var245){myvar0= 1;}
else {exit(0);}
if(var253 != var268){myvar0= 1;}
else {exit(0);}
if(var253 != var27){myvar0= 1;}
else {exit(0);}
if(var253 != var48){myvar0= 1;}
else {exit(0);}
if(var253 != var59){myvar0= 1;}
else {exit(0);}
if(var254 != var283){myvar0= 1;}
else {exit(0);}
if(var254 != var29){myvar0= 1;}
else {exit(0);}
if(var254 != var52){myvar0= 1;}
else {exit(0);}
if(var255 != var13){myvar0= 1;}
else {exit(0);}
if(var255 != var243){myvar0= 1;}
else {exit(0);}
if(var255 != var69){myvar0= 1;}
else {exit(0);}
if(var257 != var122){myvar0= 1;}
else {exit(0);}
if(var257 != var140){myvar0= 1;}
else {exit(0);}
if(var257 != var16){myvar0= 1;}
else {exit(0);}
if(var257 != var21){myvar0= 1;}
else {exit(0);}
if(var257 != var278){myvar0= 1;}
else {exit(0);}
if(var259 != var101){myvar0= 1;}
else {exit(0);}
if(var259 != var151){myvar0= 1;}
else {exit(0);}
if(var259 != var2){myvar0= 1;}
else {exit(0);}
if(var26 != var145){myvar0= 1;}
else {exit(0);}
if(var26 != var207){myvar0= 1;}
else {exit(0);}
if(var26 != var217){myvar0= 1;}
else {exit(0);}
if(var26 != var80){myvar0= 1;}
else {exit(0);}
if(var260 != var115){myvar0= 1;}
else {exit(0);}
if(var260 != var138){myvar0= 1;}
else {exit(0);}
if(var260 != var139){myvar0= 1;}
else {exit(0);}
if(var260 != var141){myvar0= 1;}
else {exit(0);}
if(var260 != var166){myvar0= 1;}
else {exit(0);}
if(var260 != var212){myvar0= 1;}
else {exit(0);}
if(var260 != var287){myvar0= 1;}
else {exit(0);}
if(var260 != var58){myvar0= 1;}
else {exit(0);}
if(var260 != var64){myvar0= 1;}
else {exit(0);}
if(var260 != var65){myvar0= 1;}
else {exit(0);}
if(var260 != var72){myvar0= 1;}
else {exit(0);}
if(var261 != var182){myvar0= 1;}
else {exit(0);}
if(var261 != var230){myvar0= 1;}
else {exit(0);}
if(var261 != var247){myvar0= 1;}
else {exit(0);}
if(var261 != var33){myvar0= 1;}
else {exit(0);}
if(var261 != var49){myvar0= 1;}
else {exit(0);}
if(var261 != var56){myvar0= 1;}
else {exit(0);}
if(var262 != var156){myvar0= 1;}
else {exit(0);}
if(var262 != var210){myvar0= 1;}
else {exit(0);}
if(var262 != var36){myvar0= 1;}
else {exit(0);}
if(var263 != var109){myvar0= 1;}
else {exit(0);}
if(var263 != var119){myvar0= 1;}
else {exit(0);}
if(var263 != var121){myvar0= 1;}
else {exit(0);}
if(var263 != var238){myvar0= 1;}
else {exit(0);}
if(var263 != var43){myvar0= 1;}
else {exit(0);}
if(var263 != var85){myvar0= 1;}
else {exit(0);}
if(var263 != var94){myvar0= 1;}
else {exit(0);}
if(var264 != var152){myvar0= 1;}
else {exit(0);}
if(var265 != var0){myvar0= 1;}
else {exit(0);}
if(var265 != var126){myvar0= 1;}
else {exit(0);}
if(var265 != var136){myvar0= 1;}
else {exit(0);}
if(var265 != var221){myvar0= 1;}
else {exit(0);}
if(var265 != var269){myvar0= 1;}
else {exit(0);}
if(var265 != var74){myvar0= 1;}
else {exit(0);}
if(var265 != var76){myvar0= 1;}
else {exit(0);}
if(var266 != var126){myvar0= 1;}
else {exit(0);}
if(var266 != var74){myvar0= 1;}
else {exit(0);}
if(var267 != var156){myvar0= 1;}
else {exit(0);}
if(var267 != var17){myvar0= 1;}
else {exit(0);}
if(var267 != var174){myvar0= 1;}
else {exit(0);}
if(var267 != var189){myvar0= 1;}
else {exit(0);}
if(var267 != var210){myvar0= 1;}
else {exit(0);}
if(var267 != var32){myvar0= 1;}
else {exit(0);}
if(var268 != var171){myvar0= 1;}
else {exit(0);}
if(var268 != var27){myvar0= 1;}
else {exit(0);}
if(var268 != var59){myvar0= 1;}
else {exit(0);}
if(var268 != var68){myvar0= 1;}
else {exit(0);}
if(var269 != var0){myvar0= 1;}
else {exit(0);}
if(var269 != var1){myvar0= 1;}
else {exit(0);}
if(var269 != var120){myvar0= 1;}
else {exit(0);}
if(var269 != var126){myvar0= 1;}
else {exit(0);}
if(var269 != var128){myvar0= 1;}
else {exit(0);}
if(var269 != var136){myvar0= 1;}
else {exit(0);}
if(var269 != var181){myvar0= 1;}
else {exit(0);}
if(var269 != var221){myvar0= 1;}
else {exit(0);}
if(var269 != var86){myvar0= 1;}
else {exit(0);}
if(var27 != var171){myvar0= 1;}
else {exit(0);}
if(var27 != var245){myvar0= 1;}
else {exit(0);}
if(var27 != var48){myvar0= 1;}
else {exit(0);}
if(var27 != var59){myvar0= 1;}
else {exit(0);}
if(var27 != var68){myvar0= 1;}
else {exit(0);}
if(var270 != var122){myvar0= 1;}
else {exit(0);}
if(var270 != var16){myvar0= 1;}
else {exit(0);}
if(var270 != var257){myvar0= 1;}
else {exit(0);}
if(var271 != var124){myvar0= 1;}
else {exit(0);}
if(var271 != var133){myvar0= 1;}
else {exit(0);}
if(var271 != var183){myvar0= 1;}
else {exit(0);}
if(var271 != var184){myvar0= 1;}
else {exit(0);}
if(var271 != var215){myvar0= 1;}
else {exit(0);}
if(var271 != var22){myvar0= 1;}
else {exit(0);}
if(var271 != var279){myvar0= 1;}
else {exit(0);}
if(var271 != var73){myvar0= 1;}
else {exit(0);}
if(var271 != var82){myvar0= 1;}
else {exit(0);}
if(var272 != var188){myvar0= 1;}
else {exit(0);}
if(var272 != var29){myvar0= 1;}
else {exit(0);}
if(var272 != var52){myvar0= 1;}
else {exit(0);}
if(var273 != var115){myvar0= 1;}
else {exit(0);}
if(var273 != var212){myvar0= 1;}
else {exit(0);}
if(var273 != var287){myvar0= 1;}
else {exit(0);}
if(var273 != var65){myvar0= 1;}
else {exit(0);}
if(var273 != var72){myvar0= 1;}
else {exit(0);}
if(var274 != var165){myvar0= 1;}
else {exit(0);}
if(var274 != var167){myvar0= 1;}
else {exit(0);}
if(var274 != var246){myvar0= 1;}
else {exit(0);}
if(var275 != var159){myvar0= 1;}
else {exit(0);}
if(var275 != var161){myvar0= 1;}
else {exit(0);}
if(var275 != var229){myvar0= 1;}
else {exit(0);}
if(var275 != var231){myvar0= 1;}
else {exit(0);}
if(var275 != var240){myvar0= 1;}
else {exit(0);}
if(var275 != var282){myvar0= 1;}
else {exit(0);}
if(var275 != var57){myvar0= 1;}
else {exit(0);}
if(var275 != var66){myvar0= 1;}
else {exit(0);}
if(var275 != var97){myvar0= 1;}
else {exit(0);}
if(var276 != var13){myvar0= 1;}
else {exit(0);}
if(var276 != var155){myvar0= 1;}
else {exit(0);}
if(var276 != var226){myvar0= 1;}
else {exit(0);}
if(var276 != var243){myvar0= 1;}
else {exit(0);}
if(var276 != var69){myvar0= 1;}
else {exit(0);}
if(var276 != var7){myvar0= 1;}
else {exit(0);}
if(var276 != var79){myvar0= 1;}
else {exit(0);}
if(var277 != var32){myvar0= 1;}
else {exit(0);}
if(var279 != var124){myvar0= 1;}
else {exit(0);}
if(var279 != var133){myvar0= 1;}
else {exit(0);}
if(var279 != var179){myvar0= 1;}
else {exit(0);}
if(var279 != var242){myvar0= 1;}
else {exit(0);}
if(var279 != var280){myvar0= 1;}
else {exit(0);}
if(var279 != var45){myvar0= 1;}
else {exit(0);}
if(var279 != var47){myvar0= 1;}
else {exit(0);}
if(var279 != var82){myvar0= 1;}
else {exit(0);}
if(var28 != var156){myvar0= 1;}
else {exit(0);}
if(var28 != var17){myvar0= 1;}
else {exit(0);}
if(var28 != var174){myvar0= 1;}
else {exit(0);}
if(var28 != var262){myvar0= 1;}
else {exit(0);}
if(var28 != var267){myvar0= 1;}
else {exit(0);}
if(var28 != var277){myvar0= 1;}
else {exit(0);}
if(var28 != var32){myvar0= 1;}
else {exit(0);}
if(var280 != var183){myvar0= 1;}
else {exit(0);}
if(var280 != var184){myvar0= 1;}
else {exit(0);}
if(var281 != var103){myvar0= 1;}
else {exit(0);}
if(var281 != var129){myvar0= 1;}
else {exit(0);}
if(var281 != var145){myvar0= 1;}
else {exit(0);}
if(var281 != var250){myvar0= 1;}
else {exit(0);}
if(var281 != var26){myvar0= 1;}
else {exit(0);}
if(var281 != var34){myvar0= 1;}
else {exit(0);}
if(var281 != var63){myvar0= 1;}
else {exit(0);}
if(var281 != var80){myvar0= 1;}
else {exit(0);}
if(var282 != var231){myvar0= 1;}
else {exit(0);}
if(var282 != var97){myvar0= 1;}
else {exit(0);}
if(var283 != var137){myvar0= 1;}
else {exit(0);}
if(var283 != var19){myvar0= 1;}
else {exit(0);}
if(var283 != var272){myvar0= 1;}
else {exit(0);}
if(var283 != var29){myvar0= 1;}
else {exit(0);}
if(var283 != var52){myvar0= 1;}
else {exit(0);}
if(var284 != var101){myvar0= 1;}
else {exit(0);}
if(var284 != var151){myvar0= 1;}
else {exit(0);}
if(var284 != var192){myvar0= 1;}
else {exit(0);}
if(var284 != var233){myvar0= 1;}
else {exit(0);}
if(var284 != var259){myvar0= 1;}
else {exit(0);}
if(var284 != var5){myvar0= 1;}
else {exit(0);}
if(var284 != var92){myvar0= 1;}
else {exit(0);}
if(var285 != var138){myvar0= 1;}
else {exit(0);}
if(var285 != var212){myvar0= 1;}
else {exit(0);}
if(var285 != var287){myvar0= 1;}
else {exit(0);}
if(var285 != var65){myvar0= 1;}
else {exit(0);}
if(var286 != var105){myvar0= 1;}
else {exit(0);}
if(var286 != var23){myvar0= 1;}
else {exit(0);}
if(var286 != var239){myvar0= 1;}
else {exit(0);}
if(var286 != var30){myvar0= 1;}
else {exit(0);}
if(var286 != var60){myvar0= 1;}
else {exit(0);}
if(var286 != var77){myvar0= 1;}
else {exit(0);}
if(var287 != var212){myvar0= 1;}
else {exit(0);}
if(var288 != var33){myvar0= 1;}
else {exit(0);}
if(var29 != var137){myvar0= 1;}
else {exit(0);}
if(var29 != var52){myvar0= 1;}
else {exit(0);}
if(var3 != var118){myvar0= 1;}
else {exit(0);}
if(var3 != var147){myvar0= 1;}
else {exit(0);}
if(var3 != var208){myvar0= 1;}
else {exit(0);}
if(var3 != var214){myvar0= 1;}
else {exit(0);}
if(var3 != var77){myvar0= 1;}
else {exit(0);}
if(var30 != var118){myvar0= 1;}
else {exit(0);}
if(var30 != var147){myvar0= 1;}
else {exit(0);}
if(var30 != var175){myvar0= 1;}
else {exit(0);}
if(var30 != var214){myvar0= 1;}
else {exit(0);}
if(var30 != var60){myvar0= 1;}
else {exit(0);}
if(var31 != var153){myvar0= 1;}
else {exit(0);}
if(var31 != var169){myvar0= 1;}
else {exit(0);}
if(var31 != var182){myvar0= 1;}
else {exit(0);}
if(var31 != var237){myvar0= 1;}
else {exit(0);}
if(var31 != var247){myvar0= 1;}
else {exit(0);}
if(var31 != var33){myvar0= 1;}
else {exit(0);}
if(var32 != var17){myvar0= 1;}
else {exit(0);}
if(var34 != var135){myvar0= 1;}
else {exit(0);}
if(var34 != var186){myvar0= 1;}
else {exit(0);}
if(var34 != var217){myvar0= 1;}
else {exit(0);}
if(var34 != var250){myvar0= 1;}
else {exit(0);}
if(var34 != var80){myvar0= 1;}
else {exit(0);}
if(var35 != var180){myvar0= 1;}
else {exit(0);}
if(var37 != var213){myvar0= 1;}
else {exit(0);}
if(var37 != var226){myvar0= 1;}
else {exit(0);}
if(var38 != var169){myvar0= 1;}
else {exit(0);}
if(var38 != var187){myvar0= 1;}
else {exit(0);}
if(var38 != var247){myvar0= 1;}
else {exit(0);}
if(var38 != var288){myvar0= 1;}
else {exit(0);}
if(var38 != var50){myvar0= 1;}
else {exit(0);}
if(var38 != var98){myvar0= 1;}
else {exit(0);}
if(var39 != var191){myvar0= 1;}
else {exit(0);}
if(var39 != var220){myvar0= 1;}
else {exit(0);}
if(var39 != var258){myvar0= 1;}
else {exit(0);}
if(var39 != var40){myvar0= 1;}
else {exit(0);}
if(var39 != var46){myvar0= 1;}
else {exit(0);}
if(var4 != var243){myvar0= 1;}
else {exit(0);}
if(var4 != var255){myvar0= 1;}
else {exit(0);}
if(var4 != var69){myvar0= 1;}
else {exit(0);}
if(var40 != var191){myvar0= 1;}
else {exit(0);}
if(var40 != var46){myvar0= 1;}
else {exit(0);}
if(var42 != var252){myvar0= 1;}
else {exit(0);}
if(var42 != var264){myvar0= 1;}
else {exit(0);}
if(var42 != var89){myvar0= 1;}
else {exit(0);}
if(var43 != var119){myvar0= 1;}
else {exit(0);}
if(var43 != var94){myvar0= 1;}
else {exit(0);}
if(var44 != var161){myvar0= 1;}
else {exit(0);}
if(var44 != var229){myvar0= 1;}
else {exit(0);}
if(var44 != var231){myvar0= 1;}
else {exit(0);}
if(var44 != var282){myvar0= 1;}
else {exit(0);}
if(var44 != var55){myvar0= 1;}
else {exit(0);}
if(var44 != var57){myvar0= 1;}
else {exit(0);}
if(var44 != var61){myvar0= 1;}
else {exit(0);}
if(var44 != var66){myvar0= 1;}
else {exit(0);}
if(var45 != var179){myvar0= 1;}
else {exit(0);}
if(var45 != var47){myvar0= 1;}
else {exit(0);}
if(var46 != var191){myvar0= 1;}
else {exit(0);}
if(var46 != var220){myvar0= 1;}
else {exit(0);}
if(var47 != var179){myvar0= 1;}
else {exit(0);}
if(var47 != var183){myvar0= 1;}
else {exit(0);}
if(var47 != var82){myvar0= 1;}
else {exit(0);}
if(var48 != var59){myvar0= 1;}
else {exit(0);}
if(var49 != var182){myvar0= 1;}
else {exit(0);}
if(var49 != var187){myvar0= 1;}
else {exit(0);}
if(var49 != var247){myvar0= 1;}
else {exit(0);}
if(var49 != var288){myvar0= 1;}
else {exit(0);}
if(var49 != var56){myvar0= 1;}
else {exit(0);}
if(var5 != var192){myvar0= 1;}
else {exit(0);}
if(var50 != var182){myvar0= 1;}
else {exit(0);}
if(var50 != var237){myvar0= 1;}
else {exit(0);}
if(var50 != var247){myvar0= 1;}
else {exit(0);}
if(var50 != var33){myvar0= 1;}
else {exit(0);}
if(var50 != var49){myvar0= 1;}
else {exit(0);}
if(var50 != var56){myvar0= 1;}
else {exit(0);}
if(var51 != var101){myvar0= 1;}
else {exit(0);}
if(var51 != var149){myvar0= 1;}
else {exit(0);}
if(var51 != var151){myvar0= 1;}
else {exit(0);}
if(var51 != var192){myvar0= 1;}
else {exit(0);}
if(var51 != var20){myvar0= 1;}
else {exit(0);}
if(var51 != var206){myvar0= 1;}
else {exit(0);}
if(var51 != var216){myvar0= 1;}
else {exit(0);}
if(var51 != var233){myvar0= 1;}
else {exit(0);}
if(var51 != var284){myvar0= 1;}
else {exit(0);}
if(var51 != var92){myvar0= 1;}
else {exit(0);}
if(var52 != var137){myvar0= 1;}
else {exit(0);}
if(var53 != var1){myvar0= 1;}
else {exit(0);}
if(var53 != var126){myvar0= 1;}
else {exit(0);}
if(var53 != var232){myvar0= 1;}
else {exit(0);}
if(var53 != var74){myvar0= 1;}
else {exit(0);}
if(var53 != var76){myvar0= 1;}
else {exit(0);}
if(var54 != var17){myvar0= 1;}
else {exit(0);}
if(var54 != var174){myvar0= 1;}
else {exit(0);}
if(var54 != var262){myvar0= 1;}
else {exit(0);}
if(var54 != var28){myvar0= 1;}
else {exit(0);}
if(var54 != var32){myvar0= 1;}
else {exit(0);}
if(var54 != var36){myvar0= 1;}
else {exit(0);}
if(var55 != var159){myvar0= 1;}
else {exit(0);}
if(var55 != var229){myvar0= 1;}
else {exit(0);}
if(var55 != var231){myvar0= 1;}
else {exit(0);}
if(var55 != var282){myvar0= 1;}
else {exit(0);}
if(var55 != var57){myvar0= 1;}
else {exit(0);}
if(var55 != var62){myvar0= 1;}
else {exit(0);}
if(var56 != var33){myvar0= 1;}
else {exit(0);}
if(var57 != var159){myvar0= 1;}
else {exit(0);}
if(var57 != var97){myvar0= 1;}
else {exit(0);}
if(var58 != var138){myvar0= 1;}
else {exit(0);}
if(var58 != var139){myvar0= 1;}
else {exit(0);}
if(var58 != var141){myvar0= 1;}
else {exit(0);}
if(var58 != var212){myvar0= 1;}
else {exit(0);}
if(var58 != var285){myvar0= 1;}
else {exit(0);}
if(var58 != var72){myvar0= 1;}
else {exit(0);}
if(var6 != var129){myvar0= 1;}
else {exit(0);}
if(var6 != var186){myvar0= 1;}
else {exit(0);}
if(var6 != var217){myvar0= 1;}
else {exit(0);}
if(var6 != var219){myvar0= 1;}
else {exit(0);}
if(var6 != var26){myvar0= 1;}
else {exit(0);}
if(var6 != var80){myvar0= 1;}
else {exit(0);}
if(var60 != var118){myvar0= 1;}
else {exit(0);}
if(var60 != var147){myvar0= 1;}
else {exit(0);}
if(var60 != var175){myvar0= 1;}
else {exit(0);}
if(var60 != var177){myvar0= 1;}
else {exit(0);}
if(var60 != var208){myvar0= 1;}
else {exit(0);}
if(var60 != var227){myvar0= 1;}
else {exit(0);}
if(var61 != var231){myvar0= 1;}
else {exit(0);}
if(var61 != var66){myvar0= 1;}
else {exit(0);}
if(var61 != var97){myvar0= 1;}
else {exit(0);}
if(var62 != var229){myvar0= 1;}
else {exit(0);}
if(var62 != var61){myvar0= 1;}
else {exit(0);}
if(var63 != var113){myvar0= 1;}
else {exit(0);}
if(var63 != var129){myvar0= 1;}
else {exit(0);}
if(var63 != var217){myvar0= 1;}
else {exit(0);}
if(var63 != var250){myvar0= 1;}
else {exit(0);}
if(var63 != var26){myvar0= 1;}
else {exit(0);}
if(var63 != var34){myvar0= 1;}
else {exit(0);}
if(var63 != var6){myvar0= 1;}
else {exit(0);}
if(var63 != var80){myvar0= 1;}
else {exit(0);}
if(var64 != var138){myvar0= 1;}
else {exit(0);}
if(var64 != var141){myvar0= 1;}
else {exit(0);}
if(var64 != var166){myvar0= 1;}
else {exit(0);}
if(var64 != var285){myvar0= 1;}
else {exit(0);}
if(var64 != var287){myvar0= 1;}
else {exit(0);}
if(var65 != var138){myvar0= 1;}
else {exit(0);}
if(var65 != var212){myvar0= 1;}
else {exit(0);}
if(var66 != var97){myvar0= 1;}
else {exit(0);}
if(var67 != var122){myvar0= 1;}
else {exit(0);}
if(var67 != var140){myvar0= 1;}
else {exit(0);}
if(var67 != var146){myvar0= 1;}
else {exit(0);}
if(var67 != var148){myvar0= 1;}
else {exit(0);}
if(var67 != var170){myvar0= 1;}
else {exit(0);}
if(var67 != var21){myvar0= 1;}
else {exit(0);}
if(var67 != var24){myvar0= 1;}
else {exit(0);}
if(var67 != var270){myvar0= 1;}
else {exit(0);}
if(var68 != var171){myvar0= 1;}
else {exit(0);}
if(var68 != var234){myvar0= 1;}
else {exit(0);}
if(var68 != var245){myvar0= 1;}
else {exit(0);}
if(var68 != var48){myvar0= 1;}
else {exit(0);}
if(var68 != var59){myvar0= 1;}
else {exit(0);}
if(var7 != var13){myvar0= 1;}
else {exit(0);}
if(var7 != var213){myvar0= 1;}
else {exit(0);}
if(var7 != var226){myvar0= 1;}
else {exit(0);}
if(var7 != var255){myvar0= 1;}
else {exit(0);}
if(var7 != var37){myvar0= 1;}
else {exit(0);}
if(var7 != var4){myvar0= 1;}
else {exit(0);}
if(var7 != var79){myvar0= 1;}
else {exit(0);}
if(var71 != var122){myvar0= 1;}
else {exit(0);}
if(var71 != var140){myvar0= 1;}
else {exit(0);}
if(var71 != var148){myvar0= 1;}
else {exit(0);}
if(var71 != var16){myvar0= 1;}
else {exit(0);}
if(var71 != var170){myvar0= 1;}
else {exit(0);}
if(var71 != var24){myvar0= 1;}
else {exit(0);}
if(var71 != var270){myvar0= 1;}
else {exit(0);}
if(var71 != var278){myvar0= 1;}
else {exit(0);}
if(var72 != var212){myvar0= 1;}
else {exit(0);}
if(var72 != var287){myvar0= 1;}
else {exit(0);}
if(var72 != var65){myvar0= 1;}
else {exit(0);}
if(var73 != var242){myvar0= 1;}
else {exit(0);}
if(var73 != var45){myvar0= 1;}
else {exit(0);}
if(var73 != var47){myvar0= 1;}
else {exit(0);}
if(var75 != var119){myvar0= 1;}
else {exit(0);}
if(var75 != var143){myvar0= 1;}
else {exit(0);}
if(var75 != var218){myvar0= 1;}
else {exit(0);}
if(var75 != var244){myvar0= 1;}
else {exit(0);}
if(var75 != var85){myvar0= 1;}
else {exit(0);}
if(var76 != var1){myvar0= 1;}
else {exit(0);}
if(var77 != var105){myvar0= 1;}
else {exit(0);}
if(var77 != var175){myvar0= 1;}
else {exit(0);}
if(var77 != var177){myvar0= 1;}
else {exit(0);}
if(var77 != var208){myvar0= 1;}
else {exit(0);}
if(var77 != var239){myvar0= 1;}
else {exit(0);}
if(var77 != var30){myvar0= 1;}
else {exit(0);}
if(var78 != var158){myvar0= 1;}
else {exit(0);}
if(var78 != var167){myvar0= 1;}
else {exit(0);}
if(var78 != var193){myvar0= 1;}
else {exit(0);}
if(var78 != var205){myvar0= 1;}
else {exit(0);}
if(var78 != var93){myvar0= 1;}
else {exit(0);}
if(var79 != var13){myvar0= 1;}
else {exit(0);}
if(var79 != var155){myvar0= 1;}
else {exit(0);}
if(var79 != var201){myvar0= 1;}
else {exit(0);}
if(var79 != var243){myvar0= 1;}
else {exit(0);}
if(var79 != var255){myvar0= 1;}
else {exit(0);}
if(var79 != var69){myvar0= 1;}
else {exit(0);}
if(var80 != var186){myvar0= 1;}
else {exit(0);}
if(var80 != var207){myvar0= 1;}
else {exit(0);}
if(var83 != var258){myvar0= 1;}
else {exit(0);}
if(var83 != var40){myvar0= 1;}
else {exit(0);}
if(var83 != var70){myvar0= 1;}
else {exit(0);}
if(var84 != var13){myvar0= 1;}
else {exit(0);}
if(var84 != var163){myvar0= 1;}
else {exit(0);}
if(var84 != var201){myvar0= 1;}
else {exit(0);}
if(var84 != var213){myvar0= 1;}
else {exit(0);}
if(var84 != var243){myvar0= 1;}
else {exit(0);}
if(var84 != var255){myvar0= 1;}
else {exit(0);}
if(var84 != var37){myvar0= 1;}
else {exit(0);}
if(var84 != var4){myvar0= 1;}
else {exit(0);}
if(var85 != var119){myvar0= 1;}
else {exit(0);}
if(var85 != var143){myvar0= 1;}
else {exit(0);}
if(var85 != var223){myvar0= 1;}
else {exit(0);}
if(var86 != var1){myvar0= 1;}
else {exit(0);}
if(var86 != var126){myvar0= 1;}
else {exit(0);}
if(var86 != var221){myvar0= 1;}
else {exit(0);}
if(var86 != var266){myvar0= 1;}
else {exit(0);}
if(var86 != var53){myvar0= 1;}
else {exit(0);}
if(var86 != var74){myvar0= 1;}
else {exit(0);}
if(var86 != var76){myvar0= 1;}
else {exit(0);}
if(var87 != var152){myvar0= 1;}
else {exit(0);}
if(var87 != var252){myvar0= 1;}
else {exit(0);}
if(var88 != var165){myvar0= 1;}
else {exit(0);}
if(var88 != var193){myvar0= 1;}
else {exit(0);}
if(var88 != var274){myvar0= 1;}
else {exit(0);}
if(var9 != var152){myvar0= 1;}
else {exit(0);}
if(var90 != var116){myvar0= 1;}
else {exit(0);}
if(var90 != var117){myvar0= 1;}
else {exit(0);}
if(var90 != var171){myvar0= 1;}
else {exit(0);}
if(var90 != var173){myvar0= 1;}
else {exit(0);}
if(var90 != var234){myvar0= 1;}
else {exit(0);}
if(var90 != var48){myvar0= 1;}
else {exit(0);}
if(var90 != var68){myvar0= 1;}
else {exit(0);}
if(var91 != var158){myvar0= 1;}
else {exit(0);}
if(var91 != var203){myvar0= 1;}
else {exit(0);}
if(var91 != var205){myvar0= 1;}
else {exit(0);}
if(var91 != var246){myvar0= 1;}
else {exit(0);}
if(var91 != var251){myvar0= 1;}
else {exit(0);}
if(var92 != var2){myvar0= 1;}
else {exit(0);}
if(var92 != var233){myvar0= 1;}
else {exit(0);}
if(var92 != var259){myvar0= 1;}
else {exit(0);}
if(var93 != var158){myvar0= 1;}
else {exit(0);}
if(var93 != var168){myvar0= 1;}
else {exit(0);}
if(var93 != var193){myvar0= 1;}
else {exit(0);}
if(var93 != var199){myvar0= 1;}
else {exit(0);}
if(var93 != var203){myvar0= 1;}
else {exit(0);}
if(var93 != var205){myvar0= 1;}
else {exit(0);}
if(var93 != var246){myvar0= 1;}
else {exit(0);}
if(var93 != var91){myvar0= 1;}
else {exit(0);}
if(var94 != var119){myvar0= 1;}
else {exit(0);}
if(var94 != var218){myvar0= 1;}
else {exit(0);}
if(var94 != var223){myvar0= 1;}
else {exit(0);}
if(var94 != var244){myvar0= 1;}
else {exit(0);}
if(var95 != var110){myvar0= 1;}
else {exit(0);}
if(var95 != var142){myvar0= 1;}
else {exit(0);}
if(var95 != var185){myvar0= 1;}
else {exit(0);}
if(var95 != var188){myvar0= 1;}
else {exit(0);}
if(var95 != var19){myvar0= 1;}
else {exit(0);}
if(var95 != var211){myvar0= 1;}
else {exit(0);}
if(var96 != var52){myvar0= 1;}
else {exit(0);}
if(var98 != var247){myvar0= 1;}
else {exit(0);}
if(var98 != var288){myvar0= 1;}
else {exit(0);}
if(var98 != var33){myvar0= 1;}
else {exit(0);}
if(var99 != var159){myvar0= 1;}
else {exit(0);}
if(var99 != var231){myvar0= 1;}
else {exit(0);}
if(var99 != var57){myvar0= 1;}
else {exit(0);}
if(var99 != var97){myvar0= 1;}
else {exit(0);}
if(var10 == var8){myvar0= 1;}
else {exit(0);}
if(var130 == var127){myvar0= 1;}
else {exit(0);}
if(var134 == var164){myvar0= 1;}
else {exit(0);}
if(var14 == var172){myvar0= 1;}
else {exit(0);}
if(var152 == var108){myvar0= 1;}
else {exit(0);}
if(var202 == var18){myvar0= 1;}
else {exit(0);}
if(var204 == var150){myvar0= 1;}
else {exit(0);}
if(var235 == var15){myvar0= 1;}
else {exit(0);}
if(var248 == var132){myvar0= 1;}
else {exit(0);}
if(var252 == var256){myvar0= 1;}
else {exit(0);}
if(var264 == var41){myvar0= 1;}
else {exit(0);}
if(var35 == var236){myvar0= 1;}
else {exit(0);}
if(var42 == var111){myvar0= 1;}
else {exit(0);}
if(var87 == var81){myvar0= 1;}
else {exit(0);}
if(var89 == var157){myvar0= 1;}
else {exit(0);}
if(var9 == var12){myvar0= 1;}
else {exit(0);}
if((var108 != var0) & (var108 + var0 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var1) & (var108 + var1 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var120) & (var108 + var120 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var126) & (var108 + var126 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var128) & (var108 + var128 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var136) & (var108 + var136 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var181) & (var108 + var181 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var221) & (var108 + var221 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var232) & (var108 + var232 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var265) & (var108 + var265 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var266) & (var108 + var266 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var269) & (var108 + var269 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var53) & (var108 + var53 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var74) & (var108 + var74 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var76) & (var108 + var76 >=2 )){myvar0= 1;}
else {exit(0);}
if((var108 != var86) & (var108 + var86 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var112) & (var111 + var112 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var114) & (var111 + var114 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var122) & (var111 + var122 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var140) & (var111 + var140 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var146) & (var111 + var146 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var148) & (var111 + var148 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var16) & (var111 + var16 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var170) & (var111 + var170 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var21) & (var111 + var21 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var222) & (var111 + var222 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var24) & (var111 + var24 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var257) & (var111 + var257 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var270) & (var111 + var270 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var278) & (var111 + var278 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var67) & (var111 + var67 >=2 )){myvar0= 1;}
else {exit(0);}
if((var111 != var71) & (var111 + var71 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var110) & (var12 + var110 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var123) & (var12 + var123 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var137) & (var12 + var137 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var142) & (var12 + var142 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var144) & (var12 + var144 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var185) & (var12 + var185 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var188) & (var12 + var188 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var19) & (var12 + var19 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var211) & (var12 + var211 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var254) & (var12 + var254 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var272) & (var12 + var272 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var283) & (var12 + var283 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var29) & (var12 + var29 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var52) & (var12 + var52 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var95) & (var12 + var95 >=2 )){myvar0= 1;}
else {exit(0);}
if((var12 != var96) & (var12 + var96 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var153) & (var127 + var153 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var169) & (var127 + var169 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var182) & (var127 + var182 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var187) & (var127 + var187 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var230) & (var127 + var230 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var237) & (var127 + var237 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var247) & (var127 + var247 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var261) & (var127 + var261 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var288) & (var127 + var288 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var31) & (var127 + var31 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var33) & (var127 + var33 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var38) & (var127 + var38 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var49) & (var127 + var49 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var50) & (var127 + var50 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var56) & (var127 + var56 >=2 )){myvar0= 1;}
else {exit(0);}
if((var127 != var98) & (var127 + var98 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var104) & (var132 + var104 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var124) & (var132 + var124 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var133) & (var132 + var133 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var179) & (var132 + var179 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var183) & (var132 + var183 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var184) & (var132 + var184 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var215) & (var132 + var215 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var22) & (var132 + var22 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var242) & (var132 + var242 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var271) & (var132 + var271 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var279) & (var132 + var279 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var280) & (var132 + var280 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var45) & (var132 + var45 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var47) & (var132 + var47 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var73) & (var132 + var73 >=2 )){myvar0= 1;}
else {exit(0);}
if((var132 != var82) & (var132 + var82 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var101) & (var15 + var101 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var149) & (var15 + var149 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var151) & (var15 + var151 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var176) & (var15 + var176 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var192) & (var15 + var192 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var197) & (var15 + var197 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var2) & (var15 + var2 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var20) & (var15 + var20 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var206) & (var15 + var206 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var216) & (var15 + var216 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var233) & (var15 + var233 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var259) & (var15 + var259 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var284) & (var15 + var284 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var5) & (var15 + var5 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var51) & (var15 + var51 >=2 )){myvar0= 1;}
else {exit(0);}
if((var15 != var92) & (var15 + var92 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var105) & (var150 + var105 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var118) & (var150 + var118 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var147) & (var150 + var147 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var160) & (var150 + var160 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var175) & (var150 + var175 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var177) & (var150 + var177 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var208) & (var150 + var208 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var214) & (var150 + var214 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var227) & (var150 + var227 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var23) & (var150 + var23 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var239) & (var150 + var239 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var286) & (var150 + var286 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var3) & (var150 + var3 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var30) & (var150 + var30 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var60) & (var150 + var60 >=2 )){myvar0= 1;}
else {exit(0);}
if((var150 != var77) & (var150 + var77 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var158) & (var157 + var158 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var165) & (var157 + var165 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var167) & (var157 + var167 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var168) & (var157 + var168 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var193) & (var157 + var193 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var199) & (var157 + var199 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var203) & (var157 + var203 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var205) & (var157 + var205 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var209) & (var157 + var209 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var246) & (var157 + var246 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var251) & (var157 + var251 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var274) & (var157 + var274 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var78) & (var157 + var78 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var88) & (var157 + var88 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var91) & (var157 + var91 >=2 )){myvar0= 1;}
else {exit(0);}
if((var157 != var93) & (var157 + var93 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var102) & (var164 + var102 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var125) & (var164 + var125 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var156) & (var164 + var156 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var17) & (var164 + var17 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var174) & (var164 + var174 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var178) & (var164 + var178 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var189) & (var164 + var189 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var210) & (var164 + var210 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var224) & (var164 + var224 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var262) & (var164 + var262 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var267) & (var164 + var267 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var277) & (var164 + var277 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var28) & (var164 + var28 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var32) & (var164 + var32 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var36) & (var164 + var36 >=2 )){myvar0= 1;}
else {exit(0);}
if((var164 != var54) & (var164 + var54 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var116) & (var172 + var116 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var117) & (var172 + var117 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var171) & (var172 + var171 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var173) & (var172 + var173 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var196) & (var172 + var196 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var228) & (var172 + var228 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var234) & (var172 + var234 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var241) & (var172 + var241 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var245) & (var172 + var245 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var253) & (var172 + var253 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var268) & (var172 + var268 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var27) & (var172 + var27 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var48) & (var172 + var48 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var59) & (var172 + var59 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var68) & (var172 + var68 >=2 )){myvar0= 1;}
else {exit(0);}
if((var172 != var90) & (var172 + var90 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var13) & (var18 + var13 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var155) & (var18 + var155 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var163) & (var18 + var163 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var195) & (var18 + var195 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var201) & (var18 + var201 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var213) & (var18 + var213 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var226) & (var18 + var226 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var243) & (var18 + var243 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var255) & (var18 + var255 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var276) & (var18 + var276 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var37) & (var18 + var37 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var4) & (var18 + var4 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var69) & (var18 + var69 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var7) & (var18 + var7 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var79) & (var18 + var79 >=2 )){myvar0= 1;}
else {exit(0);}
if((var18 != var84) & (var18 + var84 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var115) & (var236 + var115 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var138) & (var236 + var138 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var139) & (var236 + var139 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var141) & (var236 + var141 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var166) & (var236 + var166 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var190) & (var236 + var190 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var198) & (var236 + var198 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var212) & (var236 + var212 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var260) & (var236 + var260 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var273) & (var236 + var273 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var285) & (var236 + var285 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var287) & (var236 + var287 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var58) & (var236 + var58 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var64) & (var236 + var64 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var65) & (var236 + var65 >=2 )){myvar0= 1;}
else {exit(0);}
if((var236 != var72) & (var236 + var72 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var107) & (var256 + var107 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var109) & (var256 + var109 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var119) & (var256 + var119 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var121) & (var256 + var121 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var143) & (var256 + var143 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var194) & (var256 + var194 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var218) & (var256 + var218 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var223) & (var256 + var223 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var238) & (var256 + var238 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var244) & (var256 + var244 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var25) & (var256 + var25 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var263) & (var256 + var263 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var43) & (var256 + var43 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var75) & (var256 + var75 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var85) & (var256 + var85 >=2 )){myvar0= 1;}
else {exit(0);}
if((var256 != var94) & (var256 + var94 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var100) & (var41 + var100 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var106) & (var41 + var106 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var11) & (var41 + var11 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var154) & (var41 + var154 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var162) & (var41 + var162 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var191) & (var41 + var191 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var200) & (var41 + var200 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var220) & (var41 + var220 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var225) & (var41 + var225 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var249) & (var41 + var249 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var258) & (var41 + var258 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var39) & (var41 + var39 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var40) & (var41 + var40 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var46) & (var41 + var46 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var70) & (var41 + var70 >=2 )){myvar0= 1;}
else {exit(0);}
if((var41 != var83) & (var41 + var83 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var103) & (var8 + var103 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var113) & (var8 + var113 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var129) & (var8 + var129 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var135) & (var8 + var135 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var145) & (var8 + var145 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var186) & (var8 + var186 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var207) & (var8 + var207 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var217) & (var8 + var217 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var219) & (var8 + var219 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var250) & (var8 + var250 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var26) & (var8 + var26 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var281) & (var8 + var281 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var34) & (var8 + var34 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var6) & (var8 + var6 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var63) & (var8 + var63 >=2 )){myvar0= 1;}
else {exit(0);}
if((var8 != var80) & (var8 + var80 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var131) & (var81 + var131 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var159) & (var81 + var159 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var161) & (var81 + var161 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var229) & (var81 + var229 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var231) & (var81 + var231 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var240) & (var81 + var240 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var275) & (var81 + var275 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var282) & (var81 + var282 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var44) & (var81 + var44 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var55) & (var81 + var55 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var57) & (var81 + var57 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var61) & (var81 + var61 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var62) & (var81 + var62 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var66) & (var81 + var66 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var97) & (var81 + var97 >=2 )){myvar0= 1;}
else {exit(0);}
if((var81 != var99) & (var81 + var99 >=2 )){myvar0= 1;}
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
225 x[225]
226 x[226]
227 x[227]
228 x[228]
229 x[229]
230 x[230]
231 x[231]
232 x[232]
233 x[233]
234 x[234]
235 x[235]
236 x[236]
237 x[237]
238 x[238]
239 x[239]
240 x[240]
241 x[241]
242 x[242]
243 x[243]
244 x[244]
245 x[245]
246 x[246]
247 x[247]
248 x[248]
249 x[249]
250 x[250]
251 x[251]
252 x[252]
253 x[253]
254 x[254]
255 x[255]
256 x[256]
257 x[257]
258 x[258]
259 x[259]
260 x[260]
261 x[261]
262 x[262]
263 x[263]
264 x[264]
265 x[265]
266 x[266]
267 x[267]
268 x[268]
269 x[269]
270 x[270]
271 x[271]
272 x[272]
273 x[273]
274 x[274]
275 x[275]
276 x[276]
277 x[277]
278 x[278]
279 x[279]
280 x[280]
281 x[281]
282 x[282]
283 x[283]
284 x[284]
285 x[285]
286 x[286]
287 x[287]
288 x[288]
 */}
