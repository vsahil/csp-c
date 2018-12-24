
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 0) && (var40 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 0) && (var41 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 0) && (var42 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 0) && (var43 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 0) && (var44 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 0) && (var45 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 0) && (var46 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 0) && (var47 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 0) && (var48 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 0) && (var49 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 0) && (var50 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 0) && (var51 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 0) && (var52 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 0) && (var53 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 0) && (var54 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 0) && (var55 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 0) && (var56 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 0) && (var57 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 0) && (var58 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 0) && (var59 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 0) && (var60 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 0) && (var61 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 0) && (var62 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 0) && (var63 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 0) && (var64 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 0) && (var65 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 0) && (var66 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 0) && (var67 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 0) && (var68 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 0) && (var69 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 0) && (var70 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 0) && (var71 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 0) && (var72 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 0) && (var73 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 0) && (var74 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 0) && (var75 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 0) && (var76 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 0) && (var77 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 0) && (var78 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((myvar0 == 1) && (var79 >= 0) && (var79 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((myvar0 == 1) && (var80 >= 0) && (var80 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((myvar0 == 1) && (var81 >= 0) && (var81 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((myvar0 == 1) && (var82 >= 0) && (var82 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((myvar0 == 1) && (var83 >= 0) && (var83 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((myvar0 == 1) && (var84 >= 0) && (var84 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((myvar0 == 1) && (var85 >= 0) && (var85 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((myvar0 == 1) && (var86 >= 0) && (var86 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((myvar0 == 1) && (var87 >= 0) && (var87 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((myvar0 == 1) && (var88 >= 0) && (var88 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((myvar0 == 1) && (var89 >= 0) && (var89 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((myvar0 == 1) && (var90 >= 0) && (var90 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((myvar0 == 1) && (var91 >= 0) && (var91 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((myvar0 == 1) && (var92 >= 0) && (var92 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((myvar0 == 1) && (var93 >= 0) && (var93 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((myvar0 == 1) && (var94 >= 0) && (var94 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((myvar0 == 1) && (var95 >= 0) && (var95 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((myvar0 == 1) && (var96 >= 0) && (var96 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((myvar0 == 1) && (var97 >= 0) && (var97 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((myvar0 == 1) && (var98 >= 0) && (var98 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((myvar0 == 1) && (var99 >= 0) && (var99 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((myvar0 == 1) && (var100 >= 0) && (var100 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((myvar0 == 1) && (var101 >= 0) && (var101 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((myvar0 == 1) && (var102 >= 0) && (var102 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((myvar0 == 1) && (var103 >= 0) && (var103 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((myvar0 == 1) && (var104 >= 0) && (var104 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((myvar0 == 1) && (var105 >= 0) && (var105 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((myvar0 == 1) && (var106 >= 0) && (var106 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((myvar0 == 1) && (var107 >= 0) && (var107 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((myvar0 == 1) && (var108 >= 0) && (var108 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((myvar0 == 1) && (var109 >= 0) && (var109 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((myvar0 == 1) && (var110 >= 0) && (var110 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((myvar0 == 1) && (var111 >= 0) && (var111 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((myvar0 == 1) && (var112 >= 0) && (var112 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((myvar0 == 1) && (var113 >= 0) && (var113 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((myvar0 == 1) && (var114 >= 0) && (var114 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((myvar0 == 1) && (var115 >= 0) && (var115 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((myvar0 == 1) && (var116 >= 0) && (var116 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((myvar0 == 1) && (var117 >= 0) && (var117 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((myvar0 == 1) && (var118 >= 0) && (var118 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((myvar0 == 1) && (var119 >= 0) && (var119 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((myvar0 == 1) && (var120 >= 0) && (var120 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((myvar0 == 1) && (var121 >= 0) && (var121 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((myvar0 == 1) && (var122 >= 0) && (var122 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((myvar0 == 1) && (var123 >= 0) && (var123 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((myvar0 == 1) && (var124 >= 0) && (var124 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((myvar0 == 1) && (var125 >= 0) && (var125 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((myvar0 == 1) && (var126 >= 0) && (var126 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((myvar0 == 1) && (var127 >= 0) && (var127 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((myvar0 == 1) && (var128 >= 0) && (var128 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((myvar0 == 1) && (var129 >= 0) && (var129 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((myvar0 == 1) && (var130 >= 0) && (var130 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((myvar0 == 1) && (var131 >= 0) && (var131 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((myvar0 == 1) && (var132 >= 0) && (var132 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((myvar0 == 1) && (var133 >= 0) && (var133 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((myvar0 == 1) && (var134 >= 0) && (var134 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((myvar0 == 1) && (var135 >= 0) && (var135 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((myvar0 == 1) && (var136 >= 0) && (var136 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((myvar0 == 1) && (var137 >= 0) && (var137 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((myvar0 == 1) && (var138 >= 0) && (var138 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((myvar0 == 1) && (var139 >= 0) && (var139 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((myvar0 == 1) && (var140 >= 0) && (var140 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((myvar0 == 1) && (var141 >= 0) && (var141 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((myvar0 == 1) && (var142 >= 0) && (var142 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((myvar0 == 1) && (var143 >= 0) && (var143 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((myvar0 == 1) && (var144 >= 0) && (var144 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((myvar0 == 1) && (var145 >= 0) && (var145 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((myvar0 == 1) && (var146 >= 0) && (var146 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((myvar0 == 1) && (var147 >= 0) && (var147 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((myvar0 == 1) && (var148 >= 0) && (var148 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((myvar0 == 1) && (var149 >= 0) && (var149 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((myvar0 == 1) && (var150 >= 0) && (var150 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((myvar0 == 1) && (var151 >= 0) && (var151 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((myvar0 == 1) && (var152 >= 0) && (var152 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((myvar0 == 1) && (var153 >= 0) && (var153 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((myvar0 == 1) && (var154 >= 0) && (var154 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((myvar0 == 1) && (var155 >= 0) && (var155 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((myvar0 == 1) && (var156 >= 0) && (var156 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((myvar0 == 1) && (var157 >= 0) && (var157 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((myvar0 == 1) && (var158 >= 0) && (var158 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((myvar0 == 1) && (var159 >= 0) && (var159 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((myvar0 == 1) && (var160 >= 0) && (var160 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((myvar0 == 1) && (var161 >= 0) && (var161 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((myvar0 == 1) && (var162 >= 0) && (var162 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((myvar0 == 1) && (var163 >= 0) && (var163 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((myvar0 == 1) && (var164 >= 0) && (var164 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((myvar0 == 1) && (var165 >= 0) && (var165 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((myvar0 == 1) && (var166 >= 0) && (var166 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((myvar0 == 1) && (var167 >= 0) && (var167 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((myvar0 == 1) && (var168 >= 0) && (var168 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((myvar0 == 1) && (var169 >= 0) && (var169 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((myvar0 == 1) && (var170 >= 0) && (var170 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((myvar0 == 1) && (var171 >= 0) && (var171 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((myvar0 == 1) && (var172 >= 0) && (var172 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((myvar0 == 1) && (var173 >= 0) && (var173 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((myvar0 == 1) && (var174 >= 0) && (var174 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((myvar0 == 1) && (var175 >= 0) && (var175 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((myvar0 == 1) && (var176 >= 0) && (var176 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((myvar0 == 1) && (var177 >= 0) && (var177 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((myvar0 == 1) && (var178 >= 0) && (var178 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((myvar0 == 1) && (var179 >= 0) && (var179 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((myvar0 == 1) && (var180 >= 0) && (var180 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((myvar0 == 1) && (var181 >= 0) && (var181 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((myvar0 == 1) && (var182 >= 0) && (var182 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((myvar0 == 1) && (var183 >= 0) && (var183 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((myvar0 == 1) && (var184 >= 0) && (var184 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((myvar0 == 1) && (var185 >= 0) && (var185 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((myvar0 == 1) && (var186 >= 0) && (var186 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((myvar0 == 1) && (var187 >= 0) && (var187 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((myvar0 == 1) && (var188 >= 0) && (var188 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((myvar0 == 1) && (var189 >= 0) && (var189 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((myvar0 == 1) && (var190 >= 0) && (var190 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((myvar0 == 1) && (var191 >= 0) && (var191 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((myvar0 == 1) && (var192 >= 0) && (var192 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((myvar0 == 1) && (var193 >= 0) && (var193 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((myvar0 == 1) && (var194 >= 0) && (var194 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((myvar0 == 1) && (var195 >= 0) && (var195 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
if((myvar0 == 1) && (var196 >= 0) && (var196 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
if((myvar0 == 1) && (var197 >= 0) && (var197 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
if((myvar0 == 1) && (var198 >= 0) && (var198 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
if((myvar0 == 1) && (var199 >= 0) && (var199 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
if((myvar0 == 1) && (var200 >= 0) && (var200 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
if((myvar0 == 1) && (var201 >= 0) && (var201 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
if((myvar0 == 1) && (var202 >= 0) && (var202 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
if((myvar0 == 1) && (var203 >= 0) && (var203 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
if((myvar0 == 1) && (var204 >= 0) && (var204 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
if((myvar0 == 1) && (var205 >= 0) && (var205 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
if((myvar0 == 1) && (var206 >= 0) && (var206 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
if((myvar0 == 1) && (var207 >= 0) && (var207 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
if((myvar0 == 1) && (var208 >= 0) && (var208 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
if((myvar0 == 1) && (var209 >= 0) && (var209 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
if((myvar0 == 1) && (var210 >= 0) && (var210 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
if((myvar0 == 1) && (var211 >= 0) && (var211 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
if((myvar0 == 1) && (var212 >= 0) && (var212 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
if((myvar0 == 1) && (var213 >= 0) && (var213 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
if((myvar0 == 1) && (var214 >= 0) && (var214 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
if((myvar0 == 1) && (var215 >= 0) && (var215 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
if((myvar0 == 1) && (var216 >= 0) && (var216 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
if((myvar0 == 1) && (var217 >= 0) && (var217 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
if((myvar0 == 1) && (var218 >= 0) && (var218 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
if((myvar0 == 1) && (var219 >= 0) && (var219 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
if((myvar0 == 1) && (var220 >= 0) && (var220 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
if((myvar0 == 1) && (var221 >= 0) && (var221 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
if((myvar0 == 1) && (var222 >= 0) && (var222 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
if((myvar0 == 1) && (var223 >= 0) && (var223 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
if((myvar0 == 1) && (var224 >= 0) && (var224 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var225;
klee_make_symbolic(&var225, sizeof(var225), "var225");
if((myvar0 == 1) && (var225 >= 0) && (var225 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var226;
klee_make_symbolic(&var226, sizeof(var226), "var226");
if((myvar0 == 1) && (var226 >= 0) && (var226 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var227;
klee_make_symbolic(&var227, sizeof(var227), "var227");
if((myvar0 == 1) && (var227 >= 0) && (var227 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var228;
klee_make_symbolic(&var228, sizeof(var228), "var228");
if((myvar0 == 1) && (var228 >= 0) && (var228 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var229;
klee_make_symbolic(&var229, sizeof(var229), "var229");
if((myvar0 == 1) && (var229 >= 0) && (var229 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var230;
klee_make_symbolic(&var230, sizeof(var230), "var230");
if((myvar0 == 1) && (var230 >= 0) && (var230 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var231;
klee_make_symbolic(&var231, sizeof(var231), "var231");
if((myvar0 == 1) && (var231 >= 0) && (var231 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var232;
klee_make_symbolic(&var232, sizeof(var232), "var232");
if((myvar0 == 1) && (var232 >= 0) && (var232 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var233;
klee_make_symbolic(&var233, sizeof(var233), "var233");
if((myvar0 == 1) && (var233 >= 0) && (var233 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var234;
klee_make_symbolic(&var234, sizeof(var234), "var234");
if((myvar0 == 1) && (var234 >= 0) && (var234 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var235;
klee_make_symbolic(&var235, sizeof(var235), "var235");
if((myvar0 == 1) && (var235 >= 0) && (var235 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var236;
klee_make_symbolic(&var236, sizeof(var236), "var236");
if((myvar0 == 1) && (var236 >= 0) && (var236 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var237;
klee_make_symbolic(&var237, sizeof(var237), "var237");
if((myvar0 == 1) && (var237 >= 0) && (var237 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var238;
klee_make_symbolic(&var238, sizeof(var238), "var238");
if((myvar0 == 1) && (var238 >= 0) && (var238 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var239;
klee_make_symbolic(&var239, sizeof(var239), "var239");
if((myvar0 == 1) && (var239 >= 0) && (var239 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var240;
klee_make_symbolic(&var240, sizeof(var240), "var240");
if((myvar0 == 1) && (var240 >= 0) && (var240 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var241;
klee_make_symbolic(&var241, sizeof(var241), "var241");
if((myvar0 == 1) && (var241 >= 0) && (var241 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var242;
klee_make_symbolic(&var242, sizeof(var242), "var242");
if((myvar0 == 1) && (var242 >= 0) && (var242 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var243;
klee_make_symbolic(&var243, sizeof(var243), "var243");
if((myvar0 == 1) && (var243 >= 0) && (var243 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var244;
klee_make_symbolic(&var244, sizeof(var244), "var244");
if((myvar0 == 1) && (var244 >= 0) && (var244 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var245;
klee_make_symbolic(&var245, sizeof(var245), "var245");
if((myvar0 == 1) && (var245 >= 0) && (var245 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var246;
klee_make_symbolic(&var246, sizeof(var246), "var246");
if((myvar0 == 1) && (var246 >= 0) && (var246 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var247;
klee_make_symbolic(&var247, sizeof(var247), "var247");
if((myvar0 == 1) && (var247 >= 0) && (var247 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var248;
klee_make_symbolic(&var248, sizeof(var248), "var248");
if((myvar0 == 1) && (var248 >= 0) && (var248 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var249;
klee_make_symbolic(&var249, sizeof(var249), "var249");
if((myvar0 == 1) && (var249 >= 0) && (var249 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var250;
klee_make_symbolic(&var250, sizeof(var250), "var250");
if((myvar0 == 1) && (var250 >= 0) && (var250 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var251;
klee_make_symbolic(&var251, sizeof(var251), "var251");
if((myvar0 == 1) && (var251 >= 0) && (var251 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var252;
klee_make_symbolic(&var252, sizeof(var252), "var252");
if((myvar0 == 1) && (var252 >= 0) && (var252 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var253;
klee_make_symbolic(&var253, sizeof(var253), "var253");
if((myvar0 == 1) && (var253 >= 0) && (var253 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var254;
klee_make_symbolic(&var254, sizeof(var254), "var254");
if((myvar0 == 1) && (var254 >= 0) && (var254 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var255;
klee_make_symbolic(&var255, sizeof(var255), "var255");
if((myvar0 == 1) && (var255 >= 0) && (var255 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var256;
klee_make_symbolic(&var256, sizeof(var256), "var256");
if((myvar0 == 1) && (var256 >= 0) && (var256 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var257;
klee_make_symbolic(&var257, sizeof(var257), "var257");
if((myvar0 == 1) && (var257 >= 0) && (var257 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var258;
klee_make_symbolic(&var258, sizeof(var258), "var258");
if((myvar0 == 1) && (var258 >= 0) && (var258 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var259;
klee_make_symbolic(&var259, sizeof(var259), "var259");
if((myvar0 == 1) && (var259 >= 0) && (var259 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var260;
klee_make_symbolic(&var260, sizeof(var260), "var260");
if((myvar0 == 1) && (var260 >= 0) && (var260 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var261;
klee_make_symbolic(&var261, sizeof(var261), "var261");
if((myvar0 == 1) && (var261 >= 0) && (var261 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var262;
klee_make_symbolic(&var262, sizeof(var262), "var262");
if((myvar0 == 1) && (var262 >= 0) && (var262 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var263;
klee_make_symbolic(&var263, sizeof(var263), "var263");
if((myvar0 == 1) && (var263 >= 0) && (var263 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var264;
klee_make_symbolic(&var264, sizeof(var264), "var264");
if((myvar0 == 1) && (var264 >= 0) && (var264 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var265;
klee_make_symbolic(&var265, sizeof(var265), "var265");
if((myvar0 == 1) && (var265 >= 0) && (var265 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var266;
klee_make_symbolic(&var266, sizeof(var266), "var266");
if((myvar0 == 1) && (var266 >= 0) && (var266 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var267;
klee_make_symbolic(&var267, sizeof(var267), "var267");
if((myvar0 == 1) && (var267 >= 0) && (var267 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var268;
klee_make_symbolic(&var268, sizeof(var268), "var268");
if((myvar0 == 1) && (var268 >= 0) && (var268 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var269;
klee_make_symbolic(&var269, sizeof(var269), "var269");
if((myvar0 == 1) && (var269 >= 0) && (var269 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var270;
klee_make_symbolic(&var270, sizeof(var270), "var270");
if((myvar0 == 1) && (var270 >= 0) && (var270 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var271;
klee_make_symbolic(&var271, sizeof(var271), "var271");
if((myvar0 == 1) && (var271 >= 0) && (var271 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var272;
klee_make_symbolic(&var272, sizeof(var272), "var272");
if((myvar0 == 1) && (var272 >= 0) && (var272 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var273;
klee_make_symbolic(&var273, sizeof(var273), "var273");
if((myvar0 == 1) && (var273 >= 0) && (var273 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var274;
klee_make_symbolic(&var274, sizeof(var274), "var274");
if((myvar0 == 1) && (var274 >= 0) && (var274 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var275;
klee_make_symbolic(&var275, sizeof(var275), "var275");
if((myvar0 == 1) && (var275 >= 0) && (var275 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var276;
klee_make_symbolic(&var276, sizeof(var276), "var276");
if((myvar0 == 1) && (var276 >= 0) && (var276 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var277;
klee_make_symbolic(&var277, sizeof(var277), "var277");
if((myvar0 == 1) && (var277 >= 0) && (var277 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var278;
klee_make_symbolic(&var278, sizeof(var278), "var278");
if((myvar0 == 1) && (var278 >= 0) && (var278 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var279;
klee_make_symbolic(&var279, sizeof(var279), "var279");
if((myvar0 == 1) && (var279 >= 0) && (var279 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var280;
klee_make_symbolic(&var280, sizeof(var280), "var280");
if((myvar0 == 1) && (var280 >= 0) && (var280 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var281;
klee_make_symbolic(&var281, sizeof(var281), "var281");
if((myvar0 == 1) && (var281 >= 0) && (var281 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var282;
klee_make_symbolic(&var282, sizeof(var282), "var282");
if((myvar0 == 1) && (var282 >= 0) && (var282 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var283;
klee_make_symbolic(&var283, sizeof(var283), "var283");
if((myvar0 == 1) && (var283 >= 0) && (var283 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var284;
klee_make_symbolic(&var284, sizeof(var284), "var284");
if((myvar0 == 1) && (var284 >= 0) && (var284 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var285;
klee_make_symbolic(&var285, sizeof(var285), "var285");
if((myvar0 == 1) && (var285 >= 0) && (var285 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var286;
klee_make_symbolic(&var286, sizeof(var286), "var286");
if((myvar0 == 1) && (var286 >= 0) && (var286 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var287;
klee_make_symbolic(&var287, sizeof(var287), "var287");
if((myvar0 == 1) && (var287 >= 0) && (var287 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var288;
klee_make_symbolic(&var288, sizeof(var288), "var288");
if((myvar0 == 1) && (var288 >= 0) && (var288 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var289;
klee_make_symbolic(&var289, sizeof(var289), "var289");
if((myvar0 == 1) && (var289 >= 0) && (var289 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var290;
klee_make_symbolic(&var290, sizeof(var290), "var290");
if((myvar0 == 1) && (var290 >= 0) && (var290 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var291;
klee_make_symbolic(&var291, sizeof(var291), "var291");
if((myvar0 == 1) && (var291 >= 0) && (var291 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var292;
klee_make_symbolic(&var292, sizeof(var292), "var292");
if((myvar0 == 1) && (var292 >= 0) && (var292 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var293;
klee_make_symbolic(&var293, sizeof(var293), "var293");
if((myvar0 == 1) && (var293 >= 0) && (var293 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var294;
klee_make_symbolic(&var294, sizeof(var294), "var294");
if((myvar0 == 1) && (var294 >= 0) && (var294 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var295;
klee_make_symbolic(&var295, sizeof(var295), "var295");
if((myvar0 == 1) && (var295 >= 0) && (var295 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var296;
klee_make_symbolic(&var296, sizeof(var296), "var296");
if((myvar0 == 1) && (var296 >= 0) && (var296 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var297;
klee_make_symbolic(&var297, sizeof(var297), "var297");
if((myvar0 == 1) && (var297 >= 0) && (var297 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var298;
klee_make_symbolic(&var298, sizeof(var298), "var298");
if((myvar0 == 1) && (var298 >= 0) && (var298 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var299;
klee_make_symbolic(&var299, sizeof(var299), "var299");
if((myvar0 == 1) && (var299 >= 0) && (var299 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var300;
klee_make_symbolic(&var300, sizeof(var300), "var300");
if((myvar0 == 1) && (var300 >= 0) && (var300 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var301;
klee_make_symbolic(&var301, sizeof(var301), "var301");
if((myvar0 == 1) && (var301 >= 0) && (var301 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var302;
klee_make_symbolic(&var302, sizeof(var302), "var302");
if((myvar0 == 1) && (var302 >= 0) && (var302 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var303;
klee_make_symbolic(&var303, sizeof(var303), "var303");
if((myvar0 == 1) && (var303 >= 0) && (var303 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var304;
klee_make_symbolic(&var304, sizeof(var304), "var304");
if((myvar0 == 1) && (var304 >= 0) && (var304 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var305;
klee_make_symbolic(&var305, sizeof(var305), "var305");
if((myvar0 == 1) && (var305 >= 0) && (var305 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var306;
klee_make_symbolic(&var306, sizeof(var306), "var306");
if((myvar0 == 1) && (var306 >= 0) && (var306 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var307;
klee_make_symbolic(&var307, sizeof(var307), "var307");
if((myvar0 == 1) && (var307 >= 0) && (var307 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var308;
klee_make_symbolic(&var308, sizeof(var308), "var308");
if((myvar0 == 1) && (var308 >= 0) && (var308 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var309;
klee_make_symbolic(&var309, sizeof(var309), "var309");
if((myvar0 == 1) && (var309 >= 0) && (var309 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var310;
klee_make_symbolic(&var310, sizeof(var310), "var310");
if((myvar0 == 1) && (var310 >= 0) && (var310 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var311;
klee_make_symbolic(&var311, sizeof(var311), "var311");
if((myvar0 == 1) && (var311 >= 0) && (var311 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var312;
klee_make_symbolic(&var312, sizeof(var312), "var312");
if((myvar0 == 1) && (var312 >= 0) && (var312 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var313;
klee_make_symbolic(&var313, sizeof(var313), "var313");
if((myvar0 == 1) && (var313 >= 0) && (var313 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var314;
klee_make_symbolic(&var314, sizeof(var314), "var314");
if((myvar0 == 1) && (var314 >= 0) && (var314 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var315;
klee_make_symbolic(&var315, sizeof(var315), "var315");
if((myvar0 == 1) && (var315 >= 0) && (var315 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var316;
klee_make_symbolic(&var316, sizeof(var316), "var316");
if((myvar0 == 1) && (var316 >= 0) && (var316 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var317;
klee_make_symbolic(&var317, sizeof(var317), "var317");
if((myvar0 == 1) && (var317 >= 0) && (var317 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var318;
klee_make_symbolic(&var318, sizeof(var318), "var318");
if((myvar0 == 1) && (var318 >= 0) && (var318 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var319;
klee_make_symbolic(&var319, sizeof(var319), "var319");
if((myvar0 == 1) && (var319 >= 0) && (var319 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var320;
klee_make_symbolic(&var320, sizeof(var320), "var320");
if((myvar0 == 1) && (var320 >= 0) && (var320 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var321;
klee_make_symbolic(&var321, sizeof(var321), "var321");
if((myvar0 == 1) && (var321 >= 0) && (var321 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var322;
klee_make_symbolic(&var322, sizeof(var322), "var322");
if((myvar0 == 1) && (var322 >= 0) && (var322 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var323;
klee_make_symbolic(&var323, sizeof(var323), "var323");
if((myvar0 == 1) && (var323 >= 0) && (var323 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var324;
klee_make_symbolic(&var324, sizeof(var324), "var324");
if((myvar0 == 1) && (var324 >= 0) && (var324 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var325;
klee_make_symbolic(&var325, sizeof(var325), "var325");
if((myvar0 == 1) && (var325 >= 0) && (var325 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var326;
klee_make_symbolic(&var326, sizeof(var326), "var326");
if((myvar0 == 1) && (var326 >= 0) && (var326 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var327;
klee_make_symbolic(&var327, sizeof(var327), "var327");
if((myvar0 == 1) && (var327 >= 0) && (var327 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var328;
klee_make_symbolic(&var328, sizeof(var328), "var328");
if((myvar0 == 1) && (var328 >= 0) && (var328 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var329;
klee_make_symbolic(&var329, sizeof(var329), "var329");
if((myvar0 == 1) && (var329 >= 0) && (var329 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var330;
klee_make_symbolic(&var330, sizeof(var330), "var330");
if((myvar0 == 1) && (var330 >= 0) && (var330 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var331;
klee_make_symbolic(&var331, sizeof(var331), "var331");
if((myvar0 == 1) && (var331 >= 0) && (var331 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var332;
klee_make_symbolic(&var332, sizeof(var332), "var332");
if((myvar0 == 1) && (var332 >= 0) && (var332 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var333;
klee_make_symbolic(&var333, sizeof(var333), "var333");
if((myvar0 == 1) && (var333 >= 0) && (var333 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var334;
klee_make_symbolic(&var334, sizeof(var334), "var334");
if((myvar0 == 1) && (var334 >= 0) && (var334 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var335;
klee_make_symbolic(&var335, sizeof(var335), "var335");
if((myvar0 == 1) && (var335 >= 0) && (var335 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var336;
klee_make_symbolic(&var336, sizeof(var336), "var336");
if((myvar0 == 1) && (var336 >= 0) && (var336 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var337;
klee_make_symbolic(&var337, sizeof(var337), "var337");
if((myvar0 == 1) && (var337 >= 0) && (var337 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var338;
klee_make_symbolic(&var338, sizeof(var338), "var338");
if((myvar0 == 1) && (var338 >= 0) && (var338 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var339;
klee_make_symbolic(&var339, sizeof(var339), "var339");
if((myvar0 == 1) && (var339 >= 0) && (var339 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var340;
klee_make_symbolic(&var340, sizeof(var340), "var340");
if((myvar0 == 1) && (var340 >= 0) && (var340 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var341;
klee_make_symbolic(&var341, sizeof(var341), "var341");
if((myvar0 == 1) && (var341 >= 0) && (var341 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var342;
klee_make_symbolic(&var342, sizeof(var342), "var342");
if((myvar0 == 1) && (var342 >= 0) && (var342 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var343;
klee_make_symbolic(&var343, sizeof(var343), "var343");
if((myvar0 == 1) && (var343 >= 0) && (var343 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var344;
klee_make_symbolic(&var344, sizeof(var344), "var344");
if((myvar0 == 1) && (var344 >= 0) && (var344 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var345;
klee_make_symbolic(&var345, sizeof(var345), "var345");
if((myvar0 == 1) && (var345 >= 0) && (var345 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var346;
klee_make_symbolic(&var346, sizeof(var346), "var346");
if((myvar0 == 1) && (var346 >= 0) && (var346 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var347;
klee_make_symbolic(&var347, sizeof(var347), "var347");
if((myvar0 == 1) && (var347 >= 0) && (var347 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var348;
klee_make_symbolic(&var348, sizeof(var348), "var348");
if((myvar0 == 1) && (var348 >= 0) && (var348 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var349;
klee_make_symbolic(&var349, sizeof(var349), "var349");
if((myvar0 == 1) && (var349 >= 0) && (var349 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var350;
klee_make_symbolic(&var350, sizeof(var350), "var350");
if((myvar0 == 1) && (var350 >= 0) && (var350 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var351;
klee_make_symbolic(&var351, sizeof(var351), "var351");
if((myvar0 == 1) && (var351 >= 0) && (var351 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var352;
klee_make_symbolic(&var352, sizeof(var352), "var352");
if((myvar0 == 1) && (var352 >= 0) && (var352 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var353;
klee_make_symbolic(&var353, sizeof(var353), "var353");
if((myvar0 == 1) && (var353 >= 0) && (var353 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var354;
klee_make_symbolic(&var354, sizeof(var354), "var354");
if((myvar0 == 1) && (var354 >= 0) && (var354 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var355;
klee_make_symbolic(&var355, sizeof(var355), "var355");
if((myvar0 == 1) && (var355 >= 0) && (var355 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var356;
klee_make_symbolic(&var356, sizeof(var356), "var356");
if((myvar0 == 1) && (var356 >= 0) && (var356 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var357;
klee_make_symbolic(&var357, sizeof(var357), "var357");
if((myvar0 == 1) && (var357 >= 0) && (var357 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var358;
klee_make_symbolic(&var358, sizeof(var358), "var358");
if((myvar0 == 1) && (var358 >= 0) && (var358 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var359;
klee_make_symbolic(&var359, sizeof(var359), "var359");
if((myvar0 == 1) && (var359 >= 0) && (var359 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var360;
klee_make_symbolic(&var360, sizeof(var360), "var360");
if((myvar0 == 1) && (var360 >= 0) && (var360 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var361;
klee_make_symbolic(&var361, sizeof(var361), "var361");
if((myvar0 == 1) && (var361 >= 0) && (var361 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var362;
klee_make_symbolic(&var362, sizeof(var362), "var362");
if((myvar0 == 1) && (var362 >= 0) && (var362 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var363;
klee_make_symbolic(&var363, sizeof(var363), "var363");
if((myvar0 == 1) && (var363 >= 0) && (var363 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var364;
klee_make_symbolic(&var364, sizeof(var364), "var364");
if((myvar0 == 1) && (var364 >= 0) && (var364 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var365;
klee_make_symbolic(&var365, sizeof(var365), "var365");
if((myvar0 == 1) && (var365 >= 0) && (var365 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var366;
klee_make_symbolic(&var366, sizeof(var366), "var366");
if((myvar0 == 1) && (var366 >= 0) && (var366 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var367;
klee_make_symbolic(&var367, sizeof(var367), "var367");
if((myvar0 == 1) && (var367 >= 0) && (var367 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var368;
klee_make_symbolic(&var368, sizeof(var368), "var368");
if((myvar0 == 1) && (var368 >= 0) && (var368 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var369;
klee_make_symbolic(&var369, sizeof(var369), "var369");
if((myvar0 == 1) && (var369 >= 0) && (var369 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var370;
klee_make_symbolic(&var370, sizeof(var370), "var370");
if((myvar0 == 1) && (var370 >= 0) && (var370 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var371;
klee_make_symbolic(&var371, sizeof(var371), "var371");
if((myvar0 == 1) && (var371 >= 0) && (var371 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var372;
klee_make_symbolic(&var372, sizeof(var372), "var372");
if((myvar0 == 1) && (var372 >= 0) && (var372 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var373;
klee_make_symbolic(&var373, sizeof(var373), "var373");
if((myvar0 == 1) && (var373 >= 0) && (var373 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var374;
klee_make_symbolic(&var374, sizeof(var374), "var374");
if((myvar0 == 1) && (var374 >= 0) && (var374 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var375;
klee_make_symbolic(&var375, sizeof(var375), "var375");
if((myvar0 == 1) && (var375 >= 0) && (var375 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var376;
klee_make_symbolic(&var376, sizeof(var376), "var376");
if((myvar0 == 1) && (var376 >= 0) && (var376 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var377;
klee_make_symbolic(&var377, sizeof(var377), "var377");
if((myvar0 == 1) && (var377 >= 0) && (var377 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var378;
klee_make_symbolic(&var378, sizeof(var378), "var378");
if((myvar0 == 1) && (var378 >= 0) && (var378 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var379;
klee_make_symbolic(&var379, sizeof(var379), "var379");
if((myvar0 == 1) && (var379 >= 0) && (var379 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var380;
klee_make_symbolic(&var380, sizeof(var380), "var380");
if((myvar0 == 1) && (var380 >= 0) && (var380 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var381;
klee_make_symbolic(&var381, sizeof(var381), "var381");
if((myvar0 == 1) && (var381 >= 0) && (var381 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var382;
klee_make_symbolic(&var382, sizeof(var382), "var382");
if((myvar0 == 1) && (var382 >= 0) && (var382 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var383;
klee_make_symbolic(&var383, sizeof(var383), "var383");
if((myvar0 == 1) && (var383 >= 0) && (var383 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var384;
klee_make_symbolic(&var384, sizeof(var384), "var384");
if((myvar0 == 1) && (var384 >= 0) && (var384 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var385;
klee_make_symbolic(&var385, sizeof(var385), "var385");
if((myvar0 == 1) && (var385 >= 0) && (var385 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var386;
klee_make_symbolic(&var386, sizeof(var386), "var386");
if((myvar0 == 1) && (var386 >= 0) && (var386 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var387;
klee_make_symbolic(&var387, sizeof(var387), "var387");
if((myvar0 == 1) && (var387 >= 0) && (var387 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var388;
klee_make_symbolic(&var388, sizeof(var388), "var388");
if((myvar0 == 1) && (var388 >= 0) && (var388 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var389;
klee_make_symbolic(&var389, sizeof(var389), "var389");
if((myvar0 == 1) && (var389 >= 0) && (var389 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var390;
klee_make_symbolic(&var390, sizeof(var390), "var390");
if((myvar0 == 1) && (var390 >= 0) && (var390 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var391;
klee_make_symbolic(&var391, sizeof(var391), "var391");
if((myvar0 == 1) && (var391 >= 0) && (var391 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var392;
klee_make_symbolic(&var392, sizeof(var392), "var392");
if((myvar0 == 1) && (var392 >= 0) && (var392 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var393;
klee_make_symbolic(&var393, sizeof(var393), "var393");
if((myvar0 == 1) && (var393 >= 0) && (var393 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var394;
klee_make_symbolic(&var394, sizeof(var394), "var394");
if((myvar0 == 1) && (var394 >= 0) && (var394 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var395;
klee_make_symbolic(&var395, sizeof(var395), "var395");
if((myvar0 == 1) && (var395 >= 0) && (var395 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var396;
klee_make_symbolic(&var396, sizeof(var396), "var396");
if((myvar0 == 1) && (var396 >= 0) && (var396 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var397;
klee_make_symbolic(&var397, sizeof(var397), "var397");
if((myvar0 == 1) && (var397 >= 0) && (var397 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var398;
klee_make_symbolic(&var398, sizeof(var398), "var398");
if((myvar0 == 1) && (var398 >= 0) && (var398 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var399;
klee_make_symbolic(&var399, sizeof(var399), "var399");
if((myvar0 == 1) && (var399 >= 0) && (var399 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var400;
klee_make_symbolic(&var400, sizeof(var400), "var400");
if((myvar0 == 1) && (var400 >= 0) && (var400 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var401;
klee_make_symbolic(&var401, sizeof(var401), "var401");
if((myvar0 == 1) && (var401 >= 0) && (var401 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var402;
klee_make_symbolic(&var402, sizeof(var402), "var402");
if((myvar0 == 1) && (var402 >= 0) && (var402 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var403;
klee_make_symbolic(&var403, sizeof(var403), "var403");
if((myvar0 == 1) && (var403 >= 0) && (var403 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var404;
klee_make_symbolic(&var404, sizeof(var404), "var404");
if((myvar0 == 1) && (var404 >= 0) && (var404 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var405;
klee_make_symbolic(&var405, sizeof(var405), "var405");
if((myvar0 == 1) && (var405 >= 0) && (var405 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var406;
klee_make_symbolic(&var406, sizeof(var406), "var406");
if((myvar0 == 1) && (var406 >= 0) && (var406 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var407;
klee_make_symbolic(&var407, sizeof(var407), "var407");
if((myvar0 == 1) && (var407 >= 0) && (var407 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var408;
klee_make_symbolic(&var408, sizeof(var408), "var408");
if((myvar0 == 1) && (var408 >= 0) && (var408 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var409;
klee_make_symbolic(&var409, sizeof(var409), "var409");
if((myvar0 == 1) && (var409 >= 0) && (var409 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var410;
klee_make_symbolic(&var410, sizeof(var410), "var410");
if((myvar0 == 1) && (var410 >= 0) && (var410 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var411;
klee_make_symbolic(&var411, sizeof(var411), "var411");
if((myvar0 == 1) && (var411 >= 0) && (var411 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var412;
klee_make_symbolic(&var412, sizeof(var412), "var412");
if((myvar0 == 1) && (var412 >= 0) && (var412 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var413;
klee_make_symbolic(&var413, sizeof(var413), "var413");
if((myvar0 == 1) && (var413 >= 0) && (var413 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var414;
klee_make_symbolic(&var414, sizeof(var414), "var414");
if((myvar0 == 1) && (var414 >= 0) && (var414 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var415;
klee_make_symbolic(&var415, sizeof(var415), "var415");
if((myvar0 == 1) && (var415 >= 0) && (var415 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var416;
klee_make_symbolic(&var416, sizeof(var416), "var416");
if((myvar0 == 1) && (var416 >= 0) && (var416 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var417;
klee_make_symbolic(&var417, sizeof(var417), "var417");
if((myvar0 == 1) && (var417 >= 0) && (var417 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var418;
klee_make_symbolic(&var418, sizeof(var418), "var418");
if((myvar0 == 1) && (var418 >= 0) && (var418 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var419;
klee_make_symbolic(&var419, sizeof(var419), "var419");
if((myvar0 == 1) && (var419 >= 0) && (var419 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var420;
klee_make_symbolic(&var420, sizeof(var420), "var420");
if((myvar0 == 1) && (var420 >= 0) && (var420 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var421;
klee_make_symbolic(&var421, sizeof(var421), "var421");
if((myvar0 == 1) && (var421 >= 0) && (var421 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var422;
klee_make_symbolic(&var422, sizeof(var422), "var422");
if((myvar0 == 1) && (var422 >= 0) && (var422 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var423;
klee_make_symbolic(&var423, sizeof(var423), "var423");
if((myvar0 == 1) && (var423 >= 0) && (var423 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var424;
klee_make_symbolic(&var424, sizeof(var424), "var424");
if((myvar0 == 1) && (var424 >= 0) && (var424 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var425;
klee_make_symbolic(&var425, sizeof(var425), "var425");
if((myvar0 == 1) && (var425 >= 0) && (var425 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var426;
klee_make_symbolic(&var426, sizeof(var426), "var426");
if((myvar0 == 1) && (var426 >= 0) && (var426 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var427;
klee_make_symbolic(&var427, sizeof(var427), "var427");
if((myvar0 == 1) && (var427 >= 0) && (var427 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var428;
klee_make_symbolic(&var428, sizeof(var428), "var428");
if((myvar0 == 1) && (var428 >= 0) && (var428 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var429;
klee_make_symbolic(&var429, sizeof(var429), "var429");
if((myvar0 == 1) && (var429 >= 0) && (var429 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var430;
klee_make_symbolic(&var430, sizeof(var430), "var430");
if((myvar0 == 1) && (var430 >= 0) && (var430 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var431;
klee_make_symbolic(&var431, sizeof(var431), "var431");
if((myvar0 == 1) && (var431 >= 0) && (var431 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var432;
klee_make_symbolic(&var432, sizeof(var432), "var432");
if((myvar0 == 1) && (var432 >= 0) && (var432 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var433;
klee_make_symbolic(&var433, sizeof(var433), "var433");
if((myvar0 == 1) && (var433 >= 0) && (var433 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var434;
klee_make_symbolic(&var434, sizeof(var434), "var434");
if((myvar0 == 1) && (var434 >= 0) && (var434 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var435;
klee_make_symbolic(&var435, sizeof(var435), "var435");
if((myvar0 == 1) && (var435 >= 0) && (var435 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var436;
klee_make_symbolic(&var436, sizeof(var436), "var436");
if((myvar0 == 1) && (var436 >= 0) && (var436 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var437;
klee_make_symbolic(&var437, sizeof(var437), "var437");
if((myvar0 == 1) && (var437 >= 0) && (var437 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var438;
klee_make_symbolic(&var438, sizeof(var438), "var438");
if((myvar0 == 1) && (var438 >= 0) && (var438 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var439;
klee_make_symbolic(&var439, sizeof(var439), "var439");
if((myvar0 == 1) && (var439 >= 0) && (var439 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var440;
klee_make_symbolic(&var440, sizeof(var440), "var440");
if((myvar0 == 1) && (var440 >= 0) && (var440 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var441;
klee_make_symbolic(&var441, sizeof(var441), "var441");
if((myvar0 == 1) && (var441 >= 0) && (var441 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var442;
klee_make_symbolic(&var442, sizeof(var442), "var442");
if((myvar0 == 1) && (var442 >= 0) && (var442 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var443;
klee_make_symbolic(&var443, sizeof(var443), "var443");
if((myvar0 == 1) && (var443 >= 0) && (var443 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var444;
klee_make_symbolic(&var444, sizeof(var444), "var444");
if((myvar0 == 1) && (var444 >= 0) && (var444 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var445;
klee_make_symbolic(&var445, sizeof(var445), "var445");
if((myvar0 == 1) && (var445 >= 0) && (var445 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var446;
klee_make_symbolic(&var446, sizeof(var446), "var446");
if((myvar0 == 1) && (var446 >= 0) && (var446 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var447;
klee_make_symbolic(&var447, sizeof(var447), "var447");
if((myvar0 == 1) && (var447 >= 0) && (var447 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var448;
klee_make_symbolic(&var448, sizeof(var448), "var448");
if((myvar0 == 1) && (var448 >= 0) && (var448 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var449;
klee_make_symbolic(&var449, sizeof(var449), "var449");
if((myvar0 == 1) && (var449 >= 0) && (var449 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var450;
klee_make_symbolic(&var450, sizeof(var450), "var450");
if((myvar0 == 1) && (var450 >= 0) && (var450 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var451;
klee_make_symbolic(&var451, sizeof(var451), "var451");
if((myvar0 == 1) && (var451 >= 0) && (var451 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var452;
klee_make_symbolic(&var452, sizeof(var452), "var452");
if((myvar0 == 1) && (var452 >= 0) && (var452 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var453;
klee_make_symbolic(&var453, sizeof(var453), "var453");
if((myvar0 == 1) && (var453 >= 0) && (var453 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var454;
klee_make_symbolic(&var454, sizeof(var454), "var454");
if((myvar0 == 1) && (var454 >= 0) && (var454 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var455;
klee_make_symbolic(&var455, sizeof(var455), "var455");
if((myvar0 == 1) && (var455 >= 0) && (var455 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var456;
klee_make_symbolic(&var456, sizeof(var456), "var456");
if((myvar0 == 1) && (var456 >= 0) && (var456 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var457;
klee_make_symbolic(&var457, sizeof(var457), "var457");
if((myvar0 == 1) && (var457 >= 0) && (var457 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var458;
klee_make_symbolic(&var458, sizeof(var458), "var458");
if((myvar0 == 1) && (var458 >= 0) && (var458 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var459;
klee_make_symbolic(&var459, sizeof(var459), "var459");
if((myvar0 == 1) && (var459 >= 0) && (var459 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var460;
klee_make_symbolic(&var460, sizeof(var460), "var460");
if((myvar0 == 1) && (var460 >= 0) && (var460 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var461;
klee_make_symbolic(&var461, sizeof(var461), "var461");
if((myvar0 == 1) && (var461 >= 0) && (var461 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var462;
klee_make_symbolic(&var462, sizeof(var462), "var462");
if((myvar0 == 1) && (var462 >= 0) && (var462 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var463;
klee_make_symbolic(&var463, sizeof(var463), "var463");
if((myvar0 == 1) && (var463 >= 0) && (var463 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var464;
klee_make_symbolic(&var464, sizeof(var464), "var464");
if((myvar0 == 1) && (var464 >= 0) && (var464 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var465;
klee_make_symbolic(&var465, sizeof(var465), "var465");
if((myvar0 == 1) && (var465 >= 0) && (var465 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var466;
klee_make_symbolic(&var466, sizeof(var466), "var466");
if((myvar0 == 1) && (var466 >= 0) && (var466 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var467;
klee_make_symbolic(&var467, sizeof(var467), "var467");
if((myvar0 == 1) && (var467 >= 0) && (var467 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var468;
klee_make_symbolic(&var468, sizeof(var468), "var468");
if((myvar0 == 1) && (var468 >= 0) && (var468 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var469;
klee_make_symbolic(&var469, sizeof(var469), "var469");
if((myvar0 == 1) && (var469 >= 0) && (var469 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var470;
klee_make_symbolic(&var470, sizeof(var470), "var470");
if((myvar0 == 1) && (var470 >= 0) && (var470 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var471;
klee_make_symbolic(&var471, sizeof(var471), "var471");
if((myvar0 == 1) && (var471 >= 0) && (var471 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var472;
klee_make_symbolic(&var472, sizeof(var472), "var472");
if((myvar0 == 1) && (var472 >= 0) && (var472 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var473;
klee_make_symbolic(&var473, sizeof(var473), "var473");
if((myvar0 == 1) && (var473 >= 0) && (var473 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var474;
klee_make_symbolic(&var474, sizeof(var474), "var474");
if((myvar0 == 1) && (var474 >= 0) && (var474 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var475;
klee_make_symbolic(&var475, sizeof(var475), "var475");
if((myvar0 == 1) && (var475 >= 0) && (var475 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var476;
klee_make_symbolic(&var476, sizeof(var476), "var476");
if((myvar0 == 1) && (var476 >= 0) && (var476 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var477;
klee_make_symbolic(&var477, sizeof(var477), "var477");
if((myvar0 == 1) && (var477 >= 0) && (var477 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var478;
klee_make_symbolic(&var478, sizeof(var478), "var478");
if((myvar0 == 1) && (var478 >= 0) && (var478 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var479;
klee_make_symbolic(&var479, sizeof(var479), "var479");
if((myvar0 == 1) && (var479 >= 0) && (var479 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var480;
klee_make_symbolic(&var480, sizeof(var480), "var480");
if((myvar0 == 1) && (var480 >= 0) && (var480 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var481;
klee_make_symbolic(&var481, sizeof(var481), "var481");
if((myvar0 == 1) && (var481 >= 0) && (var481 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var482;
klee_make_symbolic(&var482, sizeof(var482), "var482");
if((myvar0 == 1) && (var482 >= 0) && (var482 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var483;
klee_make_symbolic(&var483, sizeof(var483), "var483");
if((myvar0 == 1) && (var483 >= 0) && (var483 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var484;
klee_make_symbolic(&var484, sizeof(var484), "var484");
if((myvar0 == 1) && (var484 >= 0) && (var484 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var485;
klee_make_symbolic(&var485, sizeof(var485), "var485");
if((myvar0 == 1) && (var485 >= 0) && (var485 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var486;
klee_make_symbolic(&var486, sizeof(var486), "var486");
if((myvar0 == 1) && (var486 >= 0) && (var486 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var487;
klee_make_symbolic(&var487, sizeof(var487), "var487");
if((myvar0 == 1) && (var487 >= 0) && (var487 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var488;
klee_make_symbolic(&var488, sizeof(var488), "var488");
if((myvar0 == 1) && (var488 >= 0) && (var488 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var489;
klee_make_symbolic(&var489, sizeof(var489), "var489");
if((myvar0 == 1) && (var489 >= 0) && (var489 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var490;
klee_make_symbolic(&var490, sizeof(var490), "var490");
if((myvar0 == 1) && (var490 >= 0) && (var490 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var491;
klee_make_symbolic(&var491, sizeof(var491), "var491");
if((myvar0 == 1) && (var491 >= 0) && (var491 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var492;
klee_make_symbolic(&var492, sizeof(var492), "var492");
if((myvar0 == 1) && (var492 >= 0) && (var492 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var493;
klee_make_symbolic(&var493, sizeof(var493), "var493");
if((myvar0 == 1) && (var493 >= 0) && (var493 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var494;
klee_make_symbolic(&var494, sizeof(var494), "var494");
if((myvar0 == 1) && (var494 >= 0) && (var494 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var495;
klee_make_symbolic(&var495, sizeof(var495), "var495");
if((myvar0 == 1) && (var495 >= 0) && (var495 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var496;
klee_make_symbolic(&var496, sizeof(var496), "var496");
if((myvar0 == 1) && (var496 >= 0) && (var496 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var497;
klee_make_symbolic(&var497, sizeof(var497), "var497");
if((myvar0 == 1) && (var497 >= 0) && (var497 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var498;
klee_make_symbolic(&var498, sizeof(var498), "var498");
if((myvar0 == 1) && (var498 >= 0) && (var498 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var499;
klee_make_symbolic(&var499, sizeof(var499), "var499");
if((myvar0 == 1) && (var499 >= 0) && (var499 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var500;
klee_make_symbolic(&var500, sizeof(var500), "var500");
if((myvar0 == 1) && (var500 >= 0) && (var500 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var501;
klee_make_symbolic(&var501, sizeof(var501), "var501");
if((myvar0 == 1) && (var501 >= 0) && (var501 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var502;
klee_make_symbolic(&var502, sizeof(var502), "var502");
if((myvar0 == 1) && (var502 >= 0) && (var502 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var503;
klee_make_symbolic(&var503, sizeof(var503), "var503");
if((myvar0 == 1) && (var503 >= 0) && (var503 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var504;
klee_make_symbolic(&var504, sizeof(var504), "var504");
if((myvar0 == 1) && (var504 >= 0) && (var504 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var505;
klee_make_symbolic(&var505, sizeof(var505), "var505");
if((myvar0 == 1) && (var505 >= 0) && (var505 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var506;
klee_make_symbolic(&var506, sizeof(var506), "var506");
if((myvar0 == 1) && (var506 >= 0) && (var506 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var507;
klee_make_symbolic(&var507, sizeof(var507), "var507");
if((myvar0 == 1) && (var507 >= 0) && (var507 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var508;
klee_make_symbolic(&var508, sizeof(var508), "var508");
if((myvar0 == 1) && (var508 >= 0) && (var508 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var509;
klee_make_symbolic(&var509, sizeof(var509), "var509");
if((myvar0 == 1) && (var509 >= 0) && (var509 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var510;
klee_make_symbolic(&var510, sizeof(var510), "var510");
if((myvar0 == 1) && (var510 >= 0) && (var510 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var511;
klee_make_symbolic(&var511, sizeof(var511), "var511");
if((myvar0 == 1) && (var511 >= 0) && (var511 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var512;
klee_make_symbolic(&var512, sizeof(var512), "var512");
if((myvar0 == 1) && (var512 >= 0) && (var512 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var513;
klee_make_symbolic(&var513, sizeof(var513), "var513");
if((myvar0 == 1) && (var513 >= 0) && (var513 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var514;
klee_make_symbolic(&var514, sizeof(var514), "var514");
if((myvar0 == 1) && (var514 >= 0) && (var514 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var515;
klee_make_symbolic(&var515, sizeof(var515), "var515");
if((myvar0 == 1) && (var515 >= 0) && (var515 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var516;
klee_make_symbolic(&var516, sizeof(var516), "var516");
if((myvar0 == 1) && (var516 >= 0) && (var516 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var517;
klee_make_symbolic(&var517, sizeof(var517), "var517");
if((myvar0 == 1) && (var517 >= 0) && (var517 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var518;
klee_make_symbolic(&var518, sizeof(var518), "var518");
if((myvar0 == 1) && (var518 >= 0) && (var518 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var519;
klee_make_symbolic(&var519, sizeof(var519), "var519");
if((myvar0 == 1) && (var519 >= 0) && (var519 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var520;
klee_make_symbolic(&var520, sizeof(var520), "var520");
if((myvar0 == 1) && (var520 >= 0) && (var520 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var521;
klee_make_symbolic(&var521, sizeof(var521), "var521");
if((myvar0 == 1) && (var521 >= 0) && (var521 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var522;
klee_make_symbolic(&var522, sizeof(var522), "var522");
if((myvar0 == 1) && (var522 >= 0) && (var522 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var523;
klee_make_symbolic(&var523, sizeof(var523), "var523");
if((myvar0 == 1) && (var523 >= 0) && (var523 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var524;
klee_make_symbolic(&var524, sizeof(var524), "var524");
if((myvar0 == 1) && (var524 >= 0) && (var524 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var525;
klee_make_symbolic(&var525, sizeof(var525), "var525");
if((myvar0 == 1) && (var525 >= 0) && (var525 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var526;
klee_make_symbolic(&var526, sizeof(var526), "var526");
if((myvar0 == 1) && (var526 >= 0) && (var526 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var527;
klee_make_symbolic(&var527, sizeof(var527), "var527");
if((myvar0 == 1) && (var527 >= 0) && (var527 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var528;
klee_make_symbolic(&var528, sizeof(var528), "var528");
if((myvar0 == 1) && (var528 >= 0) && (var528 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var529;
klee_make_symbolic(&var529, sizeof(var529), "var529");
if((myvar0 == 1) && (var529 >= 0) && (var529 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var530;
klee_make_symbolic(&var530, sizeof(var530), "var530");
if((myvar0 == 1) && (var530 >= 0) && (var530 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var531;
klee_make_symbolic(&var531, sizeof(var531), "var531");
if((myvar0 == 1) && (var531 >= 0) && (var531 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var532;
klee_make_symbolic(&var532, sizeof(var532), "var532");
if((myvar0 == 1) && (var532 >= 0) && (var532 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var533;
klee_make_symbolic(&var533, sizeof(var533), "var533");
if((myvar0 == 1) && (var533 >= 0) && (var533 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var534;
klee_make_symbolic(&var534, sizeof(var534), "var534");
if((myvar0 == 1) && (var534 >= 0) && (var534 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var535;
klee_make_symbolic(&var535, sizeof(var535), "var535");
if((myvar0 == 1) && (var535 >= 0) && (var535 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var536;
klee_make_symbolic(&var536, sizeof(var536), "var536");
if((myvar0 == 1) && (var536 >= 0) && (var536 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var537;
klee_make_symbolic(&var537, sizeof(var537), "var537");
if((myvar0 == 1) && (var537 >= 0) && (var537 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var538;
klee_make_symbolic(&var538, sizeof(var538), "var538");
if((myvar0 == 1) && (var538 >= 0) && (var538 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var539;
klee_make_symbolic(&var539, sizeof(var539), "var539");
if((myvar0 == 1) && (var539 >= 0) && (var539 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var540;
klee_make_symbolic(&var540, sizeof(var540), "var540");
if((myvar0 == 1) && (var540 >= 0) && (var540 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var541;
klee_make_symbolic(&var541, sizeof(var541), "var541");
if((myvar0 == 1) && (var541 >= 0) && (var541 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var542;
klee_make_symbolic(&var542, sizeof(var542), "var542");
if((myvar0 == 1) && (var542 >= 0) && (var542 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var543;
klee_make_symbolic(&var543, sizeof(var543), "var543");
if((myvar0 == 1) && (var543 >= 0) && (var543 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var544;
klee_make_symbolic(&var544, sizeof(var544), "var544");
if((myvar0 == 1) && (var544 >= 0) && (var544 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var545;
klee_make_symbolic(&var545, sizeof(var545), "var545");
if((myvar0 == 1) && (var545 >= 0) && (var545 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var546;
klee_make_symbolic(&var546, sizeof(var546), "var546");
if((myvar0 == 1) && (var546 >= 0) && (var546 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var547;
klee_make_symbolic(&var547, sizeof(var547), "var547");
if((myvar0 == 1) && (var547 >= 0) && (var547 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var548;
klee_make_symbolic(&var548, sizeof(var548), "var548");
if((myvar0 == 1) && (var548 >= 0) && (var548 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var549;
klee_make_symbolic(&var549, sizeof(var549), "var549");
if((myvar0 == 1) && (var549 >= 0) && (var549 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var550;
klee_make_symbolic(&var550, sizeof(var550), "var550");
if((myvar0 == 1) && (var550 >= 0) && (var550 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var551;
klee_make_symbolic(&var551, sizeof(var551), "var551");
if((myvar0 == 1) && (var551 >= 0) && (var551 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var552;
klee_make_symbolic(&var552, sizeof(var552), "var552");
if((myvar0 == 1) && (var552 >= 0) && (var552 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var553;
klee_make_symbolic(&var553, sizeof(var553), "var553");
if((myvar0 == 1) && (var553 >= 0) && (var553 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var554;
klee_make_symbolic(&var554, sizeof(var554), "var554");
if((myvar0 == 1) && (var554 >= 0) && (var554 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var555;
klee_make_symbolic(&var555, sizeof(var555), "var555");
if((myvar0 == 1) && (var555 >= 0) && (var555 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var556;
klee_make_symbolic(&var556, sizeof(var556), "var556");
if((myvar0 == 1) && (var556 >= 0) && (var556 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var557;
klee_make_symbolic(&var557, sizeof(var557), "var557");
if((myvar0 == 1) && (var557 >= 0) && (var557 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var558;
klee_make_symbolic(&var558, sizeof(var558), "var558");
if((myvar0 == 1) && (var558 >= 0) && (var558 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var559;
klee_make_symbolic(&var559, sizeof(var559), "var559");
if((myvar0 == 1) && (var559 >= 0) && (var559 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var560;
klee_make_symbolic(&var560, sizeof(var560), "var560");
if((myvar0 == 1) && (var560 >= 0) && (var560 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var561;
klee_make_symbolic(&var561, sizeof(var561), "var561");
if((myvar0 == 1) && (var561 >= 0) && (var561 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var562;
klee_make_symbolic(&var562, sizeof(var562), "var562");
if((myvar0 == 1) && (var562 >= 0) && (var562 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var563;
klee_make_symbolic(&var563, sizeof(var563), "var563");
if((myvar0 == 1) && (var563 >= 0) && (var563 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var564;
klee_make_symbolic(&var564, sizeof(var564), "var564");
if((myvar0 == 1) && (var564 >= 0) && (var564 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var565;
klee_make_symbolic(&var565, sizeof(var565), "var565");
if((myvar0 == 1) && (var565 >= 0) && (var565 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var566;
klee_make_symbolic(&var566, sizeof(var566), "var566");
if((myvar0 == 1) && (var566 >= 0) && (var566 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var567;
klee_make_symbolic(&var567, sizeof(var567), "var567");
if((myvar0 == 1) && (var567 >= 0) && (var567 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var568;
klee_make_symbolic(&var568, sizeof(var568), "var568");
if((myvar0 == 1) && (var568 >= 0) && (var568 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var569;
klee_make_symbolic(&var569, sizeof(var569), "var569");
if((myvar0 == 1) && (var569 >= 0) && (var569 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var570;
klee_make_symbolic(&var570, sizeof(var570), "var570");
if((myvar0 == 1) && (var570 >= 0) && (var570 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var571;
klee_make_symbolic(&var571, sizeof(var571), "var571");
if((myvar0 == 1) && (var571 >= 0) && (var571 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var572;
klee_make_symbolic(&var572, sizeof(var572), "var572");
if((myvar0 == 1) && (var572 >= 0) && (var572 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var573;
klee_make_symbolic(&var573, sizeof(var573), "var573");
if((myvar0 == 1) && (var573 >= 0) && (var573 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var574;
klee_make_symbolic(&var574, sizeof(var574), "var574");
if((myvar0 == 1) && (var574 >= 0) && (var574 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var575;
klee_make_symbolic(&var575, sizeof(var575), "var575");
if((myvar0 == 1) && (var575 >= 0) && (var575 <= 23)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var117 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var214 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var324 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var324 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var324 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var407 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var407 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var407 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var410 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var467 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var467 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var467 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var467 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var471 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var471 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var471 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var474 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var474 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var474 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var474 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var479 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var479 != var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var479 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var479 != var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var479 != var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var492 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var494 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var497 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var501 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var516 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var520 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var522 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var522 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var538 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var538 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var539 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var541 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var541 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var541 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var544 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var544 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var544 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var544 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var544 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var544 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var545 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var545 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var555 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var564 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var564 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var564 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var564 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var566 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var566 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var566 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var566 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var571 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var571 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var571 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var571 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var574 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var574 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var574 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var364)*(var364 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var531)*(var531 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var575)*(var575 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var155)*(var155 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var159)*(var159 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var226)*(var226 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var323)*(var323 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var373)*(var373 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var438)*(var438 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var452)*(var452 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var460)*(var460 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var526)*(var526 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var32)*(var32 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var119)*(var119 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var143)*(var143 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var215)*(var215 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var26)*(var26 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var263)*(var263 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var283)*(var283 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var341)*(var341 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var411)*(var411 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var539)*(var539 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var14)*(var14 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var185)*(var185 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var243)*(var243 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var27)*(var27 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var346)*(var346 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var376)*(var376 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var565)*(var565 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var174)*(var174 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var357)*(var357 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var469)*(var469 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var472)*(var472 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var522)*(var522 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var13)*(var13 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var443)*(var443 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var47)*(var47 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var501)*(var501 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var14)*(var14 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var185)*(var185 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var201)*(var201 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var27)*(var27 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var344)*(var344 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var346)*(var346 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var353)*(var353 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var53)*(var53 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var565)*(var565 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var76)*(var76 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var95)*(var95 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var110)*(var110 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var122)*(var122 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var141)*(var141 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var206)*(var206 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var230)*(var230 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var449)*(var449 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var208)*(var208 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var348)*(var348 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var399)*(var399 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var550)*(var550 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var79)*(var79 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var94)*(var94 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var197)*(var197 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var28)*(var28 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var427)*(var427 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var514)*(var514 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var13)*(var13 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var30)*(var30 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var308)*(var308 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var47)*(var47 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var49)*(var49 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var501)*(var501 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var554)*(var554 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var197)*(var197 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var271)*(var271 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var28)*(var28 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var356)*(var356 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var462)*(var462 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var59)*(var59 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var88)*(var88 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var332)*(var332 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var340)*(var340 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var369)*(var369 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var449)*(var449 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var454)*(var454 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var229)*(var229 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var425)*(var425 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var520)*(var520 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var379)*(var379 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var401)*(var401 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var252)*(var252 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var398)*(var398 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var417)*(var417 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var420)*(var420 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var560)*(var560 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var574)*(var574 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var105)*(var105 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var110)*(var110 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var206)*(var206 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var280)*(var280 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var295)*(var295 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var3)*(var3 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var332)*(var332 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var343)*(var343 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var454)*(var454 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var157)*(var157 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var242)*(var242 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var25)*(var25 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var254)*(var254 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var288)*(var288 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var13)*(var13 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var443)*(var443 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var47)*(var47 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var49)*(var49 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var119)*(var119 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var26)*(var26 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var263)*(var263 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var446)*(var446 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var475)*(var475 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var525)*(var525 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var143)*(var143 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var26)*(var26 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var263)*(var263 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var446)*(var446 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var475)*(var475 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var525)*(var525 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var135)*(var135 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var160)*(var160 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var240)*(var240 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var96)*(var96 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var279)*(var279 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var284)*(var284 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var345)*(var345 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var45)*(var45 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var110)*(var110 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var206)*(var206 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var230)*(var230 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var231)*(var231 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var332)*(var332 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var340)*(var340 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var449)*(var449 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var454)*(var454 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var129)*(var129 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var210)*(var210 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var457)*(var457 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var464)*(var464 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var473)*(var473 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var503)*(var503 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var86)*(var86 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var108)*(var108 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var213)*(var213 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var285)*(var285 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var396)*(var396 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var15)*(var15 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var229)*(var229 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var425)*(var425 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var505)*(var505 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var520)*(var520 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var123)*(var123 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var210)*(var210 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var214)*(var214 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var275)*(var275 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var456)*(var456 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var464)*(var464 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var473)*(var473 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var503)*(var503 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var524)*(var524 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var86)*(var86 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var210)*(var210 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var214)*(var214 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var276)*(var276 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var350)*(var350 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var464)*(var464 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var86)*(var86 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var134)*(var134 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var139)*(var139 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var16)*(var16 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var183)*(var183 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var282)*(var282 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var316)*(var316 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var359)*(var359 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var402)*(var402 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var415)*(var415 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var478)*(var478 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var538)*(var538 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var552)*(var552 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var90)*(var90 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var120)*(var120 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var135)*(var135 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var209)*(var209 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var234)*(var234 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var241)*(var241 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var176)*(var176 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var40)*(var40 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var555)*(var555 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var158)*(var158 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var407)*(var407 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var478)*(var478 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var552)*(var552 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var73)*(var73 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var160)*(var160 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var121)*(var121 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var173)*(var173 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var38)*(var38 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var511)*(var511 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var82)*(var82 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var110)*(var110 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var141)*(var141 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var163)*(var163 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var206)*(var206 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var230)*(var230 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var332)*(var332 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var340)*(var340 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var12)*(var12 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var326)*(var326 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var328)*(var328 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var397)*(var397 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var78)*(var78 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var478)*(var478 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var246)*(var246 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var27)*(var27 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var353)*(var353 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var376)*(var376 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var53)*(var53 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var145)*(var145 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var180)*(var180 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var304)*(var304 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var325)*(var325 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var360)*(var360 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var410)*(var410 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var414)*(var414 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var507)*(var507 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var513)*(var513 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var542)*(var542 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var175)*(var175 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var357)*(var357 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var370)*(var370 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var472)*(var472 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var67)*(var67 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var149)*(var149 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var304)*(var304 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var310)*(var310 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var437)*(var437 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var513)*(var513 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var12)*(var12 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var235)*(var235 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var367)*(var367 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var146)*(var146 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var20)*(var20 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var255)*(var255 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var326)*(var326 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var328)*(var328 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var397)*(var397 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var429)*(var429 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var516)*(var516 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var57)*(var57 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var78)*(var78 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var134)*(var134 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var158)*(var158 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var359)*(var359 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var402)*(var402 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var407)*(var407 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var478)*(var478 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var538)*(var538 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var552)*(var552 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var437)*(var437 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var507)*(var507 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var513)*(var513 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var111)*(var111 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var229)*(var229 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var425)*(var425 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var22)*(var22 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var249)*(var249 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var258)*(var258 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var264)*(var264 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var281)*(var281 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var333)*(var333 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var372)*(var372 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var182)*(var182 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var296)*(var296 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var379)*(var379 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var383)*(var383 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var435)*(var435 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var69)*(var69 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var136)*(var136 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var173)*(var173 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var181)*(var181 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var207)*(var207 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var279)*(var279 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var345)*(var345 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var392)*(var392 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var413)*(var413 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var439)*(var439 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var447)*(var447 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var511)*(var511 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var532)*(var532 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var82)*(var82 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var102)*(var102 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var144)*(var144 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var260)*(var260 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var394)*(var394 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var472)*(var472 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var500)*(var500 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var502)*(var502 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var522)*(var522 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var529)*(var529 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var54)*(var54 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var562)*(var562 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var175)*(var175 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var54)*(var54 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var259)*(var259 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var323)*(var323 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var481)*(var481 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var535)*(var535 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var259)*(var259 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var322)*(var322 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var438)*(var438 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var460)*(var460 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var535)*(var535 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var317)*(var317 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var259)*(var259 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var342)*(var342 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var134)*(var134 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var158)*(var158 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var407)*(var407 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var433)*(var433 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var552)*(var552 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var135)*(var135 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var408)*(var408 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var41)*(var41 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var566)*(var566 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var570)*(var570 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var96)*(var96 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var230)*(var230 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var231)*(var231 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var340)*(var340 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var369)*(var369 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var449)*(var449 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var121)*(var121 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var181)*(var181 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var345)*(var345 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var361)*(var361 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var39)*(var39 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var392)*(var392 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var413)*(var413 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var430)*(var430 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var511)*(var511 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var82)*(var82 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var149)*(var149 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var310)*(var310 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var437)*(var437 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var507)*(var507 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var513)*(var513 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var548)*(var548 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var7)*(var7 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var208)*(var208 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var216)*(var216 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var268)*(var268 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var307)*(var307 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var337)*(var337 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var375)*(var375 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var479)*(var479 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var549)*(var549 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var550)*(var550 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var97)*(var97 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var216)*(var216 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var247)*(var247 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var298)*(var298 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var307)*(var307 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var348)*(var348 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var375)*(var375 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var399)*(var399 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var479)*(var479 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var549)*(var549 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var550)*(var550 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var79)*(var79 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var94)*(var94 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var322)*(var322 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var373)*(var373 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var432)*(var432 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var438)*(var438 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var145)*(var145 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var165)*(var165 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var180)*(var180 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var198)*(var198 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var267)*(var267 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var325)*(var325 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var437)*(var437 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var542)*(var542 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var548)*(var548 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var7)*(var7 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var314)*(var314 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var32)*(var32 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var494)*(var494 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var528)*(var528 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var541)*(var541 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var568)*(var568 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var72)*(var72 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var89)*(var89 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var266)*(var266 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var302)*(var302 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var364)*(var364 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var393)*(var393 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var493)*(var493 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var496)*(var496 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var499)*(var499 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var536)*(var536 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var543)*(var543 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var564)*(var564 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var575)*(var575 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var77)*(var77 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var185)*(var185 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var27)*(var27 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var289)*(var289 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var376)*(var376 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var442)*(var442 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var534)*(var534 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var113)*(var113 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var292)*(var292 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var294)*(var294 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var354)*(var354 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var365)*(var365 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var396)*(var396 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var533)*(var533 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var39)*(var39 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var447)*(var447 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var511)*(var511 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var154)*(var154 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var175)*(var175 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var370)*(var370 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var67)*(var67 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var522)*(var522 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var67)*(var67 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var196)*(var196 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var40)*(var40 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var555)*(var555 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var133)*(var133 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var409)*(var409 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var434)*(var434 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var440)*(var440 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var118)*(var118 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var187)*(var187 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var245)*(var245 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var257)*(var257 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var26)*(var26 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var263)*(var263 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var283)*(var283 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var303)*(var303 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var341)*(var341 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var411)*(var411 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var446)*(var446 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var515)*(var515 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var525)*(var525 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var22)*(var22 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var264)*(var264 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var281)*(var281 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var363)*(var363 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var372)*(var372 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var557)*(var557 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var13)*(var13 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var237)*(var237 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var30)*(var30 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var318)*(var318 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var336)*(var336 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var339)*(var339 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var47)*(var47 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var145)*(var145 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var149)*(var149 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var165)*(var165 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var304)*(var304 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var310)*(var310 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var410)*(var410 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var437)*(var437 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var507)*(var507 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var513)*(var513 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var7)*(var7 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var136)*(var136 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var207)*(var207 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var284)*(var284 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var345)*(var345 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var38)*(var38 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var413)*(var413 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var532)*(var532 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var287)*(var287 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var407)*(var407 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var433)*(var433 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var478)*(var478 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var538)*(var538 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var552)*(var552 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var189)*(var189 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var31)*(var31 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var398)*(var398 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var417)*(var417 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var574)*(var574 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var534)*(var534 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var203)*(var203 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var248)*(var248 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var272)*(var272 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var293)*(var293 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var119)*(var119 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var143)*(var143 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var26)*(var26 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var263)*(var263 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var283)*(var283 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var341)*(var341 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var411)*(var411 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var446)*(var446 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var475)*(var475 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var515)*(var515 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var525)*(var525 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var112)*(var112 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var182)*(var182 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var211)*(var211 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var222)*(var222 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var379)*(var379 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var383)*(var383 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var389)*(var389 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var465)*(var465 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var98)*(var98 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var233)*(var233 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var398)*(var398 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var417)*(var417 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var420)*(var420 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var423)*(var423 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var519)*(var519 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var574)*(var574 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var151)*(var151 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var188)*(var188 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var211)*(var211 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var222)*(var222 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var324)*(var324 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var358)*(var358 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var379)*(var379 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var403)*(var403 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var435)*(var435 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var495)*(var495 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var203)*(var203 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var21)*(var21 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var248)*(var248 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var293)*(var293 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var319)*(var319 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var327)*(var327 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var35)*(var35 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var477)*(var477 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var561)*(var561 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var74)*(var74 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var132)*(var132 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var160)*(var160 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var162)*(var162 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var199)*(var199 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var209)*(var209 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var234)*(var234 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var240)*(var240 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var241)*(var241 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var338)*(var338 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var347)*(var347 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var466)*(var466 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var570)*(var570 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var111)*(var111 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var229)*(var229 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var300)*(var300 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var320)*(var320 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var349)*(var349 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var448)*(var448 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var505)*(var505 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var520)*(var520 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var112)*(var112 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var182)*(var182 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var188)*(var188 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var287)*(var287 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var296)*(var296 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var379)*(var379 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var383)*(var383 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var401)*(var401 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var403)*(var403 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var111)*(var111 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var127)*(var127 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var192)*(var192 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var36)*(var36 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var425)*(var425 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var486)*(var486 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var505)*(var505 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var509)*(var509 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var494)*(var494 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var541)*(var541 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var547)*(var547 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var66)*(var66 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var377)*(var377 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var427)*(var427 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var451)*(var451 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var462)*(var462 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var488)*(var488 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var514)*(var514 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var537)*(var537 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var180)*(var180 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var304)*(var304 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var410)*(var410 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var507)*(var507 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var52)*(var52 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var548)*(var548 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var162)*(var162 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var241)*(var241 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var566)*(var566 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var570)*(var570 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var96)*(var96 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var116)*(var116 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var157)*(var157 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var232)*(var232 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var242)*(var242 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var25)*(var25 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var254)*(var254 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var146)*(var146 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var235)*(var235 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var255)*(var255 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var367)*(var367 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var78)*(var78 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var189)*(var189 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var252)*(var252 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var398)*(var398 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var423)*(var423 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var523)*(var523 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var560)*(var560 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var185)*(var185 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var243)*(var243 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var27)*(var27 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var289)*(var289 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var346)*(var346 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var534)*(var534 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var565)*(var565 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var76)*(var76 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var266)*(var266 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var302)*(var302 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var312)*(var312 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var364)*(var364 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var393)*(var393 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var44)*(var44 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var497)*(var497 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var536)*(var536 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var564)*(var564 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var575)*(var575 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var77)*(var77 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var248)*(var248 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var556)*(var556 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var394)*(var394 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var469)*(var469 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var522)*(var522 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var562)*(var562 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var67)*(var67 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var176)*(var176 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var332)*(var332 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var206 - var340)*(var340 - var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var121)*(var121 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var173)*(var173 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var284)*(var284 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var38)*(var38 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var45)*(var45 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var532)*(var532 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var82)*(var82 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var216)*(var216 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var307)*(var307 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var559)*(var559 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var94)*(var94 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var97)*(var97 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var120)*(var120 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var160)*(var160 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var199)*(var199 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var240)*(var240 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var338)*(var338 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var408)*(var408 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var566)*(var566 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var96)*(var96 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var203)*(var203 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var248)*(var248 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var272)*(var272 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var293)*(var293 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var319)*(var319 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var327)*(var327 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var9)*(var9 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var457)*(var457 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var464)*(var464 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var80)*(var80 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var86)*(var86 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var112)*(var112 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var296)*(var296 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var379)*(var379 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var401)*(var401 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var495)*(var495 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var186)*(var186 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var190)*(var190 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var203)*(var203 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var21)*(var21 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var248)*(var248 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var272)*(var272 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var293)*(var293 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var327)*(var327 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var381)*(var381 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var416)*(var416 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var556)*(var556 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var561)*(var561 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var74)*(var74 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var9)*(var9 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var113)*(var113 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var285)*(var285 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var436)*(var436 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var530)*(var530 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var350)*(var350 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var464)*(var464 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var80)*(var80 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var143)*(var143 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var26)*(var26 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var341)*(var341 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var446)*(var446 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var475)*(var475 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var539)*(var539 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var247)*(var247 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var213)*(var213 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var261)*(var261 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var313)*(var313 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var396)*(var396 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var424)*(var424 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var436)*(var436 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var467)*(var467 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var530)*(var530 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var75)*(var75 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var12)*(var12 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var138)*(var138 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var147)*(var147 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var255)*(var255 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var262)*(var262 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var326)*(var326 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var328)*(var328 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var367)*(var367 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var397)*(var397 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var429)*(var429 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var506)*(var506 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var249)*(var249 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var281)*(var281 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var330)*(var330 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var545)*(var545 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var65)*(var65 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var123)*(var123 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var129)*(var129 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var276)*(var276 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var457)*(var457 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var464)*(var464 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var473)*(var473 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var116)*(var116 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var157)*(var157 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var232)*(var232 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var254)*(var254 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var277)*(var277 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var288)*(var288 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var317)*(var317 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var51)*(var51 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var151)*(var151 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var287)*(var287 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var290)*(var290 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var296)*(var296 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var324)*(var324 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var379)*(var379 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var401)*(var401 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var435)*(var435 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var465)*(var465 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var495)*(var495 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var159)*(var159 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var168)*(var168 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var226)*(var226 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var278)*(var278 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var301)*(var301 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var322)*(var322 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var323)*(var323 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var342)*(var342 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var384)*(var384 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var452)*(var452 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var460)*(var460 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var192)*(var192 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var229)*(var229 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var300)*(var300 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var36)*(var36 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var486)*(var486 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var509)*(var509 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var520)*(var520 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var60)*(var60 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var110)*(var110 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var137)*(var137 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var231)*(var231 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var280)*(var280 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var295)*(var295 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var441)*(var441 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var454)*(var454 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var168)*(var168 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var301)*(var301 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var322)*(var322 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var342)*(var342 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var373)*(var373 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var438)*(var438 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var460)*(var460 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var10)*(var10 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var32)*(var32 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var321)*(var321 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var42)*(var42 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var458)*(var458 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var484)*(var484 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var66)*(var66 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var89)*(var89 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var140)*(var140 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var258)*(var258 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var264)*(var264 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var281)*(var281 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var330)*(var330 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var333)*(var333 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var422)*(var422 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var48)*(var48 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var545)*(var545 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var557)*(var557 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var230 - var231)*(var231 - var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var25)*(var25 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var288)*(var288 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var291)*(var291 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var317)*(var317 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var423)*(var423 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var135)*(var135 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var160)*(var160 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var96)*(var96 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var12)*(var12 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var114)*(var114 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var252)*(var252 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var417)*(var417 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var523)*(var523 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var560)*(var560 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var103)*(var103 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var30)*(var30 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var308)*(var308 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var318)*(var318 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var443)*(var443 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var47)*(var47 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var501)*(var501 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var554)*(var554 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var109)*(var109 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var237)*(var237 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var318)*(var318 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var339)*(var339 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var443)*(var443 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var47)*(var47 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var501)*(var501 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var554)*(var554 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var266)*(var266 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var482)*(var482 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var496)*(var496 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var497)*(var497 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var499)*(var499 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var531)*(var531 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var543)*(var543 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var564)*(var564 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var575)*(var575 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var63)*(var63 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var77)*(var77 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var160)*(var160 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var408)*(var408 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var120)*(var120 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var160)*(var160 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var566)*(var566 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var157)*(var157 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var25)*(var25 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var277)*(var277 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var288)*(var288 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var291)*(var291 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var317)*(var317 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var185)*(var185 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var289)*(var289 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var346)*(var346 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var376)*(var376 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var534)*(var534 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var10)*(var10 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var195)*(var195 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var227)*(var227 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var314)*(var314 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var32)*(var32 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var321)*(var321 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var431)*(var431 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var458)*(var458 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var528)*(var528 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var541)*(var541 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var66)*(var66 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var72)*(var72 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var89)*(var89 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var119)*(var119 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var143)*(var143 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var215)*(var215 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var263)*(var263 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var411)*(var411 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var525)*(var525 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var539)*(var539 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var185)*(var185 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var289)*(var289 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var344)*(var344 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var518)*(var518 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var534)*(var534 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var95)*(var95 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var140)*(var140 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var288)*(var288 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var317)*(var317 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var117)*(var117 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var308)*(var308 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var318)*(var318 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var339)*(var339 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var443)*(var443 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var501)*(var501 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var170)*(var170 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var202)*(var202 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var302)*(var302 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var312)*(var312 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var364)*(var364 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var493)*(var493 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var496)*(var496 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var536)*(var536 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var564)*(var564 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var575)*(var575 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var63)*(var63 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var423)*(var423 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var242)*(var242 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var25)*(var25 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var277)*(var277 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var291)*(var291 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var51)*(var51 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var56)*(var56 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var196)*(var196 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var40)*(var40 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var434)*(var434 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var455)*(var455 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var471)*(var471 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var6)*(var6 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var118)*(var118 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var119)*(var119 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var187)*(var187 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var303)*(var303 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var341)*(var341 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var140)*(var140 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var264)*(var264 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var281)*(var281 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var330)*(var330 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var368)*(var368 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var65)*(var65 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var143)*(var143 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var263)*(var263 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var446)*(var446 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var475)*(var475 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var102)*(var102 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var174)*(var174 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var204)*(var204 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var394)*(var394 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var472)*(var472 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var54)*(var54 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var67)*(var67 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var113)*(var113 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var285)*(var285 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var313)*(var313 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var424)*(var424 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var436)*(var436 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var467)*(var467 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var146)*(var146 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var20)*(var20 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var235)*(var235 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var255)*(var255 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var328)*(var328 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var334)*(var334 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var367)*(var367 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var429)*(var429 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var368)*(var368 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var545)*(var545 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var65)*(var65 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var106)*(var106 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var208)*(var208 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var268)*(var268 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var298)*(var298 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var337)*(var337 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var399)*(var399 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var521)*(var521 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var550)*(var550 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var559)*(var559 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var79)*(var79 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var94)*(var94 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var575)*(var575 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var149)*(var149 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var304)*(var304 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var507)*(var507 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var548)*(var548 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var298)*(var298 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var399)*(var399 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var97)*(var97 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var12)*(var12 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var146)*(var146 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var147)*(var147 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var20)*(var20 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var218)*(var218 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var255)*(var255 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var262)*(var262 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var326)*(var326 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var328)*(var328 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var334)*(var334 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var506)*(var506 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var516)*(var516 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var57)*(var57 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var78)*(var78 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var185)*(var185 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var243)*(var243 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var346)*(var346 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var353)*(var353 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var376)*(var376 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var195)*(var195 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var314)*(var314 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var42)*(var42 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var444)*(var444 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var458)*(var458 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var484)*(var484 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var494)*(var494 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var541)*(var541 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var547)*(var547 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var89)*(var89 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var197)*(var197 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var28)*(var28 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var329)*(var329 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var377)*(var377 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var421)*(var421 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var427)*(var427 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var451)*(var451 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var59)*(var59 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var248)*(var248 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var327)*(var327 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var74)*(var74 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var210)*(var210 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var214)*(var214 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var220)*(var220 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var350)*(var350 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var388)*(var388 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var457)*(var457 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var473)*(var473 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var5)*(var5 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var503)*(var503 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var524)*(var524 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var86)*(var86 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var200)*(var200 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var31)*(var31 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var405)*(var405 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var417)*(var417 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var420)*(var420 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var423)*(var423 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var519)*(var519 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var81)*(var81 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var91)*(var91 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var129)*(var129 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var210)*(var210 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var220)*(var220 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var276)*(var276 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var464)*(var464 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var473)*(var473 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var524)*(var524 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var214)*(var214 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var1)*(var1 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var156)*(var156 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var168)*(var168 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var226)*(var226 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var322)*(var322 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var373)*(var373 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var384)*(var384 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var452)*(var452 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var481)*(var481 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var526)*(var526 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var535)*(var535 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var462)*(var462 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var537)*(var537 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var141)*(var141 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var163)*(var163 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var230)*(var230 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var231)*(var231 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var340)*(var340 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var369)*(var369 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var441)*(var441 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var454)*(var454 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var140)*(var140 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var249)*(var249 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var148)*(var148 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var16)*(var16 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var183)*(var183 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var316)*(var316 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var359)*(var359 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var402)*(var402 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var407)*(var407 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var433)*(var433 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var118)*(var118 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var119)*(var119 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var143)*(var143 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var26)*(var26 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var341)*(var341 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var411)*(var411 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var446)*(var446 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var539)*(var539 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var39)*(var39 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var511)*(var511 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var108)*(var108 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var113)*(var113 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var203)*(var203 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var248)*(var248 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var272)*(var272 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var517)*(var517 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var556)*(var556 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var74)*(var74 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var379)*(var379 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var401)*(var401 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var495)*(var495 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var157)*(var157 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var317)*(var317 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var185)*(var185 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var346)*(var346 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var95)*(var95 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var112)*(var112 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var287)*(var287 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var379)*(var379 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var401)*(var401 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var435)*(var435 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var465)*(var465 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var495)*(var495 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var157)*(var157 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var25)*(var25 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var277)*(var277 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var288)*(var288 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var317)*(var317 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var124)*(var124 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var213)*(var213 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var261)*(var261 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var294)*(var294 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var306)*(var306 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var396)*(var396 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var424)*(var424 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var436)*(var436 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var467)*(var467 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var530)*(var530 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var533)*(var533 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var61)*(var61 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var272)*(var272 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var286)*(var286 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var74)*(var74 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var108)*(var108 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var124)*(var124 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var424)*(var424 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var436)*(var436 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var530)*(var530 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var61)*(var61 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var75)*(var75 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var122)*(var122 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var163)*(var163 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var280)*(var280 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var340)*(var340 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var441)*(var441 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var449)*(var449 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var454)*(var454 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var112)*(var112 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var182)*(var182 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var287)*(var287 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var401)*(var401 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var465)*(var465 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var495)*(var495 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var110)*(var110 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var115)*(var115 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var122)*(var122 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var137)*(var137 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var141)*(var141 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var163)*(var163 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var230)*(var230 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var231)*(var231 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var340)*(var340 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var441)*(var441 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var449)*(var449 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var216)*(var216 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var247)*(var247 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var307)*(var307 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var190)*(var190 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var21)*(var21 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var248)*(var248 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var286)*(var286 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var293)*(var293 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var319)*(var319 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var327)*(var327 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var35)*(var35 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var381)*(var381 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var477)*(var477 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var561)*(var561 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var71)*(var71 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var74)*(var74 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var9)*(var9 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var105)*(var105 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var141)*(var141 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var225)*(var225 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var230)*(var230 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var295)*(var295 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var343)*(var343 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var369)*(var369 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var441)*(var441 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var454)*(var454 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var554)*(var554 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var29)*(var29 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var425)*(var425 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var470)*(var470 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var266)*(var266 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var118)*(var118 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var119)*(var119 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var245)*(var245 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var341)*(var341 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var411)*(var411 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var446)*(var446 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var475)*(var475 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var437)*(var437 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var507)*(var507 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var548)*(var548 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var7)*(var7 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var107)*(var107 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var197)*(var197 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var271)*(var271 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var356)*(var356 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var371)*(var371 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var391)*(var391 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var427)*(var427 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var451)*(var451 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var537)*(var537 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var108)*(var108 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var124)*(var124 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var217)*(var217 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var285)*(var285 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var294)*(var294 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var354)*(var354 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var467)*(var467 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var13)*(var13 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var30)*(var30 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var443)*(var443 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var554)*(var554 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var116)*(var116 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var157)*(var157 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var232)*(var232 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var25)*(var25 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var277)*(var277 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var288)*(var288 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var315)*(var315 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var34)*(var34 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var459)*(var459 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var483)*(var483 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var51)*(var51 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var573)*(var573 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var99)*(var99 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var420)*(var420 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var519)*(var519 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var560)*(var560 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var574)*(var574 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var310 - var507)*(var507 - var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var134)*(var134 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var148)*(var148 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var158)*(var158 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var16)*(var16 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var282)*(var282 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var316)*(var316 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var402)*(var402 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var407)*(var407 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var64)*(var64 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var0)*(var0 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var266)*(var266 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var302)*(var302 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var44)*(var44 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var531)*(var531 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var575)*(var575 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var63)*(var63 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var124)*(var124 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var213)*(var213 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var285)*(var285 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var354)*(var354 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var396)*(var396 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var424)*(var424 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var467)*(var467 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var10)*(var10 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var195)*(var195 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var494)*(var494 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var157)*(var157 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var221)*(var221 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var242)*(var242 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var291)*(var291 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var317)*(var317 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var51)*(var51 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var56)*(var56 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var134)*(var134 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var16)*(var16 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var183)*(var183 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var359)*(var359 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var478)*(var478 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var538)*(var538 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var552)*(var552 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var103)*(var103 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var109)*(var109 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var30)*(var30 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var47)*(var47 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var501)*(var501 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var248)*(var248 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var286)*(var286 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var293)*(var293 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var477)*(var477 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var111)*(var111 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var425)*(var425 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var470)*(var470 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var505)*(var505 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var520)*(var520 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var60)*(var60 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var8)*(var8 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var10)*(var10 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var195)*(var195 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var270)*(var270 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var314)*(var314 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var32)*(var32 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var42)*(var42 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var547)*(var547 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var568)*(var568 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var72)*(var72 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var89)*(var89 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var159)*(var159 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var301)*(var301 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var481)*(var481 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var159)*(var159 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var259)*(var259 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var301)*(var301 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var322)*(var322 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var342)*(var342 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var373)*(var373 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var432)*(var432 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var481)*(var481 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var112)*(var112 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var182)*(var182 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var287)*(var287 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var290)*(var290 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var296)*(var296 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var379)*(var379 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var435)*(var435 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var495)*(var495 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var149)*(var149 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var165)*(var165 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var437)*(var437 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var507)*(var507 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var513)*(var513 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var542)*(var542 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var548)*(var548 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var7)*(var7 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var12)*(var12 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var235)*(var235 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var255)*(var255 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var367)*(var367 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var248)*(var248 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var146)*(var146 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var20)*(var20 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var255)*(var255 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var367)*(var367 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var397)*(var397 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var429)*(var429 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var78)*(var78 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var391)*(var391 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var451)*(var451 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var462)*(var462 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var488)*(var488 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var114)*(var114 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var184)*(var184 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var189)*(var189 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var233)*(var233 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var274)*(var274 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var405)*(var405 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var417)*(var417 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var423)*(var423 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var519)*(var519 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var574)*(var574 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var81)*(var81 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var368)*(var368 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var40)*(var40 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var555)*(var555 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var230)*(var230 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var231)*(var231 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var22)*(var22 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var258)*(var258 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var368)*(var368 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var372)*(var372 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var422)*(var422 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var65)*(var65 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var146)*(var146 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var20)*(var20 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var326)*(var326 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var328)*(var328 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var367)*(var367 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var429)*(var429 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var78)*(var78 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var133)*(var133 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var196)*(var196 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var205)*(var205 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var409)*(var409 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var434)*(var434 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var471)*(var471 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var109)*(var109 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var117)*(var117 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var250)*(var250 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var30)*(var30 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var49)*(var49 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var501)*(var501 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var208)*(var208 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var216)*(var216 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var268)*(var268 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var298)*(var298 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var307)*(var307 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var348)*(var348 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var521)*(var521 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var549)*(var549 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var559)*(var559 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var120)*(var120 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var240)*(var240 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var241)*(var241 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var408)*(var408 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var566)*(var566 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var570)*(var570 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var109)*(var109 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var237)*(var237 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var308)*(var308 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var318)*(var318 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var443)*(var443 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var49)*(var49 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var554)*(var554 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var116)*(var116 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var157)*(var157 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var2)*(var2 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var232)*(var232 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var242)*(var242 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var25)*(var25 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var254)*(var254 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var288)*(var288 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var291)*(var291 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var315)*(var315 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var317)*(var317 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var483)*(var483 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var56)*(var56 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var573)*(var573 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var99)*(var99 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var141)*(var141 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var332)*(var332 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var369)*(var369 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var341 - var143)*(var143 - var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var301)*(var301 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var105)*(var105 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var110)*(var110 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var137)*(var137 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var163)*(var163 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var206)*(var206 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var280)*(var280 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var295)*(var295 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var332)*(var332 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var369)*(var369 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var185)*(var185 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var289)*(var289 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var346)*(var346 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var534)*(var534 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var279)*(var279 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var39)*(var39 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var45)*(var45 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var82)*(var82 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var534)*(var534 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var95)*(var95 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var135)*(var135 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var199)*(var199 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var240)*(var240 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var241)*(var241 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var408)*(var408 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var466)*(var466 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var544)*(var544 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var208)*(var208 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var298)*(var298 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var549)*(var549 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var550)*(var550 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var79)*(var79 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var94)*(var94 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var111)*(var111 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var15)*(var15 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var300)*(var300 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var505)*(var505 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var520)*(var520 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var203)*(var203 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var248)*(var248 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var272)*(var272 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var286)*(var286 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var293)*(var293 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var319)*(var319 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var477)*(var477 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var556)*(var556 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var457)*(var457 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var80)*(var80 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var15)*(var15 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var194)*(var194 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var29)*(var29 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var300)*(var300 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var320)*(var320 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var448)*(var448 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var505)*(var505 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var509)*(var509 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var12)*(var12 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var20)*(var20 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var262)*(var262 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var269)*(var269 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var326)*(var326 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var328)*(var328 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var334)*(var334 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var367)*(var367 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var429)*(var429 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var506)*(var506 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var57)*(var57 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var78)*(var78 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var185)*(var185 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var246)*(var246 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var289)*(var289 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var346)*(var346 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var376)*(var376 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var518)*(var518 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var534)*(var534 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var95)*(var95 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var108)*(var108 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var113)*(var113 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var148)*(var148 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var158)*(var158 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var183)*(var183 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var282)*(var282 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var402)*(var402 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var407)*(var407 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var415)*(var415 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var538)*(var538 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var552)*(var552 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var64)*(var64 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var107)*(var107 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var197)*(var197 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var28)*(var28 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var329)*(var329 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var371)*(var371 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var391)*(var391 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var427)*(var427 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var514)*(var514 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var59)*(var59 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var370)*(var370 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var472)*(var472 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var151)*(var151 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var182)*(var182 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var188)*(var188 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var222)*(var222 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var296)*(var296 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var324)*(var324 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var403)*(var403 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var435)*(var435 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var495)*(var495 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var69)*(var69 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var98)*(var98 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var478)*(var478 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var73)*(var73 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var111)*(var111 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var15)*(var15 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var425)*(var425 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var520)*(var520 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var8)*(var8 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var149)*(var149 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var165)*(var165 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var169)*(var169 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var198)*(var198 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var304)*(var304 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var310)*(var310 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var410)*(var410 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var437)*(var437 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var136)*(var136 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var152)*(var152 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var181)*(var181 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var38)*(var38 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var39)*(var39 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var392)*(var392 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var413)*(var413 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var430)*(var430 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var45)*(var45 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var511)*(var511 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var314)*(var314 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var458)*(var458 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var484)*(var484 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var494)*(var494 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var72)*(var72 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var89)*(var89 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var368)*(var368 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var65)*(var65 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var266)*(var266 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var575)*(var575 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var124)*(var124 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var213)*(var213 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var217)*(var217 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var294)*(var294 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var306)*(var306 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var354)*(var354 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var436)*(var436 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var467)*(var467 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var530)*(var530 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var61)*(var61 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var75)*(var75 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var22)*(var22 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var23)*(var23 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var264)*(var264 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var330)*(var330 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var333)*(var333 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var363)*(var363 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var418)*(var418 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var48)*(var48 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var557)*(var557 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var140)*(var140 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var249)*(var249 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var332)*(var332 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var133)*(var133 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var177)*(var177 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var205)*(var205 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var385)*(var385 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var426)*(var426 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var455)*(var455 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var510)*(var510 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var571)*(var571 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var6)*(var6 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var154)*(var154 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var54)*(var54 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var107)*(var107 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var197)*(var197 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var28)*(var28 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var329)*(var329 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var451)*(var451 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var462)*(var462 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var485)*(var485 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var488)*(var488 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var512)*(var512 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var514)*(var514 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var537)*(var537 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var59)*(var59 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var140)*(var140 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var258)*(var258 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var264)*(var264 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var281)*(var281 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var422)*(var422 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var159)*(var159 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var259)*(var259 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var481)*(var481 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var247)*(var247 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var298)*(var298 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var348)*(var348 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var521)*(var521 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var549)*(var549 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var559)*(var559 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var79)*(var79 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var97)*(var97 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var534)*(var534 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var391)*(var391 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var488)*(var488 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var537)*(var537 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var103)*(var103 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var109)*(var109 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var117)*(var117 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var13)*(var13 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var18)*(var18 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var237)*(var237 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var250)*(var250 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var30)*(var30 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var308)*(var308 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var318)*(var318 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var501)*(var501 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var554)*(var554 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var465)*(var465 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var121)*(var121 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var173)*(var173 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var279)*(var279 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var284)*(var284 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var39)*(var39 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var45)*(var45 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var82)*(var82 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var186)*(var186 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var190)*(var190 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var203)*(var203 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var21)*(var21 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var286)*(var286 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var293)*(var293 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var319)*(var319 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var327)*(var327 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var416)*(var416 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var477)*(var477 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var517)*(var517 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var556)*(var556 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var561)*(var561 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var120)*(var120 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var132)*(var132 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var162)*(var162 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var199)*(var199 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var209)*(var209 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var240)*(var240 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var241)*(var241 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var408)*(var408 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var466)*(var466 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var544)*(var544 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var566)*(var566 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var96)*(var96 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var182)*(var182 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var287)*(var287 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var290)*(var290 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var156)*(var156 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var159)*(var159 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var168)*(var168 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var259)*(var259 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var301)*(var301 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var342)*(var342 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var373)*(var373 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var452)*(var452 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var481)*(var481 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var526)*(var526 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var196)*(var196 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var40)*(var40 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var409)*(var409 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var471)*(var471 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var6)*(var6 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var157)*(var157 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var221)*(var221 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var232)*(var232 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var242)*(var242 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var25)*(var25 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var254)*(var254 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var277)*(var277 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var288)*(var288 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var317)*(var317 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var99)*(var99 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var107)*(var107 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var197)*(var197 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var28)*(var28 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var329)*(var329 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var356)*(var356 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var371)*(var371 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var427)*(var427 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var451)*(var451 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var488)*(var488 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var537)*(var537 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var123)*(var123 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var129)*(var129 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var210)*(var210 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var220)*(var220 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var276)*(var276 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var457)*(var457 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var5)*(var5 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var503)*(var503 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var524)*(var524 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var80)*(var80 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var112)*(var112 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var211)*(var211 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var222)*(var222 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var290)*(var290 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var296)*(var296 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var379)*(var379 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var383)*(var383 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var401)*(var401 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var435)*(var435 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var465)*(var465 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var495)*(var495 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var15)*(var15 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var229)*(var229 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var29)*(var29 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var300)*(var300 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var349)*(var349 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var36)*(var36 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var425)*(var425 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var470)*(var470 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var505)*(var505 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var520)*(var520 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var60)*(var60 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var8)*(var8 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var28)*(var28 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var136)*(var136 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var173)*(var173 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var413)*(var413 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var439)*(var439 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var45)*(var45 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var532)*(var532 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var0)*(var0 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var266)*(var266 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var44)*(var44 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var575)*(var575 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var63)*(var63 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var357)*(var357 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var370)*(var370 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var522)*(var522 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var54)*(var54 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var551)*(var551 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var562)*(var562 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var149)*(var149 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var198)*(var198 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var304)*(var304 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var325)*(var325 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var437)*(var437 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var508)*(var508 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var52)*(var52 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var542)*(var542 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var548)*(var548 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var7)*(var7 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var108)*(var108 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var113)*(var113 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var530)*(var530 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var12)*(var12 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var235)*(var235 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var255)*(var255 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var326)*(var326 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var367)*(var367 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var78)*(var78 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var252)*(var252 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var423)*(var423 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var208)*(var208 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var216)*(var216 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var247)*(var247 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var298)*(var298 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var307)*(var307 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var521)*(var521 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var549)*(var549 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var379)*(var379 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var552)*(var552 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var151)*(var151 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var182)*(var182 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var222)*(var222 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var296)*(var296 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var379)*(var379 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var383)*(var383 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var389)*(var389 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var495)*(var495 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var184)*(var184 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var233)*(var233 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var252)*(var252 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var420)*(var420 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var519)*(var519 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var560)*(var560 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var574)*(var574 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var233)*(var233 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var236)*(var236 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var252)*(var252 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var31)*(var31 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var404)*(var404 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var417)*(var417 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var423)*(var423 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var523)*(var523 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var405 - var560)*(var560 - var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var13)*(var13 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var18)*(var18 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var250)*(var250 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var30)*(var30 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var308)*(var308 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var318)*(var318 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var43)*(var43 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var443)*(var443 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var47)*(var47 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var49)*(var49 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var501)*(var501 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var527)*(var527 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var554)*(var554 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var552)*(var552 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var133)*(var133 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var205)*(var205 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var331)*(var331 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var434)*(var434 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var440)*(var440 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var471)*(var471 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var120)*(var120 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var135)*(var135 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var160)*(var160 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var234)*(var234 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var241)*(var241 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var408)*(var408 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var145)*(var145 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var149)*(var149 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var165)*(var165 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var267)*(var267 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var7)*(var7 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var118)*(var118 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var26)*(var26 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var341)*(var341 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var525)*(var525 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var539)*(var539 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var100)*(var100 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var118)*(var118 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var187)*(var187 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var215)*(var215 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var26)*(var26 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var263)*(var263 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var283)*(var283 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var303)*(var303 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var341)*(var341 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var411)*(var411 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var476)*(var476 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var539)*(var539 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var121)*(var121 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var207)*(var207 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var284)*(var284 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var39)*(var39 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var82)*(var82 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var165)*(var165 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var169)*(var169 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var180)*(var180 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var198)*(var198 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var267)*(var267 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var360)*(var360 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var410)*(var410 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var508)*(var508 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var542)*(var542 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var7)*(var7 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var134)*(var134 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var139)*(var139 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var148)*(var148 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var402)*(var402 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var64)*(var64 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var90)*(var90 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var186)*(var186 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var203)*(var203 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var21)*(var21 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var248)*(var248 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var272)*(var272 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var477)*(var477 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var74)*(var74 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var420)*(var420 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var179)*(var179 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var22)*(var22 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var23)*(var23 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var258)*(var258 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var264)*(var264 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var330)*(var330 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var333)*(var333 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var368)*(var368 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var422)*(var422 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var557)*(var557 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var65)*(var65 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var120)*(var120 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var132)*(var132 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var135)*(var135 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var160)*(var160 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var191)*(var191 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var199)*(var199 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var234)*(var234 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var338)*(var338 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var382)*(var382 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var408)*(var408 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var41)*(var41 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var466)*(var466 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var544)*(var544 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var566)*(var566 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var10)*(var10 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var195)*(var195 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var32)*(var32 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var484)*(var484 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var494)*(var494 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var541)*(var541 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var89)*(var89 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var252)*(var252 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var398)*(var398 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var423)*(var423 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var107)*(var107 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var329)*(var329 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var356)*(var356 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var462)*(var462 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var485)*(var485 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var488)*(var488 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var514)*(var514 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var537)*(var537 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var59)*(var59 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var249)*(var249 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var264)*(var264 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var108)*(var108 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var124)*(var124 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var213)*(var213 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var285)*(var285 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var354)*(var354 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var396)*(var396 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var436)*(var436 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var133)*(var133 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var176)*(var176 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var385)*(var385 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var434)*(var434 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var471)*(var471 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var571)*(var571 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var6)*(var6 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var28)*(var28 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var377)*(var377 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var391)*(var391 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var488)*(var488 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var514)*(var514 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var179)*(var179 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var23)*(var23 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var258)*(var258 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var264)*(var264 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var330)*(var330 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var363)*(var363 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var372)*(var372 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var557)*(var557 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var563)*(var563 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var65)*(var65 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var12)*(var12 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var146)*(var146 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var20)*(var20 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var235)*(var235 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var255)*(var255 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var326)*(var326 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var367)*(var367 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var397)*(var397 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var78)*(var78 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var103)*(var103 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var237)*(var237 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var250)*(var250 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var318)*(var318 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var336)*(var336 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var339)*(var339 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var443)*(var443 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var47)*(var47 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var474)*(var474 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var49)*(var49 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var121)*(var121 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var173)*(var173 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var38)*(var38 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var392)*(var392 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var439)*(var439 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var45)*(var45 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var10)*(var10 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var227)*(var227 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var270)*(var270 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var321)*(var321 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var42)*(var42 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var494)*(var494 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var528)*(var528 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var72)*(var72 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var89)*(var89 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var159)*(var159 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var301)*(var301 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var322)*(var322 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var148)*(var148 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var402)*(var402 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var538)*(var538 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var133)*(var133 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var196)*(var196 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var40)*(var40 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var379)*(var379 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var401)*(var401 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var465)*(var465 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var108)*(var108 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var513)*(var513 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var159)*(var159 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var301)*(var301 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var322)*(var322 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var342)*(var342 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var373)*(var373 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var460)*(var460 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var207)*(var207 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var279)*(var279 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var284)*(var284 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var38)*(var38 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var45)*(var45 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var511)*(var511 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var364)*(var364 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var575)*(var575 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var196)*(var196 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var205)*(var205 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var555)*(var555 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var110)*(var110 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var163)*(var163 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var206)*(var206 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var230)*(var230 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var231)*(var231 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var340)*(var340 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var369)*(var369 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var449)*(var449 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var243)*(var243 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var246)*(var246 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var289)*(var289 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var346)*(var346 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var53)*(var53 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var546)*(var546 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var554)*(var554 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var10)*(var10 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var195)*(var195 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var314)*(var314 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var32)*(var32 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var458)*(var458 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var541)*(var541 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var123)*(var123 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var128)*(var128 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var129)*(var129 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var214)*(var214 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var273)*(var273 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var276)*(var276 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var350)*(var350 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var388)*(var388 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var456)*(var456 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var558)*(var558 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var80)*(var80 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var86)*(var86 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var475)*(var475 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var82)*(var82 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var127)*(var127 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var15)*(var15 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var229)*(var229 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var29)*(var29 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var349)*(var349 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var36)*(var36 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var470)*(var470 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var520)*(var520 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var60)*(var60 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var141)*(var141 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var231)*(var231 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var340)*(var340 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var39)*(var39 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var391)*(var391 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var427)*(var427 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var488)*(var488 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var514)*(var514 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var159)*(var159 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var342)*(var342 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var460)*(var460 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var481)*(var481 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var141)*(var141 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var231)*(var231 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var332)*(var332 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var369)*(var369 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var133)*(var133 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var177)*(var177 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var205)*(var205 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var335)*(var335 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var385)*(var385 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var40)*(var40 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var426)*(var426 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var440)*(var440 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var555)*(var555 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var571)*(var571 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var129)*(var129 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var210)*(var210 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var220)*(var220 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var275)*(var275 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var276)*(var276 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var350)*(var350 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var457)*(var457 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var473)*(var473 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var524)*(var524 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var80)*(var80 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var86)*(var86 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var473)*(var473 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var503)*(var503 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var80)*(var80 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var42)*(var42 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var484)*(var484 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var494)*(var494 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var66)*(var66 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var89)*(var89 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var116)*(var116 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var221)*(var221 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var25)*(var25 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var254)*(var254 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var277)*(var277 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var288)*(var288 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var291)*(var291 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var315)*(var315 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var34)*(var34 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var386)*(var386 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var483)*(var483 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var51)*(var51 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var56)*(var56 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var99)*(var99 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var186)*(var186 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var21)*(var21 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var286)*(var286 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var293)*(var293 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var319)*(var319 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var327)*(var327 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var477)*(var477 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var517)*(var517 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var71)*(var71 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var74)*(var74 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var259)*(var259 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var184)*(var184 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var252)*(var252 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var31)*(var31 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var398)*(var398 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var404)*(var404 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var417)*(var417 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var519)*(var519 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var574)*(var574 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var91)*(var91 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var135)*(var135 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var160)*(var160 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var162)*(var162 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var191)*(var191 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var347)*(var347 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var382)*(var382 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var466)*(var466 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var566)*(var566 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var570)*(var570 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var80)*(var80 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var135)*(var135 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var162)*(var162 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var199)*(var199 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var96)*(var96 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var467 - var285)*(var285 - var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var467 - var354)*(var354 - var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var467 - var530)*(var530 - var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var175)*(var175 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var370)*(var370 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var522)*(var522 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var54)*(var54 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var13)*(var13 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var30)*(var30 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var443)*(var443 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var49)*(var49 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var127)*(var127 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var15)*(var15 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var505)*(var505 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var520)*(var520 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var176)*(var176 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var196)*(var196 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var205)*(var205 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var331)*(var331 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var40)*(var40 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var67)*(var67 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var464)*(var464 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var103)*(var103 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var117)*(var117 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var13)*(var13 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var237)*(var237 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var30)*(var30 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var308)*(var308 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var443)*(var443 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var47)*(var47 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var49)*(var49 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var501)*(var501 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var143)*(var143 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var119)*(var119 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var26)*(var26 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var263)*(var263 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var283)*(var283 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var341)*(var341 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var446)*(var446 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var475)*(var475 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var515)*(var515 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var525)*(var525 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var203)*(var203 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var248)*(var248 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var272)*(var272 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var286)*(var286 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var293)*(var293 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var327)*(var327 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var9)*(var9 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var106)*(var106 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var208)*(var208 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var216)*(var216 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var298)*(var298 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var307)*(var307 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var521)*(var521 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var549)*(var549 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var559)*(var559 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var79)*(var79 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var94)*(var94 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var97)*(var97 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var22)*(var22 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var249)*(var249 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var281)*(var281 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var330)*(var330 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var372)*(var372 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var545)*(var545 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var557)*(var557 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var133)*(var133 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var176)*(var176 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var331)*(var331 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var335)*(var335 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var37)*(var37 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var385)*(var385 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var434)*(var434 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var440)*(var440 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var455)*(var455 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var510)*(var510 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var84)*(var84 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var460)*(var460 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var0)*(var0 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var266)*(var266 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var364)*(var364 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var44)*(var44 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var493)*(var493 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var496)*(var496 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var531)*(var531 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var543)*(var543 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var575)*(var575 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var63)*(var63 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var116)*(var116 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var2)*(var2 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var254)*(var254 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var277)*(var277 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var288)*(var288 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var315)*(var315 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var317)*(var317 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var51)*(var51 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var10)*(var10 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var547)*(var547 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var377)*(var377 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var488)*(var488 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var514)*(var514 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var111)*(var111 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var29)*(var29 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var320)*(var320 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var36)*(var36 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var448)*(var448 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var505)*(var505 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var509)*(var509 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var520)*(var520 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var60)*(var60 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var115)*(var115 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var137)*(var137 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var163)*(var163 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var206)*(var206 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var280)*(var280 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var332)*(var332 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var369)*(var369 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var487 - var449)*(var449 - var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var391)*(var391 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var537)*(var537 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var102)*(var102 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var174)*(var174 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var175)*(var175 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var204)*(var204 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var260)*(var260 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var370)*(var370 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var394)*(var394 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var500)*(var500 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var504)*(var504 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var54)*(var54 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var562)*(var562 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var13)*(var13 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var443)*(var443 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var148)*(var148 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var16)*(var16 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var183)*(var183 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var282)*(var282 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var359)*(var359 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var415)*(var415 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var433)*(var433 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var478)*(var478 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var552)*(var552 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var100)*(var100 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var119)*(var119 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var143)*(var143 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var178)*(var178 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var215)*(var215 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var257)*(var257 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var26)*(var26 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var283)*(var283 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var411)*(var411 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var475)*(var475 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var525)*(var525 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var539)*(var539 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var493 - var312)*(var312 - var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var493 - var393)*(var393 - var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var493 - var44)*(var44 - var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var493 - var564)*(var564 - var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var493 - var575)*(var575 - var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var494 - var10)*(var10 - var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var494 - var547)*(var547 - var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var401)*(var401 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var465)*(var465 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var496 - var575)*(var575 - var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var0)*(var0 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var266)*(var266 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var302)*(var302 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var364)*(var364 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var493)*(var493 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var496)*(var496 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var575)*(var575 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var497 - var77)*(var77 - var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var2)*(var2 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var221)*(var221 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var25)*(var25 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var277)*(var277 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var309)*(var309 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var315)*(var315 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var317)*(var317 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var34)*(var34 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var386)*(var386 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var459)*(var459 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var51)*(var51 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var56)*(var56 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var573)*(var573 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var364)*(var364 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var393)*(var393 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var44)*(var44 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var531)*(var531 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var575)*(var575 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var63)*(var63 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var123)*(var123 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var129)*(var129 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var214)*(var214 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var220)*(var220 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var276)*(var276 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var350)*(var350 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var464)*(var464 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var473)*(var473 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var80)*(var80 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var86)*(var86 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var121)*(var121 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var207)*(var207 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var284)*(var284 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var345)*(var345 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var361)*(var361 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var38)*(var38 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var39)*(var39 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var413)*(var413 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var439)*(var439 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var447)*(var447 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var511)*(var511 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var102)*(var102 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var144)*(var144 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var154)*(var154 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var174)*(var174 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var204)*(var204 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var260)*(var260 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var357)*(var357 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var469)*(var469 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var472)*(var472 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var551)*(var551 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var67)*(var67 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var30)*(var30 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var308)*(var308 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var443)*(var443 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var554)*(var554 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var175)*(var175 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var204)*(var204 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var357)*(var357 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var394)*(var394 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var489)*(var489 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var529)*(var529 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var562)*(var562 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var102)*(var102 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var154)*(var154 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var174)*(var174 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var175)*(var175 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var204)*(var204 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var357)*(var357 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var394)*(var394 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var469)*(var469 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var500)*(var500 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var522)*(var522 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var54)*(var54 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var67)*(var67 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var29)*(var29 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var425)*(var425 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var255)*(var255 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var328)*(var328 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var334)*(var334 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var397)*(var397 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var78)*(var78 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var513)*(var513 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var7)*(var7 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var149)*(var149 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var165)*(var165 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var180)*(var180 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var198)*(var198 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var310)*(var310 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var325)*(var325 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var410)*(var410 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var513)*(var513 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var548)*(var548 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var7)*(var7 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var15)*(var15 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var29)*(var29 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var300)*(var300 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var349)*(var349 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var470)*(var470 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var157)*(var157 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var277)*(var277 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var133)*(var133 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var176)*(var176 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var196)*(var196 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var335)*(var335 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var385)*(var385 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var40)*(var40 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var426)*(var426 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var434)*(var434 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var471)*(var471 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var555)*(var555 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var571)*(var571 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var6)*(var6 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var447)*(var447 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var391)*(var391 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var451)*(var451 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var462)*(var462 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var514)*(var514 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var59)*(var59 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var28)*(var28 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var488)*(var488 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var215)*(var215 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var26)*(var26 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var283)*(var283 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var341)*(var341 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var446)*(var446 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var475)*(var475 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var525)*(var525 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var539)*(var539 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var516 - var12)*(var12 - var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var516 - var146)*(var146 - var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var516 - var262)*(var262 - var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var516 - var326)*(var326 - var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var516 - var328)*(var328 - var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var203)*(var203 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var248)*(var248 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var327)*(var327 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var74)*(var74 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var185)*(var185 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var243)*(var243 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var344)*(var344 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var534)*(var534 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var565)*(var565 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var519 - var420)*(var420 - var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var519 - var574)*(var574 - var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var149)*(var149 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var180)*(var180 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var267)*(var267 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var304)*(var304 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var310)*(var310 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var507)*(var507 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var513)*(var513 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var542)*(var542 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var520 - var229)*(var229 - var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var216)*(var216 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var298)*(var298 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var549)*(var549 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var94)*(var94 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var97)*(var97 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var252)*(var252 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var420)*(var420 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var560)*(var560 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var574)*(var574 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var524 - var210)*(var210 - var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var524 - var214)*(var214 - var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var524 - var473)*(var473 - var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var156)*(var156 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var159)*(var159 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var168)*(var168 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var259)*(var259 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var301)*(var301 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var323)*(var323 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var342)*(var342 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var373)*(var373 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var438)*(var438 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var109)*(var109 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var13)*(var13 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var18)*(var18 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var237)*(var237 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var30)*(var30 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var47)*(var47 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var474)*(var474 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var49)*(var49 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var10)*(var10 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var195)*(var195 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var32)*(var32 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var362)*(var362 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var42)*(var42 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var444)*(var444 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var458)*(var458 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var484)*(var484 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var494)*(var494 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var72)*(var72 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var89)*(var89 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var102)*(var102 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var154)*(var154 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var175)*(var175 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var357)*(var357 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var394)*(var394 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var551)*(var551 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var67)*(var67 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var185)*(var185 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var243)*(var243 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var246)*(var246 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var27)*(var27 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var289)*(var289 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var346)*(var346 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var353)*(var353 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var518)*(var518 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var530 - var285)*(var285 - var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var530 - var354)*(var354 - var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var531 - var496)*(var496 - var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var121)*(var121 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var173)*(var173 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var279)*(var279 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var284)*(var284 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var38)*(var38 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var39)*(var39 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var82)*(var82 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var113)*(var113 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var124)*(var124 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var436)*(var436 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var467)*(var467 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var530)*(var530 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var168)*(var168 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var301)*(var301 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var432)*(var432 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var438)*(var438 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var452)*(var452 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var266)*(var266 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var302)*(var302 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var312)*(var312 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var364)*(var364 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var393)*(var393 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var482)*(var482 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var493)*(var493 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var531)*(var531 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var564)*(var564 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var575)*(var575 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var63)*(var63 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var77)*(var77 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var462)*(var462 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var158)*(var158 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var359)*(var359 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var402)*(var402 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var407)*(var407 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var478)*(var478 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var552)*(var552 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var539 - var143)*(var143 - var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var539 - var26)*(var26 - var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var539 - var446)*(var446 - var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var539 - var475)*(var475 - var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var539 - var525)*(var525 - var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var175)*(var175 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var472)*(var472 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var522)*(var522 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var67)*(var67 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var123)*(var123 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var210)*(var210 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var220)*(var220 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var273)*(var273 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var275)*(var275 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var388)*(var388 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var445)*(var445 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var464)*(var464 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var473)*(var473 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var5)*(var5 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var524)*(var524 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var86)*(var86 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var541 - var10)*(var10 - var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var145)*(var145 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var149)*(var149 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var165)*(var165 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var304)*(var304 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var507)*(var507 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var513)*(var513 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var548)*(var548 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var302)*(var302 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var312)*(var312 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var364)*(var364 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var393)*(var393 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var531)*(var531 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var575)*(var575 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var63)*(var63 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var120)*(var120 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var135)*(var135 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var162)*(var162 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var240)*(var240 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var408)*(var408 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var41)*(var41 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var566)*(var566 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var570)*(var570 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var96)*(var96 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var545 - var249)*(var249 - var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var545 - var330)*(var330 - var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var14)*(var14 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var185)*(var185 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var243)*(var243 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var27)*(var27 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var346)*(var346 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var518)*(var518 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var95)*(var95 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var437)*(var437 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var507)*(var507 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var513)*(var513 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var208)*(var208 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var216)*(var216 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var247)*(var247 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var307)*(var307 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var559)*(var559 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var94)*(var94 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var298)*(var298 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var549)*(var549 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var79)*(var79 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var97)*(var97 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var102)*(var102 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var154)*(var154 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var357)*(var357 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var370)*(var370 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var469)*(var469 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var472)*(var472 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var54)*(var54 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var552 - var158)*(var158 - var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var552 - var478)*(var478 - var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var13)*(var13 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var555 - var196)*(var196 - var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var248)*(var248 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var327)*(var327 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var74)*(var74 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var140)*(var140 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var249)*(var249 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var264)*(var264 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var363)*(var363 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var372)*(var372 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var129)*(var129 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var210)*(var210 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var214)*(var214 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var220)*(var220 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var273)*(var273 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var350)*(var350 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var388)*(var388 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var456)*(var456 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var457)*(var457 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var464)*(var464 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var473)*(var473 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var5)*(var5 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var524)*(var524 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var216)*(var216 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var307)*(var307 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var94)*(var94 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var97)*(var97 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var157)*(var157 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var25)*(var25 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var277)*(var277 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var288)*(var288 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var317)*(var317 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var51)*(var51 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var417)*(var417 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var423)*(var423 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var574)*(var574 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var203)*(var203 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var21)*(var21 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var272)*(var272 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var319)*(var319 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var327)*(var327 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var35)*(var35 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var416)*(var416 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var477)*(var477 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var556)*(var556 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var71)*(var71 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var102)*(var102 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var174)*(var174 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var175)*(var175 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var357)*(var357 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var67)*(var67 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var140)*(var140 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var23)*(var23 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var264)*(var264 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var281)*(var281 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var330)*(var330 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var333)*(var333 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var363)*(var363 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var368)*(var368 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var545)*(var545 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var65)*(var65 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var0)*(var0 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var302)*(var302 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var393)*(var393 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var496)*(var496 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var499)*(var499 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var531)*(var531 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var543)*(var543 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var575)*(var575 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var63)*(var63 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var289)*(var289 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var344)*(var344 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var346)*(var346 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var534)*(var534 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var566 - var120)*(var120 - var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var566 - var135)*(var135 - var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var566 - var160)*(var160 - var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var568 - var314)*(var314 - var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var568 - var32)*(var32 - var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var568 - var42)*(var42 - var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var568 - var494)*(var494 - var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var568 - var72)*(var72 - var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var568 - var89)*(var89 - var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var147)*(var147 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var20)*(var20 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var262)*(var262 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var326)*(var326 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var328)*(var328 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var367)*(var367 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var397)*(var397 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var429)*(var429 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var506)*(var506 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var516)*(var516 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var78)*(var78 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var138)*(var138 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var20)*(var20 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var235)*(var235 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var255)*(var255 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var262)*(var262 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var328)*(var328 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var429)*(var429 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var78)*(var78 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var570 - var135)*(var135 - var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var570 - var160)*(var160 - var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var570 - var234)*(var234 - var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var570 - var241)*(var241 - var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var570 - var408)*(var408 - var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var133)*(var133 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var196)*(var196 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var205)*(var205 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var331)*(var331 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var409)*(var409 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var434)*(var434 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var440)*(var440 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var571 - var555)*(var555 - var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var12)*(var12 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var255)*(var255 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var262)*(var262 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var326)*(var326 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var328)*(var328 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var397)*(var397 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var429)*(var429 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var506)*(var506 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var516)*(var516 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var78)*(var78 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var157)*(var157 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var2)*(var2 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var242)*(var242 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var277)*(var277 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var317)*(var317 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var386)*(var386 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var51)*(var51 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var574 - var398)*(var398 - var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var574 - var417)*(var417 - var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var28)*(var28 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var329)*(var329 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var462)*(var462 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var488)*(var488 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var514)*(var514 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var537)*(var537 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var205)*(var205 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var331)*(var331 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var471)*(var471 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var571)*(var571 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var111)*(var111 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var229)*(var229 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var29)*(var29 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var505)*(var505 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var520)*(var520 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var108)*(var108 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var113)*(var113 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var124)*(var124 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var285)*(var285 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var313)*(var313 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var396)*(var396 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var424)*(var424 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var436)*(var436 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var530)*(var530 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var247)*(var247 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var268)*(var268 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var298)*(var298 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var307)*(var307 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var348)*(var348 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var399)*(var399 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var79)*(var79 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var97)*(var97 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var266)*(var266 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var302)*(var302 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var364)*(var364 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var575)*(var575 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var134)*(var134 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var148)*(var148 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var183)*(var183 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var433)*(var433 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var478)*(var478 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var538)*(var538 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var552)*(var552 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var73)*(var73 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var140)*(var140 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var330)*(var330 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var32)*(var32 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var484)*(var484 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var541)*(var541 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var104)*(var104 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var185)*(var185 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var246)*(var246 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var27)*(var27 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var289)*(var289 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var344)*(var344 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var346)*(var346 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var53)*(var53 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var534)*(var534 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var546)*(var546 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var565)*(var565 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var95)*(var95 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var182)*(var182 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var287)*(var287 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var296)*(var296 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var324)*(var324 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var435)*(var435 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var115)*(var115 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var122)*(var122 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var137)*(var137 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var163)*(var163 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var3)*(var3 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var340)*(var340 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var449)*(var449 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var454)*(var454 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var186)*(var186 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var248)*(var248 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var272)*(var272 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var293)*(var293 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var319)*(var319 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var35)*(var35 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var74)*(var74 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var10)*(var10 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var195)*(var195 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var314)*(var314 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var32)*(var32 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var42)*(var42 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var484)*(var484 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var89)*(var89 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var139)*(var139 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var213)*(var213 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var261)*(var261 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var396)*(var396 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var436)*(var436 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var467)*(var467 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var530)*(var530 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var14)*(var14 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var289)*(var289 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var346)*(var346 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var376)*(var376 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var518)*(var518 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var53)*(var53 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var546)*(var546 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var565)*(var565 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var95)*(var95 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var0)*(var0 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var312)*(var312 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var393)*(var393 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var531)*(var531 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var543)*(var543 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var564)*(var564 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var575)*(var575 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var146)*(var146 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var235)*(var235 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var326)*(var326 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var307)*(var307 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var521)*(var521 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var559)*(var559 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var94)*(var94 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var111)*(var111 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var229)*(var229 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var29)*(var29 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var300)*(var300 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var425)*(var425 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var520)*(var520 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var189)*(var189 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var200)*(var200 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var398)*(var398 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var417)*(var417 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var420)*(var420 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var574)*(var574 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var45)*(var45 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var177)*(var177 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var205)*(var205 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var331)*(var331 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var37)*(var37 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var40)*(var40 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var409)*(var409 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var455)*(var455 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var471)*(var471 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var510)*(var510 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var571)*(var571 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var6)*(var6 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var350)*(var350 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var464)*(var464 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var80)*(var80 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var107)*(var107 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var356)*(var356 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var371)*(var371 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var377)*(var377 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var427)*(var427 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var488)*(var488 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var514)*(var514 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var59)*(var59 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var32)*(var32 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var484)*(var484 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var494)*(var494 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var541)*(var541 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var547)*(var547 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var186)*(var186 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var203)*(var203 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var286)*(var286 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var293)*(var293 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var556)*(var556 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var134)*(var134 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var139)*(var139 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var158)*(var158 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var16)*(var16 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var402)*(var402 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var478)*(var478 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var538)*(var538 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var552)*(var552 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var64)*(var64 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var73)*(var73 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var114)*(var114 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var184)*(var184 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var233)*(var233 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var236)*(var236 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var252)*(var252 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var398)*(var398 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var404)*(var404 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var405)*(var405 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var417)*(var417 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var423)*(var423 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var519)*(var519 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var560)*(var560 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var113)*(var113 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var172)*(var172 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var213)*(var213 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var217)*(var217 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var261)*(var261 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var306)*(var306 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var313)*(var313 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var396)*(var396 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var424)*(var424 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var530)*(var530 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var1)*(var1 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var155)*(var155 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var168)*(var168 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var226)*(var226 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var259)*(var259 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var278)*(var278 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var322)*(var322 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var323)*(var323 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var438)*(var438 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var452)*(var452 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var481)*(var481 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var526)*(var526 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var535)*(var535 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var247)*(var247 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var298)*(var298 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var534)*(var534 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var216)*(var216 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var298)*(var298 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var307)*(var307 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var94)*(var94 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var112)*(var112 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var151)*(var151 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var222)*(var222 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var287)*(var287 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var290)*(var290 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var324)*(var324 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var379)*(var379 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var383)*(var383 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var465)*(var465 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var157)*(var157 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var221)*(var221 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var232)*(var232 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var254)*(var254 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var288)*(var288 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var291)*(var291 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var317)*(var317 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var56)*(var56 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 == var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 == var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 == var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var122 == var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 == var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 == var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 == var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 == var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 == var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 == var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 == var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 == var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 == var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 == var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 == var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 == var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 == var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 == var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 == var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 == var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 == var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 == var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 == var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var1) && (var125 + var1 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var155) && (var125 + var155 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var156) && (var125 + var156 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var159) && (var125 + var159 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var168) && (var125 + var168 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var223) && (var125 + var223 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var226) && (var125 + var226 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var259) && (var125 + var259 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var278) && (var125 + var278 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var301) && (var125 + var301 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var322) && (var125 + var322 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var323) && (var125 + var323 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var342) && (var125 + var342 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var373) && (var125 + var373 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var384) && (var125 + var384 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var432) && (var125 + var432 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var438) && (var125 + var438 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var452) && (var125 + var452 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var460) && (var125 + var460 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var481) && (var125 + var481 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var526) && (var125 + var526 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var535) && (var125 + var535 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var125 != var93) && (var125 + var93 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var106) && (var126 + var106 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var166) && (var126 + var166 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var167) && (var126 + var167 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var208) && (var126 + var208 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var216) && (var126 + var216 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var247) && (var126 + var247 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var265) && (var126 + var265 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var268) && (var126 + var268 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var298) && (var126 + var298 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var307) && (var126 + var307 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var337) && (var126 + var337 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var348) && (var126 + var348 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var375) && (var126 + var375 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var399) && (var126 + var399 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var479) && (var126 + var479 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var521) && (var126 + var521 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var549) && (var126 + var549 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var550) && (var126 + var550 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var559) && (var126 + var559 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var62) && (var126 + var62 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var79) && (var126 + var79 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var94) && (var126 + var94 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var126 != var97) && (var126 + var97 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var186) && (var131 + var186 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var190) && (var131 + var190 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var203) && (var131 + var203 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var21) && (var131 + var21 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var212) && (var131 + var212 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var248) && (var131 + var248 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var272) && (var131 + var272 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var286) && (var131 + var286 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var293) && (var131 + var293 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var299) && (var131 + var299 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var319) && (var131 + var319 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var327) && (var131 + var327 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var35) && (var131 + var35 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var381) && (var131 + var381 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var416) && (var131 + var416 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var46) && (var131 + var46 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var477) && (var131 + var477 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var517) && (var131 + var517 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var556) && (var131 + var556 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var561) && (var131 + var561 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var71) && (var131 + var71 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var74) && (var131 + var74 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var131 != var9) && (var131 + var9 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var101) && (var161 + var101 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var104) && (var161 + var104 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var14) && (var161 + var14 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var171) && (var161 + var171 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var185) && (var161 + var185 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var201) && (var161 + var201 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var243) && (var161 + var243 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var246) && (var161 + var246 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var27) && (var161 + var27 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var289) && (var161 + var289 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var344) && (var161 + var344 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var346) && (var161 + var346 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var353) && (var161 + var353 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var376) && (var161 + var376 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var442) && (var161 + var442 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var518) && (var161 + var518 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var53) && (var161 + var53 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var534) && (var161 + var534 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var546) && (var161 + var546 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var565) && (var161 + var565 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var68) && (var161 + var68 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var76) && (var161 + var76 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var161 != var95) && (var161 + var95 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var133) && (var219 + var133 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var176) && (var219 + var176 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var177) && (var219 + var177 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var196) && (var219 + var196 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var205) && (var219 + var205 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var256) && (var219 + var256 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var331) && (var219 + var331 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var335) && (var219 + var335 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var37) && (var219 + var37 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var385) && (var219 + var385 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var40) && (var219 + var40 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var409) && (var219 + var409 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var426) && (var219 + var426 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var434) && (var219 + var434 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var440) && (var219 + var440 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var455) && (var219 + var455 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var471) && (var219 + var471 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var480) && (var219 + var480 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var510) && (var219 + var510 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var555) && (var219 + var555 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var571) && (var219 + var571 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var6) && (var219 + var6 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var219 != var84) && (var219 + var84 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var121) && (var228 + var121 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var136) && (var228 + var136 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var152) && (var228 + var152 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var164) && (var228 + var164 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var173) && (var228 + var173 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var181) && (var228 + var181 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var207) && (var228 + var207 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var279) && (var228 + var279 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var284) && (var228 + var284 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var345) && (var228 + var345 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var361) && (var228 + var361 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var38) && (var228 + var38 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var39) && (var228 + var39 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var392) && (var228 + var392 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var413) && (var228 + var413 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var430) && (var228 + var430 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var439) && (var228 + var439 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var447) && (var228 + var447 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var45) && (var228 + var45 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var50) && (var228 + var50 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var511) && (var228 + var511 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var532) && (var228 + var532 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var228 != var82) && (var228 + var82 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var140) && (var24 + var140 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var150) && (var24 + var150 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var179) && (var24 + var179 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var22) && (var24 + var22 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var23) && (var24 + var23 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var249) && (var24 + var249 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var258) && (var24 + var258 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var264) && (var24 + var264 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var281) && (var24 + var281 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var330) && (var24 + var330 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var333) && (var24 + var333 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var363) && (var24 + var363 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var366) && (var24 + var366 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var368) && (var24 + var368 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var372) && (var24 + var372 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var418) && (var24 + var418 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var422) && (var24 + var422 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var428) && (var24 + var428 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var48) && (var24 + var48 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var545) && (var24 + var545 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var557) && (var24 + var557 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var563) && (var24 + var563 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var24 != var65) && (var24 + var65 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var142) && (var253 + var142 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var145) && (var253 + var145 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var149) && (var253 + var149 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var165) && (var253 + var165 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var169) && (var253 + var169 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var180) && (var253 + var180 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var198) && (var253 + var198 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var267) && (var253 + var267 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var304) && (var253 + var304 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var310) && (var253 + var310 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var325) && (var253 + var325 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var360) && (var253 + var360 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var395) && (var253 + var395 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var410) && (var253 + var410 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var414) && (var253 + var414 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var437) && (var253 + var437 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var507) && (var253 + var507 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var508) && (var253 + var508 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var513) && (var253 + var513 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var52) && (var253 + var52 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var542) && (var253 + var542 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var548) && (var253 + var548 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var253 != var7) && (var253 + var7 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var12) && (var374 + var12 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var138) && (var374 + var138 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var146) && (var374 + var146 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var147) && (var374 + var147 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var20) && (var374 + var20 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var218) && (var374 + var218 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var235) && (var374 + var235 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var255) && (var374 + var255 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var262) && (var374 + var262 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var269) && (var374 + var269 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var326) && (var374 + var326 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var328) && (var374 + var328 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var334) && (var374 + var334 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var352) && (var374 + var352 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var367) && (var374 + var367 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var397) && (var374 + var397 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var429) && (var374 + var429 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var506) && (var374 + var506 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var516) && (var374 + var516 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var569) && (var374 + var569 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var57) && (var374 + var57 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var572) && (var374 + var572 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var374 != var78) && (var374 + var78 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var112) && (var380 + var112 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var151) && (var380 + var151 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var182) && (var380 + var182 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var188) && (var380 + var188 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var19) && (var380 + var19 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var193) && (var380 + var193 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var211) && (var380 + var211 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var222) && (var380 + var222 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var287) && (var380 + var287 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var290) && (var380 + var290 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var296) && (var380 + var296 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var324) && (var380 + var324 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var358) && (var380 + var358 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var379) && (var380 + var379 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var383) && (var380 + var383 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var389) && (var380 + var389 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var401) && (var380 + var401 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var403) && (var380 + var403 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var435) && (var380 + var435 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var465) && (var380 + var465 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var495) && (var380 + var495 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var69) && (var380 + var69 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var380 != var98) && (var380 + var98 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var102) && (var4 + var102 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var144) && (var4 + var144 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var153) && (var4 + var153 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var154) && (var4 + var154 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var174) && (var4 + var174 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var175) && (var4 + var175 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var204) && (var4 + var204 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var260) && (var4 + var260 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var357) && (var4 + var357 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var370) && (var4 + var370 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var394) && (var4 + var394 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var469) && (var4 + var469 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var472) && (var4 + var472 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var489) && (var4 + var489 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var500) && (var4 + var500 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var502) && (var4 + var502 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var504) && (var4 + var504 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var522) && (var4 + var522 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var529) && (var4 + var529 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var54) && (var4 + var54 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var551) && (var4 + var551 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var562) && (var4 + var562 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var4 != var67) && (var4 + var67 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var130) && (var400 + var130 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var134) && (var400 + var134 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var139) && (var400 + var139 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var148) && (var400 + var148 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var158) && (var400 + var158 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var16) && (var400 + var16 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var183) && (var400 + var183 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var282) && (var400 + var282 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var311) && (var400 + var311 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var316) && (var400 + var316 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var355) && (var400 + var355 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var359) && (var400 + var359 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var402) && (var400 + var402 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var407) && (var400 + var407 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var415) && (var400 + var415 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var433) && (var400 + var433 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var478) && (var400 + var478 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var490) && (var400 + var490 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var538) && (var400 + var538 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var552) && (var400 + var552 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var64) && (var400 + var64 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var73) && (var400 + var73 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var400 != var90) && (var400 + var90 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var123) && (var450 + var123 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var128) && (var450 + var128 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var129) && (var450 + var129 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var210) && (var450 + var210 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var214) && (var450 + var214 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var220) && (var450 + var220 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var273) && (var450 + var273 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var275) && (var450 + var275 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var276) && (var450 + var276 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var350) && (var450 + var350 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var388) && (var450 + var388 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var445) && (var450 + var445 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var456) && (var450 + var456 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var457) && (var450 + var457 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var464) && (var450 + var464 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var473) && (var450 + var473 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var5) && (var450 + var5 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var503) && (var450 + var503 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var524) && (var450 + var524 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var540) && (var450 + var540 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var558) && (var450 + var558 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var80) && (var450 + var80 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var450 != var86) && (var450 + var86 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var103) && (var453 + var103 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var109) && (var453 + var109 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var117) && (var453 + var117 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var13) && (var453 + var13 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var18) && (var453 + var18 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var237) && (var453 + var237 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var238) && (var453 + var238 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var250) && (var453 + var250 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var30) && (var453 + var30 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var308) && (var453 + var308 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var318) && (var453 + var318 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var336) && (var453 + var336 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var339) && (var453 + var339 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var378) && (var453 + var378 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var406) && (var453 + var406 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var43) && (var453 + var43 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var443) && (var453 + var443 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var47) && (var453 + var47 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var474) && (var453 + var474 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var49) && (var453 + var49 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var501) && (var453 + var501 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var527) && (var453 + var527 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var453 != var554) && (var453 + var554 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var120) && (var468 + var120 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var132) && (var468 + var132 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var135) && (var468 + var135 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var160) && (var468 + var160 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var162) && (var468 + var162 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var191) && (var468 + var191 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var199) && (var468 + var199 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var209) && (var468 + var209 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var234) && (var468 + var234 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var240) && (var468 + var240 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var241) && (var468 + var241 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var338) && (var468 + var338 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var347) && (var468 + var347 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var382) && (var468 + var382 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var408) && (var468 + var408 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var41) && (var468 + var41 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var419) && (var468 + var419 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var463) && (var468 + var463 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var466) && (var468 + var466 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var544) && (var468 + var544 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var566) && (var468 + var566 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var570) && (var468 + var570 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var468 != var96) && (var468 + var96 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var107) && (var491 + var107 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var11) && (var491 + var11 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var197) && (var491 + var197 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var271) && (var491 + var271 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var28) && (var491 + var28 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var305) && (var491 + var305 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var329) && (var491 + var329 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var356) && (var491 + var356 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var371) && (var491 + var371 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var377) && (var491 + var377 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var387) && (var491 + var387 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var391) && (var491 + var391 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var421) && (var491 + var421 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var427) && (var491 + var427 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var451) && (var491 + var451 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var462) && (var491 + var462 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var485) && (var491 + var485 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var488) && (var491 + var488 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var512) && (var491 + var512 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var514) && (var491 + var514 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var537) && (var491 + var537 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var59) && (var491 + var59 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var491 != var88) && (var491 + var88 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var10) && (var55 + var10 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var17) && (var55 + var17 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var195) && (var55 + var195 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var227) && (var55 + var227 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var244) && (var55 + var244 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var270) && (var55 + var270 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var314) && (var55 + var314 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var32) && (var55 + var32 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var321) && (var55 + var321 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var362) && (var55 + var362 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var42) && (var55 + var42 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var431) && (var55 + var431 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var444) && (var55 + var444 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var458) && (var55 + var458 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var484) && (var55 + var484 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var494) && (var55 + var494 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var528) && (var55 + var528 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var541) && (var55 + var541 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var547) && (var55 + var547 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var568) && (var55 + var568 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var66) && (var55 + var66 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var72) && (var55 + var72 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var55 != var89) && (var55 + var89 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var0) && (var553 + var0 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var170) && (var553 + var170 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var202) && (var553 + var202 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var239) && (var553 + var239 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var251) && (var553 + var251 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var266) && (var553 + var266 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var302) && (var553 + var302 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var312) && (var553 + var312 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var364) && (var553 + var364 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var393) && (var553 + var393 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var44) && (var553 + var44 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var482) && (var553 + var482 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var493) && (var553 + var493 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var496) && (var553 + var496 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var497) && (var553 + var497 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var499) && (var553 + var499 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var531) && (var553 + var531 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var536) && (var553 + var536 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var543) && (var553 + var543 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var564) && (var553 + var564 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var575) && (var553 + var575 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var63) && (var553 + var63 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var553 != var77) && (var553 + var77 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var108) && (var567 + var108 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var113) && (var567 + var113 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var124) && (var567 + var124 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var172) && (var567 + var172 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var213) && (var567 + var213 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var217) && (var567 + var217 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var261) && (var567 + var261 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var285) && (var567 + var285 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var292) && (var567 + var292 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var294) && (var567 + var294 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var306) && (var567 + var306 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var313) && (var567 + var313 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var354) && (var567 + var354 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var365) && (var567 + var365 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var396) && (var567 + var396 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var424) && (var567 + var424 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var436) && (var567 + var436 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var467) && (var567 + var467 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var530) && (var567 + var530 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var533) && (var567 + var533 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var61) && (var567 + var61 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var75) && (var567 + var75 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var567 != var92) && (var567 + var92 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var111) && (var58 + var111 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var127) && (var58 + var127 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var15) && (var58 + var15 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var192) && (var58 + var192 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var194) && (var58 + var194 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var224) && (var58 + var224 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var229) && (var58 + var229 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var29) && (var58 + var29 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var300) && (var58 + var300 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var320) && (var58 + var320 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var349) && (var58 + var349 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var351) && (var58 + var351 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var36) && (var58 + var36 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var390) && (var58 + var390 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var425) && (var58 + var425 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var448) && (var58 + var448 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var470) && (var58 + var470 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var486) && (var58 + var486 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var505) && (var58 + var505 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var509) && (var58 + var509 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var520) && (var58 + var520 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var60) && (var58 + var60 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var58 != var8) && (var58 + var8 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var100) && (var83 + var100 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var118) && (var83 + var118 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var119) && (var83 + var119 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var143) && (var83 + var143 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var178) && (var83 + var178 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var187) && (var83 + var187 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var215) && (var83 + var215 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var245) && (var83 + var245 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var257) && (var83 + var257 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var26) && (var83 + var26 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var263) && (var83 + var263 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var283) && (var83 + var283 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var303) && (var83 + var303 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var341) && (var83 + var341 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var411) && (var83 + var411 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var412) && (var83 + var412 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var446) && (var83 + var446 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var475) && (var83 + var475 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var476) && (var83 + var476 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var492) && (var83 + var492 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var515) && (var83 + var515 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var525) && (var83 + var525 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var83 != var539) && (var83 + var539 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var114) && (var85 + var114 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var184) && (var85 + var184 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var189) && (var85 + var189 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var200) && (var85 + var200 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var233) && (var85 + var233 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var236) && (var85 + var236 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var252) && (var85 + var252 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var274) && (var85 + var274 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var31) && (var85 + var31 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var33) && (var85 + var33 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var398) && (var85 + var398 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var404) && (var85 + var404 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var405) && (var85 + var405 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var417) && (var85 + var417 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var420) && (var85 + var420 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var423) && (var85 + var423 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var461) && (var85 + var461 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var519) && (var85 + var519 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var523) && (var85 + var523 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var560) && (var85 + var560 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var574) && (var85 + var574 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var81) && (var85 + var81 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var85 != var91) && (var85 + var91 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var116) && (var87 + var116 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var157) && (var87 + var157 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var2) && (var87 + var2 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var221) && (var87 + var221 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var232) && (var87 + var232 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var242) && (var87 + var242 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var25) && (var87 + var25 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var254) && (var87 + var254 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var277) && (var87 + var277 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var288) && (var87 + var288 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var291) && (var87 + var291 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var309) && (var87 + var309 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var315) && (var87 + var315 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var317) && (var87 + var317 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var34) && (var87 + var34 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var386) && (var87 + var386 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var459) && (var87 + var459 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var483) && (var87 + var483 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var498) && (var87 + var498 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var51) && (var87 + var51 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var56) && (var87 + var56 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var573) && (var87 + var573 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var99) && (var87 + var99 >=2 )){myvar0= 1;}
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
441 x[441]
442 x[442]
443 x[443]
444 x[444]
445 x[445]
446 x[446]
447 x[447]
448 x[448]
449 x[449]
450 x[450]
451 x[451]
452 x[452]
453 x[453]
454 x[454]
455 x[455]
456 x[456]
457 x[457]
458 x[458]
459 x[459]
460 x[460]
461 x[461]
462 x[462]
463 x[463]
464 x[464]
465 x[465]
466 x[466]
467 x[467]
468 x[468]
469 x[469]
470 x[470]
471 x[471]
472 x[472]
473 x[473]
474 x[474]
475 x[475]
476 x[476]
477 x[477]
478 x[478]
479 x[479]
480 x[480]
481 x[481]
482 x[482]
483 x[483]
484 x[484]
485 x[485]
486 x[486]
487 x[487]
488 x[488]
489 x[489]
490 x[490]
491 x[491]
492 x[492]
493 x[493]
494 x[494]
495 x[495]
496 x[496]
497 x[497]
498 x[498]
499 x[499]
500 x[500]
501 x[501]
502 x[502]
503 x[503]
504 x[504]
505 x[505]
506 x[506]
507 x[507]
508 x[508]
509 x[509]
510 x[510]
511 x[511]
512 x[512]
513 x[513]
514 x[514]
515 x[515]
516 x[516]
517 x[517]
518 x[518]
519 x[519]
520 x[520]
521 x[521]
522 x[522]
523 x[523]
524 x[524]
525 x[525]
526 x[526]
527 x[527]
528 x[528]
529 x[529]
530 x[530]
531 x[531]
532 x[532]
533 x[533]
534 x[534]
535 x[535]
536 x[536]
537 x[537]
538 x[538]
539 x[539]
540 x[540]
541 x[541]
542 x[542]
543 x[543]
544 x[544]
545 x[545]
546 x[546]
547 x[547]
548 x[548]
549 x[549]
550 x[550]
551 x[551]
552 x[552]
553 x[553]
554 x[554]
555 x[555]
556 x[556]
557 x[557]
558 x[558]
559 x[559]
560 x[560]
561 x[561]
562 x[562]
563 x[563]
564 x[564]
565 x[565]
566 x[566]
567 x[567]
568 x[568]
569 x[569]
570 x[570]
571 x[571]
572 x[572]
573 x[573]
574 x[574]
575 x[575]
 */}
