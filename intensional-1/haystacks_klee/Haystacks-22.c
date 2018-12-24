
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 0) && (var40 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 0) && (var41 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 0) && (var42 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 0) && (var43 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 0) && (var44 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 0) && (var45 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 0) && (var46 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 0) && (var47 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 0) && (var48 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 0) && (var49 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 0) && (var50 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 0) && (var51 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 0) && (var52 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 0) && (var53 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 0) && (var54 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 0) && (var55 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 0) && (var56 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 0) && (var57 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 0) && (var58 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 0) && (var59 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 0) && (var60 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 0) && (var61 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 0) && (var62 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 0) && (var63 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 0) && (var64 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 0) && (var65 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 0) && (var66 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 0) && (var67 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 0) && (var68 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 0) && (var69 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 0) && (var70 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 0) && (var71 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 0) && (var72 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 0) && (var73 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 0) && (var74 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 0) && (var75 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 0) && (var76 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 0) && (var77 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 0) && (var78 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((myvar0 == 1) && (var79 >= 0) && (var79 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((myvar0 == 1) && (var80 >= 0) && (var80 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((myvar0 == 1) && (var81 >= 0) && (var81 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((myvar0 == 1) && (var82 >= 0) && (var82 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((myvar0 == 1) && (var83 >= 0) && (var83 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((myvar0 == 1) && (var84 >= 0) && (var84 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((myvar0 == 1) && (var85 >= 0) && (var85 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((myvar0 == 1) && (var86 >= 0) && (var86 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((myvar0 == 1) && (var87 >= 0) && (var87 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((myvar0 == 1) && (var88 >= 0) && (var88 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((myvar0 == 1) && (var89 >= 0) && (var89 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((myvar0 == 1) && (var90 >= 0) && (var90 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((myvar0 == 1) && (var91 >= 0) && (var91 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((myvar0 == 1) && (var92 >= 0) && (var92 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((myvar0 == 1) && (var93 >= 0) && (var93 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((myvar0 == 1) && (var94 >= 0) && (var94 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((myvar0 == 1) && (var95 >= 0) && (var95 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((myvar0 == 1) && (var96 >= 0) && (var96 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((myvar0 == 1) && (var97 >= 0) && (var97 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((myvar0 == 1) && (var98 >= 0) && (var98 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((myvar0 == 1) && (var99 >= 0) && (var99 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((myvar0 == 1) && (var100 >= 0) && (var100 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((myvar0 == 1) && (var101 >= 0) && (var101 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((myvar0 == 1) && (var102 >= 0) && (var102 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((myvar0 == 1) && (var103 >= 0) && (var103 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((myvar0 == 1) && (var104 >= 0) && (var104 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((myvar0 == 1) && (var105 >= 0) && (var105 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((myvar0 == 1) && (var106 >= 0) && (var106 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((myvar0 == 1) && (var107 >= 0) && (var107 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((myvar0 == 1) && (var108 >= 0) && (var108 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((myvar0 == 1) && (var109 >= 0) && (var109 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((myvar0 == 1) && (var110 >= 0) && (var110 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((myvar0 == 1) && (var111 >= 0) && (var111 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((myvar0 == 1) && (var112 >= 0) && (var112 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((myvar0 == 1) && (var113 >= 0) && (var113 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((myvar0 == 1) && (var114 >= 0) && (var114 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((myvar0 == 1) && (var115 >= 0) && (var115 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((myvar0 == 1) && (var116 >= 0) && (var116 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((myvar0 == 1) && (var117 >= 0) && (var117 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((myvar0 == 1) && (var118 >= 0) && (var118 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((myvar0 == 1) && (var119 >= 0) && (var119 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((myvar0 == 1) && (var120 >= 0) && (var120 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((myvar0 == 1) && (var121 >= 0) && (var121 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((myvar0 == 1) && (var122 >= 0) && (var122 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((myvar0 == 1) && (var123 >= 0) && (var123 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((myvar0 == 1) && (var124 >= 0) && (var124 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((myvar0 == 1) && (var125 >= 0) && (var125 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((myvar0 == 1) && (var126 >= 0) && (var126 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((myvar0 == 1) && (var127 >= 0) && (var127 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((myvar0 == 1) && (var128 >= 0) && (var128 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((myvar0 == 1) && (var129 >= 0) && (var129 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((myvar0 == 1) && (var130 >= 0) && (var130 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((myvar0 == 1) && (var131 >= 0) && (var131 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((myvar0 == 1) && (var132 >= 0) && (var132 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((myvar0 == 1) && (var133 >= 0) && (var133 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((myvar0 == 1) && (var134 >= 0) && (var134 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((myvar0 == 1) && (var135 >= 0) && (var135 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((myvar0 == 1) && (var136 >= 0) && (var136 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((myvar0 == 1) && (var137 >= 0) && (var137 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((myvar0 == 1) && (var138 >= 0) && (var138 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((myvar0 == 1) && (var139 >= 0) && (var139 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((myvar0 == 1) && (var140 >= 0) && (var140 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((myvar0 == 1) && (var141 >= 0) && (var141 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((myvar0 == 1) && (var142 >= 0) && (var142 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((myvar0 == 1) && (var143 >= 0) && (var143 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((myvar0 == 1) && (var144 >= 0) && (var144 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((myvar0 == 1) && (var145 >= 0) && (var145 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((myvar0 == 1) && (var146 >= 0) && (var146 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((myvar0 == 1) && (var147 >= 0) && (var147 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((myvar0 == 1) && (var148 >= 0) && (var148 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((myvar0 == 1) && (var149 >= 0) && (var149 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((myvar0 == 1) && (var150 >= 0) && (var150 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((myvar0 == 1) && (var151 >= 0) && (var151 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((myvar0 == 1) && (var152 >= 0) && (var152 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((myvar0 == 1) && (var153 >= 0) && (var153 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((myvar0 == 1) && (var154 >= 0) && (var154 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((myvar0 == 1) && (var155 >= 0) && (var155 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((myvar0 == 1) && (var156 >= 0) && (var156 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((myvar0 == 1) && (var157 >= 0) && (var157 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((myvar0 == 1) && (var158 >= 0) && (var158 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((myvar0 == 1) && (var159 >= 0) && (var159 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((myvar0 == 1) && (var160 >= 0) && (var160 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((myvar0 == 1) && (var161 >= 0) && (var161 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((myvar0 == 1) && (var162 >= 0) && (var162 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((myvar0 == 1) && (var163 >= 0) && (var163 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((myvar0 == 1) && (var164 >= 0) && (var164 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((myvar0 == 1) && (var165 >= 0) && (var165 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((myvar0 == 1) && (var166 >= 0) && (var166 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((myvar0 == 1) && (var167 >= 0) && (var167 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((myvar0 == 1) && (var168 >= 0) && (var168 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((myvar0 == 1) && (var169 >= 0) && (var169 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((myvar0 == 1) && (var170 >= 0) && (var170 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((myvar0 == 1) && (var171 >= 0) && (var171 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((myvar0 == 1) && (var172 >= 0) && (var172 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((myvar0 == 1) && (var173 >= 0) && (var173 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((myvar0 == 1) && (var174 >= 0) && (var174 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((myvar0 == 1) && (var175 >= 0) && (var175 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((myvar0 == 1) && (var176 >= 0) && (var176 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((myvar0 == 1) && (var177 >= 0) && (var177 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((myvar0 == 1) && (var178 >= 0) && (var178 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((myvar0 == 1) && (var179 >= 0) && (var179 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((myvar0 == 1) && (var180 >= 0) && (var180 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((myvar0 == 1) && (var181 >= 0) && (var181 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((myvar0 == 1) && (var182 >= 0) && (var182 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((myvar0 == 1) && (var183 >= 0) && (var183 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((myvar0 == 1) && (var184 >= 0) && (var184 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((myvar0 == 1) && (var185 >= 0) && (var185 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((myvar0 == 1) && (var186 >= 0) && (var186 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((myvar0 == 1) && (var187 >= 0) && (var187 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((myvar0 == 1) && (var188 >= 0) && (var188 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((myvar0 == 1) && (var189 >= 0) && (var189 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((myvar0 == 1) && (var190 >= 0) && (var190 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((myvar0 == 1) && (var191 >= 0) && (var191 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((myvar0 == 1) && (var192 >= 0) && (var192 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((myvar0 == 1) && (var193 >= 0) && (var193 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((myvar0 == 1) && (var194 >= 0) && (var194 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((myvar0 == 1) && (var195 >= 0) && (var195 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
if((myvar0 == 1) && (var196 >= 0) && (var196 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
if((myvar0 == 1) && (var197 >= 0) && (var197 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
if((myvar0 == 1) && (var198 >= 0) && (var198 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
if((myvar0 == 1) && (var199 >= 0) && (var199 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
if((myvar0 == 1) && (var200 >= 0) && (var200 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
if((myvar0 == 1) && (var201 >= 0) && (var201 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
if((myvar0 == 1) && (var202 >= 0) && (var202 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
if((myvar0 == 1) && (var203 >= 0) && (var203 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
if((myvar0 == 1) && (var204 >= 0) && (var204 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
if((myvar0 == 1) && (var205 >= 0) && (var205 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
if((myvar0 == 1) && (var206 >= 0) && (var206 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
if((myvar0 == 1) && (var207 >= 0) && (var207 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
if((myvar0 == 1) && (var208 >= 0) && (var208 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
if((myvar0 == 1) && (var209 >= 0) && (var209 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
if((myvar0 == 1) && (var210 >= 0) && (var210 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
if((myvar0 == 1) && (var211 >= 0) && (var211 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
if((myvar0 == 1) && (var212 >= 0) && (var212 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
if((myvar0 == 1) && (var213 >= 0) && (var213 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
if((myvar0 == 1) && (var214 >= 0) && (var214 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
if((myvar0 == 1) && (var215 >= 0) && (var215 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
if((myvar0 == 1) && (var216 >= 0) && (var216 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
if((myvar0 == 1) && (var217 >= 0) && (var217 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
if((myvar0 == 1) && (var218 >= 0) && (var218 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
if((myvar0 == 1) && (var219 >= 0) && (var219 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
if((myvar0 == 1) && (var220 >= 0) && (var220 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
if((myvar0 == 1) && (var221 >= 0) && (var221 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
if((myvar0 == 1) && (var222 >= 0) && (var222 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
if((myvar0 == 1) && (var223 >= 0) && (var223 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
if((myvar0 == 1) && (var224 >= 0) && (var224 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var225;
klee_make_symbolic(&var225, sizeof(var225), "var225");
if((myvar0 == 1) && (var225 >= 0) && (var225 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var226;
klee_make_symbolic(&var226, sizeof(var226), "var226");
if((myvar0 == 1) && (var226 >= 0) && (var226 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var227;
klee_make_symbolic(&var227, sizeof(var227), "var227");
if((myvar0 == 1) && (var227 >= 0) && (var227 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var228;
klee_make_symbolic(&var228, sizeof(var228), "var228");
if((myvar0 == 1) && (var228 >= 0) && (var228 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var229;
klee_make_symbolic(&var229, sizeof(var229), "var229");
if((myvar0 == 1) && (var229 >= 0) && (var229 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var230;
klee_make_symbolic(&var230, sizeof(var230), "var230");
if((myvar0 == 1) && (var230 >= 0) && (var230 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var231;
klee_make_symbolic(&var231, sizeof(var231), "var231");
if((myvar0 == 1) && (var231 >= 0) && (var231 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var232;
klee_make_symbolic(&var232, sizeof(var232), "var232");
if((myvar0 == 1) && (var232 >= 0) && (var232 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var233;
klee_make_symbolic(&var233, sizeof(var233), "var233");
if((myvar0 == 1) && (var233 >= 0) && (var233 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var234;
klee_make_symbolic(&var234, sizeof(var234), "var234");
if((myvar0 == 1) && (var234 >= 0) && (var234 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var235;
klee_make_symbolic(&var235, sizeof(var235), "var235");
if((myvar0 == 1) && (var235 >= 0) && (var235 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var236;
klee_make_symbolic(&var236, sizeof(var236), "var236");
if((myvar0 == 1) && (var236 >= 0) && (var236 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var237;
klee_make_symbolic(&var237, sizeof(var237), "var237");
if((myvar0 == 1) && (var237 >= 0) && (var237 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var238;
klee_make_symbolic(&var238, sizeof(var238), "var238");
if((myvar0 == 1) && (var238 >= 0) && (var238 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var239;
klee_make_symbolic(&var239, sizeof(var239), "var239");
if((myvar0 == 1) && (var239 >= 0) && (var239 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var240;
klee_make_symbolic(&var240, sizeof(var240), "var240");
if((myvar0 == 1) && (var240 >= 0) && (var240 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var241;
klee_make_symbolic(&var241, sizeof(var241), "var241");
if((myvar0 == 1) && (var241 >= 0) && (var241 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var242;
klee_make_symbolic(&var242, sizeof(var242), "var242");
if((myvar0 == 1) && (var242 >= 0) && (var242 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var243;
klee_make_symbolic(&var243, sizeof(var243), "var243");
if((myvar0 == 1) && (var243 >= 0) && (var243 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var244;
klee_make_symbolic(&var244, sizeof(var244), "var244");
if((myvar0 == 1) && (var244 >= 0) && (var244 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var245;
klee_make_symbolic(&var245, sizeof(var245), "var245");
if((myvar0 == 1) && (var245 >= 0) && (var245 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var246;
klee_make_symbolic(&var246, sizeof(var246), "var246");
if((myvar0 == 1) && (var246 >= 0) && (var246 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var247;
klee_make_symbolic(&var247, sizeof(var247), "var247");
if((myvar0 == 1) && (var247 >= 0) && (var247 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var248;
klee_make_symbolic(&var248, sizeof(var248), "var248");
if((myvar0 == 1) && (var248 >= 0) && (var248 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var249;
klee_make_symbolic(&var249, sizeof(var249), "var249");
if((myvar0 == 1) && (var249 >= 0) && (var249 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var250;
klee_make_symbolic(&var250, sizeof(var250), "var250");
if((myvar0 == 1) && (var250 >= 0) && (var250 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var251;
klee_make_symbolic(&var251, sizeof(var251), "var251");
if((myvar0 == 1) && (var251 >= 0) && (var251 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var252;
klee_make_symbolic(&var252, sizeof(var252), "var252");
if((myvar0 == 1) && (var252 >= 0) && (var252 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var253;
klee_make_symbolic(&var253, sizeof(var253), "var253");
if((myvar0 == 1) && (var253 >= 0) && (var253 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var254;
klee_make_symbolic(&var254, sizeof(var254), "var254");
if((myvar0 == 1) && (var254 >= 0) && (var254 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var255;
klee_make_symbolic(&var255, sizeof(var255), "var255");
if((myvar0 == 1) && (var255 >= 0) && (var255 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var256;
klee_make_symbolic(&var256, sizeof(var256), "var256");
if((myvar0 == 1) && (var256 >= 0) && (var256 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var257;
klee_make_symbolic(&var257, sizeof(var257), "var257");
if((myvar0 == 1) && (var257 >= 0) && (var257 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var258;
klee_make_symbolic(&var258, sizeof(var258), "var258");
if((myvar0 == 1) && (var258 >= 0) && (var258 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var259;
klee_make_symbolic(&var259, sizeof(var259), "var259");
if((myvar0 == 1) && (var259 >= 0) && (var259 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var260;
klee_make_symbolic(&var260, sizeof(var260), "var260");
if((myvar0 == 1) && (var260 >= 0) && (var260 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var261;
klee_make_symbolic(&var261, sizeof(var261), "var261");
if((myvar0 == 1) && (var261 >= 0) && (var261 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var262;
klee_make_symbolic(&var262, sizeof(var262), "var262");
if((myvar0 == 1) && (var262 >= 0) && (var262 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var263;
klee_make_symbolic(&var263, sizeof(var263), "var263");
if((myvar0 == 1) && (var263 >= 0) && (var263 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var264;
klee_make_symbolic(&var264, sizeof(var264), "var264");
if((myvar0 == 1) && (var264 >= 0) && (var264 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var265;
klee_make_symbolic(&var265, sizeof(var265), "var265");
if((myvar0 == 1) && (var265 >= 0) && (var265 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var266;
klee_make_symbolic(&var266, sizeof(var266), "var266");
if((myvar0 == 1) && (var266 >= 0) && (var266 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var267;
klee_make_symbolic(&var267, sizeof(var267), "var267");
if((myvar0 == 1) && (var267 >= 0) && (var267 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var268;
klee_make_symbolic(&var268, sizeof(var268), "var268");
if((myvar0 == 1) && (var268 >= 0) && (var268 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var269;
klee_make_symbolic(&var269, sizeof(var269), "var269");
if((myvar0 == 1) && (var269 >= 0) && (var269 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var270;
klee_make_symbolic(&var270, sizeof(var270), "var270");
if((myvar0 == 1) && (var270 >= 0) && (var270 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var271;
klee_make_symbolic(&var271, sizeof(var271), "var271");
if((myvar0 == 1) && (var271 >= 0) && (var271 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var272;
klee_make_symbolic(&var272, sizeof(var272), "var272");
if((myvar0 == 1) && (var272 >= 0) && (var272 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var273;
klee_make_symbolic(&var273, sizeof(var273), "var273");
if((myvar0 == 1) && (var273 >= 0) && (var273 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var274;
klee_make_symbolic(&var274, sizeof(var274), "var274");
if((myvar0 == 1) && (var274 >= 0) && (var274 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var275;
klee_make_symbolic(&var275, sizeof(var275), "var275");
if((myvar0 == 1) && (var275 >= 0) && (var275 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var276;
klee_make_symbolic(&var276, sizeof(var276), "var276");
if((myvar0 == 1) && (var276 >= 0) && (var276 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var277;
klee_make_symbolic(&var277, sizeof(var277), "var277");
if((myvar0 == 1) && (var277 >= 0) && (var277 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var278;
klee_make_symbolic(&var278, sizeof(var278), "var278");
if((myvar0 == 1) && (var278 >= 0) && (var278 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var279;
klee_make_symbolic(&var279, sizeof(var279), "var279");
if((myvar0 == 1) && (var279 >= 0) && (var279 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var280;
klee_make_symbolic(&var280, sizeof(var280), "var280");
if((myvar0 == 1) && (var280 >= 0) && (var280 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var281;
klee_make_symbolic(&var281, sizeof(var281), "var281");
if((myvar0 == 1) && (var281 >= 0) && (var281 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var282;
klee_make_symbolic(&var282, sizeof(var282), "var282");
if((myvar0 == 1) && (var282 >= 0) && (var282 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var283;
klee_make_symbolic(&var283, sizeof(var283), "var283");
if((myvar0 == 1) && (var283 >= 0) && (var283 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var284;
klee_make_symbolic(&var284, sizeof(var284), "var284");
if((myvar0 == 1) && (var284 >= 0) && (var284 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var285;
klee_make_symbolic(&var285, sizeof(var285), "var285");
if((myvar0 == 1) && (var285 >= 0) && (var285 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var286;
klee_make_symbolic(&var286, sizeof(var286), "var286");
if((myvar0 == 1) && (var286 >= 0) && (var286 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var287;
klee_make_symbolic(&var287, sizeof(var287), "var287");
if((myvar0 == 1) && (var287 >= 0) && (var287 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var288;
klee_make_symbolic(&var288, sizeof(var288), "var288");
if((myvar0 == 1) && (var288 >= 0) && (var288 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var289;
klee_make_symbolic(&var289, sizeof(var289), "var289");
if((myvar0 == 1) && (var289 >= 0) && (var289 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var290;
klee_make_symbolic(&var290, sizeof(var290), "var290");
if((myvar0 == 1) && (var290 >= 0) && (var290 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var291;
klee_make_symbolic(&var291, sizeof(var291), "var291");
if((myvar0 == 1) && (var291 >= 0) && (var291 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var292;
klee_make_symbolic(&var292, sizeof(var292), "var292");
if((myvar0 == 1) && (var292 >= 0) && (var292 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var293;
klee_make_symbolic(&var293, sizeof(var293), "var293");
if((myvar0 == 1) && (var293 >= 0) && (var293 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var294;
klee_make_symbolic(&var294, sizeof(var294), "var294");
if((myvar0 == 1) && (var294 >= 0) && (var294 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var295;
klee_make_symbolic(&var295, sizeof(var295), "var295");
if((myvar0 == 1) && (var295 >= 0) && (var295 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var296;
klee_make_symbolic(&var296, sizeof(var296), "var296");
if((myvar0 == 1) && (var296 >= 0) && (var296 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var297;
klee_make_symbolic(&var297, sizeof(var297), "var297");
if((myvar0 == 1) && (var297 >= 0) && (var297 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var298;
klee_make_symbolic(&var298, sizeof(var298), "var298");
if((myvar0 == 1) && (var298 >= 0) && (var298 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var299;
klee_make_symbolic(&var299, sizeof(var299), "var299");
if((myvar0 == 1) && (var299 >= 0) && (var299 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var300;
klee_make_symbolic(&var300, sizeof(var300), "var300");
if((myvar0 == 1) && (var300 >= 0) && (var300 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var301;
klee_make_symbolic(&var301, sizeof(var301), "var301");
if((myvar0 == 1) && (var301 >= 0) && (var301 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var302;
klee_make_symbolic(&var302, sizeof(var302), "var302");
if((myvar0 == 1) && (var302 >= 0) && (var302 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var303;
klee_make_symbolic(&var303, sizeof(var303), "var303");
if((myvar0 == 1) && (var303 >= 0) && (var303 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var304;
klee_make_symbolic(&var304, sizeof(var304), "var304");
if((myvar0 == 1) && (var304 >= 0) && (var304 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var305;
klee_make_symbolic(&var305, sizeof(var305), "var305");
if((myvar0 == 1) && (var305 >= 0) && (var305 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var306;
klee_make_symbolic(&var306, sizeof(var306), "var306");
if((myvar0 == 1) && (var306 >= 0) && (var306 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var307;
klee_make_symbolic(&var307, sizeof(var307), "var307");
if((myvar0 == 1) && (var307 >= 0) && (var307 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var308;
klee_make_symbolic(&var308, sizeof(var308), "var308");
if((myvar0 == 1) && (var308 >= 0) && (var308 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var309;
klee_make_symbolic(&var309, sizeof(var309), "var309");
if((myvar0 == 1) && (var309 >= 0) && (var309 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var310;
klee_make_symbolic(&var310, sizeof(var310), "var310");
if((myvar0 == 1) && (var310 >= 0) && (var310 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var311;
klee_make_symbolic(&var311, sizeof(var311), "var311");
if((myvar0 == 1) && (var311 >= 0) && (var311 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var312;
klee_make_symbolic(&var312, sizeof(var312), "var312");
if((myvar0 == 1) && (var312 >= 0) && (var312 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var313;
klee_make_symbolic(&var313, sizeof(var313), "var313");
if((myvar0 == 1) && (var313 >= 0) && (var313 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var314;
klee_make_symbolic(&var314, sizeof(var314), "var314");
if((myvar0 == 1) && (var314 >= 0) && (var314 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var315;
klee_make_symbolic(&var315, sizeof(var315), "var315");
if((myvar0 == 1) && (var315 >= 0) && (var315 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var316;
klee_make_symbolic(&var316, sizeof(var316), "var316");
if((myvar0 == 1) && (var316 >= 0) && (var316 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var317;
klee_make_symbolic(&var317, sizeof(var317), "var317");
if((myvar0 == 1) && (var317 >= 0) && (var317 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var318;
klee_make_symbolic(&var318, sizeof(var318), "var318");
if((myvar0 == 1) && (var318 >= 0) && (var318 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var319;
klee_make_symbolic(&var319, sizeof(var319), "var319");
if((myvar0 == 1) && (var319 >= 0) && (var319 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var320;
klee_make_symbolic(&var320, sizeof(var320), "var320");
if((myvar0 == 1) && (var320 >= 0) && (var320 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var321;
klee_make_symbolic(&var321, sizeof(var321), "var321");
if((myvar0 == 1) && (var321 >= 0) && (var321 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var322;
klee_make_symbolic(&var322, sizeof(var322), "var322");
if((myvar0 == 1) && (var322 >= 0) && (var322 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var323;
klee_make_symbolic(&var323, sizeof(var323), "var323");
if((myvar0 == 1) && (var323 >= 0) && (var323 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var324;
klee_make_symbolic(&var324, sizeof(var324), "var324");
if((myvar0 == 1) && (var324 >= 0) && (var324 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var325;
klee_make_symbolic(&var325, sizeof(var325), "var325");
if((myvar0 == 1) && (var325 >= 0) && (var325 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var326;
klee_make_symbolic(&var326, sizeof(var326), "var326");
if((myvar0 == 1) && (var326 >= 0) && (var326 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var327;
klee_make_symbolic(&var327, sizeof(var327), "var327");
if((myvar0 == 1) && (var327 >= 0) && (var327 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var328;
klee_make_symbolic(&var328, sizeof(var328), "var328");
if((myvar0 == 1) && (var328 >= 0) && (var328 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var329;
klee_make_symbolic(&var329, sizeof(var329), "var329");
if((myvar0 == 1) && (var329 >= 0) && (var329 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var330;
klee_make_symbolic(&var330, sizeof(var330), "var330");
if((myvar0 == 1) && (var330 >= 0) && (var330 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var331;
klee_make_symbolic(&var331, sizeof(var331), "var331");
if((myvar0 == 1) && (var331 >= 0) && (var331 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var332;
klee_make_symbolic(&var332, sizeof(var332), "var332");
if((myvar0 == 1) && (var332 >= 0) && (var332 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var333;
klee_make_symbolic(&var333, sizeof(var333), "var333");
if((myvar0 == 1) && (var333 >= 0) && (var333 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var334;
klee_make_symbolic(&var334, sizeof(var334), "var334");
if((myvar0 == 1) && (var334 >= 0) && (var334 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var335;
klee_make_symbolic(&var335, sizeof(var335), "var335");
if((myvar0 == 1) && (var335 >= 0) && (var335 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var336;
klee_make_symbolic(&var336, sizeof(var336), "var336");
if((myvar0 == 1) && (var336 >= 0) && (var336 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var337;
klee_make_symbolic(&var337, sizeof(var337), "var337");
if((myvar0 == 1) && (var337 >= 0) && (var337 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var338;
klee_make_symbolic(&var338, sizeof(var338), "var338");
if((myvar0 == 1) && (var338 >= 0) && (var338 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var339;
klee_make_symbolic(&var339, sizeof(var339), "var339");
if((myvar0 == 1) && (var339 >= 0) && (var339 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var340;
klee_make_symbolic(&var340, sizeof(var340), "var340");
if((myvar0 == 1) && (var340 >= 0) && (var340 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var341;
klee_make_symbolic(&var341, sizeof(var341), "var341");
if((myvar0 == 1) && (var341 >= 0) && (var341 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var342;
klee_make_symbolic(&var342, sizeof(var342), "var342");
if((myvar0 == 1) && (var342 >= 0) && (var342 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var343;
klee_make_symbolic(&var343, sizeof(var343), "var343");
if((myvar0 == 1) && (var343 >= 0) && (var343 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var344;
klee_make_symbolic(&var344, sizeof(var344), "var344");
if((myvar0 == 1) && (var344 >= 0) && (var344 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var345;
klee_make_symbolic(&var345, sizeof(var345), "var345");
if((myvar0 == 1) && (var345 >= 0) && (var345 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var346;
klee_make_symbolic(&var346, sizeof(var346), "var346");
if((myvar0 == 1) && (var346 >= 0) && (var346 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var347;
klee_make_symbolic(&var347, sizeof(var347), "var347");
if((myvar0 == 1) && (var347 >= 0) && (var347 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var348;
klee_make_symbolic(&var348, sizeof(var348), "var348");
if((myvar0 == 1) && (var348 >= 0) && (var348 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var349;
klee_make_symbolic(&var349, sizeof(var349), "var349");
if((myvar0 == 1) && (var349 >= 0) && (var349 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var350;
klee_make_symbolic(&var350, sizeof(var350), "var350");
if((myvar0 == 1) && (var350 >= 0) && (var350 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var351;
klee_make_symbolic(&var351, sizeof(var351), "var351");
if((myvar0 == 1) && (var351 >= 0) && (var351 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var352;
klee_make_symbolic(&var352, sizeof(var352), "var352");
if((myvar0 == 1) && (var352 >= 0) && (var352 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var353;
klee_make_symbolic(&var353, sizeof(var353), "var353");
if((myvar0 == 1) && (var353 >= 0) && (var353 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var354;
klee_make_symbolic(&var354, sizeof(var354), "var354");
if((myvar0 == 1) && (var354 >= 0) && (var354 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var355;
klee_make_symbolic(&var355, sizeof(var355), "var355");
if((myvar0 == 1) && (var355 >= 0) && (var355 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var356;
klee_make_symbolic(&var356, sizeof(var356), "var356");
if((myvar0 == 1) && (var356 >= 0) && (var356 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var357;
klee_make_symbolic(&var357, sizeof(var357), "var357");
if((myvar0 == 1) && (var357 >= 0) && (var357 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var358;
klee_make_symbolic(&var358, sizeof(var358), "var358");
if((myvar0 == 1) && (var358 >= 0) && (var358 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var359;
klee_make_symbolic(&var359, sizeof(var359), "var359");
if((myvar0 == 1) && (var359 >= 0) && (var359 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var360;
klee_make_symbolic(&var360, sizeof(var360), "var360");
if((myvar0 == 1) && (var360 >= 0) && (var360 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var361;
klee_make_symbolic(&var361, sizeof(var361), "var361");
if((myvar0 == 1) && (var361 >= 0) && (var361 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var362;
klee_make_symbolic(&var362, sizeof(var362), "var362");
if((myvar0 == 1) && (var362 >= 0) && (var362 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var363;
klee_make_symbolic(&var363, sizeof(var363), "var363");
if((myvar0 == 1) && (var363 >= 0) && (var363 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var364;
klee_make_symbolic(&var364, sizeof(var364), "var364");
if((myvar0 == 1) && (var364 >= 0) && (var364 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var365;
klee_make_symbolic(&var365, sizeof(var365), "var365");
if((myvar0 == 1) && (var365 >= 0) && (var365 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var366;
klee_make_symbolic(&var366, sizeof(var366), "var366");
if((myvar0 == 1) && (var366 >= 0) && (var366 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var367;
klee_make_symbolic(&var367, sizeof(var367), "var367");
if((myvar0 == 1) && (var367 >= 0) && (var367 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var368;
klee_make_symbolic(&var368, sizeof(var368), "var368");
if((myvar0 == 1) && (var368 >= 0) && (var368 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var369;
klee_make_symbolic(&var369, sizeof(var369), "var369");
if((myvar0 == 1) && (var369 >= 0) && (var369 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var370;
klee_make_symbolic(&var370, sizeof(var370), "var370");
if((myvar0 == 1) && (var370 >= 0) && (var370 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var371;
klee_make_symbolic(&var371, sizeof(var371), "var371");
if((myvar0 == 1) && (var371 >= 0) && (var371 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var372;
klee_make_symbolic(&var372, sizeof(var372), "var372");
if((myvar0 == 1) && (var372 >= 0) && (var372 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var373;
klee_make_symbolic(&var373, sizeof(var373), "var373");
if((myvar0 == 1) && (var373 >= 0) && (var373 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var374;
klee_make_symbolic(&var374, sizeof(var374), "var374");
if((myvar0 == 1) && (var374 >= 0) && (var374 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var375;
klee_make_symbolic(&var375, sizeof(var375), "var375");
if((myvar0 == 1) && (var375 >= 0) && (var375 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var376;
klee_make_symbolic(&var376, sizeof(var376), "var376");
if((myvar0 == 1) && (var376 >= 0) && (var376 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var377;
klee_make_symbolic(&var377, sizeof(var377), "var377");
if((myvar0 == 1) && (var377 >= 0) && (var377 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var378;
klee_make_symbolic(&var378, sizeof(var378), "var378");
if((myvar0 == 1) && (var378 >= 0) && (var378 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var379;
klee_make_symbolic(&var379, sizeof(var379), "var379");
if((myvar0 == 1) && (var379 >= 0) && (var379 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var380;
klee_make_symbolic(&var380, sizeof(var380), "var380");
if((myvar0 == 1) && (var380 >= 0) && (var380 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var381;
klee_make_symbolic(&var381, sizeof(var381), "var381");
if((myvar0 == 1) && (var381 >= 0) && (var381 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var382;
klee_make_symbolic(&var382, sizeof(var382), "var382");
if((myvar0 == 1) && (var382 >= 0) && (var382 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var383;
klee_make_symbolic(&var383, sizeof(var383), "var383");
if((myvar0 == 1) && (var383 >= 0) && (var383 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var384;
klee_make_symbolic(&var384, sizeof(var384), "var384");
if((myvar0 == 1) && (var384 >= 0) && (var384 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var385;
klee_make_symbolic(&var385, sizeof(var385), "var385");
if((myvar0 == 1) && (var385 >= 0) && (var385 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var386;
klee_make_symbolic(&var386, sizeof(var386), "var386");
if((myvar0 == 1) && (var386 >= 0) && (var386 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var387;
klee_make_symbolic(&var387, sizeof(var387), "var387");
if((myvar0 == 1) && (var387 >= 0) && (var387 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var388;
klee_make_symbolic(&var388, sizeof(var388), "var388");
if((myvar0 == 1) && (var388 >= 0) && (var388 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var389;
klee_make_symbolic(&var389, sizeof(var389), "var389");
if((myvar0 == 1) && (var389 >= 0) && (var389 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var390;
klee_make_symbolic(&var390, sizeof(var390), "var390");
if((myvar0 == 1) && (var390 >= 0) && (var390 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var391;
klee_make_symbolic(&var391, sizeof(var391), "var391");
if((myvar0 == 1) && (var391 >= 0) && (var391 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var392;
klee_make_symbolic(&var392, sizeof(var392), "var392");
if((myvar0 == 1) && (var392 >= 0) && (var392 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var393;
klee_make_symbolic(&var393, sizeof(var393), "var393");
if((myvar0 == 1) && (var393 >= 0) && (var393 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var394;
klee_make_symbolic(&var394, sizeof(var394), "var394");
if((myvar0 == 1) && (var394 >= 0) && (var394 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var395;
klee_make_symbolic(&var395, sizeof(var395), "var395");
if((myvar0 == 1) && (var395 >= 0) && (var395 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var396;
klee_make_symbolic(&var396, sizeof(var396), "var396");
if((myvar0 == 1) && (var396 >= 0) && (var396 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var397;
klee_make_symbolic(&var397, sizeof(var397), "var397");
if((myvar0 == 1) && (var397 >= 0) && (var397 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var398;
klee_make_symbolic(&var398, sizeof(var398), "var398");
if((myvar0 == 1) && (var398 >= 0) && (var398 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var399;
klee_make_symbolic(&var399, sizeof(var399), "var399");
if((myvar0 == 1) && (var399 >= 0) && (var399 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var400;
klee_make_symbolic(&var400, sizeof(var400), "var400");
if((myvar0 == 1) && (var400 >= 0) && (var400 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var401;
klee_make_symbolic(&var401, sizeof(var401), "var401");
if((myvar0 == 1) && (var401 >= 0) && (var401 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var402;
klee_make_symbolic(&var402, sizeof(var402), "var402");
if((myvar0 == 1) && (var402 >= 0) && (var402 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var403;
klee_make_symbolic(&var403, sizeof(var403), "var403");
if((myvar0 == 1) && (var403 >= 0) && (var403 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var404;
klee_make_symbolic(&var404, sizeof(var404), "var404");
if((myvar0 == 1) && (var404 >= 0) && (var404 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var405;
klee_make_symbolic(&var405, sizeof(var405), "var405");
if((myvar0 == 1) && (var405 >= 0) && (var405 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var406;
klee_make_symbolic(&var406, sizeof(var406), "var406");
if((myvar0 == 1) && (var406 >= 0) && (var406 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var407;
klee_make_symbolic(&var407, sizeof(var407), "var407");
if((myvar0 == 1) && (var407 >= 0) && (var407 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var408;
klee_make_symbolic(&var408, sizeof(var408), "var408");
if((myvar0 == 1) && (var408 >= 0) && (var408 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var409;
klee_make_symbolic(&var409, sizeof(var409), "var409");
if((myvar0 == 1) && (var409 >= 0) && (var409 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var410;
klee_make_symbolic(&var410, sizeof(var410), "var410");
if((myvar0 == 1) && (var410 >= 0) && (var410 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var411;
klee_make_symbolic(&var411, sizeof(var411), "var411");
if((myvar0 == 1) && (var411 >= 0) && (var411 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var412;
klee_make_symbolic(&var412, sizeof(var412), "var412");
if((myvar0 == 1) && (var412 >= 0) && (var412 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var413;
klee_make_symbolic(&var413, sizeof(var413), "var413");
if((myvar0 == 1) && (var413 >= 0) && (var413 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var414;
klee_make_symbolic(&var414, sizeof(var414), "var414");
if((myvar0 == 1) && (var414 >= 0) && (var414 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var415;
klee_make_symbolic(&var415, sizeof(var415), "var415");
if((myvar0 == 1) && (var415 >= 0) && (var415 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var416;
klee_make_symbolic(&var416, sizeof(var416), "var416");
if((myvar0 == 1) && (var416 >= 0) && (var416 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var417;
klee_make_symbolic(&var417, sizeof(var417), "var417");
if((myvar0 == 1) && (var417 >= 0) && (var417 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var418;
klee_make_symbolic(&var418, sizeof(var418), "var418");
if((myvar0 == 1) && (var418 >= 0) && (var418 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var419;
klee_make_symbolic(&var419, sizeof(var419), "var419");
if((myvar0 == 1) && (var419 >= 0) && (var419 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var420;
klee_make_symbolic(&var420, sizeof(var420), "var420");
if((myvar0 == 1) && (var420 >= 0) && (var420 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var421;
klee_make_symbolic(&var421, sizeof(var421), "var421");
if((myvar0 == 1) && (var421 >= 0) && (var421 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var422;
klee_make_symbolic(&var422, sizeof(var422), "var422");
if((myvar0 == 1) && (var422 >= 0) && (var422 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var423;
klee_make_symbolic(&var423, sizeof(var423), "var423");
if((myvar0 == 1) && (var423 >= 0) && (var423 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var424;
klee_make_symbolic(&var424, sizeof(var424), "var424");
if((myvar0 == 1) && (var424 >= 0) && (var424 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var425;
klee_make_symbolic(&var425, sizeof(var425), "var425");
if((myvar0 == 1) && (var425 >= 0) && (var425 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var426;
klee_make_symbolic(&var426, sizeof(var426), "var426");
if((myvar0 == 1) && (var426 >= 0) && (var426 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var427;
klee_make_symbolic(&var427, sizeof(var427), "var427");
if((myvar0 == 1) && (var427 >= 0) && (var427 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var428;
klee_make_symbolic(&var428, sizeof(var428), "var428");
if((myvar0 == 1) && (var428 >= 0) && (var428 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var429;
klee_make_symbolic(&var429, sizeof(var429), "var429");
if((myvar0 == 1) && (var429 >= 0) && (var429 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var430;
klee_make_symbolic(&var430, sizeof(var430), "var430");
if((myvar0 == 1) && (var430 >= 0) && (var430 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var431;
klee_make_symbolic(&var431, sizeof(var431), "var431");
if((myvar0 == 1) && (var431 >= 0) && (var431 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var432;
klee_make_symbolic(&var432, sizeof(var432), "var432");
if((myvar0 == 1) && (var432 >= 0) && (var432 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var433;
klee_make_symbolic(&var433, sizeof(var433), "var433");
if((myvar0 == 1) && (var433 >= 0) && (var433 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var434;
klee_make_symbolic(&var434, sizeof(var434), "var434");
if((myvar0 == 1) && (var434 >= 0) && (var434 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var435;
klee_make_symbolic(&var435, sizeof(var435), "var435");
if((myvar0 == 1) && (var435 >= 0) && (var435 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var436;
klee_make_symbolic(&var436, sizeof(var436), "var436");
if((myvar0 == 1) && (var436 >= 0) && (var436 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var437;
klee_make_symbolic(&var437, sizeof(var437), "var437");
if((myvar0 == 1) && (var437 >= 0) && (var437 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var438;
klee_make_symbolic(&var438, sizeof(var438), "var438");
if((myvar0 == 1) && (var438 >= 0) && (var438 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var439;
klee_make_symbolic(&var439, sizeof(var439), "var439");
if((myvar0 == 1) && (var439 >= 0) && (var439 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var440;
klee_make_symbolic(&var440, sizeof(var440), "var440");
if((myvar0 == 1) && (var440 >= 0) && (var440 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var441;
klee_make_symbolic(&var441, sizeof(var441), "var441");
if((myvar0 == 1) && (var441 >= 0) && (var441 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var442;
klee_make_symbolic(&var442, sizeof(var442), "var442");
if((myvar0 == 1) && (var442 >= 0) && (var442 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var443;
klee_make_symbolic(&var443, sizeof(var443), "var443");
if((myvar0 == 1) && (var443 >= 0) && (var443 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var444;
klee_make_symbolic(&var444, sizeof(var444), "var444");
if((myvar0 == 1) && (var444 >= 0) && (var444 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var445;
klee_make_symbolic(&var445, sizeof(var445), "var445");
if((myvar0 == 1) && (var445 >= 0) && (var445 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var446;
klee_make_symbolic(&var446, sizeof(var446), "var446");
if((myvar0 == 1) && (var446 >= 0) && (var446 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var447;
klee_make_symbolic(&var447, sizeof(var447), "var447");
if((myvar0 == 1) && (var447 >= 0) && (var447 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var448;
klee_make_symbolic(&var448, sizeof(var448), "var448");
if((myvar0 == 1) && (var448 >= 0) && (var448 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var449;
klee_make_symbolic(&var449, sizeof(var449), "var449");
if((myvar0 == 1) && (var449 >= 0) && (var449 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var450;
klee_make_symbolic(&var450, sizeof(var450), "var450");
if((myvar0 == 1) && (var450 >= 0) && (var450 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var451;
klee_make_symbolic(&var451, sizeof(var451), "var451");
if((myvar0 == 1) && (var451 >= 0) && (var451 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var452;
klee_make_symbolic(&var452, sizeof(var452), "var452");
if((myvar0 == 1) && (var452 >= 0) && (var452 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var453;
klee_make_symbolic(&var453, sizeof(var453), "var453");
if((myvar0 == 1) && (var453 >= 0) && (var453 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var454;
klee_make_symbolic(&var454, sizeof(var454), "var454");
if((myvar0 == 1) && (var454 >= 0) && (var454 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var455;
klee_make_symbolic(&var455, sizeof(var455), "var455");
if((myvar0 == 1) && (var455 >= 0) && (var455 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var456;
klee_make_symbolic(&var456, sizeof(var456), "var456");
if((myvar0 == 1) && (var456 >= 0) && (var456 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var457;
klee_make_symbolic(&var457, sizeof(var457), "var457");
if((myvar0 == 1) && (var457 >= 0) && (var457 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var458;
klee_make_symbolic(&var458, sizeof(var458), "var458");
if((myvar0 == 1) && (var458 >= 0) && (var458 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var459;
klee_make_symbolic(&var459, sizeof(var459), "var459");
if((myvar0 == 1) && (var459 >= 0) && (var459 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var460;
klee_make_symbolic(&var460, sizeof(var460), "var460");
if((myvar0 == 1) && (var460 >= 0) && (var460 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var461;
klee_make_symbolic(&var461, sizeof(var461), "var461");
if((myvar0 == 1) && (var461 >= 0) && (var461 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var462;
klee_make_symbolic(&var462, sizeof(var462), "var462");
if((myvar0 == 1) && (var462 >= 0) && (var462 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var463;
klee_make_symbolic(&var463, sizeof(var463), "var463");
if((myvar0 == 1) && (var463 >= 0) && (var463 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var464;
klee_make_symbolic(&var464, sizeof(var464), "var464");
if((myvar0 == 1) && (var464 >= 0) && (var464 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var465;
klee_make_symbolic(&var465, sizeof(var465), "var465");
if((myvar0 == 1) && (var465 >= 0) && (var465 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var466;
klee_make_symbolic(&var466, sizeof(var466), "var466");
if((myvar0 == 1) && (var466 >= 0) && (var466 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var467;
klee_make_symbolic(&var467, sizeof(var467), "var467");
if((myvar0 == 1) && (var467 >= 0) && (var467 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var468;
klee_make_symbolic(&var468, sizeof(var468), "var468");
if((myvar0 == 1) && (var468 >= 0) && (var468 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var469;
klee_make_symbolic(&var469, sizeof(var469), "var469");
if((myvar0 == 1) && (var469 >= 0) && (var469 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var470;
klee_make_symbolic(&var470, sizeof(var470), "var470");
if((myvar0 == 1) && (var470 >= 0) && (var470 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var471;
klee_make_symbolic(&var471, sizeof(var471), "var471");
if((myvar0 == 1) && (var471 >= 0) && (var471 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var472;
klee_make_symbolic(&var472, sizeof(var472), "var472");
if((myvar0 == 1) && (var472 >= 0) && (var472 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var473;
klee_make_symbolic(&var473, sizeof(var473), "var473");
if((myvar0 == 1) && (var473 >= 0) && (var473 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var474;
klee_make_symbolic(&var474, sizeof(var474), "var474");
if((myvar0 == 1) && (var474 >= 0) && (var474 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var475;
klee_make_symbolic(&var475, sizeof(var475), "var475");
if((myvar0 == 1) && (var475 >= 0) && (var475 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var476;
klee_make_symbolic(&var476, sizeof(var476), "var476");
if((myvar0 == 1) && (var476 >= 0) && (var476 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var477;
klee_make_symbolic(&var477, sizeof(var477), "var477");
if((myvar0 == 1) && (var477 >= 0) && (var477 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var478;
klee_make_symbolic(&var478, sizeof(var478), "var478");
if((myvar0 == 1) && (var478 >= 0) && (var478 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var479;
klee_make_symbolic(&var479, sizeof(var479), "var479");
if((myvar0 == 1) && (var479 >= 0) && (var479 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var480;
klee_make_symbolic(&var480, sizeof(var480), "var480");
if((myvar0 == 1) && (var480 >= 0) && (var480 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var481;
klee_make_symbolic(&var481, sizeof(var481), "var481");
if((myvar0 == 1) && (var481 >= 0) && (var481 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var482;
klee_make_symbolic(&var482, sizeof(var482), "var482");
if((myvar0 == 1) && (var482 >= 0) && (var482 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var483;
klee_make_symbolic(&var483, sizeof(var483), "var483");
if((myvar0 == 1) && (var483 >= 0) && (var483 <= 21)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var167 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var216 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var223 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var233 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var241 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var250 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var294 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var295 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var315 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var322 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var324 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var324 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var324 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var324 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var325 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var326 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var330 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var348 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var383 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var392 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var394 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var404 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var405 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var406 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var411 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var415 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var446 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var458 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var462 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var462 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var462 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var465 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var465 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var465 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var465 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var465 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var465 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var471 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var471 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var471 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var482 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var401)*(var401 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var208)*(var208 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var310)*(var310 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var73)*(var73 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var1)*(var1 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var16)*(var16 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var208)*(var208 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var263)*(var263 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var310)*(var310 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var45)*(var45 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var194)*(var194 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var378)*(var378 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var388)*(var388 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var427)*(var427 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var470)*(var470 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var96)*(var96 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var97)*(var97 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var2)*(var2 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var288)*(var288 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var306)*(var306 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var339)*(var339 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var39)*(var39 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var417)*(var417 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var456)*(var456 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var55)*(var55 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var104)*(var104 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var205)*(var205 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var223)*(var223 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var279)*(var279 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var284)*(var284 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var285)*(var285 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var341)*(var341 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var430)*(var430 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var460)*(var460 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var480)*(var480 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var98)*(var98 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var206)*(var206 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var286)*(var286 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var405)*(var405 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var455)*(var455 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var464)*(var464 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var474)*(var474 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var480)*(var480 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var154)*(var154 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var32)*(var32 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var323)*(var323 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var357)*(var357 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var416)*(var416 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var2)*(var2 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var288)*(var288 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var339)*(var339 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var39)*(var39 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var447)*(var447 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var55)*(var55 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var147)*(var147 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var305)*(var305 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var314)*(var314 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var6)*(var6 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var11)*(var11 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var128)*(var128 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var135)*(var135 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var253)*(var253 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var325)*(var325 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var396)*(var396 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var63)*(var63 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var68)*(var68 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var154)*(var154 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var239)*(var239 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var318)*(var318 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var323)*(var323 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var357)*(var357 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var70)*(var70 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var126)*(var126 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var128)*(var128 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var248)*(var248 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var280)*(var280 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var396)*(var396 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var434)*(var434 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var437)*(var437 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var49)*(var49 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var57)*(var57 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var14)*(var14 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var182)*(var182 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var38)*(var38 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var391)*(var391 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var135)*(var135 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var280)*(var280 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var1)*(var1 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var10)*(var10 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var12)*(var12 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var16)*(var16 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var193)*(var193 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var252)*(var252 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var310)*(var310 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var50)*(var50 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var73)*(var73 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var78)*(var78 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var127)*(var127 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var156)*(var156 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var210)*(var210 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var266)*(var266 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var344)*(var344 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var448)*(var448 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var94)*(var94 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var200)*(var200 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var451)*(var451 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var1)*(var1 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var208)*(var208 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var263)*(var263 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var293)*(var293 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var310)*(var310 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var322)*(var322 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var45)*(var45 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var73)*(var73 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var461)*(var461 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var479)*(var479 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var0)*(var0 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var40)*(var40 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var38)*(var38 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var122 - var426)*(var426 - var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var144)*(var144 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var176)*(var176 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var184)*(var184 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var202)*(var202 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var255)*(var255 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var117)*(var117 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var169)*(var169 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var87)*(var87 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var479)*(var479 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var396)*(var396 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var400)*(var400 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var63)*(var63 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var68)*(var68 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var365)*(var365 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var412)*(var412 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var111)*(var111 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var253)*(var253 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var280)*(var280 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var396)*(var396 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var400)*(var400 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var63)*(var63 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var283)*(var283 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var328)*(var328 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var53)*(var53 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var67)*(var67 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var133)*(var133 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var158)*(var158 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var184)*(var184 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var198)*(var198 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var201)*(var201 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var255)*(var255 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var28)*(var28 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var395)*(var395 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var397)*(var397 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var90)*(var90 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var369)*(var369 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var122)*(var122 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var170)*(var170 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var182)*(var182 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var426)*(var426 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var101)*(var101 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var199)*(var199 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var123)*(var123 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var144)*(var144 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var176)*(var176 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var184)*(var184 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var302)*(var302 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var90)*(var90 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var163)*(var163 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var283)*(var283 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var328)*(var328 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var336)*(var336 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var394)*(var394 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var419)*(var419 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var432)*(var432 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var53)*(var53 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var75)*(var75 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var139)*(var139 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var148)*(var148 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var151)*(var151 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var80)*(var80 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var168)*(var168 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var183)*(var183 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var203)*(var203 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var262)*(var262 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var277)*(var277 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var383)*(var383 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var481)*(var481 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var5)*(var5 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var64)*(var64 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var105)*(var105 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var154)*(var154 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var160)*(var160 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var309)*(var309 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var318)*(var318 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var32)*(var32 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var321)*(var321 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var366)*(var366 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var408)*(var408 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var70)*(var70 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var151)*(var151 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var188)*(var188 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var74)*(var74 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var170)*(var170 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var182)*(var182 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var225)*(var225 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var89)*(var89 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var120)*(var120 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var125)*(var125 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var461)*(var461 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var479)*(var479 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var187)*(var187 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var196)*(var196 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var220)*(var220 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var233)*(var233 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var250)*(var250 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var298)*(var298 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var338)*(var338 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var355)*(var355 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var358)*(var358 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var369)*(var369 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var92)*(var92 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var116)*(var116 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var200)*(var200 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var353)*(var353 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var393)*(var393 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var444)*(var444 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var450)*(var450 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var451)*(var451 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var8)*(var8 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var145)*(var145 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var186)*(var186 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var200)*(var200 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var236)*(var236 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var25)*(var25 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var353)*(var353 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var381)*(var381 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var444)*(var444 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var450)*(var450 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var8)*(var8 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var177)*(var177 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var235)*(var235 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var151)*(var151 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var167)*(var167 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var19)*(var19 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var226)*(var226 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var287)*(var287 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var156)*(var156 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var308)*(var308 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var313)*(var313 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var345)*(var345 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var364)*(var364 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var384)*(var384 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var398)*(var398 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var188)*(var188 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var107)*(var107 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var119)*(var119 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var230)*(var230 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var235)*(var235 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var305)*(var305 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var6)*(var6 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var69)*(var69 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var335)*(var335 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var357)*(var357 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var277)*(var277 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var210)*(var210 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var412)*(var412 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var176)*(var176 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var255)*(var255 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var302)*(var302 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var290)*(var290 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var310)*(var310 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var239)*(var239 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var32)*(var32 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var323)*(var323 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var357)*(var357 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var120)*(var120 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var125)*(var125 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var142)*(var142 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var307)*(var307 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var77)*(var77 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var127)*(var127 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var149)*(var149 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var210)*(var210 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var344)*(var344 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var365)*(var365 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var448)*(var448 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var473)*(var473 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var20)*(var20 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var328)*(var328 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var379)*(var379 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var394)*(var394 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var419)*(var419 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var432)*(var432 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var75)*(var75 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var122)*(var122 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var182)*(var182 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var225)*(var225 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var426)*(var426 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var139)*(var139 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var151)*(var151 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var167)*(var167 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var171)*(var171 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var18)*(var18 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var181)*(var181 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var19)*(var19 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var213)*(var213 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var226)*(var226 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var457)*(var457 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var0)*(var0 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var121)*(var121 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var289)*(var289 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var401)*(var401 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var410)*(var410 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var139)*(var139 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var151)*(var151 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var188)*(var188 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var183)*(var183 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var334)*(var334 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var147)*(var147 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var177)*(var177 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var204)*(var204 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var235)*(var235 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var247)*(var247 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var300)*(var300 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var305)*(var305 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var343)*(var343 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var225)*(var225 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var89)*(var89 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var136)*(var136 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var151)*(var151 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var188)*(var188 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var287)*(var287 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var214)*(var214 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var257)*(var257 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var264)*(var264 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var373)*(var373 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var101)*(var101 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var2)*(var2 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var288)*(var288 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var306)*(var306 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var339)*(var339 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var39)*(var39 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var456)*(var456 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var55)*(var55 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var127)*(var127 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var149)*(var149 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var156)*(var156 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var172)*(var172 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var210)*(var210 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var266)*(var266 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var412)*(var412 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var94)*(var94 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var131)*(var131 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var14)*(var14 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var170)*(var170 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var182)*(var182 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var225)*(var225 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var426)*(var426 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var151)*(var151 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var167)*(var167 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var181)*(var181 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var226)*(var226 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var74)*(var74 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var101)*(var101 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var153)*(var153 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var199)*(var199 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var229)*(var229 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var278)*(var278 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var356)*(var356 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var428)*(var428 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var429)*(var429 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var139)*(var139 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var148)*(var148 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var188)*(var188 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var19)*(var19 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var213)*(var213 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var287)*(var287 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var122)*(var122 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var321)*(var321 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var323)*(var323 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var357)*(var357 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var416)*(var416 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var477)*(var477 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var353)*(var353 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var439)*(var439 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var444)*(var444 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var450)*(var450 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var451)*(var451 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var8)*(var8 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var130)*(var130 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var259)*(var259 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var369)*(var369 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var7)*(var7 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var92)*(var92 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var122)*(var122 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var131)*(var131 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var170)*(var170 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var179)*(var179 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var225)*(var225 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var254)*(var254 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var301)*(var301 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var391)*(var391 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var423)*(var423 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var86)*(var86 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var89)*(var89 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var188)*(var188 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var226)*(var226 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var74)*(var74 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var80)*(var80 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var352)*(var352 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var470)*(var470 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var100)*(var100 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var114)*(var114 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var118)*(var118 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var228)*(var228 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var271)*(var271 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var378)*(var378 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var402)*(var402 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var462)*(var462 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var96)*(var96 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var10)*(var10 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var12)*(var12 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var293)*(var293 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var310)*(var310 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var342)*(var342 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var431)*(var431 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var46)*(var46 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var50)*(var50 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var114)*(var114 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var352)*(var352 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var378)*(var378 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var388)*(var388 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var427)*(var427 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var470)*(var470 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var96)*(var96 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var124)*(var124 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var169)*(var169 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var117)*(var117 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var124)*(var124 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var195)*(var195 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var312)*(var312 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var346)*(var346 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var133)*(var133 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var184)*(var184 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var201)*(var201 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var232)*(var232 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var242)*(var242 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var255)*(var255 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var28)*(var28 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var90)*(var90 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var306)*(var306 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var39)*(var39 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var407)*(var407 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var415)*(var415 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var417)*(var417 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var456)*(var456 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var55)*(var55 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var129)*(var129 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var283)*(var283 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var328)*(var328 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var419)*(var419 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var432)*(var432 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var67)*(var67 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var123)*(var123 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var158)*(var158 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var176)*(var176 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var184)*(var184 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var202)*(var202 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var302)*(var302 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var395)*(var395 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var184)*(var184 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var255)*(var255 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var302)*(var302 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var155)*(var155 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var183)*(var183 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var262)*(var262 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var31)*(var31 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var35)*(var35 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var372)*(var372 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var383)*(var383 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var449)*(var449 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var107)*(var107 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var119)*(var119 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var177)*(var177 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var230)*(var230 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var349)*(var349 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var6)*(var6 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var69)*(var69 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var206)*(var206 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var460)*(var460 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var474)*(var474 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var480)*(var480 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var0)*(var0 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var121)*(var121 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var273)*(var273 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var282)*(var282 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var289)*(var289 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var363)*(var363 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var401)*(var401 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var410)*(var410 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var459)*(var459 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var16)*(var16 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var252)*(var252 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var310)*(var310 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var342)*(var342 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var73)*(var73 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var142)*(var142 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var161)*(var161 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var3)*(var3 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var44)*(var44 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var479)*(var479 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var54)*(var54 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var77)*(var77 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var119)*(var119 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var152)*(var152 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var230)*(var230 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var235)*(var235 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var349)*(var349 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var6)*(var6 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var365)*(var365 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var412)*(var412 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var159)*(var159 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var295)*(var295 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var296)*(var296 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var30)*(var30 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var359)*(var359 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var458)*(var458 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var465)*(var465 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var476)*(var476 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var72)*(var72 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var143)*(var143 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var187)*(var187 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var196)*(var196 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var250)*(var250 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var275)*(var275 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var324)*(var324 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var338)*(var338 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var354)*(var354 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var369)*(var369 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var92)*(var92 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var188)*(var188 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var226)*(var226 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var287)*(var287 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var80)*(var80 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var219)*(var219 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var238)*(var238 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var281)*(var281 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var190)*(var190 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var194)*(var194 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var352)*(var352 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var402)*(var402 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var215 - var462)*(var462 - var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var117)*(var117 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var346)*(var346 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var216 - var87)*(var87 - var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var295)*(var295 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var296)*(var296 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var30)*(var30 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var72)*(var72 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var105)*(var105 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var160)*(var160 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var185)*(var185 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var239)*(var239 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var243)*(var243 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var323)*(var323 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var335)*(var335 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var366)*(var366 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var416)*(var416 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var238)*(var238 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var281)*(var281 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var120)*(var120 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var125)*(var125 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var142)*(var142 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var209)*(var209 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var274)*(var274 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var307)*(var307 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var326)*(var326 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var43)*(var43 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var479)*(var479 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var54)*(var54 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var66)*(var66 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var77)*(var77 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var369)*(var369 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var390)*(var390 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var92)*(var92 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var116)*(var116 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var200)*(var200 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var353)*(var353 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var381)*(var381 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var439)*(var439 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var450)*(var450 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var451)*(var451 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var216)*(var216 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var249)*(var249 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var297)*(var297 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var312)*(var312 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var346)*(var346 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var350)*(var350 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var370)*(var370 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var87)*(var87 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var88)*(var88 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var205)*(var205 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var206)*(var206 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var272)*(var272 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var285)*(var285 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var286)*(var286 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var341)*(var341 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var405)*(var405 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var455)*(var455 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var460)*(var460 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var223 - var480)*(var480 - var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var153)*(var153 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var229)*(var229 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var278)*(var278 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var329)*(var329 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var418)*(var418 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var99)*(var99 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var122)*(var122 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var89)*(var89 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var167)*(var167 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var100)*(var100 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var118)*(var118 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var190)*(var190 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var271)*(var271 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var304)*(var304 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var378)*(var378 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var402)*(var402 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var101)*(var101 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var199)*(var199 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var428)*(var428 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var429)*(var429 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var282)*(var282 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var401)*(var401 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var47)*(var47 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var230 - var147)*(var147 - var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var260)*(var260 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var267)*(var267 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var313)*(var313 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var347)*(var347 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var364)*(var364 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var398)*(var398 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var466)*(var466 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var71)*(var71 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var79)*(var79 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var123)*(var123 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var158)*(var158 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var202)*(var202 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var395)*(var395 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var187)*(var187 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var196)*(var196 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var220)*(var220 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var250)*(var250 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var276)*(var276 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var338)*(var338 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var354)*(var354 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var355)*(var355 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var390)*(var390 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var233 - var7)*(var7 - var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var107)*(var107 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var119)*(var119 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var147)*(var147 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var152)*(var152 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var204)*(var204 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var230)*(var230 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var235)*(var235 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var305)*(var305 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var314)*(var314 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var69)*(var69 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var471)*(var471 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var149)*(var149 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var178)*(var178 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var210)*(var210 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var266)*(var266 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var365)*(var365 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var376)*(var376 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var281)*(var281 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var323)*(var323 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var70)*(var70 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var173)*(var173 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var214)*(var214 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var238)*(var238 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var26)*(var26 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var264)*(var264 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var360)*(var360 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var371)*(var371 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var373)*(var373 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var436)*(var436 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var443)*(var443 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var453)*(var453 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var284)*(var284 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var405)*(var405 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var460)*(var460 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var464)*(var464 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var474)*(var474 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var480)*(var480 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var136)*(var136 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var139)*(var139 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var148)*(var148 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var151)*(var151 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var167)*(var167 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var171)*(var171 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var181)*(var181 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var19)*(var19 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var213)*(var213 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var287)*(var287 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var317)*(var317 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var348)*(var348 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var457)*(var457 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var241 - var74)*(var74 - var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var123)*(var123 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var176)*(var176 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var28)*(var28 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var395)*(var395 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var60)*(var60 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var109)*(var109 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var154)*(var154 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var160)*(var160 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var185)*(var185 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var239)*(var239 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var477)*(var477 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var70)*(var70 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var111)*(var111 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var128)*(var128 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var135)*(var135 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var248)*(var248 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var253)*(var253 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var396)*(var396 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var63)*(var63 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var68)*(var68 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var258)*(var258 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var290)*(var290 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var30)*(var30 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var311)*(var311 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var458)*(var458 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var476)*(var476 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var72)*(var72 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var117)*(var117 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var107)*(var107 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var152)*(var152 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var177)*(var177 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var21)*(var21 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var235)*(var235 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var305)*(var305 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var117)*(var117 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var246)*(var246 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var249 - var331)*(var331 - var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var116)*(var116 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var236)*(var236 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var450)*(var450 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var451)*(var451 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var471)*(var471 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var187)*(var187 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var196)*(var196 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var276)*(var276 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var338)*(var338 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var369)*(var369 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var7)*(var7 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var92)*(var92 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var134)*(var134 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var20)*(var20 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var283)*(var283 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var336)*(var336 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var394)*(var394 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var419)*(var419 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var53)*(var53 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var65)*(var65 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var67)*(var67 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var126)*(var126 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var396)*(var396 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var68)*(var68 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var122)*(var122 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var391)*(var391 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var426)*(var426 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var86)*(var86 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var89)*(var89 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var144)*(var144 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var395)*(var395 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var214)*(var214 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var219)*(var219 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var264)*(var264 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var281)*(var281 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var159)*(var159 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var319)*(var319 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var72)*(var72 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var276)*(var276 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var173)*(var173 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var219)*(var219 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var257)*(var257 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var264)*(var264 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var281)*(var281 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var371)*(var371 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var373)*(var373 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var76)*(var76 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var150)*(var150 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var345)*(var345 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var347)*(var347 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var364)*(var364 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var384)*(var384 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var442)*(var442 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var472)*(var472 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var79)*(var79 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var245)*(var245 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var258)*(var258 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var290)*(var290 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var295)*(var295 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var299)*(var299 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var319)*(var319 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var37)*(var37 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var465)*(var465 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var72)*(var72 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var155)*(var155 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var183)*(var183 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var334)*(var334 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var16)*(var16 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var208)*(var208 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var252)*(var252 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var73)*(var73 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var219)*(var219 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var238)*(var238 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var281)*(var281 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var0)*(var0 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var121)*(var121 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var166)*(var166 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var23)*(var23 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var270)*(var270 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var273)*(var273 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var34)*(var34 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var410)*(var410 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var459)*(var459 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var47)*(var47 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var156)*(var156 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var172)*(var172 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var412)*(var412 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var150)*(var150 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var313)*(var313 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var345)*(var345 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var384)*(var384 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var466)*(var466 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var173)*(var173 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var214)*(var214 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var238)*(var238 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var264)*(var264 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var371)*(var371 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var373)*(var373 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var453)*(var453 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var168)*(var168 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var183)*(var183 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var262)*(var262 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var277)*(var277 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var0)*(var0 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var121)*(var121 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var166)*(var166 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var23)*(var23 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var289)*(var289 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var363)*(var363 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var367)*(var367 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var118)*(var118 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var352)*(var352 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var427)*(var427 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var0)*(var0 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var23)*(var23 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var282)*(var282 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var289)*(var289 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var363)*(var363 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var40)*(var40 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var401)*(var401 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var410)*(var410 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var459)*(var459 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var120)*(var120 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var125)*(var125 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var142)*(var142 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var161)*(var161 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var209)*(var209 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var326)*(var326 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var43)*(var43 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var44)*(var44 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var461)*(var461 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var59)*(var59 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var66)*(var66 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var130)*(var130 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var143)*(var143 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var220)*(var220 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var233)*(var233 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var324)*(var324 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var354)*(var354 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var355)*(var355 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var358)*(var358 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var369)*(var369 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var92)*(var92 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var130)*(var130 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var196)*(var196 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var101)*(var101 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var174)*(var174 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var229)*(var229 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var429)*(var429 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var104)*(var104 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var205)*(var205 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var272)*(var272 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var286)*(var286 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var405)*(var405 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var474)*(var474 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var98)*(var98 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var123)*(var123 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var176)*(var176 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var232)*(var232 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var60)*(var60 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var90)*(var90 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var396)*(var396 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var400)*(var400 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var0)*(var0 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var121)*(var121 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var40)*(var40 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var410)*(var410 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var104)*(var104 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var205)*(var205 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var206)*(var206 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var272)*(var272 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var285)*(var285 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var341)*(var341 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var405)*(var405 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var455)*(var455 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var460)*(var460 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var474)*(var474 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var480)*(var480 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var206)*(var206 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var272)*(var272 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var405)*(var405 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var460)*(var460 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var464)*(var464 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var474)*(var474 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var480)*(var480 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var460)*(var460 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var98)*(var98 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var139)*(var139 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var226)*(var226 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var74)*(var74 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var121)*(var121 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var23)*(var23 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var40)*(var40 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var401)*(var401 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var410)*(var410 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var47)*(var47 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var122)*(var122 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var164)*(var164 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var170)*(var170 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var179)*(var179 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var182)*(var182 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var254)*(var254 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var391)*(var391 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var86)*(var86 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var123)*(var123 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var158)*(var158 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var176)*(var176 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var184)*(var184 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var201)*(var201 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var242)*(var242 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var255)*(var255 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var302)*(var302 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var395)*(var395 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var60)*(var60 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var90)*(var90 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var16)*(var16 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var252)*(var252 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var310)*(var310 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var120)*(var120 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var125)*(var125 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var209)*(var209 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var274)*(var274 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var3)*(var3 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var326)*(var326 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var43)*(var43 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var44)*(var44 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var461)*(var461 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var294 - var77)*(var77 - var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var159)*(var159 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var258)*(var258 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var290)*(var290 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var319)*(var319 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var362)*(var362 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var295 - var424)*(var424 - var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var159)*(var159 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var258)*(var258 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var290)*(var290 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var30)*(var30 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var311)*(var311 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var72)*(var72 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var169)*(var169 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var195)*(var195 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var216)*(var216 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var331)*(var331 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var350)*(var350 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var370)*(var370 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var87)*(var87 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var130)*(var130 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var187)*(var187 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var220)*(var220 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var233)*(var233 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var259)*(var259 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var276)*(var276 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var324)*(var324 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var354)*(var354 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var358)*(var358 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var390)*(var390 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var7)*(var7 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var92)*(var92 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var211)*(var211 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var258)*(var258 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var295)*(var295 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var37)*(var37 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var458)*(var458 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var72)*(var72 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var125)*(var125 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var142)*(var142 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var461)*(var461 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var290)*(var290 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var311)*(var311 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var424)*(var424 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var72)*(var72 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var107)*(var107 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var152)*(var152 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var177)*(var177 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var235)*(var235 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var247)*(var247 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var6)*(var6 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var164)*(var164 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var170)*(var170 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var182)*(var182 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var225)*(var225 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var303)*(var303 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var38)*(var38 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var391)*(var391 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var42)*(var42 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var144)*(var144 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var184)*(var184 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var395)*(var395 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var164)*(var164 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var179)*(var179 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var182)*(var182 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var225)*(var225 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var254)*(var254 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var86)*(var86 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var100)*(var100 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var114)*(var114 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var194)*(var194 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var271)*(var271 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var388)*(var388 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var402)*(var402 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var470)*(var470 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var96)*(var96 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var304 - var97)*(var97 - var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var177)*(var177 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var235)*(var235 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var288)*(var288 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var339)*(var339 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var407)*(var407 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var55)*(var55 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var125)*(var125 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var43)*(var43 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var461)*(var461 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var364)*(var364 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var466)*(var466 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var109)*(var109 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var154)*(var154 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var160)*(var160 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var185)*(var185 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var218)*(var218 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var239)*(var239 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var243)*(var243 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var32)*(var32 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var321)*(var321 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var335)*(var335 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var357)*(var357 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var366)*(var366 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var408)*(var408 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var70)*(var70 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var155)*(var155 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var334)*(var334 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var35)*(var35 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var446)*(var446 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var481)*(var481 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var5)*(var5 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var64)*(var64 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var258)*(var258 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var290)*(var290 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var424)*(var424 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var72)*(var72 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var117)*(var117 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var169)*(var169 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var195)*(var195 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var249)*(var249 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var331)*(var331 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var346)*(var346 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var177)*(var177 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var305)*(var305 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var6)*(var6 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var163)*(var163 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var20)*(var20 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var394)*(var394 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var4)*(var4 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var65)*(var65 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var75)*(var75 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var20)*(var20 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var315)*(var315 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var328)*(var328 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var379)*(var379 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var419)*(var419 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var65)*(var65 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var67)*(var67 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var75)*(var75 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var136)*(var136 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var139)*(var139 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var148)*(var148 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var151)*(var151 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var19)*(var19 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var287)*(var287 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var74)*(var74 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var105)*(var105 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var154)*(var154 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var160)*(var160 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var239)*(var239 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var357)*(var357 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var416)*(var416 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var290)*(var290 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var72)*(var72 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var154)*(var154 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var239)*(var239 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var335)*(var335 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var70)*(var70 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var102)*(var102 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var175)*(var175 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var2)*(var2 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var288)*(var288 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var39)*(var39 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var404)*(var404 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var417)*(var417 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var420)*(var420 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var456)*(var456 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var105)*(var105 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var154)*(var154 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var160)*(var160 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var335)*(var335 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var357)*(var357 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var477)*(var477 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var16)*(var16 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var208)*(var208 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var293)*(var293 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var342)*(var342 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var45)*(var45 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var73)*(var73 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var357)*(var357 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var70)*(var70 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var196)*(var196 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var259)*(var259 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var276)*(var276 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var92)*(var92 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var135)*(var135 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var248)*(var248 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var396)*(var396 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var325 - var400)*(var400 - var325)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var120)*(var120 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var161)*(var161 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var461)*(var461 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var326 - var54)*(var54 - var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var153)*(var153 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var199)*(var199 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var111)*(var111 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var135)*(var135 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var248)*(var248 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var253)*(var253 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var280)*(var280 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var325)*(var325 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var396)*(var396 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var330 - var437)*(var437 - var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var117)*(var117 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var246)*(var246 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var100)*(var100 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var114)*(var114 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var190)*(var190 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var215)*(var215 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var228)*(var228 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var304)*(var304 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var352)*(var352 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var378)*(var378 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var388)*(var388 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var402)*(var402 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var427)*(var427 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var96)*(var96 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var97)*(var97 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var125)*(var125 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var161)*(var161 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var274)*(var274 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var294)*(var294 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var44)*(var44 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var54)*(var54 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var59)*(var59 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var77)*(var77 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var323)*(var323 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var357)*(var357 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var70)*(var70 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var129)*(var129 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var328)*(var328 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var394)*(var394 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var419)*(var419 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var432)*(var432 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var53)*(var53 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var65)*(var65 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var67)*(var67 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var75)*(var75 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var125)*(var125 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var142)*(var142 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var161)*(var161 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var209)*(var209 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var274)*(var274 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var294)*(var294 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var307)*(var307 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var479)*(var479 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var196)*(var196 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var276)*(var276 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var324)*(var324 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var369)*(var369 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var7)*(var7 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var23)*(var23 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var270)*(var270 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var282)*(var282 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var289)*(var289 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var367)*(var367 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var452)*(var452 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var459)*(var459 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var469)*(var469 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var47)*(var47 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var341 - var205)*(var205 - var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var341 - var206)*(var206 - var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var341 - var285)*(var285 - var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var252)*(var252 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var310)*(var310 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var119)*(var119 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var152)*(var152 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var177)*(var177 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var204)*(var204 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var230)*(var230 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var235)*(var235 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var247)*(var247 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var6)*(var6 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var127)*(var127 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var149)*(var149 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var210)*(var210 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var448)*(var448 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var473)*(var473 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var347)*(var347 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var249)*(var249 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var87)*(var87 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var313)*(var313 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var136)*(var136 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var139)*(var139 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var165)*(var165 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var167)*(var167 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var171)*(var171 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var18)*(var18 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var19)*(var19 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var213)*(var213 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var226)*(var226 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var287)*(var287 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var457)*(var457 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var348 - var74)*(var74 - var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var119)*(var119 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var147)*(var147 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var177)*(var177 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var230)*(var230 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var6)*(var6 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var262)*(var262 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var269)*(var269 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var277)*(var277 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var334)*(var334 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var117)*(var117 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var124)*(var124 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var169)*(var169 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var246)*(var246 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var249)*(var249 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var331)*(var331 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var346)*(var346 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var87)*(var87 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var88)*(var88 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var101)*(var101 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var153)*(var153 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var224)*(var224 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var278)*(var278 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var421)*(var421 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var428)*(var428 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var99)*(var99 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var114)*(var114 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var200)*(var200 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var451)*(var451 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var471)*(var471 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var478)*(var478 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var130)*(var130 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var196)*(var196 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var338)*(var338 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var7)*(var7 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var130)*(var130 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var196)*(var196 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var259)*(var259 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var354)*(var354 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var369)*(var369 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var390)*(var390 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var92)*(var92 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var101)*(var101 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var132)*(var132 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var153)*(var153 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var174)*(var174 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var199)*(var199 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var428)*(var428 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var70)*(var70 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var187)*(var187 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var196)*(var196 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var220)*(var220 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var233)*(var233 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var276)*(var276 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var324)*(var324 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var338)*(var338 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var355)*(var355 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var369)*(var369 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var390)*(var390 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var7)*(var7 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var92)*(var92 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var30)*(var30 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var424)*(var424 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var72)*(var72 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var149)*(var149 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var156)*(var156 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var172)*(var172 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var237)*(var237 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var448)*(var448 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var473)*(var473 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var482)*(var482 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var173)*(var173 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var214)*(var214 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var257)*(var257 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var281)*(var281 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var371)*(var371 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var373)*(var373 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var435)*(var435 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var453)*(var453 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var76)*(var76 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var117)*(var117 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var124)*(var124 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var195)*(var195 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var249)*(var249 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var312)*(var312 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var331)*(var331 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var350)*(var350 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var91)*(var91 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var258)*(var258 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var290)*(var290 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var319)*(var319 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var72)*(var72 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var121)*(var121 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var166)*(var166 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var23)*(var23 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var282)*(var282 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var289)*(var289 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var367)*(var367 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var40)*(var40 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var410)*(var410 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var47)*(var47 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var384)*(var384 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var412)*(var412 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var154)*(var154 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var160)*(var160 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var239)*(var239 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var321)*(var321 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var335)*(var335 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var357)*(var357 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var477)*(var477 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var70)*(var70 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var282)*(var282 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var40)*(var40 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var159)*(var159 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var211)*(var211 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var295)*(var295 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var311)*(var311 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var319)*(var319 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var359)*(var359 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var476)*(var476 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var117)*(var117 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var169)*(var169 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var195)*(var195 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var246)*(var246 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var331)*(var331 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var346)*(var346 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var87)*(var87 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var214)*(var214 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var219)*(var219 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var257)*(var257 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var264)*(var264 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var281)*(var281 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var373)*(var373 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var168)*(var168 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var183)*(var183 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var262)*(var262 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var269)*(var269 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var277)*(var277 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var35)*(var35 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var449)*(var449 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var48)*(var48 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var481)*(var481 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var372 - var64)*(var64 - var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var149)*(var149 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var266)*(var266 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var344)*(var344 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var365)*(var365 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var376)*(var376 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var473)*(var473 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var482)*(var482 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var147)*(var147 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var152)*(var152 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var177)*(var177 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var21)*(var21 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var230)*(var230 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var234)*(var234 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var300)*(var300 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var314)*(var314 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var349)*(var349 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var414)*(var414 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var69)*(var69 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var127)*(var127 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var149)*(var149 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var156)*(var156 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var172)*(var172 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var178)*(var178 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var365)*(var365 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var482)*(var482 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var150)*(var150 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var231)*(var231 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var345)*(var345 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var384)*(var384 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var411)*(var411 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var442)*(var442 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var466)*(var466 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var85)*(var85 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var95)*(var95 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var114)*(var114 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var118)*(var118 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var352)*(var352 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var427)*(var427 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var470)*(var470 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var129)*(var129 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var283)*(var283 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var328)*(var328 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var336)*(var336 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var394)*(var394 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var432)*(var432 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var53)*(var53 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var65)*(var65 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var67)*(var67 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var75)*(var75 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var39)*(var39 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var404)*(var404 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var407)*(var407 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var415)*(var415 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var417)*(var417 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var420)*(var420 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var447)*(var447 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var463)*(var463 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var116)*(var116 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var145)*(var145 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var200)*(var200 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var236)*(var236 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var25)*(var25 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var393)*(var393 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var439)*(var439 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var451)*(var451 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var262)*(var262 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var277)*(var277 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var383 - var334)*(var334 - var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var114)*(var114 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var190)*(var190 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var194)*(var194 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var378)*(var378 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var402)*(var402 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var427)*(var427 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var385 - var470)*(var470 - var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var102)*(var102 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var175)*(var175 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var288)*(var288 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var306)*(var306 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var320)*(var320 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var339)*(var339 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var39)*(var39 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var404)*(var404 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var407)*(var407 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var447)*(var447 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var463)*(var463 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var55)*(var55 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var173)*(var173 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var238)*(var238 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var257)*(var257 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var26)*(var26 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var268)*(var268 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var281)*(var281 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var373)*(var373 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var453)*(var453 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var190)*(var190 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var271)*(var271 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var462)*(var462 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var470)*(var470 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var129)*(var129 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var134)*(var134 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var163)*(var163 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var20)*(var20 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var283)*(var283 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var315)*(var315 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var316)*(var316 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var328)*(var328 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var379)*(var379 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var394)*(var394 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var4)*(var4 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var432)*(var432 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var53)*(var53 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var67)*(var67 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var288)*(var288 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var339)*(var339 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var407)*(var407 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var415)*(var415 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var55)*(var55 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var196)*(var196 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var250)*(var250 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var276)*(var276 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var338)*(var338 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var354)*(var354 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var369)*(var369 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var92)*(var92 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var122)*(var122 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var182)*(var182 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var38)*(var38 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var426)*(var426 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var101)*(var101 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var132)*(var132 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var174)*(var174 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var180)*(var180 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var329)*(var329 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var418)*(var418 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var392 - var429)*(var429 - var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var116)*(var116 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var200)*(var200 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var25)*(var25 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var439)*(var439 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var444)*(var444 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var451)*(var451 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var471)*(var471 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var283)*(var283 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var432)*(var432 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var53)*(var53 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var394 - var67)*(var67 - var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var184)*(var184 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var135)*(var135 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var400)*(var400 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var63)*(var63 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var123)*(var123 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var144)*(var144 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var158)*(var158 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var176)*(var176 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var202)*(var202 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var302)*(var302 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var395)*(var395 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var60)*(var60 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var345)*(var345 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var347)*(var347 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var79)*(var79 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var146)*(var146 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var186)*(var186 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var200)*(var200 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var25)*(var25 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var381)*(var381 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var393)*(var393 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var444)*(var444 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var471)*(var471 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var129)*(var129 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var163)*(var163 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var20)*(var20 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var328)*(var328 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var379)*(var379 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var394)*(var394 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var432)*(var432 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var65)*(var65 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var75)*(var75 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var248)*(var248 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var118)*(var118 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var378)*(var378 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var388)*(var388 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var96)*(var96 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var117)*(var117 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var195)*(var195 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var246)*(var246 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var249)*(var249 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var312)*(var312 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var331)*(var331 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var346)*(var346 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var350)*(var350 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var361)*(var361 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var370)*(var370 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var88)*(var88 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var91)*(var91 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var2)*(var2 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var306)*(var306 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var339)*(var339 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var39)*(var39 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var407)*(var407 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var415)*(var415 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var417)*(var417 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var456)*(var456 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var55)*(var55 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var129)*(var129 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var134)*(var134 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var20)*(var20 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var328)*(var328 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var336)*(var336 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var4)*(var4 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var419)*(var419 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var406 - var432)*(var432 - var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var407 - var288)*(var288 - var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var154)*(var154 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var160)*(var160 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var185)*(var185 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var218)*(var218 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var243)*(var243 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var318)*(var318 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var32)*(var32 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var321)*(var321 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var335)*(var335 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var357)*(var357 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var366)*(var366 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var0)*(var0 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var121)*(var121 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var207)*(var207 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var273)*(var273 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var282)*(var282 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var289)*(var289 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var34)*(var34 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var363)*(var363 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var401)*(var401 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var452)*(var452 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var469)*(var469 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var47)*(var47 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var108)*(var108 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var11)*(var11 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var111)*(var111 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var128)*(var128 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var135)*(var135 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var325)*(var325 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var330)*(var330 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var400)*(var400 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var434)*(var434 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var49)*(var49 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var68)*(var68 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var40)*(var40 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var401)*(var401 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var260)*(var260 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var267)*(var267 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var308)*(var308 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var313)*(var313 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var345)*(var345 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var347)*(var347 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var384)*(var384 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var398)*(var398 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var440)*(var440 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var442)*(var442 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var411 - var466)*(var466 - var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var13)*(var13 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var133)*(var133 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var158)*(var158 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var184)*(var184 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var198)*(var198 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var201)*(var201 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var242)*(var242 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var28)*(var28 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var302)*(var302 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var397)*(var397 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var60)*(var60 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var90)*(var90 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var177)*(var177 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var230)*(var230 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var247)*(var247 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var6)*(var6 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var288)*(var288 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var415 - var339)*(var339 - var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var154)*(var154 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var239)*(var239 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var323)*(var323 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var335)*(var335 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var357)*(var357 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var70)*(var70 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var288)*(var288 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var306)*(var306 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var456)*(var456 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var101)*(var101 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var132)*(var132 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var153)*(var153 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var199)*(var199 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var278)*(var278 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var356)*(var356 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var129)*(var129 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var328)*(var328 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var394)*(var394 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var53)*(var53 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var75)*(var75 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var122)*(var122 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var254)*(var254 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var38)*(var38 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var426)*(var426 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var86)*(var86 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var89)*(var89 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var102)*(var102 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var2)*(var2 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var407)*(var407 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var415)*(var415 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var417)*(var417 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var55)*(var55 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var101)*(var101 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var153)*(var153 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var174)*(var174 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var180)*(var180 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var199)*(var199 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var229)*(var229 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var356)*(var356 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var429)*(var429 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var99)*(var99 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var110)*(var110 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var131)*(var131 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var14)*(var14 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var170)*(var170 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var182)*(var182 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var225)*(var225 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var254)*(var254 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var303)*(var303 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var38)*(var38 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var391)*(var391 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var42)*(var42 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var426)*(var426 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var159)*(var159 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var290)*(var290 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var319)*(var319 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var72)*(var72 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var102)*(var102 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var175)*(var175 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var2)*(var2 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var288)*(var288 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var320)*(var320 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var380)*(var380 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var39)*(var39 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var404)*(var404 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var407)*(var407 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var415)*(var415 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var456)*(var456 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var463)*(var463 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var118)*(var118 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var352)*(var352 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var153)*(var153 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var101)*(var101 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var132)*(var132 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var174)*(var174 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var329)*(var329 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var356)*(var356 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var428)*(var428 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var120)*(var120 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var3)*(var3 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var461)*(var461 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var223)*(var223 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var279)*(var279 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var341)*(var341 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var405)*(var405 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var474)*(var474 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var480)*(var480 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var208)*(var208 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var252)*(var252 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var293)*(var293 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var73)*(var73 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var283)*(var283 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var328)*(var328 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var53)*(var53 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var67)*(var67 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var113)*(var113 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var193)*(var193 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var208)*(var208 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var263)*(var263 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var293)*(var293 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var310)*(var310 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var322)*(var322 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var342)*(var342 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var431)*(var431 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var45)*(var45 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var50)*(var50 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var248)*(var248 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var325)*(var325 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var396)*(var396 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var400)*(var400 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var63)*(var63 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var173)*(var173 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var214)*(var214 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var219)*(var219 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var238)*(var238 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var281)*(var281 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var371)*(var371 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var373)*(var373 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var76)*(var76 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var173)*(var173 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var371)*(var371 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var373)*(var373 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var443)*(var443 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var483)*(var483 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var126)*(var126 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var128)*(var128 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var135)*(var135 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var244)*(var244 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var396)*(var396 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var400)*(var400 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var434)*(var434 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var49)*(var49 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var116)*(var116 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var200)*(var200 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var236)*(var236 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var444)*(var444 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var451)*(var451 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var471)*(var471 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var43)*(var43 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var461)*(var461 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var479)*(var479 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var77)*(var77 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var345)*(var345 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var384)*(var384 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var398)*(var398 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var79)*(var79 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var101)*(var101 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var153)*(var153 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var199)*(var199 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var224)*(var224 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var392)*(var392 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var421)*(var421 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var429)*(var429 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var267)*(var267 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var313)*(var313 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var364)*(var364 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var384)*(var384 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var398)*(var398 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var440)*(var440 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var466)*(var466 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var472)*(var472 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var214)*(var214 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var219)*(var219 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var238)*(var238 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var360)*(var360 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var373)*(var373 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var435)*(var435 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var453)*(var453 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var116)*(var116 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var450)*(var450 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var471)*(var471 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var155)*(var155 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var168)*(var168 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var183)*(var183 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var334)*(var334 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var372)*(var372 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var449)*(var449 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var48)*(var48 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var481)*(var481 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var446 - var5)*(var5 - var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var102)*(var102 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var175)*(var175 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var2)*(var2 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var288)*(var288 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var306)*(var306 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var39)*(var39 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var407)*(var407 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var415)*(var415 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var55)*(var55 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var172)*(var172 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var365)*(var365 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var376)*(var376 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var412)*(var412 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var473)*(var473 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var94)*(var94 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var155)*(var155 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var183)*(var183 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var35)*(var35 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var383)*(var383 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var1)*(var1 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var208)*(var208 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var252)*(var252 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var263)*(var263 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var310)*(var310 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var342)*(var342 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var73)*(var73 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var200)*(var200 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var451)*(var451 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var23)*(var23 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var270)*(var270 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var273)*(var273 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var282)*(var282 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var363)*(var363 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var367)*(var367 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var459)*(var459 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var47)*(var47 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var219)*(var219 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var264)*(var264 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var281)*(var281 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var153)*(var153 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var199)*(var199 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var224)*(var224 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var229)*(var229 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var392)*(var392 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var418)*(var418 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var428)*(var428 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var429)*(var429 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var99)*(var99 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var286)*(var286 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var405)*(var405 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var460)*(var460 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var474)*(var474 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var480)*(var480 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var288)*(var288 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var339)*(var339 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var415)*(var415 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var148)*(var148 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var167)*(var167 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var171)*(var171 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var181)*(var181 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var19)*(var19 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var80)*(var80 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var217)*(var217 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var295)*(var295 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var296)*(var296 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var311)*(var311 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var424)*(var424 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var476)*(var476 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var72)*(var72 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var166)*(var166 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var289)*(var289 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var363)*(var363 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var401)*(var401 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var410)*(var410 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var47)*(var47 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var263)*(var263 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var293)*(var293 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var310)*(var310 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var45)*(var45 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var78)*(var78 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var272)*(var272 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var405)*(var405 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var98)*(var98 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var462 - var190)*(var190 - var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var462 - var271)*(var271 - var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var462 - var352)*(var352 - var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var462 - var470)*(var470 - var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var102)*(var102 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var2)*(var2 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var306)*(var306 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var339)*(var339 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var407)*(var407 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var415)*(var415 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var420)*(var420 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var206)*(var206 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var286)*(var286 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var460)*(var460 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var98)*(var98 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var159)*(var159 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var217)*(var217 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var295)*(var295 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var30)*(var30 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var311)*(var311 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var319)*(var319 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var362)*(var362 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var424)*(var424 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var458)*(var458 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var72)*(var72 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var313)*(var313 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var384)*(var384 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var79)*(var79 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var139)*(var139 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var148)*(var148 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var151)*(var151 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var167)*(var167 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var171)*(var171 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var19)*(var19 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var226)*(var226 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var241)*(var241 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var348)*(var348 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var457)*(var457 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var121)*(var121 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var273)*(var273 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var282)*(var282 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var363)*(var363 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var367)*(var367 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var40)*(var40 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var401)*(var401 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var452)*(var452 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var121)*(var121 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var282)*(var282 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var401)*(var401 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var410)*(var410 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var114)*(var114 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var352)*(var352 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var427)*(var427 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var200)*(var200 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var150)*(var150 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var267)*(var267 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var308)*(var308 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var313)*(var313 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var347)*(var347 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var364)*(var364 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var384)*(var384 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var398)*(var398 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var466)*(var466 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var127)*(var127 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var149)*(var149 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var178)*(var178 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var266)*(var266 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var365)*(var365 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var206)*(var206 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var272)*(var272 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var183)*(var183 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var277)*(var277 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var372)*(var372 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var383)*(var383 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var449)*(var449 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var5)*(var5 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var475 - var64)*(var64 - var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var159)*(var159 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var290)*(var290 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var296)*(var296 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var424)*(var424 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var154)*(var154 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var239)*(var239 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var335)*(var335 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var70)*(var70 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var116)*(var116 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var451)*(var451 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var471)*(var471 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var168)*(var168 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var183)*(var183 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var269)*(var269 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var334)*(var334 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var383)*(var383 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var481)*(var481 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var262)*(var262 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var277)*(var277 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var383)*(var383 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var149)*(var149 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var210)*(var210 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var266)*(var266 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var482 - var365)*(var365 - var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var173)*(var173 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var214)*(var214 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var219)*(var219 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var238)*(var238 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var264)*(var264 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var360)*(var360 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var435)*(var435 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var453)*(var453 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var111)*(var111 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var135)*(var135 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var248)*(var248 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var280)*(var280 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var396)*(var396 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var434)*(var434 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var63)*(var63 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var155)*(var155 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var168)*(var168 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var269)*(var269 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var277)*(var277 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var372)*(var372 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var449)*(var449 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var481)*(var481 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var64)*(var64 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var1)*(var1 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var322)*(var322 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var73)*(var73 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var117)*(var117 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var124)*(var124 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var195)*(var195 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var197)*(var197 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var216)*(var216 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var246)*(var246 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var312)*(var312 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var331)*(var331 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var370)*(var370 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var88)*(var88 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var145)*(var145 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var186)*(var186 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var200)*(var200 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var221)*(var221 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var25)*(var25 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var393)*(var393 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var444)*(var444 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var53 - var283)*(var283 - var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var307)*(var307 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var43)*(var43 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var44)*(var44 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var461)*(var461 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var77)*(var77 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var288)*(var288 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var339)*(var339 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var415)*(var415 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var238)*(var238 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var257)*(var257 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var26)*(var26 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var264)*(var264 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var268)*(var268 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var371)*(var371 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var387)*(var387 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var435)*(var435 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var436)*(var436 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var443)*(var443 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var453)*(var453 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var76)*(var76 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var135)*(var135 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var244)*(var244 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var253)*(var253 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var396)*(var396 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var400)*(var400 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var437)*(var437 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var68)*(var68 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var101)*(var101 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var132)*(var132 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var153)*(var153 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var199)*(var199 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var224)*(var224 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var329)*(var329 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var421)*(var421 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var428)*(var428 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var99)*(var99 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var142)*(var142 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var161)*(var161 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var209)*(var209 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var3)*(var3 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var307)*(var307 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var44)*(var44 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var461)*(var461 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var54)*(var54 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var77)*(var77 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var147)*(var147 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var230)*(var230 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var176)*(var176 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var184)*(var184 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var202)*(var202 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var162)*(var162 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var172)*(var172 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var178)*(var178 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var210)*(var210 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var237)*(var237 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var266)*(var266 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var344)*(var344 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var374)*(var374 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var155)*(var155 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var183)*(var183 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var269)*(var269 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var35)*(var35 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var372)*(var372 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var383)*(var383 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var446)*(var446 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var481)*(var481 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var135)*(var135 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var68)*(var68 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var155)*(var155 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var168)*(var168 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var449)*(var449 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var48)*(var48 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var129)*(var129 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var283)*(var283 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var328)*(var328 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var432)*(var432 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var53)*(var53 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var67)*(var67 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var161)*(var161 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var307)*(var307 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var479)*(var479 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var177)*(var177 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var230)*(var230 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var305)*(var305 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var349)*(var349 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var196)*(var196 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var276)*(var276 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var369)*(var369 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var92)*(var92 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var384)*(var384 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var440)*(var440 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var442)*(var442 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var466)*(var466 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var79)*(var79 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var252)*(var252 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var293)*(var293 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var310)*(var310 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var342)*(var342 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var129)*(var129 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var67)*(var67 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var238)*(var238 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var264)*(var264 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var371)*(var371 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var373)*(var373 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var453)*(var453 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var120)*(var120 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var43)*(var43 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var479)*(var479 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var208)*(var208 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var252)*(var252 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var263)*(var263 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var342)*(var342 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var431)*(var431 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var345)*(var345 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var384)*(var384 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var116)*(var116 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var200)*(var200 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var236)*(var236 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var353)*(var353 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var444)*(var444 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var450)*(var450 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var478)*(var478 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var139)*(var139 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var151)*(var151 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var226)*(var226 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var104)*(var104 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var206)*(var206 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var272)*(var272 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var279)*(var279 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var284)*(var284 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var405)*(var405 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var430)*(var430 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var455)*(var455 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var98)*(var98 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var145)*(var145 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var186)*(var186 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var25)*(var25 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var381)*(var381 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var393)*(var393 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var450)*(var450 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var8)*(var8 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var150)*(var150 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var260)*(var260 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var267)*(var267 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var364)*(var364 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var398)*(var398 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var442)*(var442 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var71)*(var71 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var122)*(var122 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var14)*(var14 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var170)*(var170 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var182)*(var182 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var426)*(var426 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var169)*(var169 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var124)*(var124 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var246)*(var246 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var249)*(var249 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var331)*(var331 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var16)*(var16 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var252)*(var252 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var263)*(var263 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var310)*(var310 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var45)*(var45 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var46)*(var46 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var50)*(var50 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var158)*(var158 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var184)*(var184 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var202)*(var202 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var255)*(var255 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var302)*(var302 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var169)*(var169 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var197)*(var197 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var246)*(var246 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var249)*(var249 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var297)*(var297 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var331)*(var331 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var350)*(var350 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var88)*(var88 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var130)*(var130 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var196)*(var196 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var276)*(var276 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var369)*(var369 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var123)*(var123 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var133)*(var133 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var176)*(var176 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var242)*(var242 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var255)*(var255 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var302)*(var302 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var395)*(var395 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var397)*(var397 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var60)*(var60 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var90)*(var90 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var149)*(var149 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var156)*(var156 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var172)*(var172 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var266)*(var266 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var412)*(var412 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var482)*(var482 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var231)*(var231 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var260)*(var260 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var267)*(var267 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var313)*(var313 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var345)*(var345 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var347)*(var347 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var364)*(var364 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var466)*(var466 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var472)*(var472 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var79)*(var79 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var85)*(var85 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var190)*(var190 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var271)*(var271 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var470)*(var470 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var271)*(var271 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var402)*(var402 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var96)*(var96 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var206)*(var206 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var405)*(var405 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var480)*(var480 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var132)*(var132 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var153)*(var153 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var329)*(var329 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var356)*(var356 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var428)*(var428 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var108) && (var112 + var108 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var11) && (var112 + var11 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var111) && (var112 + var111 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var126) && (var112 + var126 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var128) && (var112 + var128 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var135) && (var112 + var135 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var244) && (var112 + var244 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var248) && (var112 + var248 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var253) && (var112 + var253 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var280) && (var112 + var280 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var325) && (var112 + var325 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var330) && (var112 + var330 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var396) && (var112 + var396 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var400) && (var112 + var400 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var41) && (var112 + var41 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var434) && (var112 + var434 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var437) && (var112 + var437 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var49) && (var112 + var49 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var57) && (var112 + var57 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var63) && (var112 + var63 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var112 != var68) && (var112 + var68 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var103) && (var140 + var103 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var104) && (var140 + var104 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var205) && (var140 + var205 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var206) && (var140 + var206 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var223) && (var140 + var223 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var240) && (var140 + var240 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var272) && (var140 + var272 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var279) && (var140 + var279 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var284) && (var140 + var284 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var285) && (var140 + var285 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var286) && (var140 + var286 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var341) && (var140 + var341 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var405) && (var140 + var405 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var430) && (var140 + var430 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var455) && (var140 + var455 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var460) && (var140 + var460 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var464) && (var140 + var464 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var474) && (var140 + var474 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var480) && (var140 + var480 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var82) && (var140 + var82 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var98) && (var140 + var98 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var173) && (var141 + var173 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var214) && (var141 + var214 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var219) && (var141 + var219 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var238) && (var141 + var238 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var24) && (var141 + var24 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var257) && (var141 + var257 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var26) && (var141 + var26 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var264) && (var141 + var264 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var268) && (var141 + var268 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var281) && (var141 + var281 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var360) && (var141 + var360 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var371) && (var141 + var371 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var373) && (var141 + var373 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var387) && (var141 + var387 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var435) && (var141 + var435 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var436) && (var141 + var436 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var443) && (var141 + var443 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var453) && (var141 + var453 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var483) && (var141 + var483 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var56) && (var141 + var56 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var141 != var76) && (var141 + var76 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var105) && (var15 + var105 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var109) && (var15 + var109 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var138) && (var15 + var138 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var154) && (var15 + var154 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var160) && (var15 + var160 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var185) && (var15 + var185 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var218) && (var15 + var218 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var239) && (var15 + var239 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var243) && (var15 + var243 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var309) && (var15 + var309 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var318) && (var15 + var318 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var32) && (var15 + var32 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var321) && (var15 + var321 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var323) && (var15 + var323 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var335) && (var15 + var335 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var357) && (var15 + var357 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var366) && (var15 + var366 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var408) && (var15 + var408 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var416) && (var15 + var416 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var477) && (var15 + var477 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var15 != var70) && (var15 + var70 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var0) && (var157 + var0 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var121) && (var157 + var121 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var166) && (var157 + var166 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var207) && (var157 + var207 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var23) && (var157 + var23 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var265) && (var157 + var265 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var270) && (var157 + var270 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var273) && (var157 + var273 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var282) && (var157 + var282 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var289) && (var157 + var289 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var34) && (var157 + var34 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var363) && (var157 + var363 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var367) && (var157 + var367 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var40) && (var157 + var40 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var401) && (var157 + var401 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var409) && (var157 + var409 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var410) && (var157 + var410 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var452) && (var157 + var452 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var459) && (var157 + var459 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var469) && (var157 + var469 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var157 != var47) && (var157 + var47 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var130) && (var191 + var130 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var143) && (var191 + var143 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var187) && (var191 + var187 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var196) && (var191 + var196 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var212) && (var191 + var212 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var220) && (var191 + var220 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var233) && (var191 + var233 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var250) && (var191 + var250 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var259) && (var191 + var259 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var275) && (var191 + var275 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var276) && (var191 + var276 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var298) && (var191 + var298 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var324) && (var191 + var324 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var338) && (var191 + var338 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var354) && (var191 + var354 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var355) && (var191 + var355 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var358) && (var191 + var358 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var369) && (var191 + var369 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var390) && (var191 + var390 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var7) && (var191 + var7 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var191 != var92) && (var191 + var92 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var137) && (var227 + var137 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var155) && (var227 + var155 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var168) && (var227 + var168 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var183) && (var227 + var183 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var203) && (var227 + var203 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var262) && (var227 + var262 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var269) && (var227 + var269 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var277) && (var227 + var277 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var31) && (var227 + var31 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var334) && (var227 + var334 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var35) && (var227 + var35 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var372) && (var227 + var372 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var383) && (var227 + var383 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var446) && (var227 + var446 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var449) && (var227 + var449 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var475) && (var227 + var475 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var48) && (var227 + var48 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var481) && (var227 + var481 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var5) && (var227 + var5 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var62) && (var227 + var62 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var227 != var64) && (var227 + var64 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var102) && (var256 + var102 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var106) && (var256 + var106 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var175) && (var256 + var175 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var2) && (var256 + var2 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var288) && (var256 + var288 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var306) && (var256 + var306 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var320) && (var256 + var320 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var339) && (var256 + var339 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var380) && (var256 + var380 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var386) && (var256 + var386 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var39) && (var256 + var39 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var404) && (var256 + var404 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var407) && (var256 + var407 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var415) && (var256 + var415 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var417) && (var256 + var417 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var420) && (var256 + var420 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var425) && (var256 + var425 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var447) && (var256 + var447 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var456) && (var256 + var456 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var463) && (var256 + var463 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var256 != var55) && (var256 + var55 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var115) && (var27 + var115 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var127) && (var27 + var127 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var149) && (var27 + var149 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var156) && (var27 + var156 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var162) && (var27 + var162 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var172) && (var27 + var172 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var178) && (var27 + var178 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var210) && (var27 + var210 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var237) && (var27 + var237 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var266) && (var27 + var266 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var344) && (var27 + var344 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var36) && (var27 + var36 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var365) && (var27 + var365 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var374) && (var27 + var374 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var376) && (var27 + var376 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var412) && (var27 + var412 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var448) && (var27 + var448 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var473) && (var27 + var473 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var482) && (var27 + var482 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var61) && (var27 + var61 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var27 != var94) && (var27 + var94 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var120) && (var291 + var120 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var125) && (var291 + var125 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var142) && (var291 + var142 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var161) && (var291 + var161 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var209) && (var291 + var209 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var22) && (var291 + var22 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var274) && (var291 + var274 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var294) && (var291 + var294 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var3) && (var291 + var3 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var307) && (var291 + var307 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var326) && (var291 + var326 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var333) && (var291 + var333 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var337) && (var291 + var337 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var43) && (var291 + var43 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var44) && (var291 + var44 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var461) && (var291 + var461 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var479) && (var291 + var479 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var54) && (var291 + var54 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var59) && (var291 + var59 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var66) && (var291 + var66 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var291 != var77) && (var291 + var77 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var100) && (var327 + var100 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var114) && (var327 + var114 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var118) && (var327 + var118 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var190) && (var327 + var190 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var192) && (var327 + var192 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var194) && (var327 + var194 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var215) && (var327 + var215 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var228) && (var327 + var228 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var271) && (var327 + var271 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var304) && (var327 + var304 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var332) && (var327 + var332 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var352) && (var327 + var352 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var378) && (var327 + var378 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var385) && (var327 + var385 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var388) && (var327 + var388 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var402) && (var327 + var402 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var427) && (var327 + var427 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var462) && (var327 + var462 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var470) && (var327 + var470 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var96) && (var327 + var96 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var327 != var97) && (var327 + var97 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var116) && (var33 + var116 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var145) && (var33 + var145 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var146) && (var33 + var146 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var186) && (var33 + var186 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var200) && (var33 + var200 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var221) && (var33 + var221 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var236) && (var33 + var236 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var25) && (var33 + var25 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var353) && (var33 + var353 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var381) && (var33 + var381 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var393) && (var33 + var393 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var399) && (var33 + var399 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var439) && (var33 + var439 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var444) && (var33 + var444 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var450) && (var33 + var450 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var451) && (var33 + var451 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var471) && (var33 + var471 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var478) && (var33 + var478 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var52) && (var33 + var52 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var8) && (var33 + var8 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var33 != var83) && (var33 + var83 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var101) && (var340 + var101 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var132) && (var340 + var132 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var153) && (var340 + var153 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var174) && (var340 + var174 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var180) && (var340 + var180 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var199) && (var340 + var199 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var224) && (var340 + var224 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var229) && (var340 + var229 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var278) && (var340 + var278 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var329) && (var340 + var329 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var351) && (var340 + var351 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var356) && (var340 + var356 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var392) && (var340 + var392 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var418) && (var340 + var418 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var421) && (var340 + var421 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var428) && (var340 + var428 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var429) && (var340 + var429 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var441) && (var340 + var441 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var454) && (var340 + var454 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var58) && (var340 + var58 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var340 != var99) && (var340 + var99 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var136) && (var368 + var136 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var139) && (var368 + var139 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var148) && (var368 + var148 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var151) && (var368 + var151 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var165) && (var368 + var165 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var167) && (var368 + var167 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var171) && (var368 + var171 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var18) && (var368 + var18 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var181) && (var368 + var181 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var188) && (var368 + var188 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var19) && (var368 + var19 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var213) && (var368 + var213 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var226) && (var368 + var226 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var241) && (var368 + var241 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var287) && (var368 + var287 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var317) && (var368 + var317 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var348) && (var368 + var348 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var457) && (var368 + var457 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var468) && (var368 + var468 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var74) && (var368 + var74 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var368 != var80) && (var368 + var80 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var110) && (var382 + var110 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var122) && (var382 + var122 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var131) && (var382 + var131 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var14) && (var382 + var14 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var164) && (var382 + var164 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var170) && (var382 + var170 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var179) && (var382 + var179 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var182) && (var382 + var182 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var189) && (var382 + var189 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var225) && (var382 + var225 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var254) && (var382 + var254 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var29) && (var382 + var29 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var301) && (var382 + var301 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var303) && (var382 + var303 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var38) && (var382 + var38 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var391) && (var382 + var391 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var42) && (var382 + var42 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var423) && (var382 + var423 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var426) && (var382 + var426 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var86) && (var382 + var86 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var382 != var89) && (var382 + var89 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var129) && (var422 + var129 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var134) && (var422 + var134 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var163) && (var422 + var163 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var20) && (var422 + var20 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var251) && (var422 + var251 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var283) && (var422 + var283 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var315) && (var422 + var315 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var316) && (var422 + var316 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var328) && (var422 + var328 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var336) && (var422 + var336 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var379) && (var422 + var379 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var389) && (var422 + var389 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var394) && (var422 + var394 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var4) && (var422 + var4 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var406) && (var422 + var406 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var419) && (var422 + var419 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var432) && (var422 + var432 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var53) && (var422 + var53 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var65) && (var422 + var65 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var67) && (var422 + var67 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var422 != var75) && (var422 + var75 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var150) && (var438 + var150 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var231) && (var438 + var231 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var260) && (var438 + var260 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var267) && (var438 + var267 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var308) && (var438 + var308 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var313) && (var438 + var313 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var345) && (var438 + var345 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var347) && (var438 + var347 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var364) && (var438 + var364 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var377) && (var438 + var377 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var384) && (var438 + var384 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var398) && (var438 + var398 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var411) && (var438 + var411 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var440) && (var438 + var440 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var442) && (var438 + var442 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var466) && (var438 + var466 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var472) && (var438 + var472 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var71) && (var438 + var71 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var79) && (var438 + var79 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var85) && (var438 + var85 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var438 != var95) && (var438 + var95 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var117) && (var445 + var117 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var124) && (var445 + var124 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var169) && (var445 + var169 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var195) && (var445 + var195 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var197) && (var445 + var197 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var216) && (var445 + var216 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var222) && (var445 + var222 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var246) && (var445 + var246 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var249) && (var445 + var249 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var297) && (var445 + var297 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var312) && (var445 + var312 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var331) && (var445 + var331 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var346) && (var445 + var346 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var350) && (var445 + var350 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var361) && (var445 + var361 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var370) && (var445 + var370 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var403) && (var445 + var403 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var51) && (var445 + var51 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var87) && (var445 + var87 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var88) && (var445 + var88 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var445 != var91) && (var445 + var91 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var1) && (var467 + var1 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var10) && (var467 + var10 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var113) && (var467 + var113 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var12) && (var467 + var12 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var16) && (var467 + var16 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var193) && (var467 + var193 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var208) && (var467 + var208 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var252) && (var467 + var252 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var263) && (var467 + var263 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var293) && (var467 + var293 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var310) && (var467 + var310 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var322) && (var467 + var322 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var342) && (var467 + var342 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var431) && (var467 + var431 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var433) && (var467 + var433 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var45) && (var467 + var45 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var46) && (var467 + var46 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var50) && (var467 + var50 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var73) && (var467 + var73 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var78) && (var467 + var78 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var9) && (var467 + var9 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var159) && (var81 + var159 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var211) && (var81 + var211 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var217) && (var81 + var217 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var245) && (var81 + var245 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var258) && (var81 + var258 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var261) && (var81 + var261 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var290) && (var81 + var290 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var295) && (var81 + var295 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var296) && (var81 + var296 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var299) && (var81 + var299 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var30) && (var81 + var30 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var311) && (var81 + var311 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var319) && (var81 + var319 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var359) && (var81 + var359 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var362) && (var81 + var362 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var37) && (var81 + var37 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var424) && (var81 + var424 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var458) && (var81 + var458 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var465) && (var81 + var465 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var476) && (var81 + var476 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var81 != var72) && (var81 + var72 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var107) && (var84 + var107 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var119) && (var84 + var119 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var147) && (var84 + var147 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var152) && (var84 + var152 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var17) && (var84 + var17 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var177) && (var84 + var177 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var204) && (var84 + var204 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var21) && (var84 + var21 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var230) && (var84 + var230 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var234) && (var84 + var234 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var235) && (var84 + var235 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var247) && (var84 + var247 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var300) && (var84 + var300 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var305) && (var84 + var305 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var314) && (var84 + var314 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var343) && (var84 + var343 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var349) && (var84 + var349 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var375) && (var84 + var375 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var414) && (var84 + var414 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var6) && (var84 + var6 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var84 != var69) && (var84 + var69 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 == var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 == var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 == var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 == var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var158 == var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 == var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 == var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 == var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 == var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 == var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 == var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 == var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 == var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 == var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 == var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 == var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 == var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 == var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 == var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 == var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 == var291)){myvar0= 1;}
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
 */}
