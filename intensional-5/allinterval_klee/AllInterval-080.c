
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
if((var0 >= 0) & (var0 <= 79)) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 79)) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 79)) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 79)) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 79)) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 79)) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 79)) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 79)) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 79)) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 79)) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 79)) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 79)) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 0) & (var12 <= 79)) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 0) & (var13 <= 79)) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 0) & (var14 <= 79)) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 0) & (var15 <= 79)) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 0) & (var16 <= 79)) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 0) & (var17 <= 79)) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 0) & (var18 <= 79)) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 0) & (var19 <= 79)) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 0) & (var20 <= 79)) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 0) & (var21 <= 79)) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 0) & (var22 <= 79)) {myvar0= 1;}
else {exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((var23 >= 0) & (var23 <= 79)) {myvar0= 1;}
else {exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((var24 >= 0) & (var24 <= 79)) {myvar0= 1;}
else {exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((var25 >= 0) & (var25 <= 79)) {myvar0= 1;}
else {exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((var26 >= 0) & (var26 <= 79)) {myvar0= 1;}
else {exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((var27 >= 0) & (var27 <= 79)) {myvar0= 1;}
else {exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((var28 >= 0) & (var28 <= 79)) {myvar0= 1;}
else {exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((var29 >= 0) & (var29 <= 79)) {myvar0= 1;}
else {exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((var30 >= 0) & (var30 <= 79)) {myvar0= 1;}
else {exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((var31 >= 0) & (var31 <= 79)) {myvar0= 1;}
else {exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((var32 >= 0) & (var32 <= 79)) {myvar0= 1;}
else {exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((var33 >= 0) & (var33 <= 79)) {myvar0= 1;}
else {exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((var34 >= 0) & (var34 <= 79)) {myvar0= 1;}
else {exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((var35 >= 0) & (var35 <= 79)) {myvar0= 1;}
else {exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((var36 >= 0) & (var36 <= 79)) {myvar0= 1;}
else {exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((var37 >= 0) & (var37 <= 79)) {myvar0= 1;}
else {exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((var38 >= 0) & (var38 <= 79)) {myvar0= 1;}
else {exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((var39 >= 0) & (var39 <= 79)) {myvar0= 1;}
else {exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((var40 >= 0) & (var40 <= 79)) {myvar0= 1;}
else {exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((var41 >= 0) & (var41 <= 79)) {myvar0= 1;}
else {exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((var42 >= 0) & (var42 <= 79)) {myvar0= 1;}
else {exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((var43 >= 0) & (var43 <= 79)) {myvar0= 1;}
else {exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((var44 >= 0) & (var44 <= 79)) {myvar0= 1;}
else {exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((var45 >= 0) & (var45 <= 79)) {myvar0= 1;}
else {exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((var46 >= 0) & (var46 <= 79)) {myvar0= 1;}
else {exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((var47 >= 0) & (var47 <= 79)) {myvar0= 1;}
else {exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((var48 >= 0) & (var48 <= 79)) {myvar0= 1;}
else {exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((var49 >= 0) & (var49 <= 79)) {myvar0= 1;}
else {exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((var50 >= 0) & (var50 <= 79)) {myvar0= 1;}
else {exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((var51 >= 0) & (var51 <= 79)) {myvar0= 1;}
else {exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((var52 >= 0) & (var52 <= 79)) {myvar0= 1;}
else {exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((var53 >= 0) & (var53 <= 79)) {myvar0= 1;}
else {exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((var54 >= 0) & (var54 <= 79)) {myvar0= 1;}
else {exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((var55 >= 0) & (var55 <= 79)) {myvar0= 1;}
else {exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((var56 >= 0) & (var56 <= 79)) {myvar0= 1;}
else {exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((var57 >= 0) & (var57 <= 79)) {myvar0= 1;}
else {exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((var58 >= 0) & (var58 <= 79)) {myvar0= 1;}
else {exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((var59 >= 0) & (var59 <= 79)) {myvar0= 1;}
else {exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((var60 >= 0) & (var60 <= 79)) {myvar0= 1;}
else {exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((var61 >= 0) & (var61 <= 79)) {myvar0= 1;}
else {exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((var62 >= 0) & (var62 <= 79)) {myvar0= 1;}
else {exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((var63 >= 0) & (var63 <= 79)) {myvar0= 1;}
else {exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((var64 >= 0) & (var64 <= 79)) {myvar0= 1;}
else {exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((var65 >= 0) & (var65 <= 79)) {myvar0= 1;}
else {exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((var66 >= 0) & (var66 <= 79)) {myvar0= 1;}
else {exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((var67 >= 0) & (var67 <= 79)) {myvar0= 1;}
else {exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((var68 >= 0) & (var68 <= 79)) {myvar0= 1;}
else {exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((var69 >= 0) & (var69 <= 79)) {myvar0= 1;}
else {exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((var70 >= 0) & (var70 <= 79)) {myvar0= 1;}
else {exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((var71 >= 0) & (var71 <= 79)) {myvar0= 1;}
else {exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((var72 >= 0) & (var72 <= 79)) {myvar0= 1;}
else {exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((var73 >= 0) & (var73 <= 79)) {myvar0= 1;}
else {exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((var74 >= 0) & (var74 <= 79)) {myvar0= 1;}
else {exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((var75 >= 0) & (var75 <= 79)) {myvar0= 1;}
else {exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((var76 >= 0) & (var76 <= 79)) {myvar0= 1;}
else {exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((var77 >= 0) & (var77 <= 79)) {myvar0= 1;}
else {exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((var78 >= 0) & (var78 <= 79)) {myvar0= 1;}
else {exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((var79 >= 0) & (var79 <= 79)) {myvar0= 1;}
else {exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((var80 >= 1) & (var80 <= 79)) {myvar0= 1;}
else {exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((var81 >= 1) & (var81 <= 79)) {myvar0= 1;}
else {exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((var82 >= 1) & (var82 <= 79)) {myvar0= 1;}
else {exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((var83 >= 1) & (var83 <= 79)) {myvar0= 1;}
else {exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((var84 >= 1) & (var84 <= 79)) {myvar0= 1;}
else {exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((var85 >= 1) & (var85 <= 79)) {myvar0= 1;}
else {exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((var86 >= 1) & (var86 <= 79)) {myvar0= 1;}
else {exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((var87 >= 1) & (var87 <= 79)) {myvar0= 1;}
else {exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((var88 >= 1) & (var88 <= 79)) {myvar0= 1;}
else {exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((var89 >= 1) & (var89 <= 79)) {myvar0= 1;}
else {exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((var90 >= 1) & (var90 <= 79)) {myvar0= 1;}
else {exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((var91 >= 1) & (var91 <= 79)) {myvar0= 1;}
else {exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((var92 >= 1) & (var92 <= 79)) {myvar0= 1;}
else {exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((var93 >= 1) & (var93 <= 79)) {myvar0= 1;}
else {exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((var94 >= 1) & (var94 <= 79)) {myvar0= 1;}
else {exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((var95 >= 1) & (var95 <= 79)) {myvar0= 1;}
else {exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((var96 >= 1) & (var96 <= 79)) {myvar0= 1;}
else {exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((var97 >= 1) & (var97 <= 79)) {myvar0= 1;}
else {exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((var98 >= 1) & (var98 <= 79)) {myvar0= 1;}
else {exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((var99 >= 1) & (var99 <= 79)) {myvar0= 1;}
else {exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((var100 >= 1) & (var100 <= 79)) {myvar0= 1;}
else {exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((var101 >= 1) & (var101 <= 79)) {myvar0= 1;}
else {exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((var102 >= 1) & (var102 <= 79)) {myvar0= 1;}
else {exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((var103 >= 1) & (var103 <= 79)) {myvar0= 1;}
else {exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((var104 >= 1) & (var104 <= 79)) {myvar0= 1;}
else {exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((var105 >= 1) & (var105 <= 79)) {myvar0= 1;}
else {exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((var106 >= 1) & (var106 <= 79)) {myvar0= 1;}
else {exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((var107 >= 1) & (var107 <= 79)) {myvar0= 1;}
else {exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((var108 >= 1) & (var108 <= 79)) {myvar0= 1;}
else {exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((var109 >= 1) & (var109 <= 79)) {myvar0= 1;}
else {exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((var110 >= 1) & (var110 <= 79)) {myvar0= 1;}
else {exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((var111 >= 1) & (var111 <= 79)) {myvar0= 1;}
else {exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((var112 >= 1) & (var112 <= 79)) {myvar0= 1;}
else {exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((var113 >= 1) & (var113 <= 79)) {myvar0= 1;}
else {exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((var114 >= 1) & (var114 <= 79)) {myvar0= 1;}
else {exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((var115 >= 1) & (var115 <= 79)) {myvar0= 1;}
else {exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((var116 >= 1) & (var116 <= 79)) {myvar0= 1;}
else {exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((var117 >= 1) & (var117 <= 79)) {myvar0= 1;}
else {exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((var118 >= 1) & (var118 <= 79)) {myvar0= 1;}
else {exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((var119 >= 1) & (var119 <= 79)) {myvar0= 1;}
else {exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((var120 >= 1) & (var120 <= 79)) {myvar0= 1;}
else {exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((var121 >= 1) & (var121 <= 79)) {myvar0= 1;}
else {exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((var122 >= 1) & (var122 <= 79)) {myvar0= 1;}
else {exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((var123 >= 1) & (var123 <= 79)) {myvar0= 1;}
else {exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((var124 >= 1) & (var124 <= 79)) {myvar0= 1;}
else {exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((var125 >= 1) & (var125 <= 79)) {myvar0= 1;}
else {exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((var126 >= 1) & (var126 <= 79)) {myvar0= 1;}
else {exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((var127 >= 1) & (var127 <= 79)) {myvar0= 1;}
else {exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((var128 >= 1) & (var128 <= 79)) {myvar0= 1;}
else {exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((var129 >= 1) & (var129 <= 79)) {myvar0= 1;}
else {exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((var130 >= 1) & (var130 <= 79)) {myvar0= 1;}
else {exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((var131 >= 1) & (var131 <= 79)) {myvar0= 1;}
else {exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((var132 >= 1) & (var132 <= 79)) {myvar0= 1;}
else {exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((var133 >= 1) & (var133 <= 79)) {myvar0= 1;}
else {exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((var134 >= 1) & (var134 <= 79)) {myvar0= 1;}
else {exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((var135 >= 1) & (var135 <= 79)) {myvar0= 1;}
else {exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((var136 >= 1) & (var136 <= 79)) {myvar0= 1;}
else {exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((var137 >= 1) & (var137 <= 79)) {myvar0= 1;}
else {exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((var138 >= 1) & (var138 <= 79)) {myvar0= 1;}
else {exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((var139 >= 1) & (var139 <= 79)) {myvar0= 1;}
else {exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((var140 >= 1) & (var140 <= 79)) {myvar0= 1;}
else {exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((var141 >= 1) & (var141 <= 79)) {myvar0= 1;}
else {exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((var142 >= 1) & (var142 <= 79)) {myvar0= 1;}
else {exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((var143 >= 1) & (var143 <= 79)) {myvar0= 1;}
else {exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((var144 >= 1) & (var144 <= 79)) {myvar0= 1;}
else {exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((var145 >= 1) & (var145 <= 79)) {myvar0= 1;}
else {exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((var146 >= 1) & (var146 <= 79)) {myvar0= 1;}
else {exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((var147 >= 1) & (var147 <= 79)) {myvar0= 1;}
else {exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((var148 >= 1) & (var148 <= 79)) {myvar0= 1;}
else {exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((var149 >= 1) & (var149 <= 79)) {myvar0= 1;}
else {exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((var150 >= 1) & (var150 <= 79)) {myvar0= 1;}
else {exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((var151 >= 1) & (var151 <= 79)) {myvar0= 1;}
else {exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((var152 >= 1) & (var152 <= 79)) {myvar0= 1;}
else {exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((var153 >= 1) & (var153 <= 79)) {myvar0= 1;}
else {exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((var154 >= 1) & (var154 <= 79)) {myvar0= 1;}
else {exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((var155 >= 1) & (var155 <= 79)) {myvar0= 1;}
else {exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((var156 >= 1) & (var156 <= 79)) {myvar0= 1;}
else {exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((var157 >= 1) & (var157 <= 79)) {myvar0= 1;}
else {exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((var158 >= 1) & (var158 <= 79)) {myvar0= 1;}
else {exit(0);}
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var0!=var14) & (var0!=var15) & (var0!=var16) & (var0!=var17) & (var0!=var18) & (var0!=var19) & (var0!=var20) & (var0!=var21) & (var0!=var22) & (var0!=var23) & (var0!=var24) & (var0!=var25) & (var0!=var26) & (var0!=var27) & (var0!=var28) & (var0!=var29) & (var0!=var30) & (var0!=var31) & (var0!=var32) & (var0!=var33) & (var0!=var34) & (var0!=var35) & (var0!=var36) & (var0!=var37) & (var0!=var38) & (var0!=var39) & (var0!=var40) & (var0!=var41) & (var0!=var42) & (var0!=var43) & (var0!=var44) & (var0!=var45) & (var0!=var46) & (var0!=var47) & (var0!=var48) & (var0!=var49) & (var0!=var50) & (var0!=var51) & (var0!=var52) & (var0!=var53) & (var0!=var54) & (var0!=var55) & (var0!=var56) & (var0!=var57) & (var0!=var58) & (var0!=var59) & (var0!=var60) & (var0!=var61) & (var0!=var62) & (var0!=var63) & (var0!=var64) & (var0!=var65) & (var0!=var66) & (var0!=var67) & (var0!=var68) & (var0!=var69) & (var0!=var70) & (var0!=var71) & (var0!=var72) & (var0!=var73) & (var0!=var74) & (var0!=var75) & (var0!=var76) & (var0!=var77) & (var0!=var78) & (var0!=var79) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var1!=var14) & (var1!=var15) & (var1!=var16) & (var1!=var17) & (var1!=var18) & (var1!=var19) & (var1!=var20) & (var1!=var21) & (var1!=var22) & (var1!=var23) & (var1!=var24) & (var1!=var25) & (var1!=var26) & (var1!=var27) & (var1!=var28) & (var1!=var29) & (var1!=var30) & (var1!=var31) & (var1!=var32) & (var1!=var33) & (var1!=var34) & (var1!=var35) & (var1!=var36) & (var1!=var37) & (var1!=var38) & (var1!=var39) & (var1!=var40) & (var1!=var41) & (var1!=var42) & (var1!=var43) & (var1!=var44) & (var1!=var45) & (var1!=var46) & (var1!=var47) & (var1!=var48) & (var1!=var49) & (var1!=var50) & (var1!=var51) & (var1!=var52) & (var1!=var53) & (var1!=var54) & (var1!=var55) & (var1!=var56) & (var1!=var57) & (var1!=var58) & (var1!=var59) & (var1!=var60) & (var1!=var61) & (var1!=var62) & (var1!=var63) & (var1!=var64) & (var1!=var65) & (var1!=var66) & (var1!=var67) & (var1!=var68) & (var1!=var69) & (var1!=var70) & (var1!=var71) & (var1!=var72) & (var1!=var73) & (var1!=var74) & (var1!=var75) & (var1!=var76) & (var1!=var77) & (var1!=var78) & (var1!=var79) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var2!=var14) & (var2!=var15) & (var2!=var16) & (var2!=var17) & (var2!=var18) & (var2!=var19) & (var2!=var20) & (var2!=var21) & (var2!=var22) & (var2!=var23) & (var2!=var24) & (var2!=var25) & (var2!=var26) & (var2!=var27) & (var2!=var28) & (var2!=var29) & (var2!=var30) & (var2!=var31) & (var2!=var32) & (var2!=var33) & (var2!=var34) & (var2!=var35) & (var2!=var36) & (var2!=var37) & (var2!=var38) & (var2!=var39) & (var2!=var40) & (var2!=var41) & (var2!=var42) & (var2!=var43) & (var2!=var44) & (var2!=var45) & (var2!=var46) & (var2!=var47) & (var2!=var48) & (var2!=var49) & (var2!=var50) & (var2!=var51) & (var2!=var52) & (var2!=var53) & (var2!=var54) & (var2!=var55) & (var2!=var56) & (var2!=var57) & (var2!=var58) & (var2!=var59) & (var2!=var60) & (var2!=var61) & (var2!=var62) & (var2!=var63) & (var2!=var64) & (var2!=var65) & (var2!=var66) & (var2!=var67) & (var2!=var68) & (var2!=var69) & (var2!=var70) & (var2!=var71) & (var2!=var72) & (var2!=var73) & (var2!=var74) & (var2!=var75) & (var2!=var76) & (var2!=var77) & (var2!=var78) & (var2!=var79) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var3!=var14) & (var3!=var15) & (var3!=var16) & (var3!=var17) & (var3!=var18) & (var3!=var19) & (var3!=var20) & (var3!=var21) & (var3!=var22) & (var3!=var23) & (var3!=var24) & (var3!=var25) & (var3!=var26) & (var3!=var27) & (var3!=var28) & (var3!=var29) & (var3!=var30) & (var3!=var31) & (var3!=var32) & (var3!=var33) & (var3!=var34) & (var3!=var35) & (var3!=var36) & (var3!=var37) & (var3!=var38) & (var3!=var39) & (var3!=var40) & (var3!=var41) & (var3!=var42) & (var3!=var43) & (var3!=var44) & (var3!=var45) & (var3!=var46) & (var3!=var47) & (var3!=var48) & (var3!=var49) & (var3!=var50) & (var3!=var51) & (var3!=var52) & (var3!=var53) & (var3!=var54) & (var3!=var55) & (var3!=var56) & (var3!=var57) & (var3!=var58) & (var3!=var59) & (var3!=var60) & (var3!=var61) & (var3!=var62) & (var3!=var63) & (var3!=var64) & (var3!=var65) & (var3!=var66) & (var3!=var67) & (var3!=var68) & (var3!=var69) & (var3!=var70) & (var3!=var71) & (var3!=var72) & (var3!=var73) & (var3!=var74) & (var3!=var75) & (var3!=var76) & (var3!=var77) & (var3!=var78) & (var3!=var79) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var4!=var14) & (var4!=var15) & (var4!=var16) & (var4!=var17) & (var4!=var18) & (var4!=var19) & (var4!=var20) & (var4!=var21) & (var4!=var22) & (var4!=var23) & (var4!=var24) & (var4!=var25) & (var4!=var26) & (var4!=var27) & (var4!=var28) & (var4!=var29) & (var4!=var30) & (var4!=var31) & (var4!=var32) & (var4!=var33) & (var4!=var34) & (var4!=var35) & (var4!=var36) & (var4!=var37) & (var4!=var38) & (var4!=var39) & (var4!=var40) & (var4!=var41) & (var4!=var42) & (var4!=var43) & (var4!=var44) & (var4!=var45) & (var4!=var46) & (var4!=var47) & (var4!=var48) & (var4!=var49) & (var4!=var50) & (var4!=var51) & (var4!=var52) & (var4!=var53) & (var4!=var54) & (var4!=var55) & (var4!=var56) & (var4!=var57) & (var4!=var58) & (var4!=var59) & (var4!=var60) & (var4!=var61) & (var4!=var62) & (var4!=var63) & (var4!=var64) & (var4!=var65) & (var4!=var66) & (var4!=var67) & (var4!=var68) & (var4!=var69) & (var4!=var70) & (var4!=var71) & (var4!=var72) & (var4!=var73) & (var4!=var74) & (var4!=var75) & (var4!=var76) & (var4!=var77) & (var4!=var78) & (var4!=var79) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var5!=var14) & (var5!=var15) & (var5!=var16) & (var5!=var17) & (var5!=var18) & (var5!=var19) & (var5!=var20) & (var5!=var21) & (var5!=var22) & (var5!=var23) & (var5!=var24) & (var5!=var25) & (var5!=var26) & (var5!=var27) & (var5!=var28) & (var5!=var29) & (var5!=var30) & (var5!=var31) & (var5!=var32) & (var5!=var33) & (var5!=var34) & (var5!=var35) & (var5!=var36) & (var5!=var37) & (var5!=var38) & (var5!=var39) & (var5!=var40) & (var5!=var41) & (var5!=var42) & (var5!=var43) & (var5!=var44) & (var5!=var45) & (var5!=var46) & (var5!=var47) & (var5!=var48) & (var5!=var49) & (var5!=var50) & (var5!=var51) & (var5!=var52) & (var5!=var53) & (var5!=var54) & (var5!=var55) & (var5!=var56) & (var5!=var57) & (var5!=var58) & (var5!=var59) & (var5!=var60) & (var5!=var61) & (var5!=var62) & (var5!=var63) & (var5!=var64) & (var5!=var65) & (var5!=var66) & (var5!=var67) & (var5!=var68) & (var5!=var69) & (var5!=var70) & (var5!=var71) & (var5!=var72) & (var5!=var73) & (var5!=var74) & (var5!=var75) & (var5!=var76) & (var5!=var77) & (var5!=var78) & (var5!=var79) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var6!=var14) & (var6!=var15) & (var6!=var16) & (var6!=var17) & (var6!=var18) & (var6!=var19) & (var6!=var20) & (var6!=var21) & (var6!=var22) & (var6!=var23) & (var6!=var24) & (var6!=var25) & (var6!=var26) & (var6!=var27) & (var6!=var28) & (var6!=var29) & (var6!=var30) & (var6!=var31) & (var6!=var32) & (var6!=var33) & (var6!=var34) & (var6!=var35) & (var6!=var36) & (var6!=var37) & (var6!=var38) & (var6!=var39) & (var6!=var40) & (var6!=var41) & (var6!=var42) & (var6!=var43) & (var6!=var44) & (var6!=var45) & (var6!=var46) & (var6!=var47) & (var6!=var48) & (var6!=var49) & (var6!=var50) & (var6!=var51) & (var6!=var52) & (var6!=var53) & (var6!=var54) & (var6!=var55) & (var6!=var56) & (var6!=var57) & (var6!=var58) & (var6!=var59) & (var6!=var60) & (var6!=var61) & (var6!=var62) & (var6!=var63) & (var6!=var64) & (var6!=var65) & (var6!=var66) & (var6!=var67) & (var6!=var68) & (var6!=var69) & (var6!=var70) & (var6!=var71) & (var6!=var72) & (var6!=var73) & (var6!=var74) & (var6!=var75) & (var6!=var76) & (var6!=var77) & (var6!=var78) & (var6!=var79) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var7!=var14) & (var7!=var15) & (var7!=var16) & (var7!=var17) & (var7!=var18) & (var7!=var19) & (var7!=var20) & (var7!=var21) & (var7!=var22) & (var7!=var23) & (var7!=var24) & (var7!=var25) & (var7!=var26) & (var7!=var27) & (var7!=var28) & (var7!=var29) & (var7!=var30) & (var7!=var31) & (var7!=var32) & (var7!=var33) & (var7!=var34) & (var7!=var35) & (var7!=var36) & (var7!=var37) & (var7!=var38) & (var7!=var39) & (var7!=var40) & (var7!=var41) & (var7!=var42) & (var7!=var43) & (var7!=var44) & (var7!=var45) & (var7!=var46) & (var7!=var47) & (var7!=var48) & (var7!=var49) & (var7!=var50) & (var7!=var51) & (var7!=var52) & (var7!=var53) & (var7!=var54) & (var7!=var55) & (var7!=var56) & (var7!=var57) & (var7!=var58) & (var7!=var59) & (var7!=var60) & (var7!=var61) & (var7!=var62) & (var7!=var63) & (var7!=var64) & (var7!=var65) & (var7!=var66) & (var7!=var67) & (var7!=var68) & (var7!=var69) & (var7!=var70) & (var7!=var71) & (var7!=var72) & (var7!=var73) & (var7!=var74) & (var7!=var75) & (var7!=var76) & (var7!=var77) & (var7!=var78) & (var7!=var79) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var8!=var15) & (var8!=var16) & (var8!=var17) & (var8!=var18) & (var8!=var19) & (var8!=var20) & (var8!=var21) & (var8!=var22) & (var8!=var23) & (var8!=var24) & (var8!=var25) & (var8!=var26) & (var8!=var27) & (var8!=var28) & (var8!=var29) & (var8!=var30) & (var8!=var31) & (var8!=var32) & (var8!=var33) & (var8!=var34) & (var8!=var35) & (var8!=var36) & (var8!=var37) & (var8!=var38) & (var8!=var39) & (var8!=var40) & (var8!=var41) & (var8!=var42) & (var8!=var43) & (var8!=var44) & (var8!=var45) & (var8!=var46) & (var8!=var47) & (var8!=var48) & (var8!=var49) & (var8!=var50) & (var8!=var51) & (var8!=var52) & (var8!=var53) & (var8!=var54) & (var8!=var55) & (var8!=var56) & (var8!=var57) & (var8!=var58) & (var8!=var59) & (var8!=var60) & (var8!=var61) & (var8!=var62) & (var8!=var63) & (var8!=var64) & (var8!=var65) & (var8!=var66) & (var8!=var67) & (var8!=var68) & (var8!=var69) & (var8!=var70) & (var8!=var71) & (var8!=var72) & (var8!=var73) & (var8!=var74) & (var8!=var75) & (var8!=var76) & (var8!=var77) & (var8!=var78) & (var8!=var79) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var9!=var15) & (var9!=var16) & (var9!=var17) & (var9!=var18) & (var9!=var19) & (var9!=var20) & (var9!=var21) & (var9!=var22) & (var9!=var23) & (var9!=var24) & (var9!=var25) & (var9!=var26) & (var9!=var27) & (var9!=var28) & (var9!=var29) & (var9!=var30) & (var9!=var31) & (var9!=var32) & (var9!=var33) & (var9!=var34) & (var9!=var35) & (var9!=var36) & (var9!=var37) & (var9!=var38) & (var9!=var39) & (var9!=var40) & (var9!=var41) & (var9!=var42) & (var9!=var43) & (var9!=var44) & (var9!=var45) & (var9!=var46) & (var9!=var47) & (var9!=var48) & (var9!=var49) & (var9!=var50) & (var9!=var51) & (var9!=var52) & (var9!=var53) & (var9!=var54) & (var9!=var55) & (var9!=var56) & (var9!=var57) & (var9!=var58) & (var9!=var59) & (var9!=var60) & (var9!=var61) & (var9!=var62) & (var9!=var63) & (var9!=var64) & (var9!=var65) & (var9!=var66) & (var9!=var67) & (var9!=var68) & (var9!=var69) & (var9!=var70) & (var9!=var71) & (var9!=var72) & (var9!=var73) & (var9!=var74) & (var9!=var75) & (var9!=var76) & (var9!=var77) & (var9!=var78) & (var9!=var79) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var10!=var15) & (var10!=var16) & (var10!=var17) & (var10!=var18) & (var10!=var19) & (var10!=var20) & (var10!=var21) & (var10!=var22) & (var10!=var23) & (var10!=var24) & (var10!=var25) & (var10!=var26) & (var10!=var27) & (var10!=var28) & (var10!=var29) & (var10!=var30) & (var10!=var31) & (var10!=var32) & (var10!=var33) & (var10!=var34) & (var10!=var35) & (var10!=var36) & (var10!=var37) & (var10!=var38) & (var10!=var39) & (var10!=var40) & (var10!=var41) & (var10!=var42) & (var10!=var43) & (var10!=var44) & (var10!=var45) & (var10!=var46) & (var10!=var47) & (var10!=var48) & (var10!=var49) & (var10!=var50) & (var10!=var51) & (var10!=var52) & (var10!=var53) & (var10!=var54) & (var10!=var55) & (var10!=var56) & (var10!=var57) & (var10!=var58) & (var10!=var59) & (var10!=var60) & (var10!=var61) & (var10!=var62) & (var10!=var63) & (var10!=var64) & (var10!=var65) & (var10!=var66) & (var10!=var67) & (var10!=var68) & (var10!=var69) & (var10!=var70) & (var10!=var71) & (var10!=var72) & (var10!=var73) & (var10!=var74) & (var10!=var75) & (var10!=var76) & (var10!=var77) & (var10!=var78) & (var10!=var79) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var11!=var16) & (var11!=var17) & (var11!=var18) & (var11!=var19) & (var11!=var20) & (var11!=var21) & (var11!=var22) & (var11!=var23) & (var11!=var24) & (var11!=var25) & (var11!=var26) & (var11!=var27) & (var11!=var28) & (var11!=var29) & (var11!=var30) & (var11!=var31) & (var11!=var32) & (var11!=var33) & (var11!=var34) & (var11!=var35) & (var11!=var36) & (var11!=var37) & (var11!=var38) & (var11!=var39) & (var11!=var40) & (var11!=var41) & (var11!=var42) & (var11!=var43) & (var11!=var44) & (var11!=var45) & (var11!=var46) & (var11!=var47) & (var11!=var48) & (var11!=var49) & (var11!=var50) & (var11!=var51) & (var11!=var52) & (var11!=var53) & (var11!=var54) & (var11!=var55) & (var11!=var56) & (var11!=var57) & (var11!=var58) & (var11!=var59) & (var11!=var60) & (var11!=var61) & (var11!=var62) & (var11!=var63) & (var11!=var64) & (var11!=var65) & (var11!=var66) & (var11!=var67) & (var11!=var68) & (var11!=var69) & (var11!=var70) & (var11!=var71) & (var11!=var72) & (var11!=var73) & (var11!=var74) & (var11!=var75) & (var11!=var76) & (var11!=var77) & (var11!=var78) & (var11!=var79) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var12!=var20) & (var12!=var21) & (var12!=var22) & (var12!=var23) & (var12!=var24) & (var12!=var25) & (var12!=var26) & (var12!=var27) & (var12!=var28) & (var12!=var29) & (var12!=var30) & (var12!=var31) & (var12!=var32) & (var12!=var33) & (var12!=var34) & (var12!=var35) & (var12!=var36) & (var12!=var37) & (var12!=var38) & (var12!=var39) & (var12!=var40) & (var12!=var41) & (var12!=var42) & (var12!=var43) & (var12!=var44) & (var12!=var45) & (var12!=var46) & (var12!=var47) & (var12!=var48) & (var12!=var49) & (var12!=var50) & (var12!=var51) & (var12!=var52) & (var12!=var53) & (var12!=var54) & (var12!=var55) & (var12!=var56) & (var12!=var57) & (var12!=var58) & (var12!=var59) & (var12!=var60) & (var12!=var61) & (var12!=var62) & (var12!=var63) & (var12!=var64) & (var12!=var65) & (var12!=var66) & (var12!=var67) & (var12!=var68) & (var12!=var69) & (var12!=var70) & (var12!=var71) & (var12!=var72) & (var12!=var73) & (var12!=var74) & (var12!=var75) & (var12!=var76) & (var12!=var77) & (var12!=var78) & (var12!=var79) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var13!=var20) & (var13!=var21) & (var13!=var22) & (var13!=var23) & (var13!=var24) & (var13!=var25) & (var13!=var26) & (var13!=var27) & (var13!=var28) & (var13!=var29) & (var13!=var30) & (var13!=var31) & (var13!=var32) & (var13!=var33) & (var13!=var34) & (var13!=var35) & (var13!=var36) & (var13!=var37) & (var13!=var38) & (var13!=var39) & (var13!=var40) & (var13!=var41) & (var13!=var42) & (var13!=var43) & (var13!=var44) & (var13!=var45) & (var13!=var46) & (var13!=var47) & (var13!=var48) & (var13!=var49) & (var13!=var50) & (var13!=var51) & (var13!=var52) & (var13!=var53) & (var13!=var54) & (var13!=var55) & (var13!=var56) & (var13!=var57) & (var13!=var58) & (var13!=var59) & (var13!=var60) & (var13!=var61) & (var13!=var62) & (var13!=var63) & (var13!=var64) & (var13!=var65) & (var13!=var66) & (var13!=var67) & (var13!=var68) & (var13!=var69) & (var13!=var70) & (var13!=var71) & (var13!=var72) & (var13!=var73) & (var13!=var74) & (var13!=var75) & (var13!=var76) & (var13!=var77) & (var13!=var78) & (var13!=var79) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var14!=var21) & (var14!=var22) & (var14!=var23) & (var14!=var24) & (var14!=var25) & (var14!=var26) & (var14!=var27) & (var14!=var28) & (var14!=var29) & (var14!=var30) & (var14!=var31) & (var14!=var32) & (var14!=var33) & (var14!=var34) & (var14!=var35) & (var14!=var36) & (var14!=var37) & (var14!=var38) & (var14!=var39) & (var14!=var40) & (var14!=var41) & (var14!=var42) & (var14!=var43) & (var14!=var44) & (var14!=var45) & (var14!=var46) & (var14!=var47) & (var14!=var48) & (var14!=var49) & (var14!=var50) & (var14!=var51) & (var14!=var52) & (var14!=var53) & (var14!=var54) & (var14!=var55) & (var14!=var56) & (var14!=var57) & (var14!=var58) & (var14!=var59) & (var14!=var60) & (var14!=var61) & (var14!=var62) & (var14!=var63) & (var14!=var64) & (var14!=var65) & (var14!=var66) & (var14!=var67) & (var14!=var68) & (var14!=var69) & (var14!=var70) & (var14!=var71) & (var14!=var72) & (var14!=var73) & (var14!=var74) & (var14!=var75) & (var14!=var76) & (var14!=var77) & (var14!=var78) & (var14!=var79) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var15!=var21) & (var15!=var22) & (var15!=var23) & (var15!=var24) & (var15!=var25) & (var15!=var26) & (var15!=var27) & (var15!=var28) & (var15!=var29) & (var15!=var30) & (var15!=var31) & (var15!=var32) & (var15!=var33) & (var15!=var34) & (var15!=var35) & (var15!=var36) & (var15!=var37) & (var15!=var38) & (var15!=var39) & (var15!=var40) & (var15!=var41) & (var15!=var42) & (var15!=var43) & (var15!=var44) & (var15!=var45) & (var15!=var46) & (var15!=var47) & (var15!=var48) & (var15!=var49) & (var15!=var50) & (var15!=var51) & (var15!=var52) & (var15!=var53) & (var15!=var54) & (var15!=var55) & (var15!=var56) & (var15!=var57) & (var15!=var58) & (var15!=var59) & (var15!=var60) & (var15!=var61) & (var15!=var62) & (var15!=var63) & (var15!=var64) & (var15!=var65) & (var15!=var66) & (var15!=var67) & (var15!=var68) & (var15!=var69) & (var15!=var70) & (var15!=var71) & (var15!=var72) & (var15!=var73) & (var15!=var74) & (var15!=var75) & (var15!=var76) & (var15!=var77) & (var15!=var78) & (var15!=var79) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var16!=var23) & (var16!=var24) & (var16!=var25) & (var16!=var26) & (var16!=var27) & (var16!=var28) & (var16!=var29) & (var16!=var30) & (var16!=var31) & (var16!=var32) & (var16!=var33) & (var16!=var34) & (var16!=var35) & (var16!=var36) & (var16!=var37) & (var16!=var38) & (var16!=var39) & (var16!=var40) & (var16!=var41) & (var16!=var42) & (var16!=var43) & (var16!=var44) & (var16!=var45) & (var16!=var46) & (var16!=var47) & (var16!=var48) & (var16!=var49) & (var16!=var50) & (var16!=var51) & (var16!=var52) & (var16!=var53) & (var16!=var54) & (var16!=var55) & (var16!=var56) & (var16!=var57) & (var16!=var58) & (var16!=var59) & (var16!=var60) & (var16!=var61) & (var16!=var62) & (var16!=var63) & (var16!=var64) & (var16!=var65) & (var16!=var66) & (var16!=var67) & (var16!=var68) & (var16!=var69) & (var16!=var70) & (var16!=var71) & (var16!=var72) & (var16!=var73) & (var16!=var74) & (var16!=var75) & (var16!=var76) & (var16!=var77) & (var16!=var78) & (var16!=var79) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var17!=var23) & (var17!=var24) & (var17!=var25) & (var17!=var26) & (var17!=var27) & (var17!=var28) & (var17!=var29) & (var17!=var30) & (var17!=var31) & (var17!=var32) & (var17!=var33) & (var17!=var34) & (var17!=var35) & (var17!=var36) & (var17!=var37) & (var17!=var38) & (var17!=var39) & (var17!=var40) & (var17!=var41) & (var17!=var42) & (var17!=var43) & (var17!=var44) & (var17!=var45) & (var17!=var46) & (var17!=var47) & (var17!=var48) & (var17!=var49) & (var17!=var50) & (var17!=var51) & (var17!=var52) & (var17!=var53) & (var17!=var54) & (var17!=var55) & (var17!=var56) & (var17!=var57) & (var17!=var58) & (var17!=var59) & (var17!=var60) & (var17!=var61) & (var17!=var62) & (var17!=var63) & (var17!=var64) & (var17!=var65) & (var17!=var66) & (var17!=var67) & (var17!=var68) & (var17!=var69) & (var17!=var70) & (var17!=var71) & (var17!=var72) & (var17!=var73) & (var17!=var74) & (var17!=var75) & (var17!=var76) & (var17!=var77) & (var17!=var78) & (var17!=var79) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var18!=var23) & (var18!=var24) & (var18!=var25) & (var18!=var26) & (var18!=var27) & (var18!=var28) & (var18!=var29) & (var18!=var30) & (var18!=var31) & (var18!=var32) & (var18!=var33) & (var18!=var34) & (var18!=var35) & (var18!=var36) & (var18!=var37) & (var18!=var38) & (var18!=var39) & (var18!=var40) & (var18!=var41) & (var18!=var42) & (var18!=var43) & (var18!=var44) & (var18!=var45) & (var18!=var46) & (var18!=var47) & (var18!=var48) & (var18!=var49) & (var18!=var50) & (var18!=var51) & (var18!=var52) & (var18!=var53) & (var18!=var54) & (var18!=var55) & (var18!=var56) & (var18!=var57) & (var18!=var58) & (var18!=var59) & (var18!=var60) & (var18!=var61) & (var18!=var62) & (var18!=var63) & (var18!=var64) & (var18!=var65) & (var18!=var66) & (var18!=var67) & (var18!=var68) & (var18!=var69) & (var18!=var70) & (var18!=var71) & (var18!=var72) & (var18!=var73) & (var18!=var74) & (var18!=var75) & (var18!=var76) & (var18!=var77) & (var18!=var78) & (var18!=var79) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var19!=var23) & (var19!=var24) & (var19!=var25) & (var19!=var26) & (var19!=var27) & (var19!=var28) & (var19!=var29) & (var19!=var30) & (var19!=var31) & (var19!=var32) & (var19!=var33) & (var19!=var34) & (var19!=var35) & (var19!=var36) & (var19!=var37) & (var19!=var38) & (var19!=var39) & (var19!=var40) & (var19!=var41) & (var19!=var42) & (var19!=var43) & (var19!=var44) & (var19!=var45) & (var19!=var46) & (var19!=var47) & (var19!=var48) & (var19!=var49) & (var19!=var50) & (var19!=var51) & (var19!=var52) & (var19!=var53) & (var19!=var54) & (var19!=var55) & (var19!=var56) & (var19!=var57) & (var19!=var58) & (var19!=var59) & (var19!=var60) & (var19!=var61) & (var19!=var62) & (var19!=var63) & (var19!=var64) & (var19!=var65) & (var19!=var66) & (var19!=var67) & (var19!=var68) & (var19!=var69) & (var19!=var70) & (var19!=var71) & (var19!=var72) & (var19!=var73) & (var19!=var74) & (var19!=var75) & (var19!=var76) & (var19!=var77) & (var19!=var78) & (var19!=var79) & (var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var20!=var27) & (var20!=var28) & (var20!=var29) & (var20!=var30) & (var20!=var31) & (var20!=var32) & (var20!=var33) & (var20!=var34) & (var20!=var35) & (var20!=var36) & (var20!=var37) & (var20!=var38) & (var20!=var39) & (var20!=var40) & (var20!=var41) & (var20!=var42) & (var20!=var43) & (var20!=var44) & (var20!=var45) & (var20!=var46) & (var20!=var47) & (var20!=var48) & (var20!=var49) & (var20!=var50) & (var20!=var51) & (var20!=var52) & (var20!=var53) & (var20!=var54) & (var20!=var55) & (var20!=var56) & (var20!=var57) & (var20!=var58) & (var20!=var59) & (var20!=var60) & (var20!=var61) & (var20!=var62) & (var20!=var63) & (var20!=var64) & (var20!=var65) & (var20!=var66) & (var20!=var67) & (var20!=var68) & (var20!=var69) & (var20!=var70) & (var20!=var71) & (var20!=var72) & (var20!=var73) & (var20!=var74) & (var20!=var75) & (var20!=var76) & (var20!=var77) & (var20!=var78) & (var20!=var79) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var21!=var30) & (var21!=var31) & (var21!=var32) & (var21!=var33) & (var21!=var34) & (var21!=var35) & (var21!=var36) & (var21!=var37) & (var21!=var38) & (var21!=var39) & (var21!=var40) & (var21!=var41) & (var21!=var42) & (var21!=var43) & (var21!=var44) & (var21!=var45) & (var21!=var46) & (var21!=var47) & (var21!=var48) & (var21!=var49) & (var21!=var50) & (var21!=var51) & (var21!=var52) & (var21!=var53) & (var21!=var54) & (var21!=var55) & (var21!=var56) & (var21!=var57) & (var21!=var58) & (var21!=var59) & (var21!=var60) & (var21!=var61) & (var21!=var62) & (var21!=var63) & (var21!=var64) & (var21!=var65) & (var21!=var66) & (var21!=var67) & (var21!=var68) & (var21!=var69) & (var21!=var70) & (var21!=var71) & (var21!=var72) & (var21!=var73) & (var21!=var74) & (var21!=var75) & (var21!=var76) & (var21!=var77) & (var21!=var78) & (var21!=var79) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var22!=var30) & (var22!=var31) & (var22!=var32) & (var22!=var33) & (var22!=var34) & (var22!=var35) & (var22!=var36) & (var22!=var37) & (var22!=var38) & (var22!=var39) & (var22!=var40) & (var22!=var41) & (var22!=var42) & (var22!=var43) & (var22!=var44) & (var22!=var45) & (var22!=var46) & (var22!=var47) & (var22!=var48) & (var22!=var49) & (var22!=var50) & (var22!=var51) & (var22!=var52) & (var22!=var53) & (var22!=var54) & (var22!=var55) & (var22!=var56) & (var22!=var57) & (var22!=var58) & (var22!=var59) & (var22!=var60) & (var22!=var61) & (var22!=var62) & (var22!=var63) & (var22!=var64) & (var22!=var65) & (var22!=var66) & (var22!=var67) & (var22!=var68) & (var22!=var69) & (var22!=var70) & (var22!=var71) & (var22!=var72) & (var22!=var73) & (var22!=var74) & (var22!=var75) & (var22!=var76) & (var22!=var77) & (var22!=var78) & (var22!=var79) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var23!=var30) & (var23!=var31) & (var23!=var32) & (var23!=var33) & (var23!=var34) & (var23!=var35) & (var23!=var36) & (var23!=var37) & (var23!=var38) & (var23!=var39) & (var23!=var40) & (var23!=var41) & (var23!=var42) & (var23!=var43) & (var23!=var44) & (var23!=var45) & (var23!=var46) & (var23!=var47) & (var23!=var48) & (var23!=var49) & (var23!=var50) & (var23!=var51) & (var23!=var52) & (var23!=var53) & (var23!=var54) & (var23!=var55) & (var23!=var56) & (var23!=var57) & (var23!=var58) & (var23!=var59) & (var23!=var60) & (var23!=var61) & (var23!=var62) & (var23!=var63) & (var23!=var64) & (var23!=var65) & (var23!=var66) & (var23!=var67) & (var23!=var68) & (var23!=var69) & (var23!=var70) & (var23!=var71) & (var23!=var72) & (var23!=var73) & (var23!=var74) & (var23!=var75) & (var23!=var76) & (var23!=var77) & (var23!=var78) & (var23!=var79) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var24!=var30) & (var24!=var31) & (var24!=var32) & (var24!=var33) & (var24!=var34) & (var24!=var35) & (var24!=var36) & (var24!=var37) & (var24!=var38) & (var24!=var39) & (var24!=var40) & (var24!=var41) & (var24!=var42) & (var24!=var43) & (var24!=var44) & (var24!=var45) & (var24!=var46) & (var24!=var47) & (var24!=var48) & (var24!=var49) & (var24!=var50) & (var24!=var51) & (var24!=var52) & (var24!=var53) & (var24!=var54) & (var24!=var55) & (var24!=var56) & (var24!=var57) & (var24!=var58) & (var24!=var59) & (var24!=var60) & (var24!=var61) & (var24!=var62) & (var24!=var63) & (var24!=var64) & (var24!=var65) & (var24!=var66) & (var24!=var67) & (var24!=var68) & (var24!=var69) & (var24!=var70) & (var24!=var71) & (var24!=var72) & (var24!=var73) & (var24!=var74) & (var24!=var75) & (var24!=var76) & (var24!=var77) & (var24!=var78) & (var24!=var79) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var25!=var30) & (var25!=var31) & (var25!=var32) & (var25!=var33) & (var25!=var34) & (var25!=var35) & (var25!=var36) & (var25!=var37) & (var25!=var38) & (var25!=var39) & (var25!=var40) & (var25!=var41) & (var25!=var42) & (var25!=var43) & (var25!=var44) & (var25!=var45) & (var25!=var46) & (var25!=var47) & (var25!=var48) & (var25!=var49) & (var25!=var50) & (var25!=var51) & (var25!=var52) & (var25!=var53) & (var25!=var54) & (var25!=var55) & (var25!=var56) & (var25!=var57) & (var25!=var58) & (var25!=var59) & (var25!=var60) & (var25!=var61) & (var25!=var62) & (var25!=var63) & (var25!=var64) & (var25!=var65) & (var25!=var66) & (var25!=var67) & (var25!=var68) & (var25!=var69) & (var25!=var70) & (var25!=var71) & (var25!=var72) & (var25!=var73) & (var25!=var74) & (var25!=var75) & (var25!=var76) & (var25!=var77) & (var25!=var78) & (var25!=var79) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var26!=var30) & (var26!=var31) & (var26!=var32) & (var26!=var33) & (var26!=var34) & (var26!=var35) & (var26!=var36) & (var26!=var37) & (var26!=var38) & (var26!=var39) & (var26!=var40) & (var26!=var41) & (var26!=var42) & (var26!=var43) & (var26!=var44) & (var26!=var45) & (var26!=var46) & (var26!=var47) & (var26!=var48) & (var26!=var49) & (var26!=var50) & (var26!=var51) & (var26!=var52) & (var26!=var53) & (var26!=var54) & (var26!=var55) & (var26!=var56) & (var26!=var57) & (var26!=var58) & (var26!=var59) & (var26!=var60) & (var26!=var61) & (var26!=var62) & (var26!=var63) & (var26!=var64) & (var26!=var65) & (var26!=var66) & (var26!=var67) & (var26!=var68) & (var26!=var69) & (var26!=var70) & (var26!=var71) & (var26!=var72) & (var26!=var73) & (var26!=var74) & (var26!=var75) & (var26!=var76) & (var26!=var77) & (var26!=var78) & (var26!=var79) & (var27!=var28) & (var27!=var29) & (var27!=var30) & (var27!=var31) & (var27!=var32) & (var27!=var33) & (var27!=var34) & (var27!=var35) & (var27!=var36) & (var27!=var37) & (var27!=var38) & (var27!=var39) & (var27!=var40) & (var27!=var41) & (var27!=var42) & (var27!=var43) & (var27!=var44) & (var27!=var45) & (var27!=var46) & (var27!=var47) & (var27!=var48) & (var27!=var49) & (var27!=var50) & (var27!=var51) & (var27!=var52) & (var27!=var53) & (var27!=var54) & (var27!=var55) & (var27!=var56) & (var27!=var57) & (var27!=var58) & (var27!=var59) & (var27!=var60) & (var27!=var61) & (var27!=var62) & (var27!=var63) & (var27!=var64) & (var27!=var65) & (var27!=var66) & (var27!=var67) & (var27!=var68) & (var27!=var69) & (var27!=var70) & (var27!=var71) & (var27!=var72) & (var27!=var73) & (var27!=var74) & (var27!=var75) & (var27!=var76) & (var27!=var77) & (var27!=var78) & (var27!=var79) & (var28!=var29) & (var28!=var30) & (var28!=var31) & (var28!=var32) & (var28!=var33) & (var28!=var34) & (var28!=var35) & (var28!=var36) & (var28!=var37) & (var28!=var38) & (var28!=var39) & (var28!=var40) & (var28!=var41) & (var28!=var42) & (var28!=var43) & (var28!=var44) & (var28!=var45) & (var28!=var46) & (var28!=var47) & (var28!=var48) & (var28!=var49) & (var28!=var50) & (var28!=var51) & (var28!=var52) & (var28!=var53) & (var28!=var54) & (var28!=var55) & (var28!=var56) & (var28!=var57) & (var28!=var58) & (var28!=var59) & (var28!=var60) & (var28!=var61) & (var28!=var62) & (var28!=var63) & (var28!=var64) & (var28!=var65) & (var28!=var66) & (var28!=var67) & (var28!=var68) & (var28!=var69) & (var28!=var70) & (var28!=var71) & (var28!=var72) & (var28!=var73) & (var28!=var74) & (var28!=var75) & (var28!=var76) & (var28!=var77) & (var28!=var78) & (var28!=var79) & (var29!=var30) & (var29!=var31) & (var29!=var32) & (var29!=var33) & (var29!=var34) & (var29!=var35) & (var29!=var36) & (var29!=var37) & (var29!=var38) & (var29!=var39) & (var29!=var40) & (var29!=var41) & (var29!=var42) & (var29!=var43) & (var29!=var44) & (var29!=var45) & (var29!=var46) & (var29!=var47) & (var29!=var48) & (var29!=var49) & (var29!=var50) & (var29!=var51) & (var29!=var52) & (var29!=var53) & (var29!=var54) & (var29!=var55) & (var29!=var56) & (var29!=var57) & (var29!=var58) & (var29!=var59) & (var29!=var60) & (var29!=var61) & (var29!=var62) & (var29!=var63) & (var29!=var64) & (var29!=var65) & (var29!=var66) & (var29!=var67) & (var29!=var68) & (var29!=var69) & (var29!=var70) & (var29!=var71) & (var29!=var72) & (var29!=var73) & (var29!=var74) & (var29!=var75) & (var29!=var76) & (var29!=var77) & (var29!=var78) & (var29!=var79) & (var30!=var31) & (var30!=var32) & (var30!=var33) & (var30!=var34) & (var30!=var35) & (var30!=var36) & (var30!=var37) & (var30!=var38) & (var30!=var39) & (var30!=var40) & (var30!=var41) & (var30!=var42) & (var30!=var43) & (var30!=var44) & (var30!=var45) & (var30!=var46) & (var30!=var47) & (var30!=var48) & (var30!=var49) & (var30!=var50) & (var30!=var51) & (var30!=var52) & (var30!=var53) & (var30!=var54) & (var30!=var55) & (var30!=var56) & (var30!=var57) & (var30!=var58) & (var30!=var59) & (var30!=var60) & (var30!=var61) & (var30!=var62) & (var30!=var63) & (var30!=var64) & (var30!=var65) & (var30!=var66) & (var30!=var67) & (var30!=var68) & (var30!=var69) & (var30!=var70) & (var30!=var71) & (var30!=var72) & (var30!=var73) & (var30!=var74) & (var30!=var75) & (var30!=var76) & (var30!=var77) & (var30!=var78) & (var30!=var79) & (var31!=var32) & (var31!=var33) & (var31!=var34) & (var31!=var35) & (var31!=var36) & (var31!=var37) & (var31!=var38) & (var31!=var39) & (var31!=var40) & (var31!=var41) & (var31!=var42) & (var31!=var43) & (var31!=var44) & (var31!=var45) & (var31!=var46) & (var31!=var47) & (var31!=var48) & (var31!=var49) & (var31!=var50) & (var31!=var51) & (var31!=var52) & (var31!=var53) & (var31!=var54) & (var31!=var55) & (var31!=var56) & (var31!=var57) & (var31!=var58) & (var31!=var59) & (var31!=var60) & (var31!=var61) & (var31!=var62) & (var31!=var63) & (var31!=var64) & (var31!=var65) & (var31!=var66) & (var31!=var67) & (var31!=var68) & (var31!=var69) & (var31!=var70) & (var31!=var71) & (var31!=var72) & (var31!=var73) & (var31!=var74) & (var31!=var75) & (var31!=var76) & (var31!=var77) & (var31!=var78) & (var31!=var79) & (var32!=var33) & (var32!=var34) & (var32!=var35) & (var32!=var36) & (var32!=var37) & (var32!=var38) & (var32!=var39) & (var32!=var40) & (var32!=var41) & (var32!=var42) & (var32!=var43) & (var32!=var44) & (var32!=var45) & (var32!=var46) & (var32!=var47) & (var32!=var48) & (var32!=var49) & (var32!=var50) & (var32!=var51) & (var32!=var52) & (var32!=var53) & (var32!=var54) & (var32!=var55) & (var32!=var56) & (var32!=var57) & (var32!=var58) & (var32!=var59) & (var32!=var60) & (var32!=var61) & (var32!=var62) & (var32!=var63) & (var32!=var64) & (var32!=var65) & (var32!=var66) & (var32!=var67) & (var32!=var68) & (var32!=var69) & (var32!=var70) & (var32!=var71) & (var32!=var72) & (var32!=var73) & (var32!=var74) & (var32!=var75) & (var32!=var76) & (var32!=var77) & (var32!=var78) & (var32!=var79) & (var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var33!=var38) & (var33!=var39) & (var33!=var40) & (var33!=var41) & (var33!=var42) & (var33!=var43) & (var33!=var44) & (var33!=var45) & (var33!=var46) & (var33!=var47) & (var33!=var48) & (var33!=var49) & (var33!=var50) & (var33!=var51) & (var33!=var52) & (var33!=var53) & (var33!=var54) & (var33!=var55) & (var33!=var56) & (var33!=var57) & (var33!=var58) & (var33!=var59) & (var33!=var60) & (var33!=var61) & (var33!=var62) & (var33!=var63) & (var33!=var64) & (var33!=var65) & (var33!=var66) & (var33!=var67) & (var33!=var68) & (var33!=var69) & (var33!=var70) & (var33!=var71) & (var33!=var72) & (var33!=var73) & (var33!=var74) & (var33!=var75) & (var33!=var76) & (var33!=var77) & (var33!=var78) & (var33!=var79) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var34!=var38) & (var34!=var39) & (var34!=var40) & (var34!=var41) & (var34!=var42) & (var34!=var43) & (var34!=var44) & (var34!=var45) & (var34!=var46) & (var34!=var47) & (var34!=var48) & (var34!=var49) & (var34!=var50) & (var34!=var51) & (var34!=var52) & (var34!=var53) & (var34!=var54) & (var34!=var55) & (var34!=var56) & (var34!=var57) & (var34!=var58) & (var34!=var59) & (var34!=var60) & (var34!=var61) & (var34!=var62) & (var34!=var63) & (var34!=var64) & (var34!=var65) & (var34!=var66) & (var34!=var67) & (var34!=var68) & (var34!=var69) & (var34!=var70) & (var34!=var71) & (var34!=var72) & (var34!=var73) & (var34!=var74) & (var34!=var75) & (var34!=var76) & (var34!=var77) & (var34!=var78) & (var34!=var79) & (var35!=var36) & (var35!=var37) & (var35!=var38) & (var35!=var39) & (var35!=var40) & (var35!=var41) & (var35!=var42) & (var35!=var43) & (var35!=var44) & (var35!=var45) & (var35!=var46) & (var35!=var47) & (var35!=var48) & (var35!=var49) & (var35!=var50) & (var35!=var51) & (var35!=var52) & (var35!=var53) & (var35!=var54) & (var35!=var55) & (var35!=var56) & (var35!=var57) & (var35!=var58) & (var35!=var59) & (var35!=var60) & (var35!=var61) & (var35!=var62) & (var35!=var63) & (var35!=var64) & (var35!=var65) & (var35!=var66) & (var35!=var67) & (var35!=var68) & (var35!=var69) & (var35!=var70) & (var35!=var71) & (var35!=var72) & (var35!=var73) & (var35!=var74) & (var35!=var75) & (var35!=var76) & (var35!=var77) & (var35!=var78) & (var35!=var79) & (var36!=var37) & (var36!=var38) & (var36!=var39) & (var36!=var40) & (var36!=var41) & (var36!=var42) & (var36!=var43) & (var36!=var44) & (var36!=var45) & (var36!=var46) & (var36!=var47) & (var36!=var48) & (var36!=var49) & (var36!=var50) & (var36!=var51) & (var36!=var52) & (var36!=var53) & (var36!=var54) & (var36!=var55) & (var36!=var56) & (var36!=var57) & (var36!=var58) & (var36!=var59) & (var36!=var60) & (var36!=var61) & (var36!=var62) & (var36!=var63) & (var36!=var64) & (var36!=var65) & (var36!=var66) & (var36!=var67) & (var36!=var68) & (var36!=var69) & (var36!=var70) & (var36!=var71) & (var36!=var72) & (var36!=var73) & (var36!=var74) & (var36!=var75) & (var36!=var76) & (var36!=var77) & (var36!=var78) & (var36!=var79) & (var37!=var38) & (var37!=var39) & (var37!=var40) & (var37!=var41) & (var37!=var42) & (var37!=var43) & (var37!=var44) & (var37!=var45) & (var37!=var46) & (var37!=var47) & (var37!=var48) & (var37!=var49) & (var37!=var50) & (var37!=var51) & (var37!=var52) & (var37!=var53) & (var37!=var54) & (var37!=var55) & (var37!=var56) & (var37!=var57) & (var37!=var58) & (var37!=var59) & (var37!=var60) & (var37!=var61) & (var37!=var62) & (var37!=var63) & (var37!=var64) & (var37!=var65) & (var37!=var66) & (var37!=var67) & (var37!=var68) & (var37!=var69) & (var37!=var70) & (var37!=var71) & (var37!=var72) & (var37!=var73) & (var37!=var74) & (var37!=var75) & (var37!=var76) & (var37!=var77) & (var37!=var78) & (var37!=var79) & (var38!=var39) & (var38!=var40) & (var38!=var41) & (var38!=var42) & (var38!=var43) & (var38!=var44) & (var38!=var45) & (var38!=var46) & (var38!=var47) & (var38!=var48) & (var38!=var49) & (var38!=var50) & (var38!=var51) & (var38!=var52) & (var38!=var53) & (var38!=var54) & (var38!=var55) & (var38!=var56) & (var38!=var57) & (var38!=var58) & (var38!=var59) & (var38!=var60) & (var38!=var61) & (var38!=var62) & (var38!=var63) & (var38!=var64) & (var38!=var65) & (var38!=var66) & (var38!=var67) & (var38!=var68) & (var38!=var69) & (var38!=var70) & (var38!=var71) & (var38!=var72) & (var38!=var73) & (var38!=var74) & (var38!=var75) & (var38!=var76) & (var38!=var77) & (var38!=var78) & (var38!=var79) & (var39!=var40) & (var39!=var41) & (var39!=var42) & (var39!=var43) & (var39!=var44) & (var39!=var45) & (var39!=var46) & (var39!=var47) & (var39!=var48) & (var39!=var49) & (var39!=var50) & (var39!=var51) & (var39!=var52) & (var39!=var53) & (var39!=var54) & (var39!=var55) & (var39!=var56) & (var39!=var57) & (var39!=var58) & (var39!=var59) & (var39!=var60) & (var39!=var61) & (var39!=var62) & (var39!=var63) & (var39!=var64) & (var39!=var65) & (var39!=var66) & (var39!=var67) & (var39!=var68) & (var39!=var69) & (var39!=var70) & (var39!=var71) & (var39!=var72) & (var39!=var73) & (var39!=var74) & (var39!=var75) & (var39!=var76) & (var39!=var77) & (var39!=var78) & (var39!=var79) & (var40!=var41) & (var40!=var42) & (var40!=var43) & (var40!=var44) & (var40!=var45) & (var40!=var46) & (var40!=var47) & (var40!=var48) & (var40!=var49) & (var40!=var50) & (var40!=var51) & (var40!=var52) & (var40!=var53) & (var40!=var54) & (var40!=var55) & (var40!=var56) & (var40!=var57) & (var40!=var58) & (var40!=var59) & (var40!=var60) & (var40!=var61) & (var40!=var62) & (var40!=var63) & (var40!=var64) & (var40!=var65) & (var40!=var66) & (var40!=var67) & (var40!=var68) & (var40!=var69) & (var40!=var70) & (var40!=var71) & (var40!=var72) & (var40!=var73) & (var40!=var74) & (var40!=var75) & (var40!=var76) & (var40!=var77) & (var40!=var78) & (var40!=var79) & (var41!=var42) & (var41!=var43) & (var41!=var44) & (var41!=var45) & (var41!=var46) & (var41!=var47) & (var41!=var48) & (var41!=var49) & (var41!=var50) & (var41!=var51) & (var41!=var52) & (var41!=var53) & (var41!=var54) & (var41!=var55) & (var41!=var56) & (var41!=var57) & (var41!=var58) & (var41!=var59) & (var41!=var60) & (var41!=var61) & (var41!=var62) & (var41!=var63) & (var41!=var64) & (var41!=var65) & (var41!=var66) & (var41!=var67) & (var41!=var68) & (var41!=var69) & (var41!=var70) & (var41!=var71) & (var41!=var72) & (var41!=var73) & (var41!=var74) & (var41!=var75) & (var41!=var76) & (var41!=var77) & (var41!=var78) & (var41!=var79) & (var42!=var43) & (var42!=var44) & (var42!=var45) & (var42!=var46) & (var42!=var47) & (var42!=var48) & (var42!=var49) & (var42!=var50) & (var42!=var51) & (var42!=var52) & (var42!=var53) & (var42!=var54) & (var42!=var55) & (var42!=var56) & (var42!=var57) & (var42!=var58) & (var42!=var59) & (var42!=var60) & (var42!=var61) & (var42!=var62) & (var42!=var63) & (var42!=var64) & (var42!=var65) & (var42!=var66) & (var42!=var67) & (var42!=var68) & (var42!=var69) & (var42!=var70) & (var42!=var71) & (var42!=var72) & (var42!=var73) & (var42!=var74) & (var42!=var75) & (var42!=var76) & (var42!=var77) & (var42!=var78) & (var42!=var79) & (var43!=var44) & (var43!=var45) & (var43!=var46) & (var43!=var47) & (var43!=var48) & (var43!=var49) & (var43!=var50) & (var43!=var51) & (var43!=var52) & (var43!=var53) & (var43!=var54) & (var43!=var55) & (var43!=var56) & (var43!=var57) & (var43!=var58) & (var43!=var59) & (var43!=var60) & (var43!=var61) & (var43!=var62) & (var43!=var63) & (var43!=var64) & (var43!=var65) & (var43!=var66) & (var43!=var67) & (var43!=var68) & (var43!=var69) & (var43!=var70) & (var43!=var71) & (var43!=var72) & (var43!=var73) & (var43!=var74) & (var43!=var75) & (var43!=var76) & (var43!=var77) & (var43!=var78) & (var43!=var79) & (var44!=var45) & (var44!=var46) & (var44!=var47) & (var44!=var48) & (var44!=var49) & (var44!=var50) & (var44!=var51) & (var44!=var52) & (var44!=var53) & (var44!=var54) & (var44!=var55) & (var44!=var56) & (var44!=var57) & (var44!=var58) & (var44!=var59) & (var44!=var60) & (var44!=var61) & (var44!=var62) & (var44!=var63) & (var44!=var64) & (var44!=var65) & (var44!=var66) & (var44!=var67) & (var44!=var68) & (var44!=var69) & (var44!=var70) & (var44!=var71) & (var44!=var72) & (var44!=var73) & (var44!=var74) & (var44!=var75) & (var44!=var76) & (var44!=var77) & (var44!=var78) & (var44!=var79) & (var45!=var46) & (var45!=var47) & (var45!=var48) & (var45!=var49) & (var45!=var50) & (var45!=var51) & (var45!=var52) & (var45!=var53) & (var45!=var54) & (var45!=var55) & (var45!=var56) & (var45!=var57) & (var45!=var58) & (var45!=var59) & (var45!=var60) & (var45!=var61) & (var45!=var62) & (var45!=var63) & (var45!=var64) & (var45!=var65) & (var45!=var66) & (var45!=var67) & (var45!=var68) & (var45!=var69) & (var45!=var70) & (var45!=var71) & (var45!=var72) & (var45!=var73) & (var45!=var74) & (var45!=var75) & (var45!=var76) & (var45!=var77) & (var45!=var78) & (var45!=var79) & (var46!=var47) & (var46!=var48) & (var46!=var49) & (var46!=var50) & (var46!=var51) & (var46!=var52) & (var46!=var53) & (var46!=var54) & (var46!=var55) & (var46!=var56) & (var46!=var57) & (var46!=var58) & (var46!=var59) & (var46!=var60) & (var46!=var61) & (var46!=var62) & (var46!=var63) & (var46!=var64) & (var46!=var65) & (var46!=var66) & (var46!=var67) & (var46!=var68) & (var46!=var69) & (var46!=var70) & (var46!=var71) & (var46!=var72) & (var46!=var73) & (var46!=var74) & (var46!=var75) & (var46!=var76) & (var46!=var77) & (var46!=var78) & (var46!=var79) & (var47!=var48) & (var47!=var49) & (var47!=var50) & (var47!=var51) & (var47!=var52) & (var47!=var53) & (var47!=var54) & (var47!=var55) & (var47!=var56) & (var47!=var57) & (var47!=var58) & (var47!=var59) & (var47!=var60) & (var47!=var61) & (var47!=var62) & (var47!=var63) & (var47!=var64) & (var47!=var65) & (var47!=var66) & (var47!=var67) & (var47!=var68) & (var47!=var69) & (var47!=var70) & (var47!=var71) & (var47!=var72) & (var47!=var73) & (var47!=var74) & (var47!=var75) & (var47!=var76) & (var47!=var77) & (var47!=var78) & (var47!=var79) & (var48!=var49) & (var48!=var50) & (var48!=var51) & (var48!=var52) & (var48!=var53) & (var48!=var54) & (var48!=var55) & (var48!=var56) & (var48!=var57) & (var48!=var58) & (var48!=var59) & (var48!=var60) & (var48!=var61) & (var48!=var62) & (var48!=var63) & (var48!=var64) & (var48!=var65) & (var48!=var66) & (var48!=var67) & (var48!=var68) & (var48!=var69) & (var48!=var70) & (var48!=var71) & (var48!=var72) & (var48!=var73) & (var48!=var74) & (var48!=var75) & (var48!=var76) & (var48!=var77) & (var48!=var78) & (var48!=var79) & (var49!=var50) & (var49!=var51) & (var49!=var52) & (var49!=var53) & (var49!=var54) & (var49!=var55) & (var49!=var56) & (var49!=var57) & (var49!=var58) & (var49!=var59) & (var49!=var60) & (var49!=var61) & (var49!=var62) & (var49!=var63) & (var49!=var64) & (var49!=var65) & (var49!=var66) & (var49!=var67) & (var49!=var68) & (var49!=var69) & (var49!=var70) & (var49!=var71) & (var49!=var72) & (var49!=var73) & (var49!=var74) & (var49!=var75) & (var49!=var76) & (var49!=var77) & (var49!=var78) & (var49!=var79) & (var50!=var51) & (var50!=var52) & (var50!=var53) & (var50!=var54) & (var50!=var55) & (var50!=var56) & (var50!=var57) & (var50!=var58) & (var50!=var59) & (var50!=var60) & (var50!=var61) & (var50!=var62) & (var50!=var63) & (var50!=var64) & (var50!=var65) & (var50!=var66) & (var50!=var67) & (var50!=var68) & (var50!=var69) & (var50!=var70) & (var50!=var71) & (var50!=var72) & (var50!=var73) & (var50!=var74) & (var50!=var75) & (var50!=var76) & (var50!=var77) & (var50!=var78) & (var50!=var79) & (var51!=var52) & (var51!=var53) & (var51!=var54) & (var51!=var55) & (var51!=var56) & (var51!=var57) & (var51!=var58) & (var51!=var59) & (var51!=var60) & (var51!=var61) & (var51!=var62) & (var51!=var63) & (var51!=var64) & (var51!=var65) & (var51!=var66) & (var51!=var67) & (var51!=var68) & (var51!=var69) & (var51!=var70) & (var51!=var71) & (var51!=var72) & (var51!=var73) & (var51!=var74) & (var51!=var75) & (var51!=var76) & (var51!=var77) & (var51!=var78) & (var51!=var79) & (var52!=var53) & (var52!=var54) & (var52!=var55) & (var52!=var56) & (var52!=var57) & (var52!=var58) & (var52!=var59) & (var52!=var60) & (var52!=var61) & (var52!=var62) & (var52!=var63) & (var52!=var64) & (var52!=var65) & (var52!=var66) & (var52!=var67) & (var52!=var68) & (var52!=var69) & (var52!=var70) & (var52!=var71) & (var52!=var72) & (var52!=var73) & (var52!=var74) & (var52!=var75) & (var52!=var76) & (var52!=var77) & (var52!=var78) & (var52!=var79) & (var53!=var54) & (var53!=var55) & (var53!=var56) & (var53!=var57) & (var53!=var58) & (var53!=var59) & (var53!=var60) & (var53!=var61) & (var53!=var62) & (var53!=var63) & (var53!=var64) & (var53!=var65) & (var53!=var66) & (var53!=var67) & (var53!=var68) & (var53!=var69) & (var53!=var70) & (var53!=var71) & (var53!=var72) & (var53!=var73) & (var53!=var74) & (var53!=var75) & (var53!=var76) & (var53!=var77) & (var53!=var78) & (var53!=var79) & (var54!=var55) & (var54!=var56) & (var54!=var57) & (var54!=var58) & (var54!=var59) & (var54!=var60) & (var54!=var61) & (var54!=var62) & (var54!=var63) & (var54!=var64) & (var54!=var65) & (var54!=var66) & (var54!=var67) & (var54!=var68) & (var54!=var69) & (var54!=var70) & (var54!=var71) & (var54!=var72) & (var54!=var73) & (var54!=var74) & (var54!=var75) & (var54!=var76) & (var54!=var77) & (var54!=var78) & (var54!=var79) & (var55!=var56) & (var55!=var57) & (var55!=var58) & (var55!=var59) & (var55!=var60) & (var55!=var61) & (var55!=var62) & (var55!=var63) & (var55!=var64) & (var55!=var65) & (var55!=var66) & (var55!=var67) & (var55!=var68) & (var55!=var69) & (var55!=var70) & (var55!=var71) & (var55!=var72) & (var55!=var73) & (var55!=var74) & (var55!=var75) & (var55!=var76) & (var55!=var77) & (var55!=var78) & (var55!=var79) & (var56!=var57) & (var56!=var58) & (var56!=var59) & (var56!=var60) & (var56!=var61) & (var56!=var62) & (var56!=var63) & (var56!=var64) & (var56!=var65) & (var56!=var66) & (var56!=var67) & (var56!=var68) & (var56!=var69) & (var56!=var70) & (var56!=var71) & (var56!=var72) & (var56!=var73) & (var56!=var74) & (var56!=var75) & (var56!=var76) & (var56!=var77) & (var56!=var78) & (var56!=var79) & (var57!=var58) & (var57!=var59) & (var57!=var60) & (var57!=var61) & (var57!=var62) & (var57!=var63) & (var57!=var64) & (var57!=var65) & (var57!=var66) & (var57!=var67) & (var57!=var68) & (var57!=var69) & (var57!=var70) & (var57!=var71) & (var57!=var72) & (var57!=var73) & (var57!=var74) & (var57!=var75) & (var57!=var76) & (var57!=var77) & (var57!=var78) & (var57!=var79) & (var58!=var59) & (var58!=var60) & (var58!=var61) & (var58!=var62) & (var58!=var63) & (var58!=var64) & (var58!=var65) & (var58!=var66) & (var58!=var67) & (var58!=var68) & (var58!=var69) & (var58!=var70) & (var58!=var71) & (var58!=var72) & (var58!=var73) & (var58!=var74) & (var58!=var75) & (var58!=var76) & (var58!=var77) & (var58!=var78) & (var58!=var79) & (var59!=var60) & (var59!=var61) & (var59!=var62) & (var59!=var63) & (var59!=var64) & (var59!=var65) & (var59!=var66) & (var59!=var67) & (var59!=var68) & (var59!=var69) & (var59!=var70) & (var59!=var71) & (var59!=var72) & (var59!=var73) & (var59!=var74) & (var59!=var75) & (var59!=var76) & (var59!=var77) & (var59!=var78) & (var59!=var79) & (var60!=var61) & (var60!=var62) & (var60!=var63) & (var60!=var64) & (var60!=var65) & (var60!=var66) & (var60!=var67) & (var60!=var68) & (var60!=var69) & (var60!=var70) & (var60!=var71) & (var60!=var72) & (var60!=var73) & (var60!=var74) & (var60!=var75) & (var60!=var76) & (var60!=var77) & (var60!=var78) & (var60!=var79) & (var61!=var62) & (var61!=var63) & (var61!=var64) & (var61!=var65) & (var61!=var66) & (var61!=var67) & (var61!=var68) & (var61!=var69) & (var61!=var70) & (var61!=var71) & (var61!=var72) & (var61!=var73) & (var61!=var74) & (var61!=var75) & (var61!=var76) & (var61!=var77) & (var61!=var78) & (var61!=var79) & (var62!=var63) & (var62!=var64) & (var62!=var65) & (var62!=var66) & (var62!=var67) & (var62!=var68) & (var62!=var69) & (var62!=var70) & (var62!=var71) & (var62!=var72) & (var62!=var73) & (var62!=var74) & (var62!=var75) & (var62!=var76) & (var62!=var77) & (var62!=var78) & (var62!=var79) & (var63!=var64) & (var63!=var65) & (var63!=var66) & (var63!=var67) & (var63!=var68) & (var63!=var69) & (var63!=var70) & (var63!=var71) & (var63!=var72) & (var63!=var73) & (var63!=var74) & (var63!=var75) & (var63!=var76) & (var63!=var77) & (var63!=var78) & (var63!=var79) & (var64!=var65) & (var64!=var66) & (var64!=var67) & (var64!=var68) & (var64!=var69) & (var64!=var70) & (var64!=var71) & (var64!=var72) & (var64!=var73) & (var64!=var74) & (var64!=var75) & (var64!=var76) & (var64!=var77) & (var64!=var78) & (var64!=var79) & (var65!=var66) & (var65!=var67) & (var65!=var68) & (var65!=var69) & (var65!=var70) & (var65!=var71) & (var65!=var72) & (var65!=var73) & (var65!=var74) & (var65!=var75) & (var65!=var76) & (var65!=var77) & (var65!=var78) & (var65!=var79) & (var66!=var67) & (var66!=var68) & (var66!=var69) & (var66!=var70) & (var66!=var71) & (var66!=var72) & (var66!=var73) & (var66!=var74) & (var66!=var75) & (var66!=var76) & (var66!=var77) & (var66!=var78) & (var66!=var79) & (var67!=var68) & (var67!=var69) & (var67!=var70) & (var67!=var71) & (var67!=var72) & (var67!=var73) & (var67!=var74) & (var67!=var75) & (var67!=var76) & (var67!=var77) & (var67!=var78) & (var67!=var79) & (var68!=var69) & (var68!=var70) & (var68!=var71) & (var68!=var72) & (var68!=var73) & (var68!=var74) & (var68!=var75) & (var68!=var76) & (var68!=var77) & (var68!=var78) & (var68!=var79) & (var69!=var70) & (var69!=var71) & (var69!=var72) & (var69!=var73) & (var69!=var74) & (var69!=var75) & (var69!=var76) & (var69!=var77) & (var69!=var78) & (var69!=var79) & (var70!=var71) & (var70!=var72) & (var70!=var73) & (var70!=var74) & (var70!=var75) & (var70!=var76) & (var70!=var77) & (var70!=var78) & (var70!=var79) & (var71!=var72) & (var71!=var73) & (var71!=var74) & (var71!=var75) & (var71!=var76) & (var71!=var77) & (var71!=var78) & (var71!=var79) & (var72!=var73) & (var72!=var74) & (var72!=var75) & (var72!=var76) & (var72!=var77) & (var72!=var78) & (var72!=var79) & (var73!=var74) & (var73!=var75) & (var73!=var76) & (var73!=var77) & (var73!=var78) & (var73!=var79) & (var74!=var75) & (var74!=var76) & (var74!=var77) & (var74!=var78) & (var74!=var79) & (var75!=var76) & (var75!=var77) & (var75!=var78) & (var75!=var79) & (var76!=var77) & (var76!=var78) & (var76!=var79) & (var77!=var78) & (var77!=var79) & (var78!=var79) &  1))
{myvar0= 1;}
else {exit(0);}
if(((var80!=var81) & (var80!=var82) & (var80!=var83) & (var80!=var84) & (var80!=var85) & (var80!=var86) & (var80!=var87) & (var80!=var88) & (var80!=var89) & (var80!=var90) & (var80!=var91) & (var80!=var92) & (var80!=var93) & (var80!=var94) & (var80!=var95) & (var80!=var96) & (var80!=var97) & (var80!=var98) & (var80!=var99) & (var80!=var100) & (var80!=var101) & (var80!=var102) & (var80!=var103) & (var80!=var104) & (var80!=var105) & (var80!=var106) & (var80!=var107) & (var80!=var108) & (var80!=var109) & (var80!=var110) & (var80!=var111) & (var80!=var112) & (var80!=var113) & (var80!=var114) & (var80!=var115) & (var80!=var116) & (var80!=var117) & (var80!=var118) & (var80!=var119) & (var80!=var120) & (var80!=var121) & (var80!=var122) & (var80!=var123) & (var80!=var124) & (var80!=var125) & (var80!=var126) & (var80!=var127) & (var80!=var128) & (var80!=var129) & (var80!=var130) & (var80!=var131) & (var80!=var132) & (var80!=var133) & (var80!=var134) & (var80!=var135) & (var80!=var136) & (var80!=var137) & (var80!=var138) & (var80!=var139) & (var80!=var140) & (var80!=var141) & (var80!=var142) & (var80!=var143) & (var80!=var144) & (var80!=var145) & (var80!=var146) & (var80!=var147) & (var80!=var148) & (var80!=var149) & (var80!=var150) & (var80!=var151) & (var80!=var152) & (var80!=var153) & (var80!=var154) & (var80!=var155) & (var80!=var156) & (var80!=var157) & (var80!=var158) & (var81!=var82) & (var81!=var83) & (var81!=var84) & (var81!=var85) & (var81!=var86) & (var81!=var87) & (var81!=var88) & (var81!=var89) & (var81!=var90) & (var81!=var91) & (var81!=var92) & (var81!=var93) & (var81!=var94) & (var81!=var95) & (var81!=var96) & (var81!=var97) & (var81!=var98) & (var81!=var99) & (var81!=var100) & (var81!=var101) & (var81!=var102) & (var81!=var103) & (var81!=var104) & (var81!=var105) & (var81!=var106) & (var81!=var107) & (var81!=var108) & (var81!=var109) & (var81!=var110) & (var81!=var111) & (var81!=var112) & (var81!=var113) & (var81!=var114) & (var81!=var115) & (var81!=var116) & (var81!=var117) & (var81!=var118) & (var81!=var119) & (var81!=var120) & (var81!=var121) & (var81!=var122) & (var81!=var123) & (var81!=var124) & (var81!=var125) & (var81!=var126) & (var81!=var127) & (var81!=var128) & (var81!=var129) & (var81!=var130) & (var81!=var131) & (var81!=var132) & (var81!=var133) & (var81!=var134) & (var81!=var135) & (var81!=var136) & (var81!=var137) & (var81!=var138) & (var81!=var139) & (var81!=var140) & (var81!=var141) & (var81!=var142) & (var81!=var143) & (var81!=var144) & (var81!=var145) & (var81!=var146) & (var81!=var147) & (var81!=var148) & (var81!=var149) & (var81!=var150) & (var81!=var151) & (var81!=var152) & (var81!=var153) & (var81!=var154) & (var81!=var155) & (var81!=var156) & (var81!=var157) & (var81!=var158) & (var82!=var83) & (var82!=var84) & (var82!=var85) & (var82!=var86) & (var82!=var87) & (var82!=var88) & (var82!=var89) & (var82!=var90) & (var82!=var91) & (var82!=var92) & (var82!=var93) & (var82!=var94) & (var82!=var95) & (var82!=var96) & (var82!=var97) & (var82!=var98) & (var82!=var99) & (var82!=var100) & (var82!=var101) & (var82!=var102) & (var82!=var103) & (var82!=var104) & (var82!=var105) & (var82!=var106) & (var82!=var107) & (var82!=var108) & (var82!=var109) & (var82!=var110) & (var82!=var111) & (var82!=var112) & (var82!=var113) & (var82!=var114) & (var82!=var115) & (var82!=var116) & (var82!=var117) & (var82!=var118) & (var82!=var119) & (var82!=var120) & (var82!=var121) & (var82!=var122) & (var82!=var123) & (var82!=var124) & (var82!=var125) & (var82!=var126) & (var82!=var127) & (var82!=var128) & (var82!=var129) & (var82!=var130) & (var82!=var131) & (var82!=var132) & (var82!=var133) & (var82!=var134) & (var82!=var135) & (var82!=var136) & (var82!=var137) & (var82!=var138) & (var82!=var139) & (var82!=var140) & (var82!=var141) & (var82!=var142) & (var82!=var143) & (var82!=var144) & (var82!=var145) & (var82!=var146) & (var82!=var147) & (var82!=var148) & (var82!=var149) & (var82!=var150) & (var82!=var151) & (var82!=var152) & (var82!=var153) & (var82!=var154) & (var82!=var155) & (var82!=var156) & (var82!=var157) & (var82!=var158) & (var83!=var84) & (var83!=var85) & (var83!=var86) & (var83!=var87) & (var83!=var88) & (var83!=var89) & (var83!=var90) & (var83!=var91) & (var83!=var92) & (var83!=var93) & (var83!=var94) & (var83!=var95) & (var83!=var96) & (var83!=var97) & (var83!=var98) & (var83!=var99) & (var83!=var100) & (var83!=var101) & (var83!=var102) & (var83!=var103) & (var83!=var104) & (var83!=var105) & (var83!=var106) & (var83!=var107) & (var83!=var108) & (var83!=var109) & (var83!=var110) & (var83!=var111) & (var83!=var112) & (var83!=var113) & (var83!=var114) & (var83!=var115) & (var83!=var116) & (var83!=var117) & (var83!=var118) & (var83!=var119) & (var83!=var120) & (var83!=var121) & (var83!=var122) & (var83!=var123) & (var83!=var124) & (var83!=var125) & (var83!=var126) & (var83!=var127) & (var83!=var128) & (var83!=var129) & (var83!=var130) & (var83!=var131) & (var83!=var132) & (var83!=var133) & (var83!=var134) & (var83!=var135) & (var83!=var136) & (var83!=var137) & (var83!=var138) & (var83!=var139) & (var83!=var140) & (var83!=var141) & (var83!=var142) & (var83!=var143) & (var83!=var144) & (var83!=var145) & (var83!=var146) & (var83!=var147) & (var83!=var148) & (var83!=var149) & (var83!=var150) & (var83!=var151) & (var83!=var152) & (var83!=var153) & (var83!=var154) & (var83!=var155) & (var83!=var156) & (var83!=var157) & (var83!=var158) & (var84!=var85) & (var84!=var86) & (var84!=var87) & (var84!=var88) & (var84!=var89) & (var84!=var90) & (var84!=var91) & (var84!=var92) & (var84!=var93) & (var84!=var94) & (var84!=var95) & (var84!=var96) & (var84!=var97) & (var84!=var98) & (var84!=var99) & (var84!=var100) & (var84!=var101) & (var84!=var102) & (var84!=var103) & (var84!=var104) & (var84!=var105) & (var84!=var106) & (var84!=var107) & (var84!=var108) & (var84!=var109) & (var84!=var110) & (var84!=var111) & (var84!=var112) & (var84!=var113) & (var84!=var114) & (var84!=var115) & (var84!=var116) & (var84!=var117) & (var84!=var118) & (var84!=var119) & (var84!=var120) & (var84!=var121) & (var84!=var122) & (var84!=var123) & (var84!=var124) & (var84!=var125) & (var84!=var126) & (var84!=var127) & (var84!=var128) & (var84!=var129) & (var84!=var130) & (var84!=var131) & (var84!=var132) & (var84!=var133) & (var84!=var134) & (var84!=var135) & (var84!=var136) & (var84!=var137) & (var84!=var138) & (var84!=var139) & (var84!=var140) & (var84!=var141) & (var84!=var142) & (var84!=var143) & (var84!=var144) & (var84!=var145) & (var84!=var146) & (var84!=var147) & (var84!=var148) & (var84!=var149) & (var84!=var150) & (var84!=var151) & (var84!=var152) & (var84!=var153) & (var84!=var154) & (var84!=var155) & (var84!=var156) & (var84!=var157) & (var84!=var158) & (var85!=var86) & (var85!=var87) & (var85!=var88) & (var85!=var89) & (var85!=var90) & (var85!=var91) & (var85!=var92) & (var85!=var93) & (var85!=var94) & (var85!=var95) & (var85!=var96) & (var85!=var97) & (var85!=var98) & (var85!=var99) & (var85!=var100) & (var85!=var101) & (var85!=var102) & (var85!=var103) & (var85!=var104) & (var85!=var105) & (var85!=var106) & (var85!=var107) & (var85!=var108) & (var85!=var109) & (var85!=var110) & (var85!=var111) & (var85!=var112) & (var85!=var113) & (var85!=var114) & (var85!=var115) & (var85!=var116) & (var85!=var117) & (var85!=var118) & (var85!=var119) & (var85!=var120) & (var85!=var121) & (var85!=var122) & (var85!=var123) & (var85!=var124) & (var85!=var125) & (var85!=var126) & (var85!=var127) & (var85!=var128) & (var85!=var129) & (var85!=var130) & (var85!=var131) & (var85!=var132) & (var85!=var133) & (var85!=var134) & (var85!=var135) & (var85!=var136) & (var85!=var137) & (var85!=var138) & (var85!=var139) & (var85!=var140) & (var85!=var141) & (var85!=var142) & (var85!=var143) & (var85!=var144) & (var85!=var145) & (var85!=var146) & (var85!=var147) & (var85!=var148) & (var85!=var149) & (var85!=var150) & (var85!=var151) & (var85!=var152) & (var85!=var153) & (var85!=var154) & (var85!=var155) & (var85!=var156) & (var85!=var157) & (var85!=var158) & (var86!=var87) & (var86!=var88) & (var86!=var89) & (var86!=var90) & (var86!=var91) & (var86!=var92) & (var86!=var93) & (var86!=var94) & (var86!=var95) & (var86!=var96) & (var86!=var97) & (var86!=var98) & (var86!=var99) & (var86!=var100) & (var86!=var101) & (var86!=var102) & (var86!=var103) & (var86!=var104) & (var86!=var105) & (var86!=var106) & (var86!=var107) & (var86!=var108) & (var86!=var109) & (var86!=var110) & (var86!=var111) & (var86!=var112) & (var86!=var113) & (var86!=var114) & (var86!=var115) & (var86!=var116) & (var86!=var117) & (var86!=var118) & (var86!=var119) & (var86!=var120) & (var86!=var121) & (var86!=var122) & (var86!=var123) & (var86!=var124) & (var86!=var125) & (var86!=var126) & (var86!=var127) & (var86!=var128) & (var86!=var129) & (var86!=var130) & (var86!=var131) & (var86!=var132) & (var86!=var133) & (var86!=var134) & (var86!=var135) & (var86!=var136) & (var86!=var137) & (var86!=var138) & (var86!=var139) & (var86!=var140) & (var86!=var141) & (var86!=var142) & (var86!=var143) & (var86!=var144) & (var86!=var145) & (var86!=var146) & (var86!=var147) & (var86!=var148) & (var86!=var149) & (var86!=var150) & (var86!=var151) & (var86!=var152) & (var86!=var153) & (var86!=var154) & (var86!=var155) & (var86!=var156) & (var86!=var157) & (var86!=var158) & (var87!=var88) & (var87!=var89) & (var87!=var90) & (var87!=var91) & (var87!=var92) & (var87!=var93) & (var87!=var94) & (var87!=var95) & (var87!=var96) & (var87!=var97) & (var87!=var98) & (var87!=var99) & (var87!=var100) & (var87!=var101) & (var87!=var102) & (var87!=var103) & (var87!=var104) & (var87!=var105) & (var87!=var106) & (var87!=var107) & (var87!=var108) & (var87!=var109) & (var87!=var110) & (var87!=var111) & (var87!=var112) & (var87!=var113) & (var87!=var114) & (var87!=var115) & (var87!=var116) & (var87!=var117) & (var87!=var118) & (var87!=var119) & (var87!=var120) & (var87!=var121) & (var87!=var122) & (var87!=var123) & (var87!=var124) & (var87!=var125) & (var87!=var126) & (var87!=var127) & (var87!=var128) & (var87!=var129) & (var87!=var130) & (var87!=var131) & (var87!=var132) & (var87!=var133) & (var87!=var134) & (var87!=var135) & (var87!=var136) & (var87!=var137) & (var87!=var138) & (var87!=var139) & (var87!=var140) & (var87!=var141) & (var87!=var142) & (var87!=var143) & (var87!=var144) & (var87!=var145) & (var87!=var146) & (var87!=var147) & (var87!=var148) & (var87!=var149) & (var87!=var150) & (var87!=var151) & (var87!=var152) & (var87!=var153) & (var87!=var154) & (var87!=var155) & (var87!=var156) & (var87!=var157) & (var87!=var158) & (var88!=var89) & (var88!=var90) & (var88!=var91) & (var88!=var92) & (var88!=var93) & (var88!=var94) & (var88!=var95) & (var88!=var96) & (var88!=var97) & (var88!=var98) & (var88!=var99) & (var88!=var100) & (var88!=var101) & (var88!=var102) & (var88!=var103) & (var88!=var104) & (var88!=var105) & (var88!=var106) & (var88!=var107) & (var88!=var108) & (var88!=var109) & (var88!=var110) & (var88!=var111) & (var88!=var112) & (var88!=var113) & (var88!=var114) & (var88!=var115) & (var88!=var116) & (var88!=var117) & (var88!=var118) & (var88!=var119) & (var88!=var120) & (var88!=var121) & (var88!=var122) & (var88!=var123) & (var88!=var124) & (var88!=var125) & (var88!=var126) & (var88!=var127) & (var88!=var128) & (var88!=var129) & (var88!=var130) & (var88!=var131) & (var88!=var132) & (var88!=var133) & (var88!=var134) & (var88!=var135) & (var88!=var136) & (var88!=var137) & (var88!=var138) & (var88!=var139) & (var88!=var140) & (var88!=var141) & (var88!=var142) & (var88!=var143) & (var88!=var144) & (var88!=var145) & (var88!=var146) & (var88!=var147) & (var88!=var148) & (var88!=var149) & (var88!=var150) & (var88!=var151) & (var88!=var152) & (var88!=var153) & (var88!=var154) & (var88!=var155) & (var88!=var156) & (var88!=var157) & (var88!=var158) & (var89!=var90) & (var89!=var91) & (var89!=var92) & (var89!=var93) & (var89!=var94) & (var89!=var95) & (var89!=var96) & (var89!=var97) & (var89!=var98) & (var89!=var99) & (var89!=var100) & (var89!=var101) & (var89!=var102) & (var89!=var103) & (var89!=var104) & (var89!=var105) & (var89!=var106) & (var89!=var107) & (var89!=var108) & (var89!=var109) & (var89!=var110) & (var89!=var111) & (var89!=var112) & (var89!=var113) & (var89!=var114) & (var89!=var115) & (var89!=var116) & (var89!=var117) & (var89!=var118) & (var89!=var119) & (var89!=var120) & (var89!=var121) & (var89!=var122) & (var89!=var123) & (var89!=var124) & (var89!=var125) & (var89!=var126) & (var89!=var127) & (var89!=var128) & (var89!=var129) & (var89!=var130) & (var89!=var131) & (var89!=var132) & (var89!=var133) & (var89!=var134) & (var89!=var135) & (var89!=var136) & (var89!=var137) & (var89!=var138) & (var89!=var139) & (var89!=var140) & (var89!=var141) & (var89!=var142) & (var89!=var143) & (var89!=var144) & (var89!=var145) & (var89!=var146) & (var89!=var147) & (var89!=var148) & (var89!=var149) & (var89!=var150) & (var89!=var151) & (var89!=var152) & (var89!=var153) & (var89!=var154) & (var89!=var155) & (var89!=var156) & (var89!=var157) & (var89!=var158) & (var90!=var91) & (var90!=var92) & (var90!=var93) & (var90!=var94) & (var90!=var95) & (var90!=var96) & (var90!=var97) & (var90!=var98) & (var90!=var99) & (var90!=var100) & (var90!=var101) & (var90!=var102) & (var90!=var103) & (var90!=var104) & (var90!=var105) & (var90!=var106) & (var90!=var107) & (var90!=var108) & (var90!=var109) & (var90!=var110) & (var90!=var111) & (var90!=var112) & (var90!=var113) & (var90!=var114) & (var90!=var115) & (var90!=var116) & (var90!=var117) & (var90!=var118) & (var90!=var119) & (var90!=var120) & (var90!=var121) & (var90!=var122) & (var90!=var123) & (var90!=var124) & (var90!=var125) & (var90!=var126) & (var90!=var127) & (var90!=var128) & (var90!=var129) & (var90!=var130) & (var90!=var131) & (var90!=var132) & (var90!=var133) & (var90!=var134) & (var90!=var135) & (var90!=var136) & (var90!=var137) & (var90!=var138) & (var90!=var139) & (var90!=var140) & (var90!=var141) & (var90!=var142) & (var90!=var143) & (var90!=var144) & (var90!=var145) & (var90!=var146) & (var90!=var147) & (var90!=var148) & (var90!=var149) & (var90!=var150) & (var90!=var151) & (var90!=var152) & (var90!=var153) & (var90!=var154) & (var90!=var155) & (var90!=var156) & (var90!=var157) & (var90!=var158) & (var91!=var92) & (var91!=var93) & (var91!=var94) & (var91!=var95) & (var91!=var96) & (var91!=var97) & (var91!=var98) & (var91!=var99) & (var91!=var100) & (var91!=var101) & (var91!=var102) & (var91!=var103) & (var91!=var104) & (var91!=var105) & (var91!=var106) & (var91!=var107) & (var91!=var108) & (var91!=var109) & (var91!=var110) & (var91!=var111) & (var91!=var112) & (var91!=var113) & (var91!=var114) & (var91!=var115) & (var91!=var116) & (var91!=var117) & (var91!=var118) & (var91!=var119) & (var91!=var120) & (var91!=var121) & (var91!=var122) & (var91!=var123) & (var91!=var124) & (var91!=var125) & (var91!=var126) & (var91!=var127) & (var91!=var128) & (var91!=var129) & (var91!=var130) & (var91!=var131) & (var91!=var132) & (var91!=var133) & (var91!=var134) & (var91!=var135) & (var91!=var136) & (var91!=var137) & (var91!=var138) & (var91!=var139) & (var91!=var140) & (var91!=var141) & (var91!=var142) & (var91!=var143) & (var91!=var144) & (var91!=var145) & (var91!=var146) & (var91!=var147) & (var91!=var148) & (var91!=var149) & (var91!=var150) & (var91!=var151) & (var91!=var152) & (var91!=var153) & (var91!=var154) & (var91!=var155) & (var91!=var156) & (var91!=var157) & (var91!=var158) & (var92!=var93) & (var92!=var94) & (var92!=var95) & (var92!=var96) & (var92!=var97) & (var92!=var98) & (var92!=var99) & (var92!=var100) & (var92!=var101) & (var92!=var102) & (var92!=var103) & (var92!=var104) & (var92!=var105) & (var92!=var106) & (var92!=var107) & (var92!=var108) & (var92!=var109) & (var92!=var110) & (var92!=var111) & (var92!=var112) & (var92!=var113) & (var92!=var114) & (var92!=var115) & (var92!=var116) & (var92!=var117) & (var92!=var118) & (var92!=var119) & (var92!=var120) & (var92!=var121) & (var92!=var122) & (var92!=var123) & (var92!=var124) & (var92!=var125) & (var92!=var126) & (var92!=var127) & (var92!=var128) & (var92!=var129) & (var92!=var130) & (var92!=var131) & (var92!=var132) & (var92!=var133) & (var92!=var134) & (var92!=var135) & (var92!=var136) & (var92!=var137) & (var92!=var138) & (var92!=var139) & (var92!=var140) & (var92!=var141) & (var92!=var142) & (var92!=var143) & (var92!=var144) & (var92!=var145) & (var92!=var146) & (var92!=var147) & (var92!=var148) & (var92!=var149) & (var92!=var150) & (var92!=var151) & (var92!=var152) & (var92!=var153) & (var92!=var154) & (var92!=var155) & (var92!=var156) & (var92!=var157) & (var92!=var158) & (var93!=var94) & (var93!=var95) & (var93!=var96) & (var93!=var97) & (var93!=var98) & (var93!=var99) & (var93!=var100) & (var93!=var101) & (var93!=var102) & (var93!=var103) & (var93!=var104) & (var93!=var105) & (var93!=var106) & (var93!=var107) & (var93!=var108) & (var93!=var109) & (var93!=var110) & (var93!=var111) & (var93!=var112) & (var93!=var113) & (var93!=var114) & (var93!=var115) & (var93!=var116) & (var93!=var117) & (var93!=var118) & (var93!=var119) & (var93!=var120) & (var93!=var121) & (var93!=var122) & (var93!=var123) & (var93!=var124) & (var93!=var125) & (var93!=var126) & (var93!=var127) & (var93!=var128) & (var93!=var129) & (var93!=var130) & (var93!=var131) & (var93!=var132) & (var93!=var133) & (var93!=var134) & (var93!=var135) & (var93!=var136) & (var93!=var137) & (var93!=var138) & (var93!=var139) & (var93!=var140) & (var93!=var141) & (var93!=var142) & (var93!=var143) & (var93!=var144) & (var93!=var145) & (var93!=var146) & (var93!=var147) & (var93!=var148) & (var93!=var149) & (var93!=var150) & (var93!=var151) & (var93!=var152) & (var93!=var153) & (var93!=var154) & (var93!=var155) & (var93!=var156) & (var93!=var157) & (var93!=var158) & (var94!=var95) & (var94!=var96) & (var94!=var97) & (var94!=var98) & (var94!=var99) & (var94!=var100) & (var94!=var101) & (var94!=var102) & (var94!=var103) & (var94!=var104) & (var94!=var105) & (var94!=var106) & (var94!=var107) & (var94!=var108) & (var94!=var109) & (var94!=var110) & (var94!=var111) & (var94!=var112) & (var94!=var113) & (var94!=var114) & (var94!=var115) & (var94!=var116) & (var94!=var117) & (var94!=var118) & (var94!=var119) & (var94!=var120) & (var94!=var121) & (var94!=var122) & (var94!=var123) & (var94!=var124) & (var94!=var125) & (var94!=var126) & (var94!=var127) & (var94!=var128) & (var94!=var129) & (var94!=var130) & (var94!=var131) & (var94!=var132) & (var94!=var133) & (var94!=var134) & (var94!=var135) & (var94!=var136) & (var94!=var137) & (var94!=var138) & (var94!=var139) & (var94!=var140) & (var94!=var141) & (var94!=var142) & (var94!=var143) & (var94!=var144) & (var94!=var145) & (var94!=var146) & (var94!=var147) & (var94!=var148) & (var94!=var149) & (var94!=var150) & (var94!=var151) & (var94!=var152) & (var94!=var153) & (var94!=var154) & (var94!=var155) & (var94!=var156) & (var94!=var157) & (var94!=var158) & (var95!=var96) & (var95!=var97) & (var95!=var98) & (var95!=var99) & (var95!=var100) & (var95!=var101) & (var95!=var102) & (var95!=var103) & (var95!=var104) & (var95!=var105) & (var95!=var106) & (var95!=var107) & (var95!=var108) & (var95!=var109) & (var95!=var110) & (var95!=var111) & (var95!=var112) & (var95!=var113) & (var95!=var114) & (var95!=var115) & (var95!=var116) & (var95!=var117) & (var95!=var118) & (var95!=var119) & (var95!=var120) & (var95!=var121) & (var95!=var122) & (var95!=var123) & (var95!=var124) & (var95!=var125) & (var95!=var126) & (var95!=var127) & (var95!=var128) & (var95!=var129) & (var95!=var130) & (var95!=var131) & (var95!=var132) & (var95!=var133) & (var95!=var134) & (var95!=var135) & (var95!=var136) & (var95!=var137) & (var95!=var138) & (var95!=var139) & (var95!=var140) & (var95!=var141) & (var95!=var142) & (var95!=var143) & (var95!=var144) & (var95!=var145) & (var95!=var146) & (var95!=var147) & (var95!=var148) & (var95!=var149) & (var95!=var150) & (var95!=var151) & (var95!=var152) & (var95!=var153) & (var95!=var154) & (var95!=var155) & (var95!=var156) & (var95!=var157) & (var95!=var158) & (var96!=var97) & (var96!=var98) & (var96!=var99) & (var96!=var100) & (var96!=var101) & (var96!=var102) & (var96!=var103) & (var96!=var104) & (var96!=var105) & (var96!=var106) & (var96!=var107) & (var96!=var108) & (var96!=var109) & (var96!=var110) & (var96!=var111) & (var96!=var112) & (var96!=var113) & (var96!=var114) & (var96!=var115) & (var96!=var116) & (var96!=var117) & (var96!=var118) & (var96!=var119) & (var96!=var120) & (var96!=var121) & (var96!=var122) & (var96!=var123) & (var96!=var124) & (var96!=var125) & (var96!=var126) & (var96!=var127) & (var96!=var128) & (var96!=var129) & (var96!=var130) & (var96!=var131) & (var96!=var132) & (var96!=var133) & (var96!=var134) & (var96!=var135) & (var96!=var136) & (var96!=var137) & (var96!=var138) & (var96!=var139) & (var96!=var140) & (var96!=var141) & (var96!=var142) & (var96!=var143) & (var96!=var144) & (var96!=var145) & (var96!=var146) & (var96!=var147) & (var96!=var148) & (var96!=var149) & (var96!=var150) & (var96!=var151) & (var96!=var152) & (var96!=var153) & (var96!=var154) & (var96!=var155) & (var96!=var156) & (var96!=var157) & (var96!=var158) & (var97!=var98) & (var97!=var99) & (var97!=var100) & (var97!=var101) & (var97!=var102) & (var97!=var103) & (var97!=var104) & (var97!=var105) & (var97!=var106) & (var97!=var107) & (var97!=var108) & (var97!=var109) & (var97!=var110) & (var97!=var111) & (var97!=var112) & (var97!=var113) & (var97!=var114) & (var97!=var115) & (var97!=var116) & (var97!=var117) & (var97!=var118) & (var97!=var119) & (var97!=var120) & (var97!=var121) & (var97!=var122) & (var97!=var123) & (var97!=var124) & (var97!=var125) & (var97!=var126) & (var97!=var127) & (var97!=var128) & (var97!=var129) & (var97!=var130) & (var97!=var131) & (var97!=var132) & (var97!=var133) & (var97!=var134) & (var97!=var135) & (var97!=var136) & (var97!=var137) & (var97!=var138) & (var97!=var139) & (var97!=var140) & (var97!=var141) & (var97!=var142) & (var97!=var143) & (var97!=var144) & (var97!=var145) & (var97!=var146) & (var97!=var147) & (var97!=var148) & (var97!=var149) & (var97!=var150) & (var97!=var151) & (var97!=var152) & (var97!=var153) & (var97!=var154) & (var97!=var155) & (var97!=var156) & (var97!=var157) & (var97!=var158) & (var98!=var99) & (var98!=var100) & (var98!=var101) & (var98!=var102) & (var98!=var103) & (var98!=var104) & (var98!=var105) & (var98!=var106) & (var98!=var107) & (var98!=var108) & (var98!=var109) & (var98!=var110) & (var98!=var111) & (var98!=var112) & (var98!=var113) & (var98!=var114) & (var98!=var115) & (var98!=var116) & (var98!=var117) & (var98!=var118) & (var98!=var119) & (var98!=var120) & (var98!=var121) & (var98!=var122) & (var98!=var123) & (var98!=var124) & (var98!=var125) & (var98!=var126) & (var98!=var127) & (var98!=var128) & (var98!=var129) & (var98!=var130) & (var98!=var131) & (var98!=var132) & (var98!=var133) & (var98!=var134) & (var98!=var135) & (var98!=var136) & (var98!=var137) & (var98!=var138) & (var98!=var139) & (var98!=var140) & (var98!=var141) & (var98!=var142) & (var98!=var143) & (var98!=var144) & (var98!=var145) & (var98!=var146) & (var98!=var147) & (var98!=var148) & (var98!=var149) & (var98!=var150) & (var98!=var151) & (var98!=var152) & (var98!=var153) & (var98!=var154) & (var98!=var155) & (var98!=var156) & (var98!=var157) & (var98!=var158) & (var99!=var100) & (var99!=var101) & (var99!=var102) & (var99!=var103) & (var99!=var104) & (var99!=var105) & (var99!=var106) & (var99!=var107) & (var99!=var108) & (var99!=var109) & (var99!=var110) & (var99!=var111) & (var99!=var112) & (var99!=var113) & (var99!=var114) & (var99!=var115) & (var99!=var116) & (var99!=var117) & (var99!=var118) & (var99!=var119) & (var99!=var120) & (var99!=var121) & (var99!=var122) & (var99!=var123) & (var99!=var124) & (var99!=var125) & (var99!=var126) & (var99!=var127) & (var99!=var128) & (var99!=var129) & (var99!=var130) & (var99!=var131) & (var99!=var132) & (var99!=var133) & (var99!=var134) & (var99!=var135) & (var99!=var136) & (var99!=var137) & (var99!=var138) & (var99!=var139) & (var99!=var140) & (var99!=var141) & (var99!=var142) & (var99!=var143) & (var99!=var144) & (var99!=var145) & (var99!=var146) & (var99!=var147) & (var99!=var148) & (var99!=var149) & (var99!=var150) & (var99!=var151) & (var99!=var152) & (var99!=var153) & (var99!=var154) & (var99!=var155) & (var99!=var156) & (var99!=var157) & (var99!=var158) & (var100!=var101) & (var100!=var102) & (var100!=var103) & (var100!=var104) & (var100!=var105) & (var100!=var106) & (var100!=var107) & (var100!=var108) & (var100!=var109) & (var100!=var110) & (var100!=var111) & (var100!=var112) & (var100!=var113) & (var100!=var114) & (var100!=var115) & (var100!=var116) & (var100!=var117) & (var100!=var118) & (var100!=var119) & (var100!=var120) & (var100!=var121) & (var100!=var122) & (var100!=var123) & (var100!=var124) & (var100!=var125) & (var100!=var126) & (var100!=var127) & (var100!=var128) & (var100!=var129) & (var100!=var130) & (var100!=var131) & (var100!=var132) & (var100!=var133) & (var100!=var134) & (var100!=var135) & (var100!=var136) & (var100!=var137) & (var100!=var138) & (var100!=var139) & (var100!=var140) & (var100!=var141) & (var100!=var142) & (var100!=var143) & (var100!=var144) & (var100!=var145) & (var100!=var146) & (var100!=var147) & (var100!=var148) & (var100!=var149) & (var100!=var150) & (var100!=var151) & (var100!=var152) & (var100!=var153) & (var100!=var154) & (var100!=var155) & (var100!=var156) & (var100!=var157) & (var100!=var158) & (var101!=var102) & (var101!=var103) & (var101!=var104) & (var101!=var105) & (var101!=var106) & (var101!=var107) & (var101!=var108) & (var101!=var109) & (var101!=var110) & (var101!=var111) & (var101!=var112) & (var101!=var113) & (var101!=var114) & (var101!=var115) & (var101!=var116) & (var101!=var117) & (var101!=var118) & (var101!=var119) & (var101!=var120) & (var101!=var121) & (var101!=var122) & (var101!=var123) & (var101!=var124) & (var101!=var125) & (var101!=var126) & (var101!=var127) & (var101!=var128) & (var101!=var129) & (var101!=var130) & (var101!=var131) & (var101!=var132) & (var101!=var133) & (var101!=var134) & (var101!=var135) & (var101!=var136) & (var101!=var137) & (var101!=var138) & (var101!=var139) & (var101!=var140) & (var101!=var141) & (var101!=var142) & (var101!=var143) & (var101!=var144) & (var101!=var145) & (var101!=var146) & (var101!=var147) & (var101!=var148) & (var101!=var149) & (var101!=var150) & (var101!=var151) & (var101!=var152) & (var101!=var153) & (var101!=var154) & (var101!=var155) & (var101!=var156) & (var101!=var157) & (var101!=var158) & (var102!=var103) & (var102!=var104) & (var102!=var105) & (var102!=var106) & (var102!=var107) & (var102!=var108) & (var102!=var109) & (var102!=var110) & (var102!=var111) & (var102!=var112) & (var102!=var113) & (var102!=var114) & (var102!=var115) & (var102!=var116) & (var102!=var117) & (var102!=var118) & (var102!=var119) & (var102!=var120) & (var102!=var121) & (var102!=var122) & (var102!=var123) & (var102!=var124) & (var102!=var125) & (var102!=var126) & (var102!=var127) & (var102!=var128) & (var102!=var129) & (var102!=var130) & (var102!=var131) & (var102!=var132) & (var102!=var133) & (var102!=var134) & (var102!=var135) & (var102!=var136) & (var102!=var137) & (var102!=var138) & (var102!=var139) & (var102!=var140) & (var102!=var141) & (var102!=var142) & (var102!=var143) & (var102!=var144) & (var102!=var145) & (var102!=var146) & (var102!=var147) & (var102!=var148) & (var102!=var149) & (var102!=var150) & (var102!=var151) & (var102!=var152) & (var102!=var153) & (var102!=var154) & (var102!=var155) & (var102!=var156) & (var102!=var157) & (var102!=var158) & (var103!=var104) & (var103!=var105) & (var103!=var106) & (var103!=var107) & (var103!=var108) & (var103!=var109) & (var103!=var110) & (var103!=var111) & (var103!=var112) & (var103!=var113) & (var103!=var114) & (var103!=var115) & (var103!=var116) & (var103!=var117) & (var103!=var118) & (var103!=var119) & (var103!=var120) & (var103!=var121) & (var103!=var122) & (var103!=var123) & (var103!=var124) & (var103!=var125) & (var103!=var126) & (var103!=var127) & (var103!=var128) & (var103!=var129) & (var103!=var130) & (var103!=var131) & (var103!=var132) & (var103!=var133) & (var103!=var134) & (var103!=var135) & (var103!=var136) & (var103!=var137) & (var103!=var138) & (var103!=var139) & (var103!=var140) & (var103!=var141) & (var103!=var142) & (var103!=var143) & (var103!=var144) & (var103!=var145) & (var103!=var146) & (var103!=var147) & (var103!=var148) & (var103!=var149) & (var103!=var150) & (var103!=var151) & (var103!=var152) & (var103!=var153) & (var103!=var154) & (var103!=var155) & (var103!=var156) & (var103!=var157) & (var103!=var158) & (var104!=var105) & (var104!=var106) & (var104!=var107) & (var104!=var108) & (var104!=var109) & (var104!=var110) & (var104!=var111) & (var104!=var112) & (var104!=var113) & (var104!=var114) & (var104!=var115) & (var104!=var116) & (var104!=var117) & (var104!=var118) & (var104!=var119) & (var104!=var120) & (var104!=var121) & (var104!=var122) & (var104!=var123) & (var104!=var124) & (var104!=var125) & (var104!=var126) & (var104!=var127) & (var104!=var128) & (var104!=var129) & (var104!=var130) & (var104!=var131) & (var104!=var132) & (var104!=var133) & (var104!=var134) & (var104!=var135) & (var104!=var136) & (var104!=var137) & (var104!=var138) & (var104!=var139) & (var104!=var140) & (var104!=var141) & (var104!=var142) & (var104!=var143) & (var104!=var144) & (var104!=var145) & (var104!=var146) & (var104!=var147) & (var104!=var148) & (var104!=var149) & (var104!=var150) & (var104!=var151) & (var104!=var152) & (var104!=var153) & (var104!=var154) & (var104!=var155) & (var104!=var156) & (var104!=var157) & (var104!=var158) & (var105!=var106) & (var105!=var107) & (var105!=var108) & (var105!=var109) & (var105!=var110) & (var105!=var111) & (var105!=var112) & (var105!=var113) & (var105!=var114) & (var105!=var115) & (var105!=var116) & (var105!=var117) & (var105!=var118) & (var105!=var119) & (var105!=var120) & (var105!=var121) & (var105!=var122) & (var105!=var123) & (var105!=var124) & (var105!=var125) & (var105!=var126) & (var105!=var127) & (var105!=var128) & (var105!=var129) & (var105!=var130) & (var105!=var131) & (var105!=var132) & (var105!=var133) & (var105!=var134) & (var105!=var135) & (var105!=var136) & (var105!=var137) & (var105!=var138) & (var105!=var139) & (var105!=var140) & (var105!=var141) & (var105!=var142) & (var105!=var143) & (var105!=var144) & (var105!=var145) & (var105!=var146) & (var105!=var147) & (var105!=var148) & (var105!=var149) & (var105!=var150) & (var105!=var151) & (var105!=var152) & (var105!=var153) & (var105!=var154) & (var105!=var155) & (var105!=var156) & (var105!=var157) & (var105!=var158) & (var106!=var107) & (var106!=var108) & (var106!=var109) & (var106!=var110) & (var106!=var111) & (var106!=var112) & (var106!=var113) & (var106!=var114) & (var106!=var115) & (var106!=var116) & (var106!=var117) & (var106!=var118) & (var106!=var119) & (var106!=var120) & (var106!=var121) & (var106!=var122) & (var106!=var123) & (var106!=var124) & (var106!=var125) & (var106!=var126) & (var106!=var127) & (var106!=var128) & (var106!=var129) & (var106!=var130) & (var106!=var131) & (var106!=var132) & (var106!=var133) & (var106!=var134) & (var106!=var135) & (var106!=var136) & (var106!=var137) & (var106!=var138) & (var106!=var139) & (var106!=var140) & (var106!=var141) & (var106!=var142) & (var106!=var143) & (var106!=var144) & (var106!=var145) & (var106!=var146) & (var106!=var147) & (var106!=var148) & (var106!=var149) & (var106!=var150) & (var106!=var151) & (var106!=var152) & (var106!=var153) & (var106!=var154) & (var106!=var155) & (var106!=var156) & (var106!=var157) & (var106!=var158) & (var107!=var108) & (var107!=var109) & (var107!=var110) & (var107!=var111) & (var107!=var112) & (var107!=var113) & (var107!=var114) & (var107!=var115) & (var107!=var116) & (var107!=var117) & (var107!=var118) & (var107!=var119) & (var107!=var120) & (var107!=var121) & (var107!=var122) & (var107!=var123) & (var107!=var124) & (var107!=var125) & (var107!=var126) & (var107!=var127) & (var107!=var128) & (var107!=var129) & (var107!=var130) & (var107!=var131) & (var107!=var132) & (var107!=var133) & (var107!=var134) & (var107!=var135) & (var107!=var136) & (var107!=var137) & (var107!=var138) & (var107!=var139) & (var107!=var140) & (var107!=var141) & (var107!=var142) & (var107!=var143) & (var107!=var144) & (var107!=var145) & (var107!=var146) & (var107!=var147) & (var107!=var148) & (var107!=var149) & (var107!=var150) & (var107!=var151) & (var107!=var152) & (var107!=var153) & (var107!=var154) & (var107!=var155) & (var107!=var156) & (var107!=var157) & (var107!=var158) & (var108!=var109) & (var108!=var110) & (var108!=var111) & (var108!=var112) & (var108!=var113) & (var108!=var114) & (var108!=var115) & (var108!=var116) & (var108!=var117) & (var108!=var118) & (var108!=var119) & (var108!=var120) & (var108!=var121) & (var108!=var122) & (var108!=var123) & (var108!=var124) & (var108!=var125) & (var108!=var126) & (var108!=var127) & (var108!=var128) & (var108!=var129) & (var108!=var130) & (var108!=var131) & (var108!=var132) & (var108!=var133) & (var108!=var134) & (var108!=var135) & (var108!=var136) & (var108!=var137) & (var108!=var138) & (var108!=var139) & (var108!=var140) & (var108!=var141) & (var108!=var142) & (var108!=var143) & (var108!=var144) & (var108!=var145) & (var108!=var146) & (var108!=var147) & (var108!=var148) & (var108!=var149) & (var108!=var150) & (var108!=var151) & (var108!=var152) & (var108!=var153) & (var108!=var154) & (var108!=var155) & (var108!=var156) & (var108!=var157) & (var108!=var158) & (var109!=var110) & (var109!=var111) & (var109!=var112) & (var109!=var113) & (var109!=var114) & (var109!=var115) & (var109!=var116) & (var109!=var117) & (var109!=var118) & (var109!=var119) & (var109!=var120) & (var109!=var121) & (var109!=var122) & (var109!=var123) & (var109!=var124) & (var109!=var125) & (var109!=var126) & (var109!=var127) & (var109!=var128) & (var109!=var129) & (var109!=var130) & (var109!=var131) & (var109!=var132) & (var109!=var133) & (var109!=var134) & (var109!=var135) & (var109!=var136) & (var109!=var137) & (var109!=var138) & (var109!=var139) & (var109!=var140) & (var109!=var141) & (var109!=var142) & (var109!=var143) & (var109!=var144) & (var109!=var145) & (var109!=var146) & (var109!=var147) & (var109!=var148) & (var109!=var149) & (var109!=var150) & (var109!=var151) & (var109!=var152) & (var109!=var153) & (var109!=var154) & (var109!=var155) & (var109!=var156) & (var109!=var157) & (var109!=var158) & (var110!=var111) & (var110!=var112) & (var110!=var113) & (var110!=var114) & (var110!=var115) & (var110!=var116) & (var110!=var117) & (var110!=var118) & (var110!=var119) & (var110!=var120) & (var110!=var121) & (var110!=var122) & (var110!=var123) & (var110!=var124) & (var110!=var125) & (var110!=var126) & (var110!=var127) & (var110!=var128) & (var110!=var129) & (var110!=var130) & (var110!=var131) & (var110!=var132) & (var110!=var133) & (var110!=var134) & (var110!=var135) & (var110!=var136) & (var110!=var137) & (var110!=var138) & (var110!=var139) & (var110!=var140) & (var110!=var141) & (var110!=var142) & (var110!=var143) & (var110!=var144) & (var110!=var145) & (var110!=var146) & (var110!=var147) & (var110!=var148) & (var110!=var149) & (var110!=var150) & (var110!=var151) & (var110!=var152) & (var110!=var153) & (var110!=var154) & (var110!=var155) & (var110!=var156) & (var110!=var157) & (var110!=var158) & (var111!=var112) & (var111!=var113) & (var111!=var114) & (var111!=var115) & (var111!=var116) & (var111!=var117) & (var111!=var118) & (var111!=var119) & (var111!=var120) & (var111!=var121) & (var111!=var122) & (var111!=var123) & (var111!=var124) & (var111!=var125) & (var111!=var126) & (var111!=var127) & (var111!=var128) & (var111!=var129) & (var111!=var130) & (var111!=var131) & (var111!=var132) & (var111!=var133) & (var111!=var134) & (var111!=var135) & (var111!=var136) & (var111!=var137) & (var111!=var138) & (var111!=var139) & (var111!=var140) & (var111!=var141) & (var111!=var142) & (var111!=var143) & (var111!=var144) & (var111!=var145) & (var111!=var146) & (var111!=var147) & (var111!=var148) & (var111!=var149) & (var111!=var150) & (var111!=var151) & (var111!=var152) & (var111!=var153) & (var111!=var154) & (var111!=var155) & (var111!=var156) & (var111!=var157) & (var111!=var158) & (var112!=var113) & (var112!=var114) & (var112!=var115) & (var112!=var116) & (var112!=var117) & (var112!=var118) & (var112!=var119) & (var112!=var120) & (var112!=var121) & (var112!=var122) & (var112!=var123) & (var112!=var124) & (var112!=var125) & (var112!=var126) & (var112!=var127) & (var112!=var128) & (var112!=var129) & (var112!=var130) & (var112!=var131) & (var112!=var132) & (var112!=var133) & (var112!=var134) & (var112!=var135) & (var112!=var136) & (var112!=var137) & (var112!=var138) & (var112!=var139) & (var112!=var140) & (var112!=var141) & (var112!=var142) & (var112!=var143) & (var112!=var144) & (var112!=var145) & (var112!=var146) & (var112!=var147) & (var112!=var148) & (var112!=var149) & (var112!=var150) & (var112!=var151) & (var112!=var152) & (var112!=var153) & (var112!=var154) & (var112!=var155) & (var112!=var156) & (var112!=var157) & (var112!=var158) & (var113!=var114) & (var113!=var115) & (var113!=var116) & (var113!=var117) & (var113!=var118) & (var113!=var119) & (var113!=var120) & (var113!=var121) & (var113!=var122) & (var113!=var123) & (var113!=var124) & (var113!=var125) & (var113!=var126) & (var113!=var127) & (var113!=var128) & (var113!=var129) & (var113!=var130) & (var113!=var131) & (var113!=var132) & (var113!=var133) & (var113!=var134) & (var113!=var135) & (var113!=var136) & (var113!=var137) & (var113!=var138) & (var113!=var139) & (var113!=var140) & (var113!=var141) & (var113!=var142) & (var113!=var143) & (var113!=var144) & (var113!=var145) & (var113!=var146) & (var113!=var147) & (var113!=var148) & (var113!=var149) & (var113!=var150) & (var113!=var151) & (var113!=var152) & (var113!=var153) & (var113!=var154) & (var113!=var155) & (var113!=var156) & (var113!=var157) & (var113!=var158) & (var114!=var115) & (var114!=var116) & (var114!=var117) & (var114!=var118) & (var114!=var119) & (var114!=var120) & (var114!=var121) & (var114!=var122) & (var114!=var123) & (var114!=var124) & (var114!=var125) & (var114!=var126) & (var114!=var127) & (var114!=var128) & (var114!=var129) & (var114!=var130) & (var114!=var131) & (var114!=var132) & (var114!=var133) & (var114!=var134) & (var114!=var135) & (var114!=var136) & (var114!=var137) & (var114!=var138) & (var114!=var139) & (var114!=var140) & (var114!=var141) & (var114!=var142) & (var114!=var143) & (var114!=var144) & (var114!=var145) & (var114!=var146) & (var114!=var147) & (var114!=var148) & (var114!=var149) & (var114!=var150) & (var114!=var151) & (var114!=var152) & (var114!=var153) & (var114!=var154) & (var114!=var155) & (var114!=var156) & (var114!=var157) & (var114!=var158) & (var115!=var116) & (var115!=var117) & (var115!=var118) & (var115!=var119) & (var115!=var120) & (var115!=var121) & (var115!=var122) & (var115!=var123) & (var115!=var124) & (var115!=var125) & (var115!=var126) & (var115!=var127) & (var115!=var128) & (var115!=var129) & (var115!=var130) & (var115!=var131) & (var115!=var132) & (var115!=var133) & (var115!=var134) & (var115!=var135) & (var115!=var136) & (var115!=var137) & (var115!=var138) & (var115!=var139) & (var115!=var140) & (var115!=var141) & (var115!=var142) & (var115!=var143) & (var115!=var144) & (var115!=var145) & (var115!=var146) & (var115!=var147) & (var115!=var148) & (var115!=var149) & (var115!=var150) & (var115!=var151) & (var115!=var152) & (var115!=var153) & (var115!=var154) & (var115!=var155) & (var115!=var156) & (var115!=var157) & (var115!=var158) & (var116!=var117) & (var116!=var118) & (var116!=var119) & (var116!=var120) & (var116!=var121) & (var116!=var122) & (var116!=var123) & (var116!=var124) & (var116!=var125) & (var116!=var126) & (var116!=var127) & (var116!=var128) & (var116!=var129) & (var116!=var130) & (var116!=var131) & (var116!=var132) & (var116!=var133) & (var116!=var134) & (var116!=var135) & (var116!=var136) & (var116!=var137) & (var116!=var138) & (var116!=var139) & (var116!=var140) & (var116!=var141) & (var116!=var142) & (var116!=var143) & (var116!=var144) & (var116!=var145) & (var116!=var146) & (var116!=var147) & (var116!=var148) & (var116!=var149) & (var116!=var150) & (var116!=var151) & (var116!=var152) & (var116!=var153) & (var116!=var154) & (var116!=var155) & (var116!=var156) & (var116!=var157) & (var116!=var158) & (var117!=var118) & (var117!=var119) & (var117!=var120) & (var117!=var121) & (var117!=var122) & (var117!=var123) & (var117!=var124) & (var117!=var125) & (var117!=var126) & (var117!=var127) & (var117!=var128) & (var117!=var129) & (var117!=var130) & (var117!=var131) & (var117!=var132) & (var117!=var133) & (var117!=var134) & (var117!=var135) & (var117!=var136) & (var117!=var137) & (var117!=var138) & (var117!=var139) & (var117!=var140) & (var117!=var141) & (var117!=var142) & (var117!=var143) & (var117!=var144) & (var117!=var145) & (var117!=var146) & (var117!=var147) & (var117!=var148) & (var117!=var149) & (var117!=var150) & (var117!=var151) & (var117!=var152) & (var117!=var153) & (var117!=var154) & (var117!=var155) & (var117!=var156) & (var117!=var157) & (var117!=var158) & (var118!=var119) & (var118!=var120) & (var118!=var121) & (var118!=var122) & (var118!=var123) & (var118!=var124) & (var118!=var125) & (var118!=var126) & (var118!=var127) & (var118!=var128) & (var118!=var129) & (var118!=var130) & (var118!=var131) & (var118!=var132) & (var118!=var133) & (var118!=var134) & (var118!=var135) & (var118!=var136) & (var118!=var137) & (var118!=var138) & (var118!=var139) & (var118!=var140) & (var118!=var141) & (var118!=var142) & (var118!=var143) & (var118!=var144) & (var118!=var145) & (var118!=var146) & (var118!=var147) & (var118!=var148) & (var118!=var149) & (var118!=var150) & (var118!=var151) & (var118!=var152) & (var118!=var153) & (var118!=var154) & (var118!=var155) & (var118!=var156) & (var118!=var157) & (var118!=var158) & (var119!=var120) & (var119!=var121) & (var119!=var122) & (var119!=var123) & (var119!=var124) & (var119!=var125) & (var119!=var126) & (var119!=var127) & (var119!=var128) & (var119!=var129) & (var119!=var130) & (var119!=var131) & (var119!=var132) & (var119!=var133) & (var119!=var134) & (var119!=var135) & (var119!=var136) & (var119!=var137) & (var119!=var138) & (var119!=var139) & (var119!=var140) & (var119!=var141) & (var119!=var142) & (var119!=var143) & (var119!=var144) & (var119!=var145) & (var119!=var146) & (var119!=var147) & (var119!=var148) & (var119!=var149) & (var119!=var150) & (var119!=var151) & (var119!=var152) & (var119!=var153) & (var119!=var154) & (var119!=var155) & (var119!=var156) & (var119!=var157) & (var119!=var158) & (var120!=var121) & (var120!=var122) & (var120!=var123) & (var120!=var124) & (var120!=var125) & (var120!=var126) & (var120!=var127) & (var120!=var128) & (var120!=var129) & (var120!=var130) & (var120!=var131) & (var120!=var132) & (var120!=var133) & (var120!=var134) & (var120!=var135) & (var120!=var136) & (var120!=var137) & (var120!=var138) & (var120!=var139) & (var120!=var140) & (var120!=var141) & (var120!=var142) & (var120!=var143) & (var120!=var144) & (var120!=var145) & (var120!=var146) & (var120!=var147) & (var120!=var148) & (var120!=var149) & (var120!=var150) & (var120!=var151) & (var120!=var152) & (var120!=var153) & (var120!=var154) & (var120!=var155) & (var120!=var156) & (var120!=var157) & (var120!=var158) & (var121!=var122) & (var121!=var123) & (var121!=var124) & (var121!=var125) & (var121!=var126) & (var121!=var127) & (var121!=var128) & (var121!=var129) & (var121!=var130) & (var121!=var131) & (var121!=var132) & (var121!=var133) & (var121!=var134) & (var121!=var135) & (var121!=var136) & (var121!=var137) & (var121!=var138) & (var121!=var139) & (var121!=var140) & (var121!=var141) & (var121!=var142) & (var121!=var143) & (var121!=var144) & (var121!=var145) & (var121!=var146) & (var121!=var147) & (var121!=var148) & (var121!=var149) & (var121!=var150) & (var121!=var151) & (var121!=var152) & (var121!=var153) & (var121!=var154) & (var121!=var155) & (var121!=var156) & (var121!=var157) & (var121!=var158) & (var122!=var123) & (var122!=var124) & (var122!=var125) & (var122!=var126) & (var122!=var127) & (var122!=var128) & (var122!=var129) & (var122!=var130) & (var122!=var131) & (var122!=var132) & (var122!=var133) & (var122!=var134) & (var122!=var135) & (var122!=var136) & (var122!=var137) & (var122!=var138) & (var122!=var139) & (var122!=var140) & (var122!=var141) & (var122!=var142) & (var122!=var143) & (var122!=var144) & (var122!=var145) & (var122!=var146) & (var122!=var147) & (var122!=var148) & (var122!=var149) & (var122!=var150) & (var122!=var151) & (var122!=var152) & (var122!=var153) & (var122!=var154) & (var122!=var155) & (var122!=var156) & (var122!=var157) & (var122!=var158) & (var123!=var124) & (var123!=var125) & (var123!=var126) & (var123!=var127) & (var123!=var128) & (var123!=var129) & (var123!=var130) & (var123!=var131) & (var123!=var132) & (var123!=var133) & (var123!=var134) & (var123!=var135) & (var123!=var136) & (var123!=var137) & (var123!=var138) & (var123!=var139) & (var123!=var140) & (var123!=var141) & (var123!=var142) & (var123!=var143) & (var123!=var144) & (var123!=var145) & (var123!=var146) & (var123!=var147) & (var123!=var148) & (var123!=var149) & (var123!=var150) & (var123!=var151) & (var123!=var152) & (var123!=var153) & (var123!=var154) & (var123!=var155) & (var123!=var156) & (var123!=var157) & (var123!=var158) & (var124!=var125) & (var124!=var126) & (var124!=var127) & (var124!=var128) & (var124!=var129) & (var124!=var130) & (var124!=var131) & (var124!=var132) & (var124!=var133) & (var124!=var134) & (var124!=var135) & (var124!=var136) & (var124!=var137) & (var124!=var138) & (var124!=var139) & (var124!=var140) & (var124!=var141) & (var124!=var142) & (var124!=var143) & (var124!=var144) & (var124!=var145) & (var124!=var146) & (var124!=var147) & (var124!=var148) & (var124!=var149) & (var124!=var150) & (var124!=var151) & (var124!=var152) & (var124!=var153) & (var124!=var154) & (var124!=var155) & (var124!=var156) & (var124!=var157) & (var124!=var158) & (var125!=var126) & (var125!=var127) & (var125!=var128) & (var125!=var129) & (var125!=var130) & (var125!=var131) & (var125!=var132) & (var125!=var133) & (var125!=var134) & (var125!=var135) & (var125!=var136) & (var125!=var137) & (var125!=var138) & (var125!=var139) & (var125!=var140) & (var125!=var141) & (var125!=var142) & (var125!=var143) & (var125!=var144) & (var125!=var145) & (var125!=var146) & (var125!=var147) & (var125!=var148) & (var125!=var149) & (var125!=var150) & (var125!=var151) & (var125!=var152) & (var125!=var153) & (var125!=var154) & (var125!=var155) & (var125!=var156) & (var125!=var157) & (var125!=var158) & (var126!=var127) & (var126!=var128) & (var126!=var129) & (var126!=var130) & (var126!=var131) & (var126!=var132) & (var126!=var133) & (var126!=var134) & (var126!=var135) & (var126!=var136) & (var126!=var137) & (var126!=var138) & (var126!=var139) & (var126!=var140) & (var126!=var141) & (var126!=var142) & (var126!=var143) & (var126!=var144) & (var126!=var145) & (var126!=var146) & (var126!=var147) & (var126!=var148) & (var126!=var149) & (var126!=var150) & (var126!=var151) & (var126!=var152) & (var126!=var153) & (var126!=var154) & (var126!=var155) & (var126!=var156) & (var126!=var157) & (var126!=var158) & (var127!=var128) & (var127!=var129) & (var127!=var130) & (var127!=var131) & (var127!=var132) & (var127!=var133) & (var127!=var134) & (var127!=var135) & (var127!=var136) & (var127!=var137) & (var127!=var138) & (var127!=var139) & (var127!=var140) & (var127!=var141) & (var127!=var142) & (var127!=var143) & (var127!=var144) & (var127!=var145) & (var127!=var146) & (var127!=var147) & (var127!=var148) & (var127!=var149) & (var127!=var150) & (var127!=var151) & (var127!=var152) & (var127!=var153) & (var127!=var154) & (var127!=var155) & (var127!=var156) & (var127!=var157) & (var127!=var158) & (var128!=var129) & (var128!=var130) & (var128!=var131) & (var128!=var132) & (var128!=var133) & (var128!=var134) & (var128!=var135) & (var128!=var136) & (var128!=var137) & (var128!=var138) & (var128!=var139) & (var128!=var140) & (var128!=var141) & (var128!=var142) & (var128!=var143) & (var128!=var144) & (var128!=var145) & (var128!=var146) & (var128!=var147) & (var128!=var148) & (var128!=var149) & (var128!=var150) & (var128!=var151) & (var128!=var152) & (var128!=var153) & (var128!=var154) & (var128!=var155) & (var128!=var156) & (var128!=var157) & (var128!=var158) & (var129!=var130) & (var129!=var131) & (var129!=var132) & (var129!=var133) & (var129!=var134) & (var129!=var135) & (var129!=var136) & (var129!=var137) & (var129!=var138) & (var129!=var139) & (var129!=var140) & (var129!=var141) & (var129!=var142) & (var129!=var143) & (var129!=var144) & (var129!=var145) & (var129!=var146) & (var129!=var147) & (var129!=var148) & (var129!=var149) & (var129!=var150) & (var129!=var151) & (var129!=var152) & (var129!=var153) & (var129!=var154) & (var129!=var155) & (var129!=var156) & (var129!=var157) & (var129!=var158) & (var130!=var131) & (var130!=var132) & (var130!=var133) & (var130!=var134) & (var130!=var135) & (var130!=var136) & (var130!=var137) & (var130!=var138) & (var130!=var139) & (var130!=var140) & (var130!=var141) & (var130!=var142) & (var130!=var143) & (var130!=var144) & (var130!=var145) & (var130!=var146) & (var130!=var147) & (var130!=var148) & (var130!=var149) & (var130!=var150) & (var130!=var151) & (var130!=var152) & (var130!=var153) & (var130!=var154) & (var130!=var155) & (var130!=var156) & (var130!=var157) & (var130!=var158) & (var131!=var132) & (var131!=var133) & (var131!=var134) & (var131!=var135) & (var131!=var136) & (var131!=var137) & (var131!=var138) & (var131!=var139) & (var131!=var140) & (var131!=var141) & (var131!=var142) & (var131!=var143) & (var131!=var144) & (var131!=var145) & (var131!=var146) & (var131!=var147) & (var131!=var148) & (var131!=var149) & (var131!=var150) & (var131!=var151) & (var131!=var152) & (var131!=var153) & (var131!=var154) & (var131!=var155) & (var131!=var156) & (var131!=var157) & (var131!=var158) & (var132!=var133) & (var132!=var134) & (var132!=var135) & (var132!=var136) & (var132!=var137) & (var132!=var138) & (var132!=var139) & (var132!=var140) & (var132!=var141) & (var132!=var142) & (var132!=var143) & (var132!=var144) & (var132!=var145) & (var132!=var146) & (var132!=var147) & (var132!=var148) & (var132!=var149) & (var132!=var150) & (var132!=var151) & (var132!=var152) & (var132!=var153) & (var132!=var154) & (var132!=var155) & (var132!=var156) & (var132!=var157) & (var132!=var158) & (var133!=var134) & (var133!=var135) & (var133!=var136) & (var133!=var137) & (var133!=var138) & (var133!=var139) & (var133!=var140) & (var133!=var141) & (var133!=var142) & (var133!=var143) & (var133!=var144) & (var133!=var145) & (var133!=var146) & (var133!=var147) & (var133!=var148) & (var133!=var149) & (var133!=var150) & (var133!=var151) & (var133!=var152) & (var133!=var153) & (var133!=var154) & (var133!=var155) & (var133!=var156) & (var133!=var157) & (var133!=var158) & (var134!=var135) & (var134!=var136) & (var134!=var137) & (var134!=var138) & (var134!=var139) & (var134!=var140) & (var134!=var141) & (var134!=var142) & (var134!=var143) & (var134!=var144) & (var134!=var145) & (var134!=var146) & (var134!=var147) & (var134!=var148) & (var134!=var149) & (var134!=var150) & (var134!=var151) & (var134!=var152) & (var134!=var153) & (var134!=var154) & (var134!=var155) & (var134!=var156) & (var134!=var157) & (var134!=var158) & (var135!=var136) & (var135!=var137) & (var135!=var138) & (var135!=var139) & (var135!=var140) & (var135!=var141) & (var135!=var142) & (var135!=var143) & (var135!=var144) & (var135!=var145) & (var135!=var146) & (var135!=var147) & (var135!=var148) & (var135!=var149) & (var135!=var150) & (var135!=var151) & (var135!=var152) & (var135!=var153) & (var135!=var154) & (var135!=var155) & (var135!=var156) & (var135!=var157) & (var135!=var158) & (var136!=var137) & (var136!=var138) & (var136!=var139) & (var136!=var140) & (var136!=var141) & (var136!=var142) & (var136!=var143) & (var136!=var144) & (var136!=var145) & (var136!=var146) & (var136!=var147) & (var136!=var148) & (var136!=var149) & (var136!=var150) & (var136!=var151) & (var136!=var152) & (var136!=var153) & (var136!=var154) & (var136!=var155) & (var136!=var156) & (var136!=var157) & (var136!=var158) & (var137!=var138) & (var137!=var139) & (var137!=var140) & (var137!=var141) & (var137!=var142) & (var137!=var143) & (var137!=var144) & (var137!=var145) & (var137!=var146) & (var137!=var147) & (var137!=var148) & (var137!=var149) & (var137!=var150) & (var137!=var151) & (var137!=var152) & (var137!=var153) & (var137!=var154) & (var137!=var155) & (var137!=var156) & (var137!=var157) & (var137!=var158) & (var138!=var139) & (var138!=var140) & (var138!=var141) & (var138!=var142) & (var138!=var143) & (var138!=var144) & (var138!=var145) & (var138!=var146) & (var138!=var147) & (var138!=var148) & (var138!=var149) & (var138!=var150) & (var138!=var151) & (var138!=var152) & (var138!=var153) & (var138!=var154) & (var138!=var155) & (var138!=var156) & (var138!=var157) & (var138!=var158) & (var139!=var140) & (var139!=var141) & (var139!=var142) & (var139!=var143) & (var139!=var144) & (var139!=var145) & (var139!=var146) & (var139!=var147) & (var139!=var148) & (var139!=var149) & (var139!=var150) & (var139!=var151) & (var139!=var152) & (var139!=var153) & (var139!=var154) & (var139!=var155) & (var139!=var156) & (var139!=var157) & (var139!=var158) & (var140!=var141) & (var140!=var142) & (var140!=var143) & (var140!=var144) & (var140!=var145) & (var140!=var146) & (var140!=var147) & (var140!=var148) & (var140!=var149) & (var140!=var150) & (var140!=var151) & (var140!=var152) & (var140!=var153) & (var140!=var154) & (var140!=var155) & (var140!=var156) & (var140!=var157) & (var140!=var158) & (var141!=var142) & (var141!=var143) & (var141!=var144) & (var141!=var145) & (var141!=var146) & (var141!=var147) & (var141!=var148) & (var141!=var149) & (var141!=var150) & (var141!=var151) & (var141!=var152) & (var141!=var153) & (var141!=var154) & (var141!=var155) & (var141!=var156) & (var141!=var157) & (var141!=var158) & (var142!=var143) & (var142!=var144) & (var142!=var145) & (var142!=var146) & (var142!=var147) & (var142!=var148) & (var142!=var149) & (var142!=var150) & (var142!=var151) & (var142!=var152) & (var142!=var153) & (var142!=var154) & (var142!=var155) & (var142!=var156) & (var142!=var157) & (var142!=var158) & (var143!=var144) & (var143!=var145) & (var143!=var146) & (var143!=var147) & (var143!=var148) & (var143!=var149) & (var143!=var150) & (var143!=var151) & (var143!=var152) & (var143!=var153) & (var143!=var154) & (var143!=var155) & (var143!=var156) & (var143!=var157) & (var143!=var158) & (var144!=var145) & (var144!=var146) & (var144!=var147) & (var144!=var148) & (var144!=var149) & (var144!=var150) & (var144!=var151) & (var144!=var152) & (var144!=var153) & (var144!=var154) & (var144!=var155) & (var144!=var156) & (var144!=var157) & (var144!=var158) & (var145!=var146) & (var145!=var147) & (var145!=var148) & (var145!=var149) & (var145!=var150) & (var145!=var151) & (var145!=var152) & (var145!=var153) & (var145!=var154) & (var145!=var155) & (var145!=var156) & (var145!=var157) & (var145!=var158) & (var146!=var147) & (var146!=var148) & (var146!=var149) & (var146!=var150) & (var146!=var151) & (var146!=var152) & (var146!=var153) & (var146!=var154) & (var146!=var155) & (var146!=var156) & (var146!=var157) & (var146!=var158) & (var147!=var148) & (var147!=var149) & (var147!=var150) & (var147!=var151) & (var147!=var152) & (var147!=var153) & (var147!=var154) & (var147!=var155) & (var147!=var156) & (var147!=var157) & (var147!=var158) & (var148!=var149) & (var148!=var150) & (var148!=var151) & (var148!=var152) & (var148!=var153) & (var148!=var154) & (var148!=var155) & (var148!=var156) & (var148!=var157) & (var148!=var158) & (var149!=var150) & (var149!=var151) & (var149!=var152) & (var149!=var153) & (var149!=var154) & (var149!=var155) & (var149!=var156) & (var149!=var157) & (var149!=var158) & (var150!=var151) & (var150!=var152) & (var150!=var153) & (var150!=var154) & (var150!=var155) & (var150!=var156) & (var150!=var157) & (var150!=var158) & (var151!=var152) & (var151!=var153) & (var151!=var154) & (var151!=var155) & (var151!=var156) & (var151!=var157) & (var151!=var158) & (var152!=var153) & (var152!=var154) & (var152!=var155) & (var152!=var156) & (var152!=var157) & (var152!=var158) & (var153!=var154) & (var153!=var155) & (var153!=var156) & (var153!=var157) & (var153!=var158) & (var154!=var155) & (var154!=var156) & (var154!=var157) & (var154!=var158) & (var155!=var156) & (var155!=var157) & (var155!=var158) & (var156!=var157) & (var156!=var158) & (var157!=var158) &  1))
{myvar0= 1;}
else {exit(0);}
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var80 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var81 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var82 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var83 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var84 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var85 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var86 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var87 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var88 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var89 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var90 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var11 - var12;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var91 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var12 - var13;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var92 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var13 - var14;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var93 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var14 - var15;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var94 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var15 - var16;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var95 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var16 - var17;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var96 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var17 - var18;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var97 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var18 - var19;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var98 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var19 - var20;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var99 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var20 - var21;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var100 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var21 - var22;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var101 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var22 - var23;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var102 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var23 - var24;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var103 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var24 - var25;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var104 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var25 - var26;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var105 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var26 - var27;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var106 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var27 - var28;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var107 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var28 - var29;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var108 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var29 - var30;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var109 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var30 - var31;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var110 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var31 - var32;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var111 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var32 - var33;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var112 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var33 - var34;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var113 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var34 - var35;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var114 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var35 - var36;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var115 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var36 - var37;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var116 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var37 - var38;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var117 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var38 - var39;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var118 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var39 - var40;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var119 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var40 - var41;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var120 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var41 - var42;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var121 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var42 - var43;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var122 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var43 - var44;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var123 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var44 - var45;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var124 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var45 - var46;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var125 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var46 - var47;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var126 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var47 - var48;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var127 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var48 - var49;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var128 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var49 - var50;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var129 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var50 - var51;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var130 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var51 - var52;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var131 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var52 - var53;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var132 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var53 - var54;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var133 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var54 - var55;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var134 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var55 - var56;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var135 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var56 - var57;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var136 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var57 - var58;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var137 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var58 - var59;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var138 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var59 - var60;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var139 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var60 - var61;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var140 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var61 - var62;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var141 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var62 - var63;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var142 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var63 - var64;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var143 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var64 - var65;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var144 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var65 - var66;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var145 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var66 - var67;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var146 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var67 - var68;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var147 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var68 - var69;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var148 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var69 - var70;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var149 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var70 - var71;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var150 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var71 - var72;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var151 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var72 - var73;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var152 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var73 - var74;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var153 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var74 - var75;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var154 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var75 - var76;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var155 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var76 - var77;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var156 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var77 - var78;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var157 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var78 - var79;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var158 == var_for_abs){myvar0= 1;}
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
80 y[0]
81 y[1]
82 y[2]
83 y[3]
84 y[4]
85 y[5]
86 y[6]
87 y[7]
88 y[8]
89 y[9]
90 y[10]
91 y[11]
92 y[12]
93 y[13]
94 y[14]
95 y[15]
96 y[16]
97 y[17]
98 y[18]
99 y[19]
100 y[20]
101 y[21]
102 y[22]
103 y[23]
104 y[24]
105 y[25]
106 y[26]
107 y[27]
108 y[28]
109 y[29]
110 y[30]
111 y[31]
112 y[32]
113 y[33]
114 y[34]
115 y[35]
116 y[36]
117 y[37]
118 y[38]
119 y[39]
120 y[40]
121 y[41]
122 y[42]
123 y[43]
124 y[44]
125 y[45]
126 y[46]
127 y[47]
128 y[48]
129 y[49]
130 y[50]
131 y[51]
132 y[52]
133 y[53]
134 y[54]
135 y[55]
136 y[56]
137 y[57]
138 y[58]
139 y[59]
140 y[60]
141 y[61]
142 y[62]
143 y[63]
144 y[64]
145 y[65]
146 y[66]
147 y[67]
148 y[68]
149 y[69]
150 y[70]
151 y[71]
152 y[72]
153 y[73]
154 y[74]
155 y[75]
156 y[76]
157 y[77]
158 y[78]
 */}
