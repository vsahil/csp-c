
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 0) && (var40 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 0) && (var41 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 0) && (var42 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 0) && (var43 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 0) && (var44 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 0) && (var45 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 0) && (var46 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 0) && (var47 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 0) && (var48 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 0) && (var49 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 0) && (var50 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 0) && (var51 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 0) && (var52 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 0) && (var53 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 0) && (var54 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 0) && (var55 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 0) && (var56 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 0) && (var57 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 0) && (var58 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 0) && (var59 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 0) && (var60 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 0) && (var61 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 0) && (var62 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 0) && (var63 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 0) && (var64 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 0) && (var65 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 0) && (var66 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 0) && (var67 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 0) && (var68 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 0) && (var69 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 0) && (var70 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 0) && (var71 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 0) && (var72 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 0) && (var73 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 0) && (var74 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 0) && (var75 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 0) && (var76 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 0) && (var77 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 0) && (var78 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((myvar0 == 1) && (var79 >= 0) && (var79 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((myvar0 == 1) && (var80 >= 0) && (var80 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((myvar0 == 1) && (var81 >= 0) && (var81 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((myvar0 == 1) && (var82 >= 0) && (var82 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((myvar0 == 1) && (var83 >= 0) && (var83 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((myvar0 == 1) && (var84 >= 0) && (var84 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((myvar0 == 1) && (var85 >= 0) && (var85 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((myvar0 == 1) && (var86 >= 0) && (var86 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((myvar0 == 1) && (var87 >= 0) && (var87 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((myvar0 == 1) && (var88 >= 0) && (var88 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((myvar0 == 1) && (var89 >= 0) && (var89 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((myvar0 == 1) && (var90 >= 0) && (var90 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((myvar0 == 1) && (var91 >= 0) && (var91 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((myvar0 == 1) && (var92 >= 0) && (var92 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((myvar0 == 1) && (var93 >= 0) && (var93 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((myvar0 == 1) && (var94 >= 0) && (var94 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((myvar0 == 1) && (var95 >= 0) && (var95 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((myvar0 == 1) && (var96 >= 0) && (var96 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((myvar0 == 1) && (var97 >= 0) && (var97 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((myvar0 == 1) && (var98 >= 0) && (var98 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((myvar0 == 1) && (var99 >= 0) && (var99 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((myvar0 == 1) && (var100 >= 0) && (var100 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((myvar0 == 1) && (var101 >= 0) && (var101 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((myvar0 == 1) && (var102 >= 0) && (var102 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((myvar0 == 1) && (var103 >= 0) && (var103 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((myvar0 == 1) && (var104 >= 0) && (var104 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((myvar0 == 1) && (var105 >= 0) && (var105 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((myvar0 == 1) && (var106 >= 0) && (var106 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((myvar0 == 1) && (var107 >= 0) && (var107 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((myvar0 == 1) && (var108 >= 0) && (var108 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((myvar0 == 1) && (var109 >= 0) && (var109 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((myvar0 == 1) && (var110 >= 0) && (var110 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((myvar0 == 1) && (var111 >= 0) && (var111 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((myvar0 == 1) && (var112 >= 0) && (var112 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((myvar0 == 1) && (var113 >= 0) && (var113 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((myvar0 == 1) && (var114 >= 0) && (var114 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((myvar0 == 1) && (var115 >= 0) && (var115 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((myvar0 == 1) && (var116 >= 0) && (var116 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((myvar0 == 1) && (var117 >= 0) && (var117 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((myvar0 == 1) && (var118 >= 0) && (var118 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((myvar0 == 1) && (var119 >= 0) && (var119 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((myvar0 == 1) && (var120 >= 0) && (var120 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((myvar0 == 1) && (var121 >= 0) && (var121 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((myvar0 == 1) && (var122 >= 0) && (var122 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((myvar0 == 1) && (var123 >= 0) && (var123 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((myvar0 == 1) && (var124 >= 0) && (var124 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((myvar0 == 1) && (var125 >= 0) && (var125 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((myvar0 == 1) && (var126 >= 0) && (var126 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((myvar0 == 1) && (var127 >= 0) && (var127 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((myvar0 == 1) && (var128 >= 0) && (var128 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((myvar0 == 1) && (var129 >= 0) && (var129 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((myvar0 == 1) && (var130 >= 0) && (var130 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((myvar0 == 1) && (var131 >= 0) && (var131 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((myvar0 == 1) && (var132 >= 0) && (var132 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((myvar0 == 1) && (var133 >= 0) && (var133 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((myvar0 == 1) && (var134 >= 0) && (var134 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((myvar0 == 1) && (var135 >= 0) && (var135 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((myvar0 == 1) && (var136 >= 0) && (var136 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((myvar0 == 1) && (var137 >= 0) && (var137 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((myvar0 == 1) && (var138 >= 0) && (var138 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((myvar0 == 1) && (var139 >= 0) && (var139 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((myvar0 == 1) && (var140 >= 0) && (var140 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((myvar0 == 1) && (var141 >= 0) && (var141 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((myvar0 == 1) && (var142 >= 0) && (var142 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((myvar0 == 1) && (var143 >= 0) && (var143 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((myvar0 == 1) && (var144 >= 0) && (var144 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((myvar0 == 1) && (var145 >= 0) && (var145 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((myvar0 == 1) && (var146 >= 0) && (var146 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((myvar0 == 1) && (var147 >= 0) && (var147 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((myvar0 == 1) && (var148 >= 0) && (var148 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((myvar0 == 1) && (var149 >= 0) && (var149 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((myvar0 == 1) && (var150 >= 0) && (var150 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((myvar0 == 1) && (var151 >= 0) && (var151 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((myvar0 == 1) && (var152 >= 0) && (var152 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((myvar0 == 1) && (var153 >= 0) && (var153 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((myvar0 == 1) && (var154 >= 0) && (var154 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((myvar0 == 1) && (var155 >= 0) && (var155 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((myvar0 == 1) && (var156 >= 0) && (var156 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((myvar0 == 1) && (var157 >= 0) && (var157 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((myvar0 == 1) && (var158 >= 0) && (var158 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((myvar0 == 1) && (var159 >= 0) && (var159 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((myvar0 == 1) && (var160 >= 0) && (var160 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((myvar0 == 1) && (var161 >= 0) && (var161 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((myvar0 == 1) && (var162 >= 0) && (var162 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((myvar0 == 1) && (var163 >= 0) && (var163 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((myvar0 == 1) && (var164 >= 0) && (var164 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((myvar0 == 1) && (var165 >= 0) && (var165 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((myvar0 == 1) && (var166 >= 0) && (var166 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((myvar0 == 1) && (var167 >= 0) && (var167 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((myvar0 == 1) && (var168 >= 0) && (var168 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((myvar0 == 1) && (var169 >= 0) && (var169 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((myvar0 == 1) && (var170 >= 0) && (var170 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((myvar0 == 1) && (var171 >= 0) && (var171 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((myvar0 == 1) && (var172 >= 0) && (var172 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((myvar0 == 1) && (var173 >= 0) && (var173 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((myvar0 == 1) && (var174 >= 0) && (var174 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((myvar0 == 1) && (var175 >= 0) && (var175 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((myvar0 == 1) && (var176 >= 0) && (var176 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((myvar0 == 1) && (var177 >= 0) && (var177 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((myvar0 == 1) && (var178 >= 0) && (var178 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((myvar0 == 1) && (var179 >= 0) && (var179 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((myvar0 == 1) && (var180 >= 0) && (var180 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((myvar0 == 1) && (var181 >= 0) && (var181 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((myvar0 == 1) && (var182 >= 0) && (var182 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((myvar0 == 1) && (var183 >= 0) && (var183 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((myvar0 == 1) && (var184 >= 0) && (var184 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((myvar0 == 1) && (var185 >= 0) && (var185 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((myvar0 == 1) && (var186 >= 0) && (var186 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((myvar0 == 1) && (var187 >= 0) && (var187 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((myvar0 == 1) && (var188 >= 0) && (var188 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((myvar0 == 1) && (var189 >= 0) && (var189 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((myvar0 == 1) && (var190 >= 0) && (var190 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((myvar0 == 1) && (var191 >= 0) && (var191 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((myvar0 == 1) && (var192 >= 0) && (var192 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((myvar0 == 1) && (var193 >= 0) && (var193 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((myvar0 == 1) && (var194 >= 0) && (var194 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((myvar0 == 1) && (var195 >= 0) && (var195 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
if((myvar0 == 1) && (var196 >= 0) && (var196 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
if((myvar0 == 1) && (var197 >= 0) && (var197 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
if((myvar0 == 1) && (var198 >= 0) && (var198 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
if((myvar0 == 1) && (var199 >= 0) && (var199 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
if((myvar0 == 1) && (var200 >= 0) && (var200 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
if((myvar0 == 1) && (var201 >= 0) && (var201 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
if((myvar0 == 1) && (var202 >= 0) && (var202 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
if((myvar0 == 1) && (var203 >= 0) && (var203 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
if((myvar0 == 1) && (var204 >= 0) && (var204 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
if((myvar0 == 1) && (var205 >= 0) && (var205 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
if((myvar0 == 1) && (var206 >= 0) && (var206 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
if((myvar0 == 1) && (var207 >= 0) && (var207 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
if((myvar0 == 1) && (var208 >= 0) && (var208 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
if((myvar0 == 1) && (var209 >= 0) && (var209 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
if((myvar0 == 1) && (var210 >= 0) && (var210 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
if((myvar0 == 1) && (var211 >= 0) && (var211 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
if((myvar0 == 1) && (var212 >= 0) && (var212 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
if((myvar0 == 1) && (var213 >= 0) && (var213 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
if((myvar0 == 1) && (var214 >= 0) && (var214 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
if((myvar0 == 1) && (var215 >= 0) && (var215 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
if((myvar0 == 1) && (var216 >= 0) && (var216 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
if((myvar0 == 1) && (var217 >= 0) && (var217 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
if((myvar0 == 1) && (var218 >= 0) && (var218 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
if((myvar0 == 1) && (var219 >= 0) && (var219 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
if((myvar0 == 1) && (var220 >= 0) && (var220 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
if((myvar0 == 1) && (var221 >= 0) && (var221 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
if((myvar0 == 1) && (var222 >= 0) && (var222 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
if((myvar0 == 1) && (var223 >= 0) && (var223 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
if((myvar0 == 1) && (var224 >= 0) && (var224 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var225;
klee_make_symbolic(&var225, sizeof(var225), "var225");
if((myvar0 == 1) && (var225 >= 0) && (var225 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var226;
klee_make_symbolic(&var226, sizeof(var226), "var226");
if((myvar0 == 1) && (var226 >= 0) && (var226 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var227;
klee_make_symbolic(&var227, sizeof(var227), "var227");
if((myvar0 == 1) && (var227 >= 0) && (var227 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var228;
klee_make_symbolic(&var228, sizeof(var228), "var228");
if((myvar0 == 1) && (var228 >= 0) && (var228 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var229;
klee_make_symbolic(&var229, sizeof(var229), "var229");
if((myvar0 == 1) && (var229 >= 0) && (var229 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var230;
klee_make_symbolic(&var230, sizeof(var230), "var230");
if((myvar0 == 1) && (var230 >= 0) && (var230 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var231;
klee_make_symbolic(&var231, sizeof(var231), "var231");
if((myvar0 == 1) && (var231 >= 0) && (var231 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var232;
klee_make_symbolic(&var232, sizeof(var232), "var232");
if((myvar0 == 1) && (var232 >= 0) && (var232 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var233;
klee_make_symbolic(&var233, sizeof(var233), "var233");
if((myvar0 == 1) && (var233 >= 0) && (var233 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var234;
klee_make_symbolic(&var234, sizeof(var234), "var234");
if((myvar0 == 1) && (var234 >= 0) && (var234 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var235;
klee_make_symbolic(&var235, sizeof(var235), "var235");
if((myvar0 == 1) && (var235 >= 0) && (var235 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var236;
klee_make_symbolic(&var236, sizeof(var236), "var236");
if((myvar0 == 1) && (var236 >= 0) && (var236 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var237;
klee_make_symbolic(&var237, sizeof(var237), "var237");
if((myvar0 == 1) && (var237 >= 0) && (var237 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var238;
klee_make_symbolic(&var238, sizeof(var238), "var238");
if((myvar0 == 1) && (var238 >= 0) && (var238 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var239;
klee_make_symbolic(&var239, sizeof(var239), "var239");
if((myvar0 == 1) && (var239 >= 0) && (var239 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var240;
klee_make_symbolic(&var240, sizeof(var240), "var240");
if((myvar0 == 1) && (var240 >= 0) && (var240 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var241;
klee_make_symbolic(&var241, sizeof(var241), "var241");
if((myvar0 == 1) && (var241 >= 0) && (var241 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var242;
klee_make_symbolic(&var242, sizeof(var242), "var242");
if((myvar0 == 1) && (var242 >= 0) && (var242 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var243;
klee_make_symbolic(&var243, sizeof(var243), "var243");
if((myvar0 == 1) && (var243 >= 0) && (var243 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var244;
klee_make_symbolic(&var244, sizeof(var244), "var244");
if((myvar0 == 1) && (var244 >= 0) && (var244 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var245;
klee_make_symbolic(&var245, sizeof(var245), "var245");
if((myvar0 == 1) && (var245 >= 0) && (var245 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var246;
klee_make_symbolic(&var246, sizeof(var246), "var246");
if((myvar0 == 1) && (var246 >= 0) && (var246 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var247;
klee_make_symbolic(&var247, sizeof(var247), "var247");
if((myvar0 == 1) && (var247 >= 0) && (var247 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var248;
klee_make_symbolic(&var248, sizeof(var248), "var248");
if((myvar0 == 1) && (var248 >= 0) && (var248 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var249;
klee_make_symbolic(&var249, sizeof(var249), "var249");
if((myvar0 == 1) && (var249 >= 0) && (var249 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var250;
klee_make_symbolic(&var250, sizeof(var250), "var250");
if((myvar0 == 1) && (var250 >= 0) && (var250 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var251;
klee_make_symbolic(&var251, sizeof(var251), "var251");
if((myvar0 == 1) && (var251 >= 0) && (var251 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var252;
klee_make_symbolic(&var252, sizeof(var252), "var252");
if((myvar0 == 1) && (var252 >= 0) && (var252 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var253;
klee_make_symbolic(&var253, sizeof(var253), "var253");
if((myvar0 == 1) && (var253 >= 0) && (var253 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var254;
klee_make_symbolic(&var254, sizeof(var254), "var254");
if((myvar0 == 1) && (var254 >= 0) && (var254 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var255;
klee_make_symbolic(&var255, sizeof(var255), "var255");
if((myvar0 == 1) && (var255 >= 0) && (var255 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var256;
klee_make_symbolic(&var256, sizeof(var256), "var256");
if((myvar0 == 1) && (var256 >= 0) && (var256 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var257;
klee_make_symbolic(&var257, sizeof(var257), "var257");
if((myvar0 == 1) && (var257 >= 0) && (var257 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var258;
klee_make_symbolic(&var258, sizeof(var258), "var258");
if((myvar0 == 1) && (var258 >= 0) && (var258 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var259;
klee_make_symbolic(&var259, sizeof(var259), "var259");
if((myvar0 == 1) && (var259 >= 0) && (var259 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var260;
klee_make_symbolic(&var260, sizeof(var260), "var260");
if((myvar0 == 1) && (var260 >= 0) && (var260 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var261;
klee_make_symbolic(&var261, sizeof(var261), "var261");
if((myvar0 == 1) && (var261 >= 0) && (var261 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var262;
klee_make_symbolic(&var262, sizeof(var262), "var262");
if((myvar0 == 1) && (var262 >= 0) && (var262 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var263;
klee_make_symbolic(&var263, sizeof(var263), "var263");
if((myvar0 == 1) && (var263 >= 0) && (var263 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var264;
klee_make_symbolic(&var264, sizeof(var264), "var264");
if((myvar0 == 1) && (var264 >= 0) && (var264 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var265;
klee_make_symbolic(&var265, sizeof(var265), "var265");
if((myvar0 == 1) && (var265 >= 0) && (var265 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var266;
klee_make_symbolic(&var266, sizeof(var266), "var266");
if((myvar0 == 1) && (var266 >= 0) && (var266 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var267;
klee_make_symbolic(&var267, sizeof(var267), "var267");
if((myvar0 == 1) && (var267 >= 0) && (var267 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var268;
klee_make_symbolic(&var268, sizeof(var268), "var268");
if((myvar0 == 1) && (var268 >= 0) && (var268 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var269;
klee_make_symbolic(&var269, sizeof(var269), "var269");
if((myvar0 == 1) && (var269 >= 0) && (var269 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var270;
klee_make_symbolic(&var270, sizeof(var270), "var270");
if((myvar0 == 1) && (var270 >= 0) && (var270 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var271;
klee_make_symbolic(&var271, sizeof(var271), "var271");
if((myvar0 == 1) && (var271 >= 0) && (var271 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var272;
klee_make_symbolic(&var272, sizeof(var272), "var272");
if((myvar0 == 1) && (var272 >= 0) && (var272 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var273;
klee_make_symbolic(&var273, sizeof(var273), "var273");
if((myvar0 == 1) && (var273 >= 0) && (var273 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var274;
klee_make_symbolic(&var274, sizeof(var274), "var274");
if((myvar0 == 1) && (var274 >= 0) && (var274 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var275;
klee_make_symbolic(&var275, sizeof(var275), "var275");
if((myvar0 == 1) && (var275 >= 0) && (var275 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var276;
klee_make_symbolic(&var276, sizeof(var276), "var276");
if((myvar0 == 1) && (var276 >= 0) && (var276 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var277;
klee_make_symbolic(&var277, sizeof(var277), "var277");
if((myvar0 == 1) && (var277 >= 0) && (var277 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var278;
klee_make_symbolic(&var278, sizeof(var278), "var278");
if((myvar0 == 1) && (var278 >= 0) && (var278 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var279;
klee_make_symbolic(&var279, sizeof(var279), "var279");
if((myvar0 == 1) && (var279 >= 0) && (var279 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var280;
klee_make_symbolic(&var280, sizeof(var280), "var280");
if((myvar0 == 1) && (var280 >= 0) && (var280 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var281;
klee_make_symbolic(&var281, sizeof(var281), "var281");
if((myvar0 == 1) && (var281 >= 0) && (var281 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var282;
klee_make_symbolic(&var282, sizeof(var282), "var282");
if((myvar0 == 1) && (var282 >= 0) && (var282 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var283;
klee_make_symbolic(&var283, sizeof(var283), "var283");
if((myvar0 == 1) && (var283 >= 0) && (var283 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var284;
klee_make_symbolic(&var284, sizeof(var284), "var284");
if((myvar0 == 1) && (var284 >= 0) && (var284 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var285;
klee_make_symbolic(&var285, sizeof(var285), "var285");
if((myvar0 == 1) && (var285 >= 0) && (var285 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var286;
klee_make_symbolic(&var286, sizeof(var286), "var286");
if((myvar0 == 1) && (var286 >= 0) && (var286 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var287;
klee_make_symbolic(&var287, sizeof(var287), "var287");
if((myvar0 == 1) && (var287 >= 0) && (var287 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var288;
klee_make_symbolic(&var288, sizeof(var288), "var288");
if((myvar0 == 1) && (var288 >= 0) && (var288 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var289;
klee_make_symbolic(&var289, sizeof(var289), "var289");
if((myvar0 == 1) && (var289 >= 0) && (var289 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var290;
klee_make_symbolic(&var290, sizeof(var290), "var290");
if((myvar0 == 1) && (var290 >= 0) && (var290 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var291;
klee_make_symbolic(&var291, sizeof(var291), "var291");
if((myvar0 == 1) && (var291 >= 0) && (var291 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var292;
klee_make_symbolic(&var292, sizeof(var292), "var292");
if((myvar0 == 1) && (var292 >= 0) && (var292 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var293;
klee_make_symbolic(&var293, sizeof(var293), "var293");
if((myvar0 == 1) && (var293 >= 0) && (var293 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var294;
klee_make_symbolic(&var294, sizeof(var294), "var294");
if((myvar0 == 1) && (var294 >= 0) && (var294 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var295;
klee_make_symbolic(&var295, sizeof(var295), "var295");
if((myvar0 == 1) && (var295 >= 0) && (var295 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var296;
klee_make_symbolic(&var296, sizeof(var296), "var296");
if((myvar0 == 1) && (var296 >= 0) && (var296 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var297;
klee_make_symbolic(&var297, sizeof(var297), "var297");
if((myvar0 == 1) && (var297 >= 0) && (var297 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var298;
klee_make_symbolic(&var298, sizeof(var298), "var298");
if((myvar0 == 1) && (var298 >= 0) && (var298 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var299;
klee_make_symbolic(&var299, sizeof(var299), "var299");
if((myvar0 == 1) && (var299 >= 0) && (var299 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var300;
klee_make_symbolic(&var300, sizeof(var300), "var300");
if((myvar0 == 1) && (var300 >= 0) && (var300 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var301;
klee_make_symbolic(&var301, sizeof(var301), "var301");
if((myvar0 == 1) && (var301 >= 0) && (var301 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var302;
klee_make_symbolic(&var302, sizeof(var302), "var302");
if((myvar0 == 1) && (var302 >= 0) && (var302 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var303;
klee_make_symbolic(&var303, sizeof(var303), "var303");
if((myvar0 == 1) && (var303 >= 0) && (var303 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var304;
klee_make_symbolic(&var304, sizeof(var304), "var304");
if((myvar0 == 1) && (var304 >= 0) && (var304 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var305;
klee_make_symbolic(&var305, sizeof(var305), "var305");
if((myvar0 == 1) && (var305 >= 0) && (var305 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var306;
klee_make_symbolic(&var306, sizeof(var306), "var306");
if((myvar0 == 1) && (var306 >= 0) && (var306 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var307;
klee_make_symbolic(&var307, sizeof(var307), "var307");
if((myvar0 == 1) && (var307 >= 0) && (var307 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var308;
klee_make_symbolic(&var308, sizeof(var308), "var308");
if((myvar0 == 1) && (var308 >= 0) && (var308 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var309;
klee_make_symbolic(&var309, sizeof(var309), "var309");
if((myvar0 == 1) && (var309 >= 0) && (var309 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var310;
klee_make_symbolic(&var310, sizeof(var310), "var310");
if((myvar0 == 1) && (var310 >= 0) && (var310 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var311;
klee_make_symbolic(&var311, sizeof(var311), "var311");
if((myvar0 == 1) && (var311 >= 0) && (var311 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var312;
klee_make_symbolic(&var312, sizeof(var312), "var312");
if((myvar0 == 1) && (var312 >= 0) && (var312 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var313;
klee_make_symbolic(&var313, sizeof(var313), "var313");
if((myvar0 == 1) && (var313 >= 0) && (var313 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var314;
klee_make_symbolic(&var314, sizeof(var314), "var314");
if((myvar0 == 1) && (var314 >= 0) && (var314 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var315;
klee_make_symbolic(&var315, sizeof(var315), "var315");
if((myvar0 == 1) && (var315 >= 0) && (var315 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var316;
klee_make_symbolic(&var316, sizeof(var316), "var316");
if((myvar0 == 1) && (var316 >= 0) && (var316 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var317;
klee_make_symbolic(&var317, sizeof(var317), "var317");
if((myvar0 == 1) && (var317 >= 0) && (var317 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var318;
klee_make_symbolic(&var318, sizeof(var318), "var318");
if((myvar0 == 1) && (var318 >= 0) && (var318 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var319;
klee_make_symbolic(&var319, sizeof(var319), "var319");
if((myvar0 == 1) && (var319 >= 0) && (var319 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var320;
klee_make_symbolic(&var320, sizeof(var320), "var320");
if((myvar0 == 1) && (var320 >= 0) && (var320 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var321;
klee_make_symbolic(&var321, sizeof(var321), "var321");
if((myvar0 == 1) && (var321 >= 0) && (var321 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var322;
klee_make_symbolic(&var322, sizeof(var322), "var322");
if((myvar0 == 1) && (var322 >= 0) && (var322 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var323;
klee_make_symbolic(&var323, sizeof(var323), "var323");
if((myvar0 == 1) && (var323 >= 0) && (var323 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var324;
klee_make_symbolic(&var324, sizeof(var324), "var324");
if((myvar0 == 1) && (var324 >= 0) && (var324 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var325;
klee_make_symbolic(&var325, sizeof(var325), "var325");
if((myvar0 == 1) && (var325 >= 0) && (var325 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var326;
klee_make_symbolic(&var326, sizeof(var326), "var326");
if((myvar0 == 1) && (var326 >= 0) && (var326 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var327;
klee_make_symbolic(&var327, sizeof(var327), "var327");
if((myvar0 == 1) && (var327 >= 0) && (var327 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var328;
klee_make_symbolic(&var328, sizeof(var328), "var328");
if((myvar0 == 1) && (var328 >= 0) && (var328 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var329;
klee_make_symbolic(&var329, sizeof(var329), "var329");
if((myvar0 == 1) && (var329 >= 0) && (var329 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var330;
klee_make_symbolic(&var330, sizeof(var330), "var330");
if((myvar0 == 1) && (var330 >= 0) && (var330 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var331;
klee_make_symbolic(&var331, sizeof(var331), "var331");
if((myvar0 == 1) && (var331 >= 0) && (var331 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var332;
klee_make_symbolic(&var332, sizeof(var332), "var332");
if((myvar0 == 1) && (var332 >= 0) && (var332 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var333;
klee_make_symbolic(&var333, sizeof(var333), "var333");
if((myvar0 == 1) && (var333 >= 0) && (var333 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var334;
klee_make_symbolic(&var334, sizeof(var334), "var334");
if((myvar0 == 1) && (var334 >= 0) && (var334 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var335;
klee_make_symbolic(&var335, sizeof(var335), "var335");
if((myvar0 == 1) && (var335 >= 0) && (var335 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var336;
klee_make_symbolic(&var336, sizeof(var336), "var336");
if((myvar0 == 1) && (var336 >= 0) && (var336 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var337;
klee_make_symbolic(&var337, sizeof(var337), "var337");
if((myvar0 == 1) && (var337 >= 0) && (var337 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var338;
klee_make_symbolic(&var338, sizeof(var338), "var338");
if((myvar0 == 1) && (var338 >= 0) && (var338 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var339;
klee_make_symbolic(&var339, sizeof(var339), "var339");
if((myvar0 == 1) && (var339 >= 0) && (var339 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var340;
klee_make_symbolic(&var340, sizeof(var340), "var340");
if((myvar0 == 1) && (var340 >= 0) && (var340 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var341;
klee_make_symbolic(&var341, sizeof(var341), "var341");
if((myvar0 == 1) && (var341 >= 0) && (var341 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var342;
klee_make_symbolic(&var342, sizeof(var342), "var342");
if((myvar0 == 1) && (var342 >= 0) && (var342 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var343;
klee_make_symbolic(&var343, sizeof(var343), "var343");
if((myvar0 == 1) && (var343 >= 0) && (var343 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var344;
klee_make_symbolic(&var344, sizeof(var344), "var344");
if((myvar0 == 1) && (var344 >= 0) && (var344 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var345;
klee_make_symbolic(&var345, sizeof(var345), "var345");
if((myvar0 == 1) && (var345 >= 0) && (var345 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var346;
klee_make_symbolic(&var346, sizeof(var346), "var346");
if((myvar0 == 1) && (var346 >= 0) && (var346 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var347;
klee_make_symbolic(&var347, sizeof(var347), "var347");
if((myvar0 == 1) && (var347 >= 0) && (var347 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var348;
klee_make_symbolic(&var348, sizeof(var348), "var348");
if((myvar0 == 1) && (var348 >= 0) && (var348 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var349;
klee_make_symbolic(&var349, sizeof(var349), "var349");
if((myvar0 == 1) && (var349 >= 0) && (var349 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var350;
klee_make_symbolic(&var350, sizeof(var350), "var350");
if((myvar0 == 1) && (var350 >= 0) && (var350 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var351;
klee_make_symbolic(&var351, sizeof(var351), "var351");
if((myvar0 == 1) && (var351 >= 0) && (var351 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var352;
klee_make_symbolic(&var352, sizeof(var352), "var352");
if((myvar0 == 1) && (var352 >= 0) && (var352 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var353;
klee_make_symbolic(&var353, sizeof(var353), "var353");
if((myvar0 == 1) && (var353 >= 0) && (var353 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var354;
klee_make_symbolic(&var354, sizeof(var354), "var354");
if((myvar0 == 1) && (var354 >= 0) && (var354 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var355;
klee_make_symbolic(&var355, sizeof(var355), "var355");
if((myvar0 == 1) && (var355 >= 0) && (var355 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var356;
klee_make_symbolic(&var356, sizeof(var356), "var356");
if((myvar0 == 1) && (var356 >= 0) && (var356 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var357;
klee_make_symbolic(&var357, sizeof(var357), "var357");
if((myvar0 == 1) && (var357 >= 0) && (var357 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var358;
klee_make_symbolic(&var358, sizeof(var358), "var358");
if((myvar0 == 1) && (var358 >= 0) && (var358 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var359;
klee_make_symbolic(&var359, sizeof(var359), "var359");
if((myvar0 == 1) && (var359 >= 0) && (var359 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var360;
klee_make_symbolic(&var360, sizeof(var360), "var360");
if((myvar0 == 1) && (var360 >= 0) && (var360 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var361;
klee_make_symbolic(&var361, sizeof(var361), "var361");
if((myvar0 == 1) && (var361 >= 0) && (var361 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var362;
klee_make_symbolic(&var362, sizeof(var362), "var362");
if((myvar0 == 1) && (var362 >= 0) && (var362 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var363;
klee_make_symbolic(&var363, sizeof(var363), "var363");
if((myvar0 == 1) && (var363 >= 0) && (var363 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var364;
klee_make_symbolic(&var364, sizeof(var364), "var364");
if((myvar0 == 1) && (var364 >= 0) && (var364 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var365;
klee_make_symbolic(&var365, sizeof(var365), "var365");
if((myvar0 == 1) && (var365 >= 0) && (var365 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var366;
klee_make_symbolic(&var366, sizeof(var366), "var366");
if((myvar0 == 1) && (var366 >= 0) && (var366 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var367;
klee_make_symbolic(&var367, sizeof(var367), "var367");
if((myvar0 == 1) && (var367 >= 0) && (var367 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var368;
klee_make_symbolic(&var368, sizeof(var368), "var368");
if((myvar0 == 1) && (var368 >= 0) && (var368 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var369;
klee_make_symbolic(&var369, sizeof(var369), "var369");
if((myvar0 == 1) && (var369 >= 0) && (var369 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var370;
klee_make_symbolic(&var370, sizeof(var370), "var370");
if((myvar0 == 1) && (var370 >= 0) && (var370 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var371;
klee_make_symbolic(&var371, sizeof(var371), "var371");
if((myvar0 == 1) && (var371 >= 0) && (var371 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var372;
klee_make_symbolic(&var372, sizeof(var372), "var372");
if((myvar0 == 1) && (var372 >= 0) && (var372 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var373;
klee_make_symbolic(&var373, sizeof(var373), "var373");
if((myvar0 == 1) && (var373 >= 0) && (var373 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var374;
klee_make_symbolic(&var374, sizeof(var374), "var374");
if((myvar0 == 1) && (var374 >= 0) && (var374 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var375;
klee_make_symbolic(&var375, sizeof(var375), "var375");
if((myvar0 == 1) && (var375 >= 0) && (var375 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var376;
klee_make_symbolic(&var376, sizeof(var376), "var376");
if((myvar0 == 1) && (var376 >= 0) && (var376 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var377;
klee_make_symbolic(&var377, sizeof(var377), "var377");
if((myvar0 == 1) && (var377 >= 0) && (var377 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var378;
klee_make_symbolic(&var378, sizeof(var378), "var378");
if((myvar0 == 1) && (var378 >= 0) && (var378 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var379;
klee_make_symbolic(&var379, sizeof(var379), "var379");
if((myvar0 == 1) && (var379 >= 0) && (var379 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var380;
klee_make_symbolic(&var380, sizeof(var380), "var380");
if((myvar0 == 1) && (var380 >= 0) && (var380 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var381;
klee_make_symbolic(&var381, sizeof(var381), "var381");
if((myvar0 == 1) && (var381 >= 0) && (var381 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var382;
klee_make_symbolic(&var382, sizeof(var382), "var382");
if((myvar0 == 1) && (var382 >= 0) && (var382 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var383;
klee_make_symbolic(&var383, sizeof(var383), "var383");
if((myvar0 == 1) && (var383 >= 0) && (var383 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var384;
klee_make_symbolic(&var384, sizeof(var384), "var384");
if((myvar0 == 1) && (var384 >= 0) && (var384 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var385;
klee_make_symbolic(&var385, sizeof(var385), "var385");
if((myvar0 == 1) && (var385 >= 0) && (var385 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var386;
klee_make_symbolic(&var386, sizeof(var386), "var386");
if((myvar0 == 1) && (var386 >= 0) && (var386 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var387;
klee_make_symbolic(&var387, sizeof(var387), "var387");
if((myvar0 == 1) && (var387 >= 0) && (var387 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var388;
klee_make_symbolic(&var388, sizeof(var388), "var388");
if((myvar0 == 1) && (var388 >= 0) && (var388 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var389;
klee_make_symbolic(&var389, sizeof(var389), "var389");
if((myvar0 == 1) && (var389 >= 0) && (var389 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var390;
klee_make_symbolic(&var390, sizeof(var390), "var390");
if((myvar0 == 1) && (var390 >= 0) && (var390 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var391;
klee_make_symbolic(&var391, sizeof(var391), "var391");
if((myvar0 == 1) && (var391 >= 0) && (var391 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var392;
klee_make_symbolic(&var392, sizeof(var392), "var392");
if((myvar0 == 1) && (var392 >= 0) && (var392 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var393;
klee_make_symbolic(&var393, sizeof(var393), "var393");
if((myvar0 == 1) && (var393 >= 0) && (var393 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var394;
klee_make_symbolic(&var394, sizeof(var394), "var394");
if((myvar0 == 1) && (var394 >= 0) && (var394 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var395;
klee_make_symbolic(&var395, sizeof(var395), "var395");
if((myvar0 == 1) && (var395 >= 0) && (var395 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var396;
klee_make_symbolic(&var396, sizeof(var396), "var396");
if((myvar0 == 1) && (var396 >= 0) && (var396 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var397;
klee_make_symbolic(&var397, sizeof(var397), "var397");
if((myvar0 == 1) && (var397 >= 0) && (var397 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var398;
klee_make_symbolic(&var398, sizeof(var398), "var398");
if((myvar0 == 1) && (var398 >= 0) && (var398 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var399;
klee_make_symbolic(&var399, sizeof(var399), "var399");
if((myvar0 == 1) && (var399 >= 0) && (var399 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var400;
klee_make_symbolic(&var400, sizeof(var400), "var400");
if((myvar0 == 1) && (var400 >= 0) && (var400 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var401;
klee_make_symbolic(&var401, sizeof(var401), "var401");
if((myvar0 == 1) && (var401 >= 0) && (var401 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var402;
klee_make_symbolic(&var402, sizeof(var402), "var402");
if((myvar0 == 1) && (var402 >= 0) && (var402 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var403;
klee_make_symbolic(&var403, sizeof(var403), "var403");
if((myvar0 == 1) && (var403 >= 0) && (var403 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var404;
klee_make_symbolic(&var404, sizeof(var404), "var404");
if((myvar0 == 1) && (var404 >= 0) && (var404 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var405;
klee_make_symbolic(&var405, sizeof(var405), "var405");
if((myvar0 == 1) && (var405 >= 0) && (var405 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var406;
klee_make_symbolic(&var406, sizeof(var406), "var406");
if((myvar0 == 1) && (var406 >= 0) && (var406 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var407;
klee_make_symbolic(&var407, sizeof(var407), "var407");
if((myvar0 == 1) && (var407 >= 0) && (var407 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var408;
klee_make_symbolic(&var408, sizeof(var408), "var408");
if((myvar0 == 1) && (var408 >= 0) && (var408 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var409;
klee_make_symbolic(&var409, sizeof(var409), "var409");
if((myvar0 == 1) && (var409 >= 0) && (var409 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var410;
klee_make_symbolic(&var410, sizeof(var410), "var410");
if((myvar0 == 1) && (var410 >= 0) && (var410 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var411;
klee_make_symbolic(&var411, sizeof(var411), "var411");
if((myvar0 == 1) && (var411 >= 0) && (var411 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var412;
klee_make_symbolic(&var412, sizeof(var412), "var412");
if((myvar0 == 1) && (var412 >= 0) && (var412 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var413;
klee_make_symbolic(&var413, sizeof(var413), "var413");
if((myvar0 == 1) && (var413 >= 0) && (var413 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var414;
klee_make_symbolic(&var414, sizeof(var414), "var414");
if((myvar0 == 1) && (var414 >= 0) && (var414 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var415;
klee_make_symbolic(&var415, sizeof(var415), "var415");
if((myvar0 == 1) && (var415 >= 0) && (var415 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var416;
klee_make_symbolic(&var416, sizeof(var416), "var416");
if((myvar0 == 1) && (var416 >= 0) && (var416 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var417;
klee_make_symbolic(&var417, sizeof(var417), "var417");
if((myvar0 == 1) && (var417 >= 0) && (var417 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var418;
klee_make_symbolic(&var418, sizeof(var418), "var418");
if((myvar0 == 1) && (var418 >= 0) && (var418 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var419;
klee_make_symbolic(&var419, sizeof(var419), "var419");
if((myvar0 == 1) && (var419 >= 0) && (var419 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var420;
klee_make_symbolic(&var420, sizeof(var420), "var420");
if((myvar0 == 1) && (var420 >= 0) && (var420 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var421;
klee_make_symbolic(&var421, sizeof(var421), "var421");
if((myvar0 == 1) && (var421 >= 0) && (var421 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var422;
klee_make_symbolic(&var422, sizeof(var422), "var422");
if((myvar0 == 1) && (var422 >= 0) && (var422 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var423;
klee_make_symbolic(&var423, sizeof(var423), "var423");
if((myvar0 == 1) && (var423 >= 0) && (var423 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var424;
klee_make_symbolic(&var424, sizeof(var424), "var424");
if((myvar0 == 1) && (var424 >= 0) && (var424 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var425;
klee_make_symbolic(&var425, sizeof(var425), "var425");
if((myvar0 == 1) && (var425 >= 0) && (var425 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var426;
klee_make_symbolic(&var426, sizeof(var426), "var426");
if((myvar0 == 1) && (var426 >= 0) && (var426 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var427;
klee_make_symbolic(&var427, sizeof(var427), "var427");
if((myvar0 == 1) && (var427 >= 0) && (var427 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var428;
klee_make_symbolic(&var428, sizeof(var428), "var428");
if((myvar0 == 1) && (var428 >= 0) && (var428 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var429;
klee_make_symbolic(&var429, sizeof(var429), "var429");
if((myvar0 == 1) && (var429 >= 0) && (var429 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var430;
klee_make_symbolic(&var430, sizeof(var430), "var430");
if((myvar0 == 1) && (var430 >= 0) && (var430 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var431;
klee_make_symbolic(&var431, sizeof(var431), "var431");
if((myvar0 == 1) && (var431 >= 0) && (var431 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var432;
klee_make_symbolic(&var432, sizeof(var432), "var432");
if((myvar0 == 1) && (var432 >= 0) && (var432 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var433;
klee_make_symbolic(&var433, sizeof(var433), "var433");
if((myvar0 == 1) && (var433 >= 0) && (var433 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var434;
klee_make_symbolic(&var434, sizeof(var434), "var434");
if((myvar0 == 1) && (var434 >= 0) && (var434 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var435;
klee_make_symbolic(&var435, sizeof(var435), "var435");
if((myvar0 == 1) && (var435 >= 0) && (var435 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var436;
klee_make_symbolic(&var436, sizeof(var436), "var436");
if((myvar0 == 1) && (var436 >= 0) && (var436 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var437;
klee_make_symbolic(&var437, sizeof(var437), "var437");
if((myvar0 == 1) && (var437 >= 0) && (var437 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var438;
klee_make_symbolic(&var438, sizeof(var438), "var438");
if((myvar0 == 1) && (var438 >= 0) && (var438 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var439;
klee_make_symbolic(&var439, sizeof(var439), "var439");
if((myvar0 == 1) && (var439 >= 0) && (var439 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var440;
klee_make_symbolic(&var440, sizeof(var440), "var440");
if((myvar0 == 1) && (var440 >= 0) && (var440 <= 20)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var407 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var407 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var407 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var407 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var148)*(var148 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var19)*(var19 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var260)*(var260 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var27)*(var27 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var333)*(var333 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var341)*(var341 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var402)*(var402 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var430)*(var430 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var93)*(var93 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var106)*(var106 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var395)*(var395 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var401)*(var401 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var125)*(var125 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var145)*(var145 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var160)*(var160 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var280)*(var280 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var117)*(var117 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var140)*(var140 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var187)*(var187 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var379)*(var379 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var427)*(var427 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var131)*(var131 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var222)*(var222 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var384)*(var384 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var410)*(var410 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var49)*(var49 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var112)*(var112 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var113)*(var113 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var183)*(var183 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var187)*(var187 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var306)*(var306 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var354)*(var354 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var8)*(var8 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var237)*(var237 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var415)*(var415 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var216)*(var216 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var220)*(var220 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var270)*(var270 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var294)*(var294 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var371)*(var371 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var404)*(var404 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var42)*(var42 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var275)*(var275 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var364)*(var364 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var395)*(var395 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var415)*(var415 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var136)*(var136 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var200)*(var200 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var202)*(var202 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var246)*(var246 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var319)*(var319 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var63)*(var63 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var120)*(var120 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var138)*(var138 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var221)*(var221 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var242)*(var242 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var267)*(var267 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var34)*(var34 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var344)*(var344 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var405)*(var405 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var412)*(var412 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var100)*(var100 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var160)*(var160 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var180)*(var180 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var243)*(var243 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var291)*(var291 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var30)*(var30 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var327)*(var327 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var366)*(var366 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var393)*(var393 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var125)*(var125 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var241)*(var241 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var243)*(var243 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var30)*(var30 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var305)*(var305 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var327)*(var327 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var366)*(var366 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var393)*(var393 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var420)*(var420 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var221)*(var221 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var101)*(var101 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var103)*(var103 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var114)*(var114 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var117)*(var117 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var187)*(var187 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var306)*(var306 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var354)*(var354 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var427)*(var427 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var113)*(var113 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var114)*(var114 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var117)*(var117 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var140)*(var140 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var354)*(var354 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var116)*(var116 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var140)*(var140 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var187)*(var187 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var427)*(var427 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var101)*(var101 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var113)*(var113 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var140)*(var140 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var187)*(var187 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var379)*(var379 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var202)*(var202 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var246)*(var246 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var437)*(var437 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var140)*(var140 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var140)*(var140 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var149)*(var149 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var216)*(var216 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var239)*(var239 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var42)*(var42 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var232)*(var232 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var331)*(var331 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var352)*(var352 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var39)*(var39 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var71)*(var71 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var174)*(var174 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var308)*(var308 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var15)*(var15 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var189)*(var189 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var192)*(var192 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var233)*(var233 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var124)*(var124 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var16)*(var16 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var322)*(var322 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var48)*(var48 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var72)*(var72 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var104)*(var104 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var106)*(var106 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var130)*(var130 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var132)*(var132 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var229)*(var229 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var237)*(var237 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var275)*(var275 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var334)*(var334 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var349)*(var349 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var364)*(var364 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var395)*(var395 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var401)*(var401 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var414)*(var414 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var415)*(var415 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var137)*(var137 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var16)*(var16 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var172)*(var172 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var29)*(var29 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var322)*(var322 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var97)*(var97 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var366)*(var366 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var387)*(var387 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var420)*(var420 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var190)*(var190 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var324)*(var324 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var189)*(var189 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var192)*(var192 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var233)*(var233 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var295)*(var295 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var394)*(var394 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var190)*(var190 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var226)*(var226 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var24)*(var24 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var259)*(var259 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var287)*(var287 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var299)*(var299 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var307)*(var307 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var345)*(var345 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var403)*(var403 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var107)*(var107 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var136)*(var136 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var202)*(var202 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var208)*(var208 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var246)*(var246 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var268)*(var268 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var330)*(var330 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var1)*(var1 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var104)*(var104 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var334)*(var334 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var349)*(var349 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var364)*(var364 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var401)*(var401 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var292)*(var292 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var1)*(var1 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var130)*(var130 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var237)*(var237 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var334)*(var334 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var349)*(var349 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var395)*(var395 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var415)*(var415 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var68)*(var68 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var267)*(var267 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var262)*(var262 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var333)*(var333 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var365)*(var365 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var93)*(var93 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var157)*(var157 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var115)*(var115 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var202)*(var202 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var246)*(var246 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var330)*(var330 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var437)*(var437 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var120)*(var120 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var133)*(var133 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var230)*(var230 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var267)*(var267 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var304)*(var304 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var152)*(var152 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var161)*(var161 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var264)*(var264 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var282)*(var282 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var316)*(var316 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var351)*(var351 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var380)*(var380 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var425)*(var425 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var66)*(var66 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var79)*(var79 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var136)*(var136 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var200)*(var200 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var202)*(var202 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var208)*(var208 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var246)*(var246 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var268)*(var268 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var330)*(var330 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var373)*(var373 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var76)*(var76 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var159)*(var159 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var212)*(var212 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var224)*(var224 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var283)*(var283 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var296)*(var296 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var297)*(var297 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var368)*(var368 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var383)*(var383 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var423)*(var423 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var185)*(var185 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var257)*(var257 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var277)*(var277 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var336)*(var336 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var377)*(var377 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var421)*(var421 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var124)*(var124 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var144)*(var144 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var172)*(var172 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var137)*(var137 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var16)*(var16 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var172)*(var172 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var125)*(var125 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var194)*(var194 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var243)*(var243 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var182)*(var182 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var223)*(var223 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var252)*(var252 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var258)*(var258 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var321)*(var321 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var388)*(var388 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var86)*(var86 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var99)*(var99 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var341)*(var341 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var239)*(var239 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var42)*(var42 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var127)*(var127 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var189)*(var189 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var295)*(var295 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var102)*(var102 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var131)*(var131 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var158)*(var158 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var234)*(var234 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var238)*(var238 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var25)*(var25 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var426)*(var426 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var432)*(var432 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var118)*(var118 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var149)*(var149 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var270)*(var270 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var343)*(var343 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var404)*(var404 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var435)*(var435 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var96)*(var96 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var161)*(var161 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var264)*(var264 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var282)*(var282 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var288)*(var288 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var339)*(var339 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var340)*(var340 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var359)*(var359 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var380)*(var380 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var66)*(var66 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var79)*(var79 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var174)*(var174 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var196)*(var196 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var308)*(var308 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var406)*(var406 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var62)*(var62 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var65)*(var65 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var70)*(var70 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var142)*(var142 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var170)*(var170 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var211)*(var211 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var377)*(var377 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var421)*(var421 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var318)*(var318 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var45)*(var45 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var64)*(var64 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var300)*(var300 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var328)*(var328 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var348)*(var348 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var64)*(var64 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var40)*(var40 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var102)*(var102 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var222)*(var222 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var426)*(var426 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var440)*(var440 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var49)*(var49 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var6)*(var6 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var181)*(var181 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var422)*(var422 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var137)*(var137 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var121)*(var121 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var127)*(var127 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var15)*(var15 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var424)*(var424 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var10)*(var10 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var273)*(var273 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var386)*(var386 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var146)*(var146 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var182)*(var182 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var223)*(var223 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var252)*(var252 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var258)*(var258 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var388)*(var388 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var397)*(var397 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var61)*(var61 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var7)*(var7 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var86)*(var86 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var99)*(var99 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var163)*(var163 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var184)*(var184 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var197)*(var197 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var273)*(var273 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var347)*(var347 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var382)*(var382 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var396)*(var396 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var431)*(var431 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var78)*(var78 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var85)*(var85 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var177)*(var177 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var181)*(var181 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var422)*(var422 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var138)*(var138 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var221)*(var221 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var267)*(var267 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var405)*(var405 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var412)*(var412 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var57)*(var57 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var0)*(var0 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var148)*(var148 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var2)*(var2 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var228)*(var228 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var262)*(var262 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var284)*(var284 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var341)*(var341 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var402)*(var402 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var1)*(var1 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var130)*(var130 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var132)*(var132 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var334)*(var334 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var364)*(var364 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var395)*(var395 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var414)*(var414 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var211)*(var211 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var336)*(var336 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var282)*(var282 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var359)*(var359 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var439)*(var439 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var79)*(var79 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var137)*(var137 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var16)*(var16 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var29)*(var29 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var163)*(var163 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var184)*(var184 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var273)*(var273 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var392)*(var392 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var2)*(var2 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var262)*(var262 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var157)*(var157 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var310)*(var310 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var323)*(var323 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var36)*(var36 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var385)*(var385 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var40)*(var40 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var67)*(var67 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var74)*(var74 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var81)*(var81 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var94)*(var94 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var181)*(var181 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var156)*(var156 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var254)*(var254 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var300)*(var300 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var309)*(var309 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var317)*(var317 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var328)*(var328 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var348)*(var348 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var381)*(var381 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var185)*(var185 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var336)*(var336 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var377)*(var377 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var398)*(var398 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var421)*(var421 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var54)*(var54 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var91)*(var91 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var289)*(var289 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var331)*(var331 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var352)*(var352 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var363)*(var363 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var71)*(var71 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var77)*(var77 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var100)*(var100 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var11)*(var11 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var145)*(var145 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var194)*(var194 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var241)*(var241 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var243)*(var243 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var280)*(var280 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var305)*(var305 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var387)*(var387 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var393)*(var393 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var420)*(var420 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var224)*(var224 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var252)*(var252 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var258)*(var258 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var313)*(var313 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var46)*(var46 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var113)*(var113 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var117)*(var117 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var140)*(var140 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var121)*(var121 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var162)*(var162 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var189)*(var189 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var424)*(var424 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var50)*(var50 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var311)*(var311 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var192)*(var192 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var394)*(var394 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var134)*(var134 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var148)*(var148 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var175)*(var175 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var262)*(var262 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var27)*(var27 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var333)*(var333 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var341)*(var341 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var402)*(var402 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var324)*(var324 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var127)*(var127 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var15)*(var15 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var186)*(var186 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var189)*(var189 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var192)*(var192 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var295)*(var295 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var303)*(var303 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var394)*(var394 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var134)*(var134 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var148)*(var148 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var175)*(var175 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var2)*(var2 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var228)*(var228 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var262)*(var262 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var278)*(var278 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var341)*(var341 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var365)*(var365 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var430)*(var430 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var125)*(var125 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var420)*(var420 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var12)*(var12 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var308)*(var308 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var338)*(var338 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var342)*(var342 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var356)*(var356 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var406)*(var406 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var65)*(var65 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var10)*(var10 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var163)*(var163 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var173)*(var173 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var184)*(var184 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var320)*(var320 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var386)*(var386 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var396)*(var396 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var431)*(var431 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var78)*(var78 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var222)*(var222 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var292)*(var292 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var384)*(var384 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var426)*(var426 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var432)*(var432 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var6)*(var6 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var118)*(var118 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var239)*(var239 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var294)*(var294 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var404)*(var404 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var42)*(var42 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var148)*(var148 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var262)*(var262 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var341)*(var341 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var365)*(var365 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var93)*(var93 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var104)*(var104 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var130)*(var130 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var132)*(var132 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var349)*(var349 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var364)*(var364 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var414)*(var414 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var415)*(var415 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var68)*(var68 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var246)*(var246 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var330)*(var330 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var181)*(var181 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var224)*(var224 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var149)*(var149 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var343)*(var343 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var371)*(var371 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var113)*(var113 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var116)*(var116 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var117)*(var117 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var140)*(var140 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var135)*(var135 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var157)*(var157 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var310)*(var310 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var361)*(var361 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var385)*(var385 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var74)*(var74 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var94)*(var94 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var150)*(var150 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var198)*(var198 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var234)*(var234 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var235)*(var235 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var238)*(var238 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var292)*(var292 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var353)*(var353 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var384)*(var384 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var410)*(var410 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var426)*(var426 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var440)*(var440 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var107)*(var107 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var115)*(var115 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var136)*(var136 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var200)*(var200 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var202)*(var202 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var246)*(var246 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var268)*(var268 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var319)*(var319 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var434)*(var434 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var437)*(var437 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var63)*(var63 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var225)*(var225 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var265)*(var265 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var279)*(var279 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var315)*(var315 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var32)*(var32 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var362)*(var362 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var433)*(var433 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var121)*(var121 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var15)*(var15 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var186)*(var186 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var189)*(var189 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var303)*(var303 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var50)*(var50 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var119)*(var119 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var165)*(var165 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var232)*(var232 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var289)*(var289 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var311)*(var311 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var331)*(var331 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var352)*(var352 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var71)*(var71 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var77)*(var77 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var257)*(var257 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var286)*(var286 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var377)*(var377 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var159)*(var159 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var181)*(var181 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var296)*(var296 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var297)*(var297 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var368)*(var368 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var47)*(var47 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var55)*(var55 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var80)*(var80 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var12)*(var12 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var174)*(var174 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var338)*(var338 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var342)*(var342 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var406)*(var406 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var62)*(var62 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var65)*(var65 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var70)*(var70 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var149)*(var149 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var220)*(var220 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var343)*(var343 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var42)*(var42 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var12)*(var12 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var196)*(var196 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var308)*(var308 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var338)*(var338 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var38)*(var38 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var406)*(var406 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var62)*(var62 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var65)*(var65 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var69)*(var69 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var170)*(var170 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var185)*(var185 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var285)*(var285 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var286)*(var286 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var336)*(var336 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var421)*(var421 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var91)*(var91 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var239)*(var239 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var270)*(var270 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var343)*(var343 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var371)*(var371 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var384)*(var384 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var49)*(var49 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var258)*(var258 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var321)*(var321 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var388)*(var388 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var86)*(var86 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var98)*(var98 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var99)*(var99 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var215)*(var215 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var32)*(var32 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var126)*(var126 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var287)*(var287 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var299)*(var299 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var307)*(var307 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var324)*(var324 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var345)*(var345 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var403)*(var403 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var175)*(var175 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var2)*(var2 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var262)*(var262 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var333)*(var333 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var341)*(var341 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var1)*(var1 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var104)*(var104 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var237)*(var237 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var275)*(var275 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var334)*(var334 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var364)*(var364 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var401)*(var401 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var68)*(var68 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var209)*(var209 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var253)*(var253 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var3)*(var3 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var32)*(var32 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var350)*(var350 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var362)*(var362 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var416)*(var416 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var43)*(var43 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var59)*(var59 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var9)*(var9 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var230 - var120)*(var120 - var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var137)*(var137 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var143)*(var143 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var276)*(var276 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var60)*(var60 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var165)*(var165 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var188)*(var188 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var289)*(var289 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var311)*(var311 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var331)*(var331 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var352)*(var352 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var363)*(var363 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var39)*(var39 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var77)*(var77 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var158)*(var158 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var384)*(var384 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var410)*(var410 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var440)*(var440 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var49)*(var49 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var131)*(var131 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var150)*(var150 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var198)*(var198 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var234)*(var234 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var238)*(var238 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var353)*(var353 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var395)*(var395 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var415)*(var415 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var158)*(var158 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var440)*(var440 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var49)*(var49 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var6)*(var6 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var343)*(var343 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var42)*(var42 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var135)*(var135 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var147)*(var147 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var157)*(var157 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var206)*(var206 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var310)*(var310 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var36)*(var36 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var40)*(var40 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var74)*(var74 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var160)*(var160 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var194)*(var194 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var30)*(var30 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var337)*(var337 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var387)*(var387 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var393)*(var393 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var221)*(var221 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var230)*(var230 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var267)*(var267 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var304)*(var304 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var344)*(var344 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var412)*(var412 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var160)*(var160 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var194)*(var194 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var280)*(var280 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var305)*(var305 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var366)*(var366 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var387)*(var387 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var420)*(var420 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var108)*(var108 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var110)*(var110 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var133)*(var133 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var221)*(var221 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var242)*(var242 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var304)*(var304 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var35)*(var35 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var405)*(var405 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var429)*(var429 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var164)*(var164 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var182)*(var182 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var223)*(var223 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var313)*(var313 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var321)*(var321 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var428)*(var428 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var53)*(var53 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var61)*(var61 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var86)*(var86 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var99)*(var99 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var135)*(var135 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var176)*(var176 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var206)*(var206 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var263)*(var263 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var310)*(var310 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var323)*(var323 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var385)*(var385 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var40)*(var40 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var128)*(var128 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var190)*(var190 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var24)*(var24 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var307)*(var307 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var324)*(var324 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var345)*(var345 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var355)*(var355 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var369)*(var369 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var403)*(var403 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var124)*(var124 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var137)*(var137 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var143)*(var143 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var144)*(var144 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var172)*(var172 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var255)*(var255 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var322)*(var322 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var407)*(var407 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var48)*(var48 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var60)*(var60 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var72)*(var72 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var102)*(var102 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var131)*(var131 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var238)*(var238 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var292)*(var292 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var384)*(var384 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var410)*(var410 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var432)*(var432 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var440)*(var440 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var6)*(var6 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var178)*(var178 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var309)*(var309 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var348)*(var348 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var381)*(var381 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var418)*(var418 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var45)*(var45 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var51)*(var51 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var64)*(var64 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var98)*(var98 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var99)*(var99 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var215)*(var215 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var265)*(var265 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var279)*(var279 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var315)*(var315 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var32)*(var32 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var362)*(var362 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var4)*(var4 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var433)*(var433 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var59)*(var59 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var155)*(var155 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var156)*(var156 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var300)*(var300 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var309)*(var309 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var328)*(var328 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var348)*(var348 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var381)*(var381 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var45)*(var45 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var51)*(var51 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var95)*(var95 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var137)*(var137 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var29)*(var29 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var322)*(var322 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var72)*(var72 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var119)*(var119 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var210)*(var210 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var232)*(var232 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var326)*(var326 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var331)*(var331 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var360)*(var360 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var39)*(var39 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var71)*(var71 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var377)*(var377 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var252)*(var252 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var321)*(var321 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var7)*(var7 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var98)*(var98 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var99)*(var99 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var190)*(var190 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var226)*(var226 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var307)*(var307 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var90)*(var90 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var126)*(var126 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var226)*(var226 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var24)*(var24 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var248)*(var248 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var259)*(var259 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var299)*(var299 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var324)*(var324 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var403)*(var403 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var134)*(var134 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var148)*(var148 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var175)*(var175 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var262)*(var262 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var278)*(var278 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var284)*(var284 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var333)*(var333 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var402)*(var402 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var430)*(var430 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var107)*(var107 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var115)*(var115 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var136)*(var136 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var202)*(var202 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var246)*(var246 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var268)*(var268 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var330)*(var330 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var373)*(var373 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var409)*(var409 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var437)*(var437 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var63)*(var63 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var76)*(var76 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var341)*(var341 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var365)*(var365 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var135)*(var135 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var157)*(var157 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var385)*(var385 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var40)*(var40 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var67)*(var67 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var161)*(var161 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var171)*(var171 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var282)*(var282 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var351)*(var351 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var380)*(var380 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var439)*(var439 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var79)*(var79 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var279)*(var279 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var9)*(var9 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var122)*(var122 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var143)*(var143 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var172)*(var172 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var255)*(var255 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var322)*(var322 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var48)*(var48 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var60)*(var60 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var72)*(var72 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var120)*(var120 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var221)*(var221 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var230)*(var230 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var115)*(var115 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var246)*(var246 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var330)*(var330 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var437)*(var437 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var107)*(var107 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var129)*(var129 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var136)*(var136 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var200)*(var200 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var202)*(var202 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var319)*(var319 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var373)*(var373 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var434)*(var434 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var437)*(var437 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var63)*(var63 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var134)*(var134 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var148)*(var148 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var175)*(var175 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var193)*(var193 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var2)*(var2 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var228)*(var228 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var262)*(var262 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var333)*(var333 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var365)*(var365 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var430)*(var430 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var93)*(var93 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var42)*(var42 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var318)*(var318 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var348)*(var348 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var45)*(var45 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var122)*(var122 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var124)*(var124 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var137)*(var137 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var16)*(var16 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var172)*(var172 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var231)*(var231 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var249)*(var249 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var322)*(var322 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var407)*(var407 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var60)*(var60 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var72)*(var72 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var349)*(var349 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var414)*(var414 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var415)*(var415 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var16)*(var16 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var172)*(var172 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var211)*(var211 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var134)*(var134 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var148)*(var148 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var228)*(var228 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var341)*(var341 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var365)*(var365 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var402)*(var402 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var430)*(var430 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var215)*(var215 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var160)*(var160 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var366)*(var366 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var387)*(var387 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var283)*(var283 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var368)*(var368 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var423)*(var423 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var47)*(var47 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var55)*(var55 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var80)*(var80 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var340)*(var340 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var359)*(var359 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var380)*(var380 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var439)*(var439 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var79)*(var79 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var177)*(var177 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var181)*(var181 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var212)*(var212 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var296)*(var296 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var297)*(var297 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var47)*(var47 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var80)*(var80 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var148)*(var148 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var193)*(var193 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var2)*(var2 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var262)*(var262 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var278)*(var278 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var333)*(var333 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var365)*(var365 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var402)*(var402 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var93)*(var93 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var170)*(var170 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var185)*(var185 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var211)*(var211 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var257)*(var257 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var286)*(var286 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var377)*(var377 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var54)*(var54 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var324)*(var324 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var171)*(var171 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var282)*(var282 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var351)*(var351 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var359)*(var359 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var439)*(var439 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var66)*(var66 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var165)*(var165 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var188)*(var188 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var311)*(var311 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var71)*(var71 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var16)*(var16 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var126)*(var126 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var190)*(var190 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var226)*(var226 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var259)*(var259 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var299)*(var299 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var307)*(var307 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var324)*(var324 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var345)*(var345 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var403)*(var403 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var90)*(var90 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var145)*(var145 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var241)*(var241 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var366)*(var366 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var387)*(var387 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var49)*(var49 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var264)*(var264 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var282)*(var282 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var339)*(var339 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var359)*(var359 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var380)*(var380 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var425)*(var425 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var66)*(var66 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var79)*(var79 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var204)*(var204 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var220)*(var220 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var343)*(var343 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var378)*(var378 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var435)*(var435 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var189)*(var189 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var167)*(var167 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var177)*(var177 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var203)*(var203 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var224)*(var224 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var422)*(var422 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var80)*(var80 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var159)*(var159 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var167)*(var167 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var177)*(var177 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var296)*(var296 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var368)*(var368 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var422)*(var422 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var55)*(var55 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var139)*(var139 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var171)*(var171 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var282)*(var282 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var339)*(var339 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var351)*(var351 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var359)*(var359 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var425)*(var425 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var439)*(var439 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var66)*(var66 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var287)*(var287 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var355)*(var355 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var279)*(var279 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var362)*(var362 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var416)*(var416 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var100)*(var100 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var125)*(var125 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var145)*(var145 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var305)*(var305 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var337)*(var337 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var366)*(var366 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var45)*(var45 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var166)*(var166 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var173)*(var173 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var197)*(var197 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var332)*(var332 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var335)*(var335 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var386)*(var386 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var392)*(var392 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var396)*(var396 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var431)*(var431 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var78)*(var78 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var85)*(var85 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var121)*(var121 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var15)*(var15 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var189)*(var189 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var192)*(var192 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var295)*(var295 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var50)*(var50 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var120)*(var120 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var221)*(var221 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var230)*(var230 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var267)*(var267 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var405)*(var405 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var366)*(var366 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var112)*(var112 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var113)*(var113 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var117)*(var117 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var183)*(var183 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var205)*(var205 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var354)*(var354 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var367)*(var367 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var427)*(var427 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var438)*(var438 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var8)*(var8 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var126)*(var126 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var24)*(var24 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var287)*(var287 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var299)*(var299 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var324)*(var324 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var403)*(var403 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var155)*(var155 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var271)*(var271 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var348)*(var348 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var381)*(var381 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var104)*(var104 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var130)*(var130 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var132)*(var132 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var17)*(var17 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var20)*(var20 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var229)*(var229 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var237)*(var237 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var334)*(var334 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var349)*(var349 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var401)*(var401 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var415)*(var415 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var68)*(var68 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var88)*(var88 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var310 - var135)*(var135 - var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var310 - var147)*(var147 - var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var310 - var40)*(var40 - var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var310 - var67)*(var67 - var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var310 - var74)*(var74 - var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var204)*(var204 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var220)*(var220 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var343)*(var343 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var404)*(var404 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var42)*(var42 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var252)*(var252 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var7)*(var7 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var9)*(var9 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var264)*(var264 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var339)*(var339 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var340)*(var340 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var439)*(var439 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var66)*(var66 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var79)*(var79 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var155)*(var155 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var156)*(var156 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var300)*(var300 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var309)*(var309 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var348)*(var348 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var51)*(var51 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var95)*(var95 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var348)*(var348 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var64)*(var64 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var84)*(var84 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var136)*(var136 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var200)*(var200 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var246)*(var246 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var268)*(var268 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var330)*(var330 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var434)*(var434 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var437)*(var437 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var215)*(var215 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var279)*(var279 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var315)*(var315 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var433)*(var433 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var9)*(var9 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var163)*(var163 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var184)*(var184 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var386)*(var386 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var392)*(var392 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var396)*(var396 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var85)*(var85 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var7)*(var7 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var98)*(var98 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var99)*(var99 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var16)*(var16 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var172)*(var172 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var276)*(var276 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var135)*(var135 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var240)*(var240 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var263)*(var263 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var36)*(var36 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var385)*(var385 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var190)*(var190 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var226)*(var226 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var24)*(var24 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var26)*(var26 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var290)*(var290 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var299)*(var299 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var307)*(var307 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var403)*(var403 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var90)*(var90 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var165)*(var165 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var289)*(var289 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var352)*(var352 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var71)*(var71 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var77)*(var77 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var160)*(var160 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var194)*(var194 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var280)*(var280 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var337)*(var337 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var393)*(var393 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var318)*(var318 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var45)*(var45 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var215)*(var215 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var225)*(var225 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var265)*(var265 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var279)*(var279 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var362)*(var362 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var416)*(var416 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var188)*(var188 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var311)*(var311 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var77)*(var77 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var10)*(var10 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var197)*(var197 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var273)*(var273 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var320)*(var320 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var386)*(var386 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var392)*(var392 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var396)*(var396 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var85)*(var85 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var148)*(var148 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var2)*(var2 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var365)*(var365 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var106)*(var106 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var275)*(var275 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var395)*(var395 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var414)*(var414 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var415)*(var415 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var68)*(var68 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var10)*(var10 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var184)*(var184 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var197)*(var197 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var273)*(var273 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var386)*(var386 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var392)*(var392 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var396)*(var396 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var78)*(var78 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var185)*(var185 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var377)*(var377 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var125)*(var125 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var145)*(var145 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var194)*(var194 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var305)*(var305 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var387)*(var387 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var12)*(var12 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var174)*(var174 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var342)*(var342 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var70)*(var70 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var161)*(var161 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var264)*(var264 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var288)*(var288 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var351)*(var351 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var439)*(var439 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var120)*(var120 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var133)*(var133 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var138)*(var138 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var221)*(var221 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var267)*(var267 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var304)*(var304 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var405)*(var405 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var82)*(var82 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var70)*(var70 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var42)*(var42 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var138)*(var138 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var230)*(var230 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var34)*(var34 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var35)*(var35 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var57)*(var57 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var307)*(var307 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var403)*(var403 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var199)*(var199 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var216)*(var216 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var220)*(var220 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var270)*(var270 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var371)*(var371 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var404)*(var404 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var42)*(var42 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var10)*(var10 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var184)*(var184 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var197)*(var197 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var273)*(var273 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var332)*(var332 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var335)*(var335 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var386)*(var386 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var392)*(var392 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var396)*(var396 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var431)*(var431 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var78)*(var78 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var45)*(var45 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var64)*(var64 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var110)*(var110 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var138)*(var138 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var221)*(var221 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var230)*(var230 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var267)*(var267 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var34)*(var34 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var405)*(var405 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var225)*(var225 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var265)*(var265 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var279)*(var279 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var362)*(var362 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var4)*(var4 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var43)*(var43 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var433)*(var433 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var59)*(var59 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var9)*(var9 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var161)*(var161 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var340)*(var340 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var289)*(var289 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var311)*(var311 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var331)*(var331 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var77)*(var77 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var102)*(var102 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var131)*(var131 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var150)*(var150 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var158)*(var158 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var198)*(var198 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var384)*(var384 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var410)*(var410 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var426)*(var426 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var432)*(var432 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var6)*(var6 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var101)*(var101 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var113)*(var113 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var114)*(var114 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var183)*(var183 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var187)*(var187 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var427)*(var427 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var126)*(var126 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var24)*(var24 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var174)*(var174 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var338)*(var338 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var342)*(var342 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var38)*(var38 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var406)*(var406 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var62)*(var62 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var70)*(var70 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var119)*(var119 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var165)*(var165 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var18)*(var18 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var256)*(var256 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var289)*(var289 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var326)*(var326 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var360)*(var360 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var56)*(var56 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var161)*(var161 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var79)*(var79 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var135)*(var135 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var147)*(var147 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var263)*(var263 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var361)*(var361 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var385)*(var385 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var40)*(var40 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var67)*(var67 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var74)*(var74 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var119)*(var119 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var165)*(var165 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var289)*(var289 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var326)*(var326 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var331)*(var331 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var363)*(var363 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var39)*(var39 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var71)*(var71 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var147)*(var147 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var263)*(var263 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var310)*(var310 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var385)*(var385 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var215)*(var215 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var265)*(var265 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var315)*(var315 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var433)*(var433 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var9)*(var9 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var165)*(var165 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var289)*(var289 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var311)*(var311 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var326)*(var326 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var71)*(var71 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var77)*(var77 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var275)*(var275 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var395)*(var395 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var415)*(var415 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var160)*(var160 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var114)*(var114 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var354)*(var354 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var37)*(var37 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var379)*(var379 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var427)*(var427 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var438)*(var438 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var8)*(var8 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var167)*(var167 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var177)*(var177 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var181)*(var181 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var422)*(var422 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var80)*(var80 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var126)*(var126 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var190)*(var190 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var259)*(var259 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var299)*(var299 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var345)*(var345 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var101)*(var101 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var113)*(var113 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var114)*(var114 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var116)*(var116 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var117)*(var117 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var187)*(var187 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var205)*(var205 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var379)*(var379 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var303)*(var303 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var394)*(var394 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var408)*(var408 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var50)*(var50 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var52)*(var52 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var73)*(var73 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var149)*(var149 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var270)*(var270 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var12)*(var12 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var214)*(var214 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var218)*(var218 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var308)*(var308 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var338)*(var338 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var342)*(var342 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var38)*(var38 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var406)*(var406 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var129)*(var129 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var208)*(var208 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var246)*(var246 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var268)*(var268 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var330)*(var330 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var437)*(var437 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var119)*(var119 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var165)*(var165 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var289)*(var289 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var39)*(var39 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var12)*(var12 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var174)*(var174 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var196)*(var196 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var214)*(var214 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var308)*(var308 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var338)*(var338 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var342)*(var342 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var372)*(var372 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var391)*(var391 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var406)*(var406 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var62)*(var62 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var149)*(var149 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var216)*(var216 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var239)*(var239 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var343)*(var343 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var42)*(var42 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var435)*(var435 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var187)*(var187 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var427)*(var427 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var174)*(var174 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var308)*(var308 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var161)*(var161 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var351)*(var351 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var439)*(var439 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var155)*(var155 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var156)*(var156 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var300)*(var300 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var348)*(var348 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var45)*(var45 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var64)*(var64 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var84)*(var84 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var95)*(var95 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var10)*(var10 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var163)*(var163 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var184)*(var184 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var320)*(var320 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var386)*(var386 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var392)*(var392 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var396)*(var396 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var431)*(var431 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var203)*(var203 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var296)*(var296 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var55)*(var55 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var131)*(var131 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var157)*(var157 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var252)*(var252 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var313)*(var313 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var321)*(var321 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var86)*(var86 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var98)*(var98 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var99)*(var99 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var135)*(var135 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var147)*(var147 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var157)*(var157 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var206)*(var206 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var310)*(var310 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var323)*(var323 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var36)*(var36 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var361)*(var361 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var385)*(var385 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var67)*(var67 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var188)*(var188 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var311)*(var311 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var331)*(var331 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var363)*(var363 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var71)*(var71 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var77)*(var77 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var154)*(var154 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var185)*(var185 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var257)*(var257 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var398)*(var398 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var421)*(var421 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var54)*(var54 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var12)*(var12 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var153)*(var153 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var174)*(var174 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var214)*(var214 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var218)*(var218 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var308)*(var308 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var338)*(var338 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var342)*(var342 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var38)*(var38 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var406)*(var406 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var62)*(var62 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var65)*(var65 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var69)*(var69 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var70)*(var70 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var273)*(var273 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var386)*(var386 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var100)*(var100 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var125)*(var125 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var160)*(var160 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var280)*(var280 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var337)*(var337 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var366)*(var366 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var387)*(var387 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var233)*(var233 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var173)*(var173 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var273)*(var273 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var386)*(var386 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var252)*(var252 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var313)*(var313 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var321)*(var321 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var7)*(var7 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var98)*(var98 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var185)*(var185 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var257)*(var257 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var277)*(var277 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var286)*(var286 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var421)*(var421 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var54)*(var54 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var265)*(var265 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var315)*(var315 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var433)*(var433 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var59)*(var59 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var9)*(var9 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var163)*(var163 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var197)*(var197 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var273)*(var273 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var332)*(var332 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var335)*(var335 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var392)*(var392 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var396)*(var396 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var431)*(var431 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var275)*(var275 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var364)*(var364 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var148)*(var148 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var175)*(var175 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var2)*(var2 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var228)*(var228 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var262)*(var262 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var333)*(var333 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var341)*(var341 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var365)*(var365 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var126)*(var126 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var190)*(var190 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var24)*(var24 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var287)*(var287 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var324)*(var324 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var355)*(var355 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var204)*(var204 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var239)*(var239 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var343)*(var343 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var120)*(var120 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var133)*(var133 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var230)*(var230 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var137)*(var137 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var143)*(var143 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var144)*(var144 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var16)*(var16 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var172)*(var172 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var255)*(var255 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var29)*(var29 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var322)*(var322 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var48)*(var48 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var72)*(var72 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var192)*(var192 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var295)*(var295 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var394)*(var394 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var52)*(var52 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var107)*(var107 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var129)*(var129 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var136)*(var136 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var202)*(var202 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var208)*(var208 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var268)*(var268 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var319)*(var319 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var434)*(var434 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var437)*(var437 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var76)*(var76 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var223)*(var223 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var245)*(var245 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var313)*(var313 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var321)*(var321 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var397)*(var397 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var428)*(var428 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var7)*(var7 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var86)*(var86 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var98)*(var98 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var384)*(var384 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var24)*(var24 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var248)*(var248 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var259)*(var259 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var26)*(var26 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var307)*(var307 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var325)*(var325 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var345)*(var345 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var355)*(var355 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var369)*(var369 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var403)*(var403 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var110)*(var110 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var133)*(var133 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var138)*(var138 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var230)*(var230 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var267)*(var267 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var304)*(var304 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var34)*(var34 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var225)*(var225 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var265)*(var265 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var279)*(var279 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var315)*(var315 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var416)*(var416 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var59)*(var59 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var9)*(var9 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var349)*(var349 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var395)*(var395 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var415)*(var415 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var215)*(var215 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var225)*(var225 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var315)*(var315 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var32)*(var32 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var362)*(var362 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var433)*(var433 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var254)*(var254 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var317)*(var317 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var348)*(var348 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var381)*(var381 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var44)*(var44 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var45)*(var45 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var95)*(var95 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var387)*(var387 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var170)*(var170 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var185)*(var185 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var286)*(var286 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var336)*(var336 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var181)*(var181 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var159)*(var159 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var167)*(var167 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var181)*(var181 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var368)*(var368 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var80)*(var80 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var121)*(var121 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var15)*(var15 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var233)*(var233 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var394)*(var394 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var161)*(var161 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var171)*(var171 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var264)*(var264 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var282)*(var282 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var339)*(var339 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var359)*(var359 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var380)*(var380 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var102)*(var102 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var49)*(var49 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var140)*(var140 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var252)*(var252 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var7)*(var7 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var110)*(var110 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var120)*(var120 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var133)*(var133 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var138)*(var138 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var267)*(var267 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var344)*(var344 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var35)*(var35 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var405)*(var405 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var209)*(var209 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var215)*(var215 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var225)*(var225 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var253)*(var253 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var315)*(var315 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var32)*(var32 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var329)*(var329 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var362)*(var362 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var433)*(var433 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var134)*(var134 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var175)*(var175 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var228)*(var228 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var365)*(var365 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var402)*(var402 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var173)*(var173 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var184)*(var184 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var392)*(var392 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var78)*(var78 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var85)*(var85 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var222)*(var222 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var292)*(var292 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var426)*(var426 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var215)*(var215 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var315)*(var315 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var9)*(var9 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var136)*(var136 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var202)*(var202 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var246)*(var246 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var330)*(var330 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var437)*(var437 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var118)*(var118 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var149)*(var149 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var204)*(var204 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var239)*(var239 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var343)*(var343 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var371)*(var371 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var154)*(var154 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var170)*(var170 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var185)*(var185 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var277)*(var277 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var286)*(var286 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var390)*(var390 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var246)*(var246 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var116)*(var116 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var140)*(var140 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var354)*(var354 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var340)*(var340 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var155)*(var155 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var156)*(var156 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var309)*(var309 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var317)*(var317 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var348)*(var348 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var45)*(var45 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var64)*(var64 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var95)*(var95 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var222)*(var222 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var292)*(var292 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var410)*(var410 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var426)*(var426 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var432)*(var432 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var6)*(var6 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var252)*(var252 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var258)*(var258 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var313)*(var313 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var388)*(var388 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var7)*(var7 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var159)*(var159 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var167)*(var167 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var224)*(var224 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var297)*(var297 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var80)*(var80 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var137)*(var137 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var143)*(var143 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var144)*(var144 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var72)*(var72 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var97)*(var97 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var135)*(var135 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var157)*(var157 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var240)*(var240 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var263)*(var263 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var310)*(var310 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var361)*(var361 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var385)*(var385 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var40)*(var40 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var94)*(var94 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var121)*(var121 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var127)*(var127 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var15)*(var15 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var162)*(var162 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var189)*(var189 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var233)*(var233 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var52)*(var52 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var155)*(var155 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var271)*(var271 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var328)*(var328 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var381)*(var381 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var45)*(var45 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var64)*(var64 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var84)*(var84 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var95)*(var95 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var127)*(var127 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var295)*(var295 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var394)*(var394 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var424)*(var424 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var146)*(var146 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var223)*(var223 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var252)*(var252 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var258)*(var258 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var313)*(var313 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var388)*(var388 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var428)*(var428 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var46)*(var46 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var86)*(var86 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var99)*(var99 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var170)*(var170 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var185)*(var185 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var211)*(var211 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var286)*(var286 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var336)*(var336 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var377)*(var377 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var421)*(var421 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var167)*(var167 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var181)*(var181 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var296)*(var296 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var422)*(var422 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var18)*(var18 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var232)*(var232 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var289)*(var289 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var311)*(var311 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var326)*(var326 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var352)*(var352 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var71)*(var71 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var77)*(var77 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var110)*(var110 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var133)*(var133 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var138)*(var138 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var230)*(var230 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var267)*(var267 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var304)*(var304 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var34)*(var34 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var35)*(var35 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var215)*(var215 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var315)*(var315 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var32)*(var32 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var362)*(var362 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var433)*(var433 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var102)*(var102 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var131)*(var131 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var292)*(var292 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var384)*(var384 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var143)*(var143 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var276)*(var276 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var97)*(var97 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var146)*(var146 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var252)*(var252 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var388)*(var388 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var397)*(var397 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var7)*(var7 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var99)*(var99 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var174)*(var174 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var308)*(var308 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var338)*(var338 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var342)*(var342 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var136)*(var136 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var200)*(var200 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var246)*(var246 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var268)*(var268 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var319)*(var319 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var434)*(var434 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var437)*(var437 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var300)*(var300 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var45)*(var45 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var174)*(var174 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var308)*(var308 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var342)*(var342 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var356)*(var356 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var38)*(var38 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var406)*(var406 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var62)*(var62 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var70)*(var70 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var161)*(var161 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var340)*(var340 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var351)*(var351 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var359)*(var359 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var380)*(var380 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var439)*(var439 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var74)*(var74 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var106)*(var106 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var237)*(var237 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var349)*(var349 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var395)*(var395 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var415)*(var415 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var12)*(var12 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var174)*(var174 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var196)*(var196 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var308)*(var308 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var342)*(var342 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var356)*(var356 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var38)*(var38 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var62)*(var62 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var70)*(var70 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var98)*(var98 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var99)*(var99 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var174)*(var174 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var308)*(var308 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var124)*(var124 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var137)*(var137 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var143)*(var143 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var16)*(var16 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var172)*(var172 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var29)*(var29 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var322)*(var322 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var127)*(var127 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var189)*(var189 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var191)*(var191 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var21)*(var21 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var408)*(var408 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var424)*(var424 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var52)*(var52 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var89)*(var89 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var157)*(var157 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var40)*(var40 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var214)*(var214 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var218)*(var218 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var308)*(var308 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var372)*(var372 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var70)*(var70 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var107)*(var107 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var129)*(var129 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var136)*(var136 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var202)*(var202 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var208)*(var208 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var246)*(var246 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var268)*(var268 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var437)*(var437 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var63)*(var63 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var165)*(var165 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var311)*(var311 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var71)*(var71 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var273)*(var273 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var386)*(var386 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var340)*(var340 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var351)*(var351 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var380)*(var380 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var117)*(var117 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var140)*(var140 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var354)*(var354 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var37)*(var37 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var379)*(var379 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var167)*(var167 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var181)*(var181 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var422)*(var422 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var206)*(var206 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var263)*(var263 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var310)*(var310 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var36)*(var36 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var389)*(var389 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var40)*(var40 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var221)*(var221 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var230)*(var230 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var139)*(var139 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var152)*(var152 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var161)*(var161 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var282)*(var282 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var293)*(var293 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var340)*(var340 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var351)*(var351 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var425)*(var425 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var439)*(var439 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var79)*(var79 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var10)*(var10 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var163)*(var163 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var386)*(var386 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var392)*(var392 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var78)*(var78 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var252)*(var252 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var313)*(var313 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var321)*(var321 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var7)*(var7 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var98)*(var98 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var141)*(var141 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var159)*(var159 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var181)*(var181 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var203)*(var203 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var212)*(var212 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var224)*(var224 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var283)*(var283 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var296)*(var296 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var297)*(var297 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var368)*(var368 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var383)*(var383 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var423)*(var423 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var106)*(var106 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var132)*(var132 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var20)*(var20 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var334)*(var334 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var414)*(var414 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var68)*(var68 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var121)*(var121 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var127)*(var127 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var162)*(var162 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var186)*(var186 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var189)*(var189 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var192)*(var192 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var303)*(var303 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var394)*(var394 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var424)*(var424 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var52)*(var52 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var215)*(var215 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var190)*(var190 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var287)*(var287 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var299)*(var299 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var307)*(var307 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var324)*(var324 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var355)*(var355 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var185)*(var185 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var257)*(var257 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var285)*(var285 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var390)*(var390 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var421)*(var421 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var54)*(var54 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var154)*(var154 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var211)*(var211 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var257)*(var257 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var285)*(var285 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var286)*(var286 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var398)*(var398 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var54)*(var54 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var148)*(var148 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var341)*(var341 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var365)*(var365 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var157)*(var157 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var263)*(var263 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var310)*(var310 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var40)*(var40 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var300)*(var300 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var348)*(var348 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var45)*(var45 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var64)*(var64 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var118)*(var118 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var149)*(var149 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var216)*(var216 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var239)*(var239 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var312)*(var312 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var343)*(var343 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var371)*(var371 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var378)*(var378 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var404)*(var404 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var42)*(var42 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var435)*(var435 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var137)*(var137 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var144)*(var144 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var16)*(var16 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var172)*(var172 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var276)*(var276 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var29)*(var29 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var98)*(var98 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 == var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 == var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 == var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 == var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 == var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 == var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 == var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 == var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 == var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 == var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 == var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 == var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 == var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 == var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 == var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 == var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 == var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 == var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 == var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 == var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var101) && (var13 + var101 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var103) && (var13 + var103 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var111) && (var13 + var111 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var112) && (var13 + var112 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var113) && (var13 + var113 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var114) && (var13 + var114 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var116) && (var13 + var116 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var117) && (var13 + var117 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var140) && (var13 + var140 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var183) && (var13 + var183 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var187) && (var13 + var187 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var205) && (var13 + var205 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var306) && (var13 + var306 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var354) && (var13 + var354 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var367) && (var13 + var367 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var37) && (var13 + var37 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var379) && (var13 + var379 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var427) && (var13 + var427 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var438) && (var13 + var438 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var8) && (var13 + var8 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var12) && (var195 + var12 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var153) && (var195 + var153 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var174) && (var195 + var174 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var196) && (var195 + var196 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var214) && (var195 + var214 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var218) && (var195 + var218 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var308) && (var195 + var308 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var338) && (var195 + var338 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var342) && (var195 + var342 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var356) && (var195 + var356 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var372) && (var195 + var372 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var375) && (var195 + var375 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var38) && (var195 + var38 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var391) && (var195 + var391 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var406) && (var195 + var406 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var62) && (var195 + var62 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var65) && (var195 + var65 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var69) && (var195 + var69 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var70) && (var195 + var70 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var195 != var75) && (var195 + var75 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var122) && (var201 + var122 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var124) && (var201 + var124 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var137) && (var201 + var137 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var143) && (var201 + var143 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var144) && (var201 + var144 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var16) && (var201 + var16 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var172) && (var201 + var172 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var231) && (var201 + var231 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var249) && (var201 + var249 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var255) && (var201 + var255 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var266) && (var201 + var266 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var272) && (var201 + var272 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var276) && (var201 + var276 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var29) && (var201 + var29 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var322) && (var201 + var322 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var407) && (var201 + var407 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var48) && (var201 + var48 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var60) && (var201 + var60 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var72) && (var201 + var72 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var201 != var97) && (var201 + var97 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var121) && (var213 + var121 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var127) && (var213 + var127 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var15) && (var213 + var15 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var162) && (var213 + var162 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var186) && (var213 + var186 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var189) && (var213 + var189 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var191) && (var213 + var191 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var192) && (var213 + var192 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var21) && (var213 + var21 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var233) && (var213 + var233 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var295) && (var213 + var295 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var303) && (var213 + var303 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var370) && (var213 + var370 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var394) && (var213 + var394 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var408) && (var213 + var408 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var424) && (var213 + var424 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var50) && (var213 + var50 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var52) && (var213 + var52 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var73) && (var213 + var73 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var213 != var89) && (var213 + var89 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var209) && (var217 + var209 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var215) && (var217 + var215 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var225) && (var217 + var225 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var23) && (var217 + var23 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var253) && (var217 + var253 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var265) && (var217 + var265 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var279) && (var217 + var279 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var3) && (var217 + var3 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var315) && (var217 + var315 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var32) && (var217 + var32 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var329) && (var217 + var329 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var350) && (var217 + var350 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var362) && (var217 + var362 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var4) && (var217 + var4 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var413) && (var217 + var413 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var416) && (var217 + var416 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var43) && (var217 + var43 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var433) && (var217 + var433 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var59) && (var217 + var59 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var217 != var9) && (var217 + var9 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var141) && (var22 + var141 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var159) && (var22 + var159 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var167) && (var22 + var167 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var177) && (var22 + var177 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var181) && (var22 + var181 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var203) && (var22 + var203 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var212) && (var22 + var212 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var224) && (var22 + var224 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var281) && (var22 + var281 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var283) && (var22 + var283 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var296) && (var22 + var296 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var297) && (var22 + var297 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var368) && (var22 + var368 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var383) && (var22 + var383 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var422) && (var22 + var422 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var423) && (var22 + var423 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var47) && (var22 + var47 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var55) && (var22 + var55 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var80) && (var22 + var80 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var22 != var87) && (var22 + var87 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var0) && (var227 + var0 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var134) && (var227 + var134 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var148) && (var227 + var148 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var169) && (var227 + var169 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var175) && (var227 + var175 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var19) && (var227 + var19 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var193) && (var227 + var193 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var2) && (var227 + var2 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var228) && (var227 + var228 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var260) && (var227 + var260 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var262) && (var227 + var262 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var27) && (var227 + var27 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var278) && (var227 + var278 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var284) && (var227 + var284 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var333) && (var227 + var333 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var341) && (var227 + var341 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var365) && (var227 + var365 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var402) && (var227 + var402 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var430) && (var227 + var430 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var93) && (var227 + var93 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var139) && (var236 + var139 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var152) && (var236 + var152 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var161) && (var236 + var161 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var171) && (var236 + var171 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var264) && (var236 + var264 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var282) && (var236 + var282 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var288) && (var236 + var288 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var293) && (var236 + var293 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var298) && (var236 + var298 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var316) && (var236 + var316 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var339) && (var236 + var339 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var340) && (var236 + var340 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var351) && (var236 + var351 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var359) && (var236 + var359 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var380) && (var236 + var380 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var425) && (var236 + var425 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var439) && (var236 + var439 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var66) && (var236 + var66 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var79) && (var236 + var79 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var236 != var83) && (var236 + var83 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var100) && (var250 + var100 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var109) && (var250 + var109 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var11) && (var250 + var11 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var125) && (var250 + var125 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var145) && (var250 + var145 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var160) && (var250 + var160 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var180) && (var250 + var180 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var194) && (var250 + var194 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var241) && (var250 + var241 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var243) && (var250 + var243 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var280) && (var250 + var280 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var291) && (var250 + var291 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var30) && (var250 + var30 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var305) && (var250 + var305 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var327) && (var250 + var327 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var337) && (var250 + var337 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var366) && (var250 + var366 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var387) && (var250 + var387 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var393) && (var250 + var393 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var250 != var420) && (var250 + var420 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var10) && (var274 + var10 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var163) && (var274 + var163 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var166) && (var274 + var166 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var173) && (var274 + var173 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var184) && (var274 + var184 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var197) && (var274 + var197 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var273) && (var274 + var273 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var302) && (var274 + var302 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var320) && (var274 + var320 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var332) && (var274 + var332 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var335) && (var274 + var335 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var347) && (var274 + var347 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var382) && (var274 + var382 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var386) && (var274 + var386 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var392) && (var274 + var392 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var396) && (var274 + var396 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var400) && (var274 + var400 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var431) && (var274 + var431 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var78) && (var274 + var78 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var274 != var85) && (var274 + var85 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var102) && (var28 + var102 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var131) && (var28 + var131 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var150) && (var28 + var150 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var158) && (var28 + var158 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var198) && (var28 + var198 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var207) && (var28 + var207 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var222) && (var28 + var222 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var234) && (var28 + var234 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var235) && (var28 + var235 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var238) && (var28 + var238 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var25) && (var28 + var25 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var292) && (var28 + var292 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var353) && (var28 + var353 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var384) && (var28 + var384 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var410) && (var28 + var410 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var426) && (var28 + var426 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var432) && (var28 + var432 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var440) && (var28 + var440 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var49) && (var28 + var49 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var28 != var6) && (var28 + var6 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var142) && (var301 + var142 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var154) && (var301 + var154 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var170) && (var301 + var170 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var179) && (var301 + var179 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var185) && (var301 + var185 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var211) && (var301 + var211 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var219) && (var301 + var219 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var257) && (var301 + var257 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var277) && (var301 + var277 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var285) && (var301 + var285 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var286) && (var301 + var286 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var336) && (var301 + var336 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var377) && (var301 + var377 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var390) && (var301 + var390 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var398) && (var301 + var398 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var421) && (var301 + var421 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var436) && (var301 + var436 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var54) && (var301 + var54 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var91) && (var301 + var91 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var301 != var92) && (var301 + var92 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var105) && (var314 + var105 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var118) && (var314 + var118 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var149) && (var314 + var149 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var151) && (var314 + var151 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var199) && (var314 + var199 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var204) && (var314 + var204 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var216) && (var314 + var216 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var220) && (var314 + var220 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var239) && (var314 + var239 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var270) && (var314 + var270 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var294) && (var314 + var294 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var312) && (var314 + var312 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var343) && (var314 + var343 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var346) && (var314 + var346 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var371) && (var314 + var371 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var378) && (var314 + var378 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var404) && (var314 + var404 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var42) && (var314 + var42 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var435) && (var314 + var435 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var314 != var96) && (var314 + var96 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var119) && (var33 + var119 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var165) && (var33 + var165 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var18) && (var33 + var18 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var188) && (var33 + var188 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var210) && (var33 + var210 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var232) && (var33 + var232 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var256) && (var33 + var256 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var289) && (var33 + var289 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var311) && (var33 + var311 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var326) && (var33 + var326 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var331) && (var33 + var331 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var352) && (var33 + var352 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var357) && (var33 + var357 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var360) && (var33 + var360 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var363) && (var33 + var363 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var374) && (var33 + var374 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var39) && (var33 + var39 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var56) && (var33 + var56 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var71) && (var33 + var71 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var77) && (var33 + var77 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var108) && (var358 + var108 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var110) && (var358 + var110 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var120) && (var358 + var120 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var133) && (var358 + var133 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var138) && (var358 + var138 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var168) && (var358 + var168 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var221) && (var358 + var221 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var230) && (var358 + var230 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var242) && (var358 + var242 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var244) && (var358 + var244 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var267) && (var358 + var267 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var304) && (var358 + var304 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var34) && (var358 + var34 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var344) && (var358 + var344 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var35) && (var358 + var35 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var405) && (var358 + var405 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var412) && (var358 + var412 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var429) && (var358 + var429 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var57) && (var358 + var57 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var358 != var82) && (var358 + var82 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var155) && (var376 + var155 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var156) && (var376 + var156 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var178) && (var376 + var178 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var251) && (var376 + var251 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var254) && (var376 + var254 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var271) && (var376 + var271 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var300) && (var376 + var300 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var309) && (var376 + var309 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var317) && (var376 + var317 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var318) && (var376 + var318 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var328) && (var376 + var328 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var348) && (var376 + var348 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var381) && (var376 + var381 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var418) && (var376 + var418 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var44) && (var376 + var44 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var45) && (var376 + var45 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var51) && (var376 + var51 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var64) && (var376 + var64 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var84) && (var376 + var84 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var376 != var95) && (var376 + var95 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var107) && (var399 + var107 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var115) && (var399 + var115 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var129) && (var399 + var129 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var136) && (var399 + var136 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var14) && (var399 + var14 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var200) && (var399 + var200 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var202) && (var399 + var202 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var208) && (var399 + var208 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var246) && (var399 + var246 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var261) && (var399 + var261 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var268) && (var399 + var268 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var269) && (var399 + var269 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var319) && (var399 + var319 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var330) && (var399 + var330 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var373) && (var399 + var373 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var409) && (var399 + var409 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var434) && (var399 + var434 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var437) && (var399 + var437 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var63) && (var399 + var63 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var399 != var76) && (var399 + var76 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var146) && (var417 + var146 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var164) && (var417 + var164 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var182) && (var417 + var182 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var223) && (var417 + var223 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var245) && (var417 + var245 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var252) && (var417 + var252 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var258) && (var417 + var258 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var313) && (var417 + var313 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var321) && (var417 + var321 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var388) && (var417 + var388 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var397) && (var417 + var397 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var41) && (var417 + var41 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var428) && (var417 + var428 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var46) && (var417 + var46 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var53) && (var417 + var53 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var61) && (var417 + var61 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var7) && (var417 + var7 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var86) && (var417 + var86 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var98) && (var417 + var98 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var417 != var99) && (var417 + var99 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var135) && (var419 + var135 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var147) && (var419 + var147 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var157) && (var419 + var157 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var176) && (var419 + var176 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var206) && (var419 + var206 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var240) && (var419 + var240 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var247) && (var419 + var247 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var263) && (var419 + var263 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var310) && (var419 + var310 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var323) && (var419 + var323 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var36) && (var419 + var36 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var361) && (var419 + var361 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var385) && (var419 + var385 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var389) && (var419 + var389 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var40) && (var419 + var40 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var5) && (var419 + var5 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var67) && (var419 + var67 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var74) && (var419 + var74 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var81) && (var419 + var81 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var419 != var94) && (var419 + var94 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var126) && (var58 + var126 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var128) && (var58 + var128 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var190) && (var58 + var190 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var226) && (var58 + var226 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var24) && (var58 + var24 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var248) && (var58 + var248 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var259) && (var58 + var259 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var26) && (var58 + var26 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var287) && (var58 + var287 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var290) && (var58 + var290 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var299) && (var58 + var299 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var307) && (var58 + var307 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var324) && (var58 + var324 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var325) && (var58 + var325 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var345) && (var58 + var345 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var355) && (var58 + var355 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var369) && (var58 + var369 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var403) && (var58 + var403 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var411) && (var58 + var411 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var90) && (var58 + var90 >=2 )){myvar0= 1;}
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
289 x[289]
290 x[290]
291 x[291]
292 x[292]
293 x[293]
294 x[294]
295 x[295]
296 x[296]
297 x[297]
298 x[298]
299 x[299]
300 x[300]
301 x[301]
302 x[302]
303 x[303]
304 x[304]
305 x[305]
306 x[306]
307 x[307]
308 x[308]
309 x[309]
310 x[310]
311 x[311]
312 x[312]
313 x[313]
314 x[314]
315 x[315]
316 x[316]
317 x[317]
318 x[318]
319 x[319]
320 x[320]
321 x[321]
322 x[322]
323 x[323]
324 x[324]
325 x[325]
326 x[326]
327 x[327]
328 x[328]
329 x[329]
330 x[330]
331 x[331]
332 x[332]
333 x[333]
334 x[334]
335 x[335]
336 x[336]
337 x[337]
338 x[338]
339 x[339]
340 x[340]
341 x[341]
342 x[342]
343 x[343]
344 x[344]
345 x[345]
346 x[346]
347 x[347]
348 x[348]
349 x[349]
350 x[350]
351 x[351]
352 x[352]
353 x[353]
354 x[354]
355 x[355]
356 x[356]
357 x[357]
358 x[358]
359 x[359]
360 x[360]
361 x[361]
362 x[362]
363 x[363]
364 x[364]
365 x[365]
366 x[366]
367 x[367]
368 x[368]
369 x[369]
370 x[370]
371 x[371]
372 x[372]
373 x[373]
374 x[374]
375 x[375]
376 x[376]
377 x[377]
378 x[378]
379 x[379]
380 x[380]
381 x[381]
382 x[382]
383 x[383]
384 x[384]
385 x[385]
386 x[386]
387 x[387]
388 x[388]
389 x[389]
390 x[390]
391 x[391]
392 x[392]
393 x[393]
394 x[394]
395 x[395]
396 x[396]
397 x[397]
398 x[398]
399 x[399]
400 x[400]
401 x[401]
402 x[402]
403 x[403]
404 x[404]
405 x[405]
406 x[406]
407 x[407]
408 x[408]
409 x[409]
410 x[410]
411 x[411]
412 x[412]
413 x[413]
414 x[414]
415 x[415]
416 x[416]
417 x[417]
418 x[418]
419 x[419]
420 x[420]
421 x[421]
422 x[422]
423 x[423]
424 x[424]
425 x[425]
426 x[426]
427 x[427]
428 x[428]
429 x[429]
430 x[430]
431 x[431]
432 x[432]
433 x[433]
434 x[434]
435 x[435]
436 x[436]
437 x[437]
438 x[438]
439 x[439]
440 x[440]
 */}
