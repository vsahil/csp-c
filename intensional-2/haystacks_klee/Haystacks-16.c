
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 0) && (var40 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 0) && (var41 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 0) && (var42 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 0) && (var43 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 0) && (var44 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 0) && (var45 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 0) && (var46 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 0) && (var47 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 0) && (var48 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 0) && (var49 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 0) && (var50 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 0) && (var51 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 0) && (var52 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 0) && (var53 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 0) && (var54 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 0) && (var55 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 0) && (var56 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 0) && (var57 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 0) && (var58 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 0) && (var59 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 0) && (var60 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 0) && (var61 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 0) && (var62 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 0) && (var63 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 0) && (var64 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 0) && (var65 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 0) && (var66 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 0) && (var67 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 0) && (var68 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 0) && (var69 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 0) && (var70 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 0) && (var71 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 0) && (var72 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 0) && (var73 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 0) && (var74 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 0) && (var75 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 0) && (var76 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 0) && (var77 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 0) && (var78 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((myvar0 == 1) && (var79 >= 0) && (var79 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((myvar0 == 1) && (var80 >= 0) && (var80 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((myvar0 == 1) && (var81 >= 0) && (var81 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((myvar0 == 1) && (var82 >= 0) && (var82 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((myvar0 == 1) && (var83 >= 0) && (var83 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((myvar0 == 1) && (var84 >= 0) && (var84 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((myvar0 == 1) && (var85 >= 0) && (var85 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((myvar0 == 1) && (var86 >= 0) && (var86 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((myvar0 == 1) && (var87 >= 0) && (var87 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((myvar0 == 1) && (var88 >= 0) && (var88 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((myvar0 == 1) && (var89 >= 0) && (var89 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((myvar0 == 1) && (var90 >= 0) && (var90 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((myvar0 == 1) && (var91 >= 0) && (var91 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((myvar0 == 1) && (var92 >= 0) && (var92 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((myvar0 == 1) && (var93 >= 0) && (var93 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((myvar0 == 1) && (var94 >= 0) && (var94 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((myvar0 == 1) && (var95 >= 0) && (var95 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((myvar0 == 1) && (var96 >= 0) && (var96 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((myvar0 == 1) && (var97 >= 0) && (var97 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((myvar0 == 1) && (var98 >= 0) && (var98 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((myvar0 == 1) && (var99 >= 0) && (var99 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((myvar0 == 1) && (var100 >= 0) && (var100 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((myvar0 == 1) && (var101 >= 0) && (var101 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((myvar0 == 1) && (var102 >= 0) && (var102 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((myvar0 == 1) && (var103 >= 0) && (var103 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((myvar0 == 1) && (var104 >= 0) && (var104 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((myvar0 == 1) && (var105 >= 0) && (var105 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((myvar0 == 1) && (var106 >= 0) && (var106 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((myvar0 == 1) && (var107 >= 0) && (var107 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((myvar0 == 1) && (var108 >= 0) && (var108 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((myvar0 == 1) && (var109 >= 0) && (var109 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((myvar0 == 1) && (var110 >= 0) && (var110 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((myvar0 == 1) && (var111 >= 0) && (var111 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((myvar0 == 1) && (var112 >= 0) && (var112 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((myvar0 == 1) && (var113 >= 0) && (var113 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((myvar0 == 1) && (var114 >= 0) && (var114 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((myvar0 == 1) && (var115 >= 0) && (var115 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((myvar0 == 1) && (var116 >= 0) && (var116 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((myvar0 == 1) && (var117 >= 0) && (var117 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((myvar0 == 1) && (var118 >= 0) && (var118 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((myvar0 == 1) && (var119 >= 0) && (var119 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((myvar0 == 1) && (var120 >= 0) && (var120 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((myvar0 == 1) && (var121 >= 0) && (var121 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((myvar0 == 1) && (var122 >= 0) && (var122 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((myvar0 == 1) && (var123 >= 0) && (var123 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((myvar0 == 1) && (var124 >= 0) && (var124 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((myvar0 == 1) && (var125 >= 0) && (var125 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((myvar0 == 1) && (var126 >= 0) && (var126 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((myvar0 == 1) && (var127 >= 0) && (var127 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((myvar0 == 1) && (var128 >= 0) && (var128 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((myvar0 == 1) && (var129 >= 0) && (var129 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((myvar0 == 1) && (var130 >= 0) && (var130 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((myvar0 == 1) && (var131 >= 0) && (var131 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((myvar0 == 1) && (var132 >= 0) && (var132 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((myvar0 == 1) && (var133 >= 0) && (var133 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((myvar0 == 1) && (var134 >= 0) && (var134 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((myvar0 == 1) && (var135 >= 0) && (var135 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((myvar0 == 1) && (var136 >= 0) && (var136 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((myvar0 == 1) && (var137 >= 0) && (var137 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((myvar0 == 1) && (var138 >= 0) && (var138 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((myvar0 == 1) && (var139 >= 0) && (var139 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((myvar0 == 1) && (var140 >= 0) && (var140 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((myvar0 == 1) && (var141 >= 0) && (var141 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((myvar0 == 1) && (var142 >= 0) && (var142 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((myvar0 == 1) && (var143 >= 0) && (var143 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((myvar0 == 1) && (var144 >= 0) && (var144 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((myvar0 == 1) && (var145 >= 0) && (var145 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((myvar0 == 1) && (var146 >= 0) && (var146 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((myvar0 == 1) && (var147 >= 0) && (var147 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((myvar0 == 1) && (var148 >= 0) && (var148 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((myvar0 == 1) && (var149 >= 0) && (var149 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((myvar0 == 1) && (var150 >= 0) && (var150 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((myvar0 == 1) && (var151 >= 0) && (var151 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((myvar0 == 1) && (var152 >= 0) && (var152 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((myvar0 == 1) && (var153 >= 0) && (var153 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((myvar0 == 1) && (var154 >= 0) && (var154 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((myvar0 == 1) && (var155 >= 0) && (var155 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((myvar0 == 1) && (var156 >= 0) && (var156 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((myvar0 == 1) && (var157 >= 0) && (var157 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((myvar0 == 1) && (var158 >= 0) && (var158 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((myvar0 == 1) && (var159 >= 0) && (var159 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((myvar0 == 1) && (var160 >= 0) && (var160 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((myvar0 == 1) && (var161 >= 0) && (var161 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((myvar0 == 1) && (var162 >= 0) && (var162 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((myvar0 == 1) && (var163 >= 0) && (var163 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((myvar0 == 1) && (var164 >= 0) && (var164 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((myvar0 == 1) && (var165 >= 0) && (var165 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((myvar0 == 1) && (var166 >= 0) && (var166 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((myvar0 == 1) && (var167 >= 0) && (var167 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((myvar0 == 1) && (var168 >= 0) && (var168 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((myvar0 == 1) && (var169 >= 0) && (var169 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((myvar0 == 1) && (var170 >= 0) && (var170 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((myvar0 == 1) && (var171 >= 0) && (var171 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((myvar0 == 1) && (var172 >= 0) && (var172 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((myvar0 == 1) && (var173 >= 0) && (var173 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((myvar0 == 1) && (var174 >= 0) && (var174 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((myvar0 == 1) && (var175 >= 0) && (var175 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((myvar0 == 1) && (var176 >= 0) && (var176 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((myvar0 == 1) && (var177 >= 0) && (var177 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((myvar0 == 1) && (var178 >= 0) && (var178 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((myvar0 == 1) && (var179 >= 0) && (var179 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((myvar0 == 1) && (var180 >= 0) && (var180 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((myvar0 == 1) && (var181 >= 0) && (var181 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((myvar0 == 1) && (var182 >= 0) && (var182 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((myvar0 == 1) && (var183 >= 0) && (var183 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((myvar0 == 1) && (var184 >= 0) && (var184 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((myvar0 == 1) && (var185 >= 0) && (var185 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((myvar0 == 1) && (var186 >= 0) && (var186 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((myvar0 == 1) && (var187 >= 0) && (var187 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((myvar0 == 1) && (var188 >= 0) && (var188 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((myvar0 == 1) && (var189 >= 0) && (var189 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((myvar0 == 1) && (var190 >= 0) && (var190 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((myvar0 == 1) && (var191 >= 0) && (var191 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((myvar0 == 1) && (var192 >= 0) && (var192 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((myvar0 == 1) && (var193 >= 0) && (var193 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((myvar0 == 1) && (var194 >= 0) && (var194 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((myvar0 == 1) && (var195 >= 0) && (var195 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
if((myvar0 == 1) && (var196 >= 0) && (var196 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
if((myvar0 == 1) && (var197 >= 0) && (var197 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
if((myvar0 == 1) && (var198 >= 0) && (var198 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
if((myvar0 == 1) && (var199 >= 0) && (var199 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
if((myvar0 == 1) && (var200 >= 0) && (var200 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
if((myvar0 == 1) && (var201 >= 0) && (var201 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
if((myvar0 == 1) && (var202 >= 0) && (var202 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
if((myvar0 == 1) && (var203 >= 0) && (var203 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
if((myvar0 == 1) && (var204 >= 0) && (var204 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
if((myvar0 == 1) && (var205 >= 0) && (var205 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
if((myvar0 == 1) && (var206 >= 0) && (var206 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
if((myvar0 == 1) && (var207 >= 0) && (var207 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
if((myvar0 == 1) && (var208 >= 0) && (var208 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
if((myvar0 == 1) && (var209 >= 0) && (var209 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
if((myvar0 == 1) && (var210 >= 0) && (var210 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
if((myvar0 == 1) && (var211 >= 0) && (var211 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
if((myvar0 == 1) && (var212 >= 0) && (var212 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
if((myvar0 == 1) && (var213 >= 0) && (var213 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
if((myvar0 == 1) && (var214 >= 0) && (var214 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
if((myvar0 == 1) && (var215 >= 0) && (var215 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
if((myvar0 == 1) && (var216 >= 0) && (var216 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
if((myvar0 == 1) && (var217 >= 0) && (var217 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
if((myvar0 == 1) && (var218 >= 0) && (var218 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
if((myvar0 == 1) && (var219 >= 0) && (var219 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
if((myvar0 == 1) && (var220 >= 0) && (var220 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
if((myvar0 == 1) && (var221 >= 0) && (var221 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
if((myvar0 == 1) && (var222 >= 0) && (var222 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
if((myvar0 == 1) && (var223 >= 0) && (var223 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
if((myvar0 == 1) && (var224 >= 0) && (var224 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var225;
klee_make_symbolic(&var225, sizeof(var225), "var225");
if((myvar0 == 1) && (var225 >= 0) && (var225 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var226;
klee_make_symbolic(&var226, sizeof(var226), "var226");
if((myvar0 == 1) && (var226 >= 0) && (var226 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var227;
klee_make_symbolic(&var227, sizeof(var227), "var227");
if((myvar0 == 1) && (var227 >= 0) && (var227 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var228;
klee_make_symbolic(&var228, sizeof(var228), "var228");
if((myvar0 == 1) && (var228 >= 0) && (var228 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var229;
klee_make_symbolic(&var229, sizeof(var229), "var229");
if((myvar0 == 1) && (var229 >= 0) && (var229 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var230;
klee_make_symbolic(&var230, sizeof(var230), "var230");
if((myvar0 == 1) && (var230 >= 0) && (var230 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var231;
klee_make_symbolic(&var231, sizeof(var231), "var231");
if((myvar0 == 1) && (var231 >= 0) && (var231 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var232;
klee_make_symbolic(&var232, sizeof(var232), "var232");
if((myvar0 == 1) && (var232 >= 0) && (var232 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var233;
klee_make_symbolic(&var233, sizeof(var233), "var233");
if((myvar0 == 1) && (var233 >= 0) && (var233 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var234;
klee_make_symbolic(&var234, sizeof(var234), "var234");
if((myvar0 == 1) && (var234 >= 0) && (var234 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var235;
klee_make_symbolic(&var235, sizeof(var235), "var235");
if((myvar0 == 1) && (var235 >= 0) && (var235 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var236;
klee_make_symbolic(&var236, sizeof(var236), "var236");
if((myvar0 == 1) && (var236 >= 0) && (var236 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var237;
klee_make_symbolic(&var237, sizeof(var237), "var237");
if((myvar0 == 1) && (var237 >= 0) && (var237 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var238;
klee_make_symbolic(&var238, sizeof(var238), "var238");
if((myvar0 == 1) && (var238 >= 0) && (var238 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var239;
klee_make_symbolic(&var239, sizeof(var239), "var239");
if((myvar0 == 1) && (var239 >= 0) && (var239 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var240;
klee_make_symbolic(&var240, sizeof(var240), "var240");
if((myvar0 == 1) && (var240 >= 0) && (var240 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var241;
klee_make_symbolic(&var241, sizeof(var241), "var241");
if((myvar0 == 1) && (var241 >= 0) && (var241 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var242;
klee_make_symbolic(&var242, sizeof(var242), "var242");
if((myvar0 == 1) && (var242 >= 0) && (var242 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var243;
klee_make_symbolic(&var243, sizeof(var243), "var243");
if((myvar0 == 1) && (var243 >= 0) && (var243 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var244;
klee_make_symbolic(&var244, sizeof(var244), "var244");
if((myvar0 == 1) && (var244 >= 0) && (var244 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var245;
klee_make_symbolic(&var245, sizeof(var245), "var245");
if((myvar0 == 1) && (var245 >= 0) && (var245 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var246;
klee_make_symbolic(&var246, sizeof(var246), "var246");
if((myvar0 == 1) && (var246 >= 0) && (var246 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var247;
klee_make_symbolic(&var247, sizeof(var247), "var247");
if((myvar0 == 1) && (var247 >= 0) && (var247 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var248;
klee_make_symbolic(&var248, sizeof(var248), "var248");
if((myvar0 == 1) && (var248 >= 0) && (var248 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var249;
klee_make_symbolic(&var249, sizeof(var249), "var249");
if((myvar0 == 1) && (var249 >= 0) && (var249 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var250;
klee_make_symbolic(&var250, sizeof(var250), "var250");
if((myvar0 == 1) && (var250 >= 0) && (var250 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var251;
klee_make_symbolic(&var251, sizeof(var251), "var251");
if((myvar0 == 1) && (var251 >= 0) && (var251 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var252;
klee_make_symbolic(&var252, sizeof(var252), "var252");
if((myvar0 == 1) && (var252 >= 0) && (var252 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var253;
klee_make_symbolic(&var253, sizeof(var253), "var253");
if((myvar0 == 1) && (var253 >= 0) && (var253 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var254;
klee_make_symbolic(&var254, sizeof(var254), "var254");
if((myvar0 == 1) && (var254 >= 0) && (var254 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var255;
klee_make_symbolic(&var255, sizeof(var255), "var255");
if((myvar0 == 1) && (var255 >= 0) && (var255 <= 15)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) &&  0 > (var0 - var189)*(var189 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var87)*(var87 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var25)*(var25 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var36)*(var36 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var38)*(var38 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var52)*(var52 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var83)*(var83 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var88)*(var88 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var16)*(var16 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var185)*(var185 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var209)*(var209 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var222)*(var222 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var39)*(var39 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var248)*(var248 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var42)*(var42 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var171)*(var171 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var189)*(var189 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var202)*(var202 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var208)*(var208 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var66)*(var66 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var67)*(var67 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var87)*(var87 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var126)*(var126 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var157)*(var157 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var200)*(var200 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var213)*(var213 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var182)*(var182 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var218)*(var218 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var247)*(var247 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var72)*(var72 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var21)*(var21 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var23)*(var23 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var145)*(var145 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var2)*(var2 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var21)*(var21 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var221)*(var221 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var23)*(var23 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var75)*(var75 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var241)*(var241 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var166)*(var166 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var186)*(var186 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var192)*(var192 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var223)*(var223 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var236)*(var236 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var237)*(var237 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var41)*(var41 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var56)*(var56 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var74)*(var74 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var100)*(var100 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var16)*(var16 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var185)*(var185 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var39)*(var39 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var93)*(var93 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var124)*(var124 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var153)*(var153 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var211)*(var211 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var77)*(var77 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var113)*(var113 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var188)*(var188 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var207)*(var207 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var245)*(var245 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var75)*(var75 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var124)*(var124 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var211)*(var211 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var243)*(var243 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var89)*(var89 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var142)*(var142 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var151)*(var151 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var219)*(var219 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var57)*(var57 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var80)*(var80 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var174)*(var174 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var224)*(var224 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var35)*(var35 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var114)*(var114 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var177)*(var177 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var241)*(var241 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var114)*(var114 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var169)*(var169 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var177)*(var177 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var249)*(var249 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var26)*(var26 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var70)*(var70 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var200)*(var200 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var213)*(var213 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var234)*(var234 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var101)*(var101 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var206)*(var206 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var42)*(var42 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var54)*(var54 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var156)*(var156 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var31)*(var31 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var109)*(var109 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var115)*(var115 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var122)*(var122 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var166)*(var166 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var186)*(var186 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var192)*(var192 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var223)*(var223 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var237)*(var237 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var242)*(var242 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var41)*(var41 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var56)*(var56 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var74)*(var74 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var96)*(var96 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var174)*(var174 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var204)*(var204 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var224)*(var224 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var135)*(var135 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var214)*(var214 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var82)*(var82 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var146)*(var146 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var114)*(var114 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var123)*(var123 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var177)*(var177 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var196)*(var196 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var70)*(var70 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var136)*(var136 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var144)*(var144 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var152)*(var152 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var167)*(var167 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var184)*(var184 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var231)*(var231 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var43)*(var43 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var8)*(var8 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var151)*(var151 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var161)*(var161 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var50)*(var50 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var80)*(var80 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var148)*(var148 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var188)*(var188 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var24)*(var24 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var245)*(var245 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var48)*(var48 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var140 - var148)*(var148 - var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var140 - var90)*(var90 - var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var121)*(var121 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var133)*(var133 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var174)*(var174 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var204)*(var204 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var81)*(var81 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var197)*(var197 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var219)*(var219 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var46)*(var46 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var80)*(var80 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var160)*(var160 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var172)*(var172 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var18)*(var18 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var218)*(var218 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var247)*(var247 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var107)*(var107 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var110)*(var110 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var19)*(var19 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var2)*(var2 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var21)*(var21 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var23)*(var23 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var28)*(var28 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var55)*(var55 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var21)*(var21 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var113)*(var113 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var245)*(var245 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var219)*(var219 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var57)*(var57 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var0)*(var0 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var193)*(var193 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var202)*(var202 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var59)*(var59 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var87)*(var87 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var182)*(var182 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var198)*(var198 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var218)*(var218 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var247)*(var247 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var253)*(var253 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var5)*(var5 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var161)*(var161 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var57)*(var57 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var136)*(var136 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var159)*(var159 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var167)*(var167 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var184)*(var184 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var195)*(var195 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var231)*(var231 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var8)*(var8 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var205)*(var205 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var211)*(var211 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var47)*(var47 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var77)*(var77 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var89)*(var89 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var128)*(var128 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var206)*(var206 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var54)*(var54 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var200)*(var200 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var213)*(var213 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var234)*(var234 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var128)*(var128 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var206)*(var206 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var42)*(var42 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var62)*(var62 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var106)*(var106 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var150)*(var150 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var165)*(var165 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var18)*(var18 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var182)*(var182 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var218)*(var218 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var5)*(var5 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var60)*(var60 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var116)*(var116 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var170)*(var170 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var39)*(var39 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var93)*(var93 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var199)*(var199 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var212)*(var212 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var233)*(var233 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var36)*(var36 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var83)*(var83 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var94)*(var94 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var138)*(var138 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var159)*(var159 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var167)*(var167 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var231)*(var231 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var8)*(var8 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var84)*(var84 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var106)*(var106 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var150)*(var150 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var198)*(var198 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var253)*(var253 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var186)*(var186 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var242)*(var242 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var34)*(var34 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var56)*(var56 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var144)*(var144 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var159)*(var159 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var195)*(var195 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var231)*(var231 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var196)*(var196 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var70)*(var70 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var123)*(var123 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var133)*(var133 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var204)*(var204 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var35)*(var35 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var79)*(var79 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var81)*(var81 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var100)*(var100 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var116)*(var116 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var209)*(var209 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var0)*(var0 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var189)*(var189 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var66)*(var66 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var106)*(var106 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var150)*(var150 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var165)*(var165 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var182)*(var182 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var218)*(var218 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var247)*(var247 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var253)*(var253 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var5)*(var5 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var224)*(var224 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var156)*(var156 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var217)*(var217 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var31)*(var31 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var7)*(var7 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var121)*(var121 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var133)*(var133 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var174)*(var174 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var204)*(var204 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var224)*(var224 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var35)*(var35 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var81)*(var81 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var241)*(var241 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var134)*(var134 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var180)*(var180 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var194)*(var194 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var210)*(var210 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var64)*(var64 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var82)*(var82 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var110)*(var110 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var145)*(var145 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var147)*(var147 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var19)*(var19 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var2)*(var2 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var21)*(var21 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var221)*(var221 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var150)*(var150 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var165)*(var165 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var172)*(var172 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var198)*(var198 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var218)*(var218 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var247)*(var247 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var253)*(var253 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var5)*(var5 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var109)*(var109 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var130)*(var130 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var134)*(var134 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var135)*(var135 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var214)*(var214 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var240)*(var240 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var82)*(var82 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var157)*(var157 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var200)*(var200 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var213)*(var213 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var234)*(var234 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var53)*(var53 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var198)*(var198 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var218)*(var218 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var247)*(var247 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var253)*(var253 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var5)*(var5 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var139)*(var139 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var142)*(var142 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var151)*(var151 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var201)*(var201 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var6)*(var6 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var136)*(var136 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var146)*(var146 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var192)*(var192 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var242)*(var242 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var34)*(var34 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var56)*(var56 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var101)*(var101 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var245)*(var245 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var107)*(var107 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var147)*(var147 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var2)*(var2 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var221)*(var221 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var23)*(var23 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var55)*(var55 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var114)*(var114 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var137)*(var137 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var169)*(var169 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var26)*(var26 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var70)*(var70 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var122)*(var122 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var56)*(var56 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var0)*(var0 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var189)*(var189 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var202)*(var202 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var203)*(var203 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var87)*(var87 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var135)*(var135 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var82)*(var82 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var146)*(var146 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var219)*(var219 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var46)*(var46 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var50)*(var50 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var218)*(var218 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var247)*(var247 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var233)*(var233 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var37)*(var37 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var83)*(var83 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var107)*(var107 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var147)*(var147 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var21)*(var21 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var221)*(var221 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var28)*(var28 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var55)*(var55 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var104)*(var104 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var126)*(var126 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var157)*(var157 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var234)*(var234 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var252)*(var252 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var45)*(var45 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var139)*(var139 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var142)*(var142 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var149)*(var149 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var161)*(var161 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var197)*(var197 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var219)*(var219 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var208)*(var208 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var66)*(var66 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var87)*(var87 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var0)*(var0 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var87)*(var87 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var121)*(var121 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var174)*(var174 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var224)*(var224 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var81)*(var81 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var211)*(var211 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var243)*(var243 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var47)*(var47 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var77)*(var77 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var89)*(var89 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var187)*(var187 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var42)*(var42 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var189)*(var189 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var230)*(var230 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var39)*(var39 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var130)*(var130 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var134)*(var134 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var135)*(var135 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var82)*(var82 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var124)*(var124 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var243)*(var243 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var200)*(var200 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var135)*(var135 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var72)*(var72 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var130)*(var130 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var134)*(var134 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var135)*(var135 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var210)*(var210 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var72)*(var72 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var82)*(var82 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var114)*(var114 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var123)*(var123 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var168)*(var168 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var177)*(var177 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var241)*(var241 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var249)*(var249 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var26)*(var26 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var70)*(var70 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var5)*(var5 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var161)*(var161 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var57)*(var57 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var12)*(var12 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var124)*(var124 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var228)*(var228 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var30)*(var30 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var20)*(var20 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var200)*(var200 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var225)*(var225 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var234)*(var234 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var107)*(var107 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var21)*(var21 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var23)*(var23 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var185)*(var185 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var122)*(var122 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var166)*(var166 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var74)*(var74 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var104)*(var104 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var157)*(var157 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var98)*(var98 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var199)*(var199 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var212)*(var212 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var233)*(var233 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var38)*(var38 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var52)*(var52 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var83)*(var83 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var13)*(var13 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var175)*(var175 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var65)*(var65 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var9)*(var9 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var91)*(var91 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var211)*(var211 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var0)*(var0 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var189)*(var189 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var202)*(var202 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var203)*(var203 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var66)*(var66 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var87)*(var87 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var107)*(var107 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var147)*(var147 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var21)*(var21 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var230 - var185)*(var185 - var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var230 - var39)*(var39 - var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var146)*(var146 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var159)*(var159 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var184)*(var184 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var195)*(var195 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var43)*(var43 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var119)*(var119 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var148)*(var148 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var24)*(var24 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var75)*(var75 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var90)*(var90 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var212)*(var212 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var200)*(var200 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var213)*(var213 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var98)*(var98 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var121)*(var121 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var133)*(var133 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var174)*(var174 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var204)*(var204 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var122)*(var122 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var166)*(var166 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var186)*(var186 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var192)*(var192 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var34)*(var34 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var41)*(var41 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var166)*(var166 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var223)*(var223 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var236)*(var236 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var242)*(var242 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var34)*(var34 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var41)*(var41 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var56)*(var56 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var156)*(var156 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var217)*(var217 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var0)*(var0 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var171)*(var171 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var202)*(var202 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var208)*(var208 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var229)*(var229 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var66)*(var66 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var67)*(var67 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var113)*(var113 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var119)*(var119 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var148)*(var148 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var188)*(var188 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var245)*(var245 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var75)*(var75 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var109)*(var109 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var194)*(var194 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var210)*(var210 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var214)*(var214 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var72)*(var72 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var196)*(var196 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var122)*(var122 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var56)*(var56 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var133)*(var133 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var141)*(var141 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var17)*(var17 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var204)*(var204 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var224)*(var224 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var235)*(var235 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var246)*(var246 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var79)*(var79 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var121)*(var121 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var176)*(var176 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var235)*(var235 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var35)*(var35 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var79)*(var79 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var218)*(var218 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var42)*(var42 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var114)*(var114 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var168)*(var168 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var169)*(var169 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var241)*(var241 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var26)*(var26 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var199)*(var199 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var212)*(var212 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var37)*(var37 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var100)*(var100 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var222)*(var222 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var230)*(var230 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var39)*(var39 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var93)*(var93 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var206)*(var206 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var42)*(var42 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var54)*(var54 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var104)*(var104 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var157)*(var157 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var200)*(var200 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var234)*(var234 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var53)*(var53 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var98)*(var98 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var218)*(var218 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var116)*(var116 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var16)*(var16 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var162)*(var162 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var170)*(var170 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var185)*(var185 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var222)*(var222 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var250)*(var250 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var29)*(var29 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var39)*(var39 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var93)*(var93 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var13)*(var13 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var175)*(var175 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var238)*(var238 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var31)*(var31 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var65)*(var65 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var78)*(var78 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var91)*(var91 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var168)*(var168 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var169)*(var169 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var241)*(var241 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var23)*(var23 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var55)*(var55 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var116)*(var116 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var16)*(var16 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var170)*(var170 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var230)*(var230 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var93)*(var93 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var100)*(var100 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var116)*(var116 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var16)*(var16 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var230)*(var230 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var250)*(var250 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var254)*(var254 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var29)*(var29 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var39)*(var39 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var153)*(var153 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var211)*(var211 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var32)*(var32 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var47)*(var47 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var77)*(var77 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var217)*(var217 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var238)*(var238 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var243)*(var243 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var113)*(var113 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var119)*(var119 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var14)*(var14 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var148)*(var148 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var232)*(var232 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var24)*(var24 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var245)*(var245 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var75)*(var75 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var224)*(var224 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var94)*(var94 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var199)*(var199 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var212)*(var212 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var233)*(var233 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var25)*(var25 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var36)*(var36 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var37)*(var37 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var40)*(var40 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var83)*(var83 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var88)*(var88 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var94)*(var94 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var185)*(var185 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var129)*(var129 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var158)*(var158 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var251)*(var251 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var42)*(var42 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var62)*(var62 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var163)*(var163 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var199)*(var199 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var233)*(var233 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var36)*(var36 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var88)*(var88 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var166)*(var166 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var186)*(var186 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var192)*(var192 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var242)*(var242 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var34)*(var34 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var128)*(var128 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var144)*(var144 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var146)*(var146 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var159)*(var159 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var184)*(var184 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var195)*(var195 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var63)*(var63 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var8)*(var8 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var101)*(var101 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var155)*(var155 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var248)*(var248 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var251)*(var251 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var4)*(var4 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var61)*(var61 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var62)*(var62 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var157)*(var157 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var200)*(var200 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var234)*(var234 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var53)*(var53 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var57)*(var57 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var124)*(var124 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var211)*(var211 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var228)*(var228 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var243)*(var243 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var89)*(var89 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var119)*(var119 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var207)*(var207 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var24)*(var24 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var76)*(var76 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var12)*(var12 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var124)*(var124 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var211)*(var211 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var228)*(var228 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var30)*(var30 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var32)*(var32 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var47)*(var47 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var151)*(var151 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var161)*(var161 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var219)*(var219 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var57)*(var57 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var80)*(var80 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var106)*(var106 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var143)*(var143 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var182)*(var182 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var198)*(var198 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var253)*(var253 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var5)*(var5 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var60)*(var60 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var212)*(var212 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var233)*(var233 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var25)*(var25 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var36)*(var36 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var37)*(var37 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var40)*(var40 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var83)*(var83 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var104)*(var104 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var157)*(var157 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var213)*(var213 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var234)*(var234 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var101)*(var101 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var206)*(var206 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var248)*(var248 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var42)*(var42 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var107)*(var107 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var21)*(var21 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var23)*(var23 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var161)*(var161 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var193)*(var193 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var208)*(var208 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var229)*(var229 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var87)*(var87 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var161)*(var161 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var197)*(var197 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var219)*(var219 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var46)*(var46 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var106)*(var106 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var150)*(var150 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var165)*(var165 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var182)*(var182 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var198)*(var198 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var187)*(var187 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var248)*(var248 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var251)*(var251 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var101)*(var101 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var128)*(var128 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var206)*(var206 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var251)*(var251 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var54)*(var54 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var144)*(var144 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var159)*(var159 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var134)*(var134 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var135)*(var135 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var215)*(var215 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var82)*(var82 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var85)*(var85 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var118)*(var118 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var13)*(var13 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var156)*(var156 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var238)*(var238 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var31)*(var31 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var0)*(var0 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var171)*(var171 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var202)*(var202 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var66)*(var66 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var87)*(var87 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var126)*(var126 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var200)*(var200 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var220)*(var220 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var225)*(var225 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var234)*(var234 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var252)*(var252 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var98)*(var98 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var110)*(var110 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var145)*(var145 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var2)*(var2 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var23)*(var23 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var156)*(var156 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var123)*(var123 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var121)*(var121 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var17)*(var17 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var204)*(var204 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var244)*(var244 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var79)*(var79 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var115)*(var115 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var122)*(var122 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var236)*(var236 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var237)*(var237 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var34)*(var34 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var41)*(var41 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var96)*(var96 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var122)*(var122 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var166)*(var166 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var242)*(var242 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var56)*(var56 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var207)*(var207 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var245)*(var245 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var113)*(var113 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var188)*(var188 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var207)*(var207 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var232)*(var232 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var245)*(var245 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var75)*(var75 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var90)*(var90 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var12)*(var12 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var211)*(var211 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var243)*(var243 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var32)*(var32 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var47)*(var47 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var89)*(var89 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var13)*(var13 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var175)*(var175 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var217)*(var217 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var65)*(var65 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var174)*(var174 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var204)*(var204 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var224)*(var224 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var35)*(var35 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var144)*(var144 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var146)*(var146 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var184)*(var184 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var151)*(var151 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var161)*(var161 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var224)*(var224 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var135)*(var135 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var214)*(var214 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var72)*(var72 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var94)*(var94 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var138)*(var138 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var146)*(var146 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var152)*(var152 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var159)*(var159 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var184)*(var184 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var195)*(var195 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var231)*(var231 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var43)*(var43 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var63)*(var63 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var8)*(var8 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var109)*(var109 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var180)*(var180 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var215)*(var215 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var240)*(var240 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var189)*(var189 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var212)*(var212 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var233)*(var233 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var36)*(var36 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var37)*(var37 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var94)*(var94 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var118)*(var118 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var175)*(var175 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var217)*(var217 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var245)*(var245 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var75)*(var75 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var13)*(var13 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var238)*(var238 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var65)*(var65 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var7)*(var7 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var78)*(var78 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var9)*(var9 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var118)*(var118 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var217)*(var217 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var238)*(var238 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var255)*(var255 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var78)*(var78 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var185)*(var185 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var209)*(var209 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var222)*(var222 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var114)*(var114 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var123)*(var123 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var168)*(var168 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var169)*(var169 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var196)*(var196 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var26)*(var26 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var70)*(var70 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var115)*(var115 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var122)*(var122 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var242)*(var242 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var34)*(var34 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var41)*(var41 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var107)*(var107 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var110)*(var110 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var145)*(var145 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var147)*(var147 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var179)*(var179 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var19)*(var19 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var221)*(var221 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var23)*(var23 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var200)*(var200 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var113) && (var1 + var113 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var119) && (var1 + var119 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var14) && (var1 + var14 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var140) && (var1 + var140 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var148) && (var1 + var148 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var188) && (var1 + var188 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var207) && (var1 + var207 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var232) && (var1 + var232 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var24) && (var1 + var24 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var245) && (var1 + var245 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var33) && (var1 + var33 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var48) && (var1 + var48 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var75) && (var1 + var75 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var76) && (var1 + var76 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var90) && (var1 + var90 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var10) && (var102 + var10 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var163) && (var102 + var163 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var199) && (var102 + var199 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var212) && (var102 + var212 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var226) && (var102 + var226 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var233) && (var102 + var233 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var25) && (var102 + var25 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var36) && (var102 + var36 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var37) && (var102 + var37 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var38) && (var102 + var38 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var40) && (var102 + var40 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var52) && (var102 + var52 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var83) && (var102 + var83 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var88) && (var102 + var88 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var102 != var94) && (var102 + var94 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var100) && (var105 + var100 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var116) && (var105 + var116 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var16) && (var105 + var16 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var162) && (var105 + var162 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var170) && (var105 + var170 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var185) && (var105 + var185 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var209) && (var105 + var209 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var222) && (var105 + var222 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var230) && (var105 + var230 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var250) && (var105 + var250 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var254) && (var105 + var254 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var29) && (var105 + var29 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var3) && (var105 + var3 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var39) && (var105 + var39 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var105 != var93) && (var105 + var93 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var0) && (var108 + var0 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var103) && (var108 + var103 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var15) && (var108 + var15 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var171) && (var108 + var171 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var189) && (var108 + var189 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var193) && (var108 + var193 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var202) && (var108 + var202 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var203) && (var108 + var203 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var208) && (var108 + var208 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var229) && (var108 + var229 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var239) && (var108 + var239 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var59) && (var108 + var59 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var66) && (var108 + var66 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var67) && (var108 + var67 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var108 != var87) && (var108 + var87 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var109) && (var11 + var109 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var130) && (var11 + var130 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var134) && (var11 + var134 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var135) && (var11 + var135 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var178) && (var11 + var178 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var180) && (var11 + var180 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var194) && (var11 + var194 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var210) && (var11 + var210 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var214) && (var11 + var214 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var215) && (var11 + var215 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var240) && (var11 + var240 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var64) && (var11 + var64 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var72) && (var11 + var72 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var82) && (var11 + var82 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var11 != var85) && (var11 + var85 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var104) && (var112 + var104 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var126) && (var112 + var126 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var157) && (var112 + var157 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var181) && (var112 + var181 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var20) && (var112 + var20 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var200) && (var112 + var200 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var213) && (var112 + var213 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var220) && (var112 + var220 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var225) && (var112 + var225 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var234) && (var112 + var234 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var252) && (var112 + var252 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var45) && (var112 + var45 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var53) && (var112 + var53 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var68) && (var112 + var68 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var98) && (var112 + var98 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var118) && (var127 + var118 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var13) && (var127 + var13 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var156) && (var127 + var156 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var175) && (var127 + var175 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var217) && (var127 + var217 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var227) && (var127 + var227 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var238) && (var127 + var238 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var255) && (var127 + var255 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var31) && (var127 + var31 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var65) && (var127 + var65 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var7) && (var127 + var7 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var78) && (var127 + var78 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var9) && (var127 + var9 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var91) && (var127 + var91 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var92) && (var127 + var92 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var114) && (var132 + var114 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var123) && (var132 + var123 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var125) && (var132 + var125 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var137) && (var132 + var137 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var168) && (var132 + var168 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var169) && (var132 + var169 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var177) && (var132 + var177 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var190) && (var132 + var190 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var196) && (var132 + var196 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var216) && (var132 + var216 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var241) && (var132 + var241 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var249) && (var132 + var249 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var26) && (var132 + var26 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var70) && (var132 + var70 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var132 != var95) && (var132 + var95 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var120) && (var154 + var120 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var139) && (var154 + var139 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var142) && (var154 + var142 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var149) && (var154 + var149 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var151) && (var154 + var151 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var161) && (var154 + var161 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var183) && (var154 + var183 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var197) && (var154 + var197 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var201) && (var154 + var201 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var219) && (var154 + var219 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var46) && (var154 + var46 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var50) && (var154 + var50 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var57) && (var154 + var57 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var6) && (var154 + var6 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var154 != var80) && (var154 + var80 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var136) && (var173 + var136 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var138) && (var173 + var138 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var144) && (var173 + var144 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var146) && (var173 + var146 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var152) && (var173 + var152 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var159) && (var173 + var159 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var164) && (var173 + var164 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var167) && (var173 + var167 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var184) && (var173 + var184 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var195) && (var173 + var195 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var231) && (var173 + var231 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var43) && (var173 + var43 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var63) && (var173 + var63 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var8) && (var173 + var8 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var173 != var84) && (var173 + var84 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var106) && (var191 + var106 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var143) && (var191 + var143 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var150) && (var191 + var150 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var160) && (var191 + var160 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var165) && (var191 + var165 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var172) && (var191 + var172 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var18) && (var191 + var18 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var182) && (var191 + var182 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var198) && (var191 + var198 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var218) && (var191 + var218 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var247) && (var191 + var247 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var253) && (var191 + var253 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var5) && (var191 + var5 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var51) && (var191 + var51 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var60) && (var191 + var60 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var101) && (var27 + var101 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var128) && (var27 + var128 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var129) && (var27 + var129 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var155) && (var27 + var155 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var158) && (var27 + var158 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var187) && (var27 + var187 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var206) && (var27 + var206 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var248) && (var27 + var248 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var251) && (var27 + var251 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var4) && (var27 + var4 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var42) && (var27 + var42 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var44) && (var27 + var44 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var54) && (var27 + var54 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var61) && (var27 + var61 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var62) && (var27 + var62 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var107) && (var58 + var107 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var110) && (var58 + var110 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var111) && (var58 + var111 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var145) && (var58 + var145 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var147) && (var58 + var147 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var179) && (var58 + var179 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var19) && (var58 + var19 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var2) && (var58 + var2 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var21) && (var58 + var21 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var221) && (var58 + var221 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var23) && (var58 + var23 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var28) && (var58 + var28 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var55) && (var58 + var55 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var69) && (var58 + var69 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var97) && (var58 + var97 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var117) && (var86 + var117 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var12) && (var86 + var12 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var124) && (var86 + var124 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var153) && (var86 + var153 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var205) && (var86 + var205 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var211) && (var86 + var211 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var22) && (var86 + var22 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var228) && (var86 + var228 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var243) && (var86 + var243 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var30) && (var86 + var30 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var32) && (var86 + var32 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var47) && (var86 + var47 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var49) && (var86 + var49 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var77) && (var86 + var77 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var86 != var89) && (var86 + var89 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var121) && (var99 + var121 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var133) && (var99 + var133 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var141) && (var99 + var141 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var17) && (var99 + var17 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var174) && (var99 + var174 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var176) && (var99 + var176 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var204) && (var99 + var204 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var224) && (var99 + var224 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var235) && (var99 + var235 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var244) && (var99 + var244 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var246) && (var99 + var246 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var35) && (var99 + var35 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var71) && (var99 + var71 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var79) && (var99 + var79 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var99 != var81) && (var99 + var81 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 == var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 == var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 == var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 == var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 == var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 == var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 == var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 == var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 == var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 == var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 == var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 == var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 == var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 == var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 == var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
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
 */}
