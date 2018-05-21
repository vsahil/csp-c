
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 0) && (var40 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 0) && (var41 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 0) && (var42 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 0) && (var43 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 0) && (var44 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 0) && (var45 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 0) && (var46 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 0) && (var47 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 0) && (var48 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 0) && (var49 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 0) && (var50 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 0) && (var51 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 0) && (var52 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 0) && (var53 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 0) && (var54 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 0) && (var55 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 0) && (var56 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 0) && (var57 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 0) && (var58 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 0) && (var59 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 0) && (var60 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 0) && (var61 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 0) && (var62 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 0) && (var63 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 0) && (var64 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 0) && (var65 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 0) && (var66 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 0) && (var67 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 0) && (var68 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 0) && (var69 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 0) && (var70 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 0) && (var71 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 0) && (var72 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 0) && (var73 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 0) && (var74 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 0) && (var75 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 0) && (var76 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 0) && (var77 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 0) && (var78 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((myvar0 == 1) && (var79 >= 0) && (var79 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((myvar0 == 1) && (var80 >= 0) && (var80 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((myvar0 == 1) && (var81 >= 0) && (var81 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((myvar0 == 1) && (var82 >= 0) && (var82 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((myvar0 == 1) && (var83 >= 0) && (var83 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((myvar0 == 1) && (var84 >= 0) && (var84 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((myvar0 == 1) && (var85 >= 0) && (var85 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((myvar0 == 1) && (var86 >= 0) && (var86 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((myvar0 == 1) && (var87 >= 0) && (var87 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((myvar0 == 1) && (var88 >= 0) && (var88 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((myvar0 == 1) && (var89 >= 0) && (var89 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((myvar0 == 1) && (var90 >= 0) && (var90 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((myvar0 == 1) && (var91 >= 0) && (var91 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((myvar0 == 1) && (var92 >= 0) && (var92 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((myvar0 == 1) && (var93 >= 0) && (var93 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((myvar0 == 1) && (var94 >= 0) && (var94 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((myvar0 == 1) && (var95 >= 0) && (var95 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((myvar0 == 1) && (var96 >= 0) && (var96 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((myvar0 == 1) && (var97 >= 0) && (var97 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((myvar0 == 1) && (var98 >= 0) && (var98 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((myvar0 == 1) && (var99 >= 0) && (var99 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((myvar0 == 1) && (var100 >= 0) && (var100 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((myvar0 == 1) && (var101 >= 0) && (var101 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((myvar0 == 1) && (var102 >= 0) && (var102 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((myvar0 == 1) && (var103 >= 0) && (var103 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((myvar0 == 1) && (var104 >= 0) && (var104 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((myvar0 == 1) && (var105 >= 0) && (var105 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((myvar0 == 1) && (var106 >= 0) && (var106 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((myvar0 == 1) && (var107 >= 0) && (var107 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((myvar0 == 1) && (var108 >= 0) && (var108 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((myvar0 == 1) && (var109 >= 0) && (var109 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((myvar0 == 1) && (var110 >= 0) && (var110 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((myvar0 == 1) && (var111 >= 0) && (var111 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((myvar0 == 1) && (var112 >= 0) && (var112 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((myvar0 == 1) && (var113 >= 0) && (var113 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((myvar0 == 1) && (var114 >= 0) && (var114 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((myvar0 == 1) && (var115 >= 0) && (var115 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((myvar0 == 1) && (var116 >= 0) && (var116 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((myvar0 == 1) && (var117 >= 0) && (var117 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((myvar0 == 1) && (var118 >= 0) && (var118 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((myvar0 == 1) && (var119 >= 0) && (var119 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((myvar0 == 1) && (var120 >= 0) && (var120 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((myvar0 == 1) && (var121 >= 0) && (var121 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((myvar0 == 1) && (var122 >= 0) && (var122 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((myvar0 == 1) && (var123 >= 0) && (var123 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((myvar0 == 1) && (var124 >= 0) && (var124 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((myvar0 == 1) && (var125 >= 0) && (var125 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((myvar0 == 1) && (var126 >= 0) && (var126 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((myvar0 == 1) && (var127 >= 0) && (var127 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((myvar0 == 1) && (var128 >= 0) && (var128 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((myvar0 == 1) && (var129 >= 0) && (var129 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((myvar0 == 1) && (var130 >= 0) && (var130 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((myvar0 == 1) && (var131 >= 0) && (var131 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((myvar0 == 1) && (var132 >= 0) && (var132 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((myvar0 == 1) && (var133 >= 0) && (var133 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((myvar0 == 1) && (var134 >= 0) && (var134 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((myvar0 == 1) && (var135 >= 0) && (var135 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((myvar0 == 1) && (var136 >= 0) && (var136 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((myvar0 == 1) && (var137 >= 0) && (var137 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((myvar0 == 1) && (var138 >= 0) && (var138 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((myvar0 == 1) && (var139 >= 0) && (var139 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((myvar0 == 1) && (var140 >= 0) && (var140 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((myvar0 == 1) && (var141 >= 0) && (var141 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((myvar0 == 1) && (var142 >= 0) && (var142 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((myvar0 == 1) && (var143 >= 0) && (var143 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((myvar0 == 1) && (var144 >= 0) && (var144 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((myvar0 == 1) && (var145 >= 0) && (var145 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((myvar0 == 1) && (var146 >= 0) && (var146 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((myvar0 == 1) && (var147 >= 0) && (var147 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((myvar0 == 1) && (var148 >= 0) && (var148 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((myvar0 == 1) && (var149 >= 0) && (var149 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((myvar0 == 1) && (var150 >= 0) && (var150 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((myvar0 == 1) && (var151 >= 0) && (var151 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((myvar0 == 1) && (var152 >= 0) && (var152 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((myvar0 == 1) && (var153 >= 0) && (var153 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((myvar0 == 1) && (var154 >= 0) && (var154 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((myvar0 == 1) && (var155 >= 0) && (var155 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((myvar0 == 1) && (var156 >= 0) && (var156 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((myvar0 == 1) && (var157 >= 0) && (var157 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((myvar0 == 1) && (var158 >= 0) && (var158 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((myvar0 == 1) && (var159 >= 0) && (var159 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((myvar0 == 1) && (var160 >= 0) && (var160 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((myvar0 == 1) && (var161 >= 0) && (var161 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((myvar0 == 1) && (var162 >= 0) && (var162 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((myvar0 == 1) && (var163 >= 0) && (var163 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((myvar0 == 1) && (var164 >= 0) && (var164 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((myvar0 == 1) && (var165 >= 0) && (var165 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((myvar0 == 1) && (var166 >= 0) && (var166 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((myvar0 == 1) && (var167 >= 0) && (var167 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((myvar0 == 1) && (var168 >= 0) && (var168 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((myvar0 == 1) && (var169 >= 0) && (var169 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((myvar0 == 1) && (var170 >= 0) && (var170 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((myvar0 == 1) && (var171 >= 0) && (var171 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((myvar0 == 1) && (var172 >= 0) && (var172 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((myvar0 == 1) && (var173 >= 0) && (var173 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((myvar0 == 1) && (var174 >= 0) && (var174 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((myvar0 == 1) && (var175 >= 0) && (var175 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((myvar0 == 1) && (var176 >= 0) && (var176 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((myvar0 == 1) && (var177 >= 0) && (var177 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((myvar0 == 1) && (var178 >= 0) && (var178 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((myvar0 == 1) && (var179 >= 0) && (var179 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((myvar0 == 1) && (var180 >= 0) && (var180 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((myvar0 == 1) && (var181 >= 0) && (var181 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((myvar0 == 1) && (var182 >= 0) && (var182 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((myvar0 == 1) && (var183 >= 0) && (var183 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((myvar0 == 1) && (var184 >= 0) && (var184 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((myvar0 == 1) && (var185 >= 0) && (var185 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((myvar0 == 1) && (var186 >= 0) && (var186 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((myvar0 == 1) && (var187 >= 0) && (var187 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((myvar0 == 1) && (var188 >= 0) && (var188 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((myvar0 == 1) && (var189 >= 0) && (var189 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((myvar0 == 1) && (var190 >= 0) && (var190 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((myvar0 == 1) && (var191 >= 0) && (var191 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((myvar0 == 1) && (var192 >= 0) && (var192 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((myvar0 == 1) && (var193 >= 0) && (var193 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((myvar0 == 1) && (var194 >= 0) && (var194 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((myvar0 == 1) && (var195 >= 0) && (var195 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
if((myvar0 == 1) && (var196 >= 0) && (var196 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
if((myvar0 == 1) && (var197 >= 0) && (var197 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
if((myvar0 == 1) && (var198 >= 0) && (var198 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
if((myvar0 == 1) && (var199 >= 0) && (var199 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
if((myvar0 == 1) && (var200 >= 0) && (var200 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
if((myvar0 == 1) && (var201 >= 0) && (var201 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
if((myvar0 == 1) && (var202 >= 0) && (var202 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
if((myvar0 == 1) && (var203 >= 0) && (var203 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
if((myvar0 == 1) && (var204 >= 0) && (var204 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
if((myvar0 == 1) && (var205 >= 0) && (var205 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
if((myvar0 == 1) && (var206 >= 0) && (var206 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
if((myvar0 == 1) && (var207 >= 0) && (var207 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
if((myvar0 == 1) && (var208 >= 0) && (var208 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
if((myvar0 == 1) && (var209 >= 0) && (var209 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
if((myvar0 == 1) && (var210 >= 0) && (var210 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
if((myvar0 == 1) && (var211 >= 0) && (var211 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
if((myvar0 == 1) && (var212 >= 0) && (var212 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
if((myvar0 == 1) && (var213 >= 0) && (var213 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
if((myvar0 == 1) && (var214 >= 0) && (var214 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
if((myvar0 == 1) && (var215 >= 0) && (var215 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
if((myvar0 == 1) && (var216 >= 0) && (var216 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
if((myvar0 == 1) && (var217 >= 0) && (var217 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
if((myvar0 == 1) && (var218 >= 0) && (var218 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
if((myvar0 == 1) && (var219 >= 0) && (var219 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
if((myvar0 == 1) && (var220 >= 0) && (var220 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
if((myvar0 == 1) && (var221 >= 0) && (var221 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
if((myvar0 == 1) && (var222 >= 0) && (var222 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
if((myvar0 == 1) && (var223 >= 0) && (var223 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
if((myvar0 == 1) && (var224 >= 0) && (var224 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var225;
klee_make_symbolic(&var225, sizeof(var225), "var225");
if((myvar0 == 1) && (var225 >= 0) && (var225 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var226;
klee_make_symbolic(&var226, sizeof(var226), "var226");
if((myvar0 == 1) && (var226 >= 0) && (var226 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var227;
klee_make_symbolic(&var227, sizeof(var227), "var227");
if((myvar0 == 1) && (var227 >= 0) && (var227 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var228;
klee_make_symbolic(&var228, sizeof(var228), "var228");
if((myvar0 == 1) && (var228 >= 0) && (var228 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var229;
klee_make_symbolic(&var229, sizeof(var229), "var229");
if((myvar0 == 1) && (var229 >= 0) && (var229 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var230;
klee_make_symbolic(&var230, sizeof(var230), "var230");
if((myvar0 == 1) && (var230 >= 0) && (var230 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var231;
klee_make_symbolic(&var231, sizeof(var231), "var231");
if((myvar0 == 1) && (var231 >= 0) && (var231 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var232;
klee_make_symbolic(&var232, sizeof(var232), "var232");
if((myvar0 == 1) && (var232 >= 0) && (var232 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var233;
klee_make_symbolic(&var233, sizeof(var233), "var233");
if((myvar0 == 1) && (var233 >= 0) && (var233 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var234;
klee_make_symbolic(&var234, sizeof(var234), "var234");
if((myvar0 == 1) && (var234 >= 0) && (var234 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var235;
klee_make_symbolic(&var235, sizeof(var235), "var235");
if((myvar0 == 1) && (var235 >= 0) && (var235 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var236;
klee_make_symbolic(&var236, sizeof(var236), "var236");
if((myvar0 == 1) && (var236 >= 0) && (var236 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var237;
klee_make_symbolic(&var237, sizeof(var237), "var237");
if((myvar0 == 1) && (var237 >= 0) && (var237 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var238;
klee_make_symbolic(&var238, sizeof(var238), "var238");
if((myvar0 == 1) && (var238 >= 0) && (var238 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var239;
klee_make_symbolic(&var239, sizeof(var239), "var239");
if((myvar0 == 1) && (var239 >= 0) && (var239 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var240;
klee_make_symbolic(&var240, sizeof(var240), "var240");
if((myvar0 == 1) && (var240 >= 0) && (var240 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var241;
klee_make_symbolic(&var241, sizeof(var241), "var241");
if((myvar0 == 1) && (var241 >= 0) && (var241 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var242;
klee_make_symbolic(&var242, sizeof(var242), "var242");
if((myvar0 == 1) && (var242 >= 0) && (var242 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var243;
klee_make_symbolic(&var243, sizeof(var243), "var243");
if((myvar0 == 1) && (var243 >= 0) && (var243 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var244;
klee_make_symbolic(&var244, sizeof(var244), "var244");
if((myvar0 == 1) && (var244 >= 0) && (var244 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var245;
klee_make_symbolic(&var245, sizeof(var245), "var245");
if((myvar0 == 1) && (var245 >= 0) && (var245 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var246;
klee_make_symbolic(&var246, sizeof(var246), "var246");
if((myvar0 == 1) && (var246 >= 0) && (var246 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var247;
klee_make_symbolic(&var247, sizeof(var247), "var247");
if((myvar0 == 1) && (var247 >= 0) && (var247 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var248;
klee_make_symbolic(&var248, sizeof(var248), "var248");
if((myvar0 == 1) && (var248 >= 0) && (var248 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var249;
klee_make_symbolic(&var249, sizeof(var249), "var249");
if((myvar0 == 1) && (var249 >= 0) && (var249 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var250;
klee_make_symbolic(&var250, sizeof(var250), "var250");
if((myvar0 == 1) && (var250 >= 0) && (var250 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var251;
klee_make_symbolic(&var251, sizeof(var251), "var251");
if((myvar0 == 1) && (var251 >= 0) && (var251 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var252;
klee_make_symbolic(&var252, sizeof(var252), "var252");
if((myvar0 == 1) && (var252 >= 0) && (var252 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var253;
klee_make_symbolic(&var253, sizeof(var253), "var253");
if((myvar0 == 1) && (var253 >= 0) && (var253 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var254;
klee_make_symbolic(&var254, sizeof(var254), "var254");
if((myvar0 == 1) && (var254 >= 0) && (var254 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var255;
klee_make_symbolic(&var255, sizeof(var255), "var255");
if((myvar0 == 1) && (var255 >= 0) && (var255 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var256;
klee_make_symbolic(&var256, sizeof(var256), "var256");
if((myvar0 == 1) && (var256 >= 0) && (var256 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var257;
klee_make_symbolic(&var257, sizeof(var257), "var257");
if((myvar0 == 1) && (var257 >= 0) && (var257 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var258;
klee_make_symbolic(&var258, sizeof(var258), "var258");
if((myvar0 == 1) && (var258 >= 0) && (var258 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var259;
klee_make_symbolic(&var259, sizeof(var259), "var259");
if((myvar0 == 1) && (var259 >= 0) && (var259 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var260;
klee_make_symbolic(&var260, sizeof(var260), "var260");
if((myvar0 == 1) && (var260 >= 0) && (var260 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var261;
klee_make_symbolic(&var261, sizeof(var261), "var261");
if((myvar0 == 1) && (var261 >= 0) && (var261 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var262;
klee_make_symbolic(&var262, sizeof(var262), "var262");
if((myvar0 == 1) && (var262 >= 0) && (var262 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var263;
klee_make_symbolic(&var263, sizeof(var263), "var263");
if((myvar0 == 1) && (var263 >= 0) && (var263 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var264;
klee_make_symbolic(&var264, sizeof(var264), "var264");
if((myvar0 == 1) && (var264 >= 0) && (var264 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var265;
klee_make_symbolic(&var265, sizeof(var265), "var265");
if((myvar0 == 1) && (var265 >= 0) && (var265 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var266;
klee_make_symbolic(&var266, sizeof(var266), "var266");
if((myvar0 == 1) && (var266 >= 0) && (var266 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var267;
klee_make_symbolic(&var267, sizeof(var267), "var267");
if((myvar0 == 1) && (var267 >= 0) && (var267 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var268;
klee_make_symbolic(&var268, sizeof(var268), "var268");
if((myvar0 == 1) && (var268 >= 0) && (var268 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var269;
klee_make_symbolic(&var269, sizeof(var269), "var269");
if((myvar0 == 1) && (var269 >= 0) && (var269 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var270;
klee_make_symbolic(&var270, sizeof(var270), "var270");
if((myvar0 == 1) && (var270 >= 0) && (var270 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var271;
klee_make_symbolic(&var271, sizeof(var271), "var271");
if((myvar0 == 1) && (var271 >= 0) && (var271 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var272;
klee_make_symbolic(&var272, sizeof(var272), "var272");
if((myvar0 == 1) && (var272 >= 0) && (var272 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var273;
klee_make_symbolic(&var273, sizeof(var273), "var273");
if((myvar0 == 1) && (var273 >= 0) && (var273 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var274;
klee_make_symbolic(&var274, sizeof(var274), "var274");
if((myvar0 == 1) && (var274 >= 0) && (var274 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var275;
klee_make_symbolic(&var275, sizeof(var275), "var275");
if((myvar0 == 1) && (var275 >= 0) && (var275 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var276;
klee_make_symbolic(&var276, sizeof(var276), "var276");
if((myvar0 == 1) && (var276 >= 0) && (var276 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var277;
klee_make_symbolic(&var277, sizeof(var277), "var277");
if((myvar0 == 1) && (var277 >= 0) && (var277 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var278;
klee_make_symbolic(&var278, sizeof(var278), "var278");
if((myvar0 == 1) && (var278 >= 0) && (var278 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var279;
klee_make_symbolic(&var279, sizeof(var279), "var279");
if((myvar0 == 1) && (var279 >= 0) && (var279 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var280;
klee_make_symbolic(&var280, sizeof(var280), "var280");
if((myvar0 == 1) && (var280 >= 0) && (var280 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var281;
klee_make_symbolic(&var281, sizeof(var281), "var281");
if((myvar0 == 1) && (var281 >= 0) && (var281 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var282;
klee_make_symbolic(&var282, sizeof(var282), "var282");
if((myvar0 == 1) && (var282 >= 0) && (var282 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var283;
klee_make_symbolic(&var283, sizeof(var283), "var283");
if((myvar0 == 1) && (var283 >= 0) && (var283 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var284;
klee_make_symbolic(&var284, sizeof(var284), "var284");
if((myvar0 == 1) && (var284 >= 0) && (var284 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var285;
klee_make_symbolic(&var285, sizeof(var285), "var285");
if((myvar0 == 1) && (var285 >= 0) && (var285 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var286;
klee_make_symbolic(&var286, sizeof(var286), "var286");
if((myvar0 == 1) && (var286 >= 0) && (var286 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var287;
klee_make_symbolic(&var287, sizeof(var287), "var287");
if((myvar0 == 1) && (var287 >= 0) && (var287 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var288;
klee_make_symbolic(&var288, sizeof(var288), "var288");
if((myvar0 == 1) && (var288 >= 0) && (var288 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var289;
klee_make_symbolic(&var289, sizeof(var289), "var289");
if((myvar0 == 1) && (var289 >= 0) && (var289 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var290;
klee_make_symbolic(&var290, sizeof(var290), "var290");
if((myvar0 == 1) && (var290 >= 0) && (var290 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var291;
klee_make_symbolic(&var291, sizeof(var291), "var291");
if((myvar0 == 1) && (var291 >= 0) && (var291 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var292;
klee_make_symbolic(&var292, sizeof(var292), "var292");
if((myvar0 == 1) && (var292 >= 0) && (var292 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var293;
klee_make_symbolic(&var293, sizeof(var293), "var293");
if((myvar0 == 1) && (var293 >= 0) && (var293 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var294;
klee_make_symbolic(&var294, sizeof(var294), "var294");
if((myvar0 == 1) && (var294 >= 0) && (var294 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var295;
klee_make_symbolic(&var295, sizeof(var295), "var295");
if((myvar0 == 1) && (var295 >= 0) && (var295 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var296;
klee_make_symbolic(&var296, sizeof(var296), "var296");
if((myvar0 == 1) && (var296 >= 0) && (var296 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var297;
klee_make_symbolic(&var297, sizeof(var297), "var297");
if((myvar0 == 1) && (var297 >= 0) && (var297 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var298;
klee_make_symbolic(&var298, sizeof(var298), "var298");
if((myvar0 == 1) && (var298 >= 0) && (var298 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var299;
klee_make_symbolic(&var299, sizeof(var299), "var299");
if((myvar0 == 1) && (var299 >= 0) && (var299 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var300;
klee_make_symbolic(&var300, sizeof(var300), "var300");
if((myvar0 == 1) && (var300 >= 0) && (var300 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var301;
klee_make_symbolic(&var301, sizeof(var301), "var301");
if((myvar0 == 1) && (var301 >= 0) && (var301 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var302;
klee_make_symbolic(&var302, sizeof(var302), "var302");
if((myvar0 == 1) && (var302 >= 0) && (var302 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var303;
klee_make_symbolic(&var303, sizeof(var303), "var303");
if((myvar0 == 1) && (var303 >= 0) && (var303 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var304;
klee_make_symbolic(&var304, sizeof(var304), "var304");
if((myvar0 == 1) && (var304 >= 0) && (var304 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var305;
klee_make_symbolic(&var305, sizeof(var305), "var305");
if((myvar0 == 1) && (var305 >= 0) && (var305 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var306;
klee_make_symbolic(&var306, sizeof(var306), "var306");
if((myvar0 == 1) && (var306 >= 0) && (var306 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var307;
klee_make_symbolic(&var307, sizeof(var307), "var307");
if((myvar0 == 1) && (var307 >= 0) && (var307 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var308;
klee_make_symbolic(&var308, sizeof(var308), "var308");
if((myvar0 == 1) && (var308 >= 0) && (var308 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var309;
klee_make_symbolic(&var309, sizeof(var309), "var309");
if((myvar0 == 1) && (var309 >= 0) && (var309 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var310;
klee_make_symbolic(&var310, sizeof(var310), "var310");
if((myvar0 == 1) && (var310 >= 0) && (var310 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var311;
klee_make_symbolic(&var311, sizeof(var311), "var311");
if((myvar0 == 1) && (var311 >= 0) && (var311 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var312;
klee_make_symbolic(&var312, sizeof(var312), "var312");
if((myvar0 == 1) && (var312 >= 0) && (var312 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var313;
klee_make_symbolic(&var313, sizeof(var313), "var313");
if((myvar0 == 1) && (var313 >= 0) && (var313 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var314;
klee_make_symbolic(&var314, sizeof(var314), "var314");
if((myvar0 == 1) && (var314 >= 0) && (var314 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var315;
klee_make_symbolic(&var315, sizeof(var315), "var315");
if((myvar0 == 1) && (var315 >= 0) && (var315 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var316;
klee_make_symbolic(&var316, sizeof(var316), "var316");
if((myvar0 == 1) && (var316 >= 0) && (var316 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var317;
klee_make_symbolic(&var317, sizeof(var317), "var317");
if((myvar0 == 1) && (var317 >= 0) && (var317 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var318;
klee_make_symbolic(&var318, sizeof(var318), "var318");
if((myvar0 == 1) && (var318 >= 0) && (var318 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var319;
klee_make_symbolic(&var319, sizeof(var319), "var319");
if((myvar0 == 1) && (var319 >= 0) && (var319 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var320;
klee_make_symbolic(&var320, sizeof(var320), "var320");
if((myvar0 == 1) && (var320 >= 0) && (var320 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var321;
klee_make_symbolic(&var321, sizeof(var321), "var321");
if((myvar0 == 1) && (var321 >= 0) && (var321 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var322;
klee_make_symbolic(&var322, sizeof(var322), "var322");
if((myvar0 == 1) && (var322 >= 0) && (var322 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var323;
klee_make_symbolic(&var323, sizeof(var323), "var323");
if((myvar0 == 1) && (var323 >= 0) && (var323 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var324;
klee_make_symbolic(&var324, sizeof(var324), "var324");
if((myvar0 == 1) && (var324 >= 0) && (var324 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var325;
klee_make_symbolic(&var325, sizeof(var325), "var325");
if((myvar0 == 1) && (var325 >= 0) && (var325 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var326;
klee_make_symbolic(&var326, sizeof(var326), "var326");
if((myvar0 == 1) && (var326 >= 0) && (var326 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var327;
klee_make_symbolic(&var327, sizeof(var327), "var327");
if((myvar0 == 1) && (var327 >= 0) && (var327 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var328;
klee_make_symbolic(&var328, sizeof(var328), "var328");
if((myvar0 == 1) && (var328 >= 0) && (var328 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var329;
klee_make_symbolic(&var329, sizeof(var329), "var329");
if((myvar0 == 1) && (var329 >= 0) && (var329 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var330;
klee_make_symbolic(&var330, sizeof(var330), "var330");
if((myvar0 == 1) && (var330 >= 0) && (var330 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var331;
klee_make_symbolic(&var331, sizeof(var331), "var331");
if((myvar0 == 1) && (var331 >= 0) && (var331 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var332;
klee_make_symbolic(&var332, sizeof(var332), "var332");
if((myvar0 == 1) && (var332 >= 0) && (var332 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var333;
klee_make_symbolic(&var333, sizeof(var333), "var333");
if((myvar0 == 1) && (var333 >= 0) && (var333 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var334;
klee_make_symbolic(&var334, sizeof(var334), "var334");
if((myvar0 == 1) && (var334 >= 0) && (var334 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var335;
klee_make_symbolic(&var335, sizeof(var335), "var335");
if((myvar0 == 1) && (var335 >= 0) && (var335 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var336;
klee_make_symbolic(&var336, sizeof(var336), "var336");
if((myvar0 == 1) && (var336 >= 0) && (var336 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var337;
klee_make_symbolic(&var337, sizeof(var337), "var337");
if((myvar0 == 1) && (var337 >= 0) && (var337 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var338;
klee_make_symbolic(&var338, sizeof(var338), "var338");
if((myvar0 == 1) && (var338 >= 0) && (var338 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var339;
klee_make_symbolic(&var339, sizeof(var339), "var339");
if((myvar0 == 1) && (var339 >= 0) && (var339 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var340;
klee_make_symbolic(&var340, sizeof(var340), "var340");
if((myvar0 == 1) && (var340 >= 0) && (var340 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var341;
klee_make_symbolic(&var341, sizeof(var341), "var341");
if((myvar0 == 1) && (var341 >= 0) && (var341 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var342;
klee_make_symbolic(&var342, sizeof(var342), "var342");
if((myvar0 == 1) && (var342 >= 0) && (var342 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var343;
klee_make_symbolic(&var343, sizeof(var343), "var343");
if((myvar0 == 1) && (var343 >= 0) && (var343 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var344;
klee_make_symbolic(&var344, sizeof(var344), "var344");
if((myvar0 == 1) && (var344 >= 0) && (var344 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var345;
klee_make_symbolic(&var345, sizeof(var345), "var345");
if((myvar0 == 1) && (var345 >= 0) && (var345 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var346;
klee_make_symbolic(&var346, sizeof(var346), "var346");
if((myvar0 == 1) && (var346 >= 0) && (var346 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var347;
klee_make_symbolic(&var347, sizeof(var347), "var347");
if((myvar0 == 1) && (var347 >= 0) && (var347 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var348;
klee_make_symbolic(&var348, sizeof(var348), "var348");
if((myvar0 == 1) && (var348 >= 0) && (var348 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var349;
klee_make_symbolic(&var349, sizeof(var349), "var349");
if((myvar0 == 1) && (var349 >= 0) && (var349 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var350;
klee_make_symbolic(&var350, sizeof(var350), "var350");
if((myvar0 == 1) && (var350 >= 0) && (var350 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var351;
klee_make_symbolic(&var351, sizeof(var351), "var351");
if((myvar0 == 1) && (var351 >= 0) && (var351 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var352;
klee_make_symbolic(&var352, sizeof(var352), "var352");
if((myvar0 == 1) && (var352 >= 0) && (var352 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var353;
klee_make_symbolic(&var353, sizeof(var353), "var353");
if((myvar0 == 1) && (var353 >= 0) && (var353 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var354;
klee_make_symbolic(&var354, sizeof(var354), "var354");
if((myvar0 == 1) && (var354 >= 0) && (var354 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var355;
klee_make_symbolic(&var355, sizeof(var355), "var355");
if((myvar0 == 1) && (var355 >= 0) && (var355 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var356;
klee_make_symbolic(&var356, sizeof(var356), "var356");
if((myvar0 == 1) && (var356 >= 0) && (var356 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var357;
klee_make_symbolic(&var357, sizeof(var357), "var357");
if((myvar0 == 1) && (var357 >= 0) && (var357 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var358;
klee_make_symbolic(&var358, sizeof(var358), "var358");
if((myvar0 == 1) && (var358 >= 0) && (var358 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var359;
klee_make_symbolic(&var359, sizeof(var359), "var359");
if((myvar0 == 1) && (var359 >= 0) && (var359 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var360;
klee_make_symbolic(&var360, sizeof(var360), "var360");
if((myvar0 == 1) && (var360 >= 0) && (var360 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var361;
klee_make_symbolic(&var361, sizeof(var361), "var361");
if((myvar0 == 1) && (var361 >= 0) && (var361 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var362;
klee_make_symbolic(&var362, sizeof(var362), "var362");
if((myvar0 == 1) && (var362 >= 0) && (var362 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var363;
klee_make_symbolic(&var363, sizeof(var363), "var363");
if((myvar0 == 1) && (var363 >= 0) && (var363 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var364;
klee_make_symbolic(&var364, sizeof(var364), "var364");
if((myvar0 == 1) && (var364 >= 0) && (var364 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var365;
klee_make_symbolic(&var365, sizeof(var365), "var365");
if((myvar0 == 1) && (var365 >= 0) && (var365 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var366;
klee_make_symbolic(&var366, sizeof(var366), "var366");
if((myvar0 == 1) && (var366 >= 0) && (var366 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var367;
klee_make_symbolic(&var367, sizeof(var367), "var367");
if((myvar0 == 1) && (var367 >= 0) && (var367 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var368;
klee_make_symbolic(&var368, sizeof(var368), "var368");
if((myvar0 == 1) && (var368 >= 0) && (var368 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var369;
klee_make_symbolic(&var369, sizeof(var369), "var369");
if((myvar0 == 1) && (var369 >= 0) && (var369 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var370;
klee_make_symbolic(&var370, sizeof(var370), "var370");
if((myvar0 == 1) && (var370 >= 0) && (var370 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var371;
klee_make_symbolic(&var371, sizeof(var371), "var371");
if((myvar0 == 1) && (var371 >= 0) && (var371 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var372;
klee_make_symbolic(&var372, sizeof(var372), "var372");
if((myvar0 == 1) && (var372 >= 0) && (var372 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var373;
klee_make_symbolic(&var373, sizeof(var373), "var373");
if((myvar0 == 1) && (var373 >= 0) && (var373 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var374;
klee_make_symbolic(&var374, sizeof(var374), "var374");
if((myvar0 == 1) && (var374 >= 0) && (var374 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var375;
klee_make_symbolic(&var375, sizeof(var375), "var375");
if((myvar0 == 1) && (var375 >= 0) && (var375 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var376;
klee_make_symbolic(&var376, sizeof(var376), "var376");
if((myvar0 == 1) && (var376 >= 0) && (var376 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var377;
klee_make_symbolic(&var377, sizeof(var377), "var377");
if((myvar0 == 1) && (var377 >= 0) && (var377 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var378;
klee_make_symbolic(&var378, sizeof(var378), "var378");
if((myvar0 == 1) && (var378 >= 0) && (var378 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var379;
klee_make_symbolic(&var379, sizeof(var379), "var379");
if((myvar0 == 1) && (var379 >= 0) && (var379 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var380;
klee_make_symbolic(&var380, sizeof(var380), "var380");
if((myvar0 == 1) && (var380 >= 0) && (var380 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var381;
klee_make_symbolic(&var381, sizeof(var381), "var381");
if((myvar0 == 1) && (var381 >= 0) && (var381 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var382;
klee_make_symbolic(&var382, sizeof(var382), "var382");
if((myvar0 == 1) && (var382 >= 0) && (var382 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var383;
klee_make_symbolic(&var383, sizeof(var383), "var383");
if((myvar0 == 1) && (var383 >= 0) && (var383 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var384;
klee_make_symbolic(&var384, sizeof(var384), "var384");
if((myvar0 == 1) && (var384 >= 0) && (var384 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var385;
klee_make_symbolic(&var385, sizeof(var385), "var385");
if((myvar0 == 1) && (var385 >= 0) && (var385 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var386;
klee_make_symbolic(&var386, sizeof(var386), "var386");
if((myvar0 == 1) && (var386 >= 0) && (var386 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var387;
klee_make_symbolic(&var387, sizeof(var387), "var387");
if((myvar0 == 1) && (var387 >= 0) && (var387 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var388;
klee_make_symbolic(&var388, sizeof(var388), "var388");
if((myvar0 == 1) && (var388 >= 0) && (var388 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var389;
klee_make_symbolic(&var389, sizeof(var389), "var389");
if((myvar0 == 1) && (var389 >= 0) && (var389 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var390;
klee_make_symbolic(&var390, sizeof(var390), "var390");
if((myvar0 == 1) && (var390 >= 0) && (var390 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var391;
klee_make_symbolic(&var391, sizeof(var391), "var391");
if((myvar0 == 1) && (var391 >= 0) && (var391 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var392;
klee_make_symbolic(&var392, sizeof(var392), "var392");
if((myvar0 == 1) && (var392 >= 0) && (var392 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var393;
klee_make_symbolic(&var393, sizeof(var393), "var393");
if((myvar0 == 1) && (var393 >= 0) && (var393 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var394;
klee_make_symbolic(&var394, sizeof(var394), "var394");
if((myvar0 == 1) && (var394 >= 0) && (var394 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var395;
klee_make_symbolic(&var395, sizeof(var395), "var395");
if((myvar0 == 1) && (var395 >= 0) && (var395 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var396;
klee_make_symbolic(&var396, sizeof(var396), "var396");
if((myvar0 == 1) && (var396 >= 0) && (var396 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var397;
klee_make_symbolic(&var397, sizeof(var397), "var397");
if((myvar0 == 1) && (var397 >= 0) && (var397 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var398;
klee_make_symbolic(&var398, sizeof(var398), "var398");
if((myvar0 == 1) && (var398 >= 0) && (var398 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var399;
klee_make_symbolic(&var399, sizeof(var399), "var399");
if((myvar0 == 1) && (var399 >= 0) && (var399 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var400;
klee_make_symbolic(&var400, sizeof(var400), "var400");
if((myvar0 == 1) && (var400 >= 0) && (var400 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var401;
klee_make_symbolic(&var401, sizeof(var401), "var401");
if((myvar0 == 1) && (var401 >= 0) && (var401 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var402;
klee_make_symbolic(&var402, sizeof(var402), "var402");
if((myvar0 == 1) && (var402 >= 0) && (var402 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var403;
klee_make_symbolic(&var403, sizeof(var403), "var403");
if((myvar0 == 1) && (var403 >= 0) && (var403 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var404;
klee_make_symbolic(&var404, sizeof(var404), "var404");
if((myvar0 == 1) && (var404 >= 0) && (var404 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var405;
klee_make_symbolic(&var405, sizeof(var405), "var405");
if((myvar0 == 1) && (var405 >= 0) && (var405 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var406;
klee_make_symbolic(&var406, sizeof(var406), "var406");
if((myvar0 == 1) && (var406 >= 0) && (var406 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var407;
klee_make_symbolic(&var407, sizeof(var407), "var407");
if((myvar0 == 1) && (var407 >= 0) && (var407 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var408;
klee_make_symbolic(&var408, sizeof(var408), "var408");
if((myvar0 == 1) && (var408 >= 0) && (var408 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var409;
klee_make_symbolic(&var409, sizeof(var409), "var409");
if((myvar0 == 1) && (var409 >= 0) && (var409 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var410;
klee_make_symbolic(&var410, sizeof(var410), "var410");
if((myvar0 == 1) && (var410 >= 0) && (var410 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var411;
klee_make_symbolic(&var411, sizeof(var411), "var411");
if((myvar0 == 1) && (var411 >= 0) && (var411 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var412;
klee_make_symbolic(&var412, sizeof(var412), "var412");
if((myvar0 == 1) && (var412 >= 0) && (var412 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var413;
klee_make_symbolic(&var413, sizeof(var413), "var413");
if((myvar0 == 1) && (var413 >= 0) && (var413 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var414;
klee_make_symbolic(&var414, sizeof(var414), "var414");
if((myvar0 == 1) && (var414 >= 0) && (var414 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var415;
klee_make_symbolic(&var415, sizeof(var415), "var415");
if((myvar0 == 1) && (var415 >= 0) && (var415 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var416;
klee_make_symbolic(&var416, sizeof(var416), "var416");
if((myvar0 == 1) && (var416 >= 0) && (var416 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var417;
klee_make_symbolic(&var417, sizeof(var417), "var417");
if((myvar0 == 1) && (var417 >= 0) && (var417 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var418;
klee_make_symbolic(&var418, sizeof(var418), "var418");
if((myvar0 == 1) && (var418 >= 0) && (var418 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var419;
klee_make_symbolic(&var419, sizeof(var419), "var419");
if((myvar0 == 1) && (var419 >= 0) && (var419 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var420;
klee_make_symbolic(&var420, sizeof(var420), "var420");
if((myvar0 == 1) && (var420 >= 0) && (var420 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var421;
klee_make_symbolic(&var421, sizeof(var421), "var421");
if((myvar0 == 1) && (var421 >= 0) && (var421 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var422;
klee_make_symbolic(&var422, sizeof(var422), "var422");
if((myvar0 == 1) && (var422 >= 0) && (var422 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var423;
klee_make_symbolic(&var423, sizeof(var423), "var423");
if((myvar0 == 1) && (var423 >= 0) && (var423 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var424;
klee_make_symbolic(&var424, sizeof(var424), "var424");
if((myvar0 == 1) && (var424 >= 0) && (var424 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var425;
klee_make_symbolic(&var425, sizeof(var425), "var425");
if((myvar0 == 1) && (var425 >= 0) && (var425 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var426;
klee_make_symbolic(&var426, sizeof(var426), "var426");
if((myvar0 == 1) && (var426 >= 0) && (var426 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var427;
klee_make_symbolic(&var427, sizeof(var427), "var427");
if((myvar0 == 1) && (var427 >= 0) && (var427 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var428;
klee_make_symbolic(&var428, sizeof(var428), "var428");
if((myvar0 == 1) && (var428 >= 0) && (var428 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var429;
klee_make_symbolic(&var429, sizeof(var429), "var429");
if((myvar0 == 1) && (var429 >= 0) && (var429 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var430;
klee_make_symbolic(&var430, sizeof(var430), "var430");
if((myvar0 == 1) && (var430 >= 0) && (var430 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var431;
klee_make_symbolic(&var431, sizeof(var431), "var431");
if((myvar0 == 1) && (var431 >= 0) && (var431 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var432;
klee_make_symbolic(&var432, sizeof(var432), "var432");
if((myvar0 == 1) && (var432 >= 0) && (var432 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var433;
klee_make_symbolic(&var433, sizeof(var433), "var433");
if((myvar0 == 1) && (var433 >= 0) && (var433 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var434;
klee_make_symbolic(&var434, sizeof(var434), "var434");
if((myvar0 == 1) && (var434 >= 0) && (var434 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var435;
klee_make_symbolic(&var435, sizeof(var435), "var435");
if((myvar0 == 1) && (var435 >= 0) && (var435 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var436;
klee_make_symbolic(&var436, sizeof(var436), "var436");
if((myvar0 == 1) && (var436 >= 0) && (var436 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var437;
klee_make_symbolic(&var437, sizeof(var437), "var437");
if((myvar0 == 1) && (var437 >= 0) && (var437 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var438;
klee_make_symbolic(&var438, sizeof(var438), "var438");
if((myvar0 == 1) && (var438 >= 0) && (var438 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var439;
klee_make_symbolic(&var439, sizeof(var439), "var439");
if((myvar0 == 1) && (var439 >= 0) && (var439 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var440;
klee_make_symbolic(&var440, sizeof(var440), "var440");
if((myvar0 == 1) && (var440 >= 0) && (var440 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var441;
klee_make_symbolic(&var441, sizeof(var441), "var441");
if((myvar0 == 1) && (var441 >= 0) && (var441 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var442;
klee_make_symbolic(&var442, sizeof(var442), "var442");
if((myvar0 == 1) && (var442 >= 0) && (var442 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var443;
klee_make_symbolic(&var443, sizeof(var443), "var443");
if((myvar0 == 1) && (var443 >= 0) && (var443 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var444;
klee_make_symbolic(&var444, sizeof(var444), "var444");
if((myvar0 == 1) && (var444 >= 0) && (var444 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var445;
klee_make_symbolic(&var445, sizeof(var445), "var445");
if((myvar0 == 1) && (var445 >= 0) && (var445 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var446;
klee_make_symbolic(&var446, sizeof(var446), "var446");
if((myvar0 == 1) && (var446 >= 0) && (var446 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var447;
klee_make_symbolic(&var447, sizeof(var447), "var447");
if((myvar0 == 1) && (var447 >= 0) && (var447 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var448;
klee_make_symbolic(&var448, sizeof(var448), "var448");
if((myvar0 == 1) && (var448 >= 0) && (var448 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var449;
klee_make_symbolic(&var449, sizeof(var449), "var449");
if((myvar0 == 1) && (var449 >= 0) && (var449 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var450;
klee_make_symbolic(&var450, sizeof(var450), "var450");
if((myvar0 == 1) && (var450 >= 0) && (var450 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var451;
klee_make_symbolic(&var451, sizeof(var451), "var451");
if((myvar0 == 1) && (var451 >= 0) && (var451 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var452;
klee_make_symbolic(&var452, sizeof(var452), "var452");
if((myvar0 == 1) && (var452 >= 0) && (var452 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var453;
klee_make_symbolic(&var453, sizeof(var453), "var453");
if((myvar0 == 1) && (var453 >= 0) && (var453 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var454;
klee_make_symbolic(&var454, sizeof(var454), "var454");
if((myvar0 == 1) && (var454 >= 0) && (var454 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var455;
klee_make_symbolic(&var455, sizeof(var455), "var455");
if((myvar0 == 1) && (var455 >= 0) && (var455 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var456;
klee_make_symbolic(&var456, sizeof(var456), "var456");
if((myvar0 == 1) && (var456 >= 0) && (var456 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var457;
klee_make_symbolic(&var457, sizeof(var457), "var457");
if((myvar0 == 1) && (var457 >= 0) && (var457 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var458;
klee_make_symbolic(&var458, sizeof(var458), "var458");
if((myvar0 == 1) && (var458 >= 0) && (var458 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var459;
klee_make_symbolic(&var459, sizeof(var459), "var459");
if((myvar0 == 1) && (var459 >= 0) && (var459 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var460;
klee_make_symbolic(&var460, sizeof(var460), "var460");
if((myvar0 == 1) && (var460 >= 0) && (var460 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var461;
klee_make_symbolic(&var461, sizeof(var461), "var461");
if((myvar0 == 1) && (var461 >= 0) && (var461 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var462;
klee_make_symbolic(&var462, sizeof(var462), "var462");
if((myvar0 == 1) && (var462 >= 0) && (var462 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var463;
klee_make_symbolic(&var463, sizeof(var463), "var463");
if((myvar0 == 1) && (var463 >= 0) && (var463 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var464;
klee_make_symbolic(&var464, sizeof(var464), "var464");
if((myvar0 == 1) && (var464 >= 0) && (var464 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var465;
klee_make_symbolic(&var465, sizeof(var465), "var465");
if((myvar0 == 1) && (var465 >= 0) && (var465 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var466;
klee_make_symbolic(&var466, sizeof(var466), "var466");
if((myvar0 == 1) && (var466 >= 0) && (var466 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var467;
klee_make_symbolic(&var467, sizeof(var467), "var467");
if((myvar0 == 1) && (var467 >= 0) && (var467 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var468;
klee_make_symbolic(&var468, sizeof(var468), "var468");
if((myvar0 == 1) && (var468 >= 0) && (var468 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var469;
klee_make_symbolic(&var469, sizeof(var469), "var469");
if((myvar0 == 1) && (var469 >= 0) && (var469 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var470;
klee_make_symbolic(&var470, sizeof(var470), "var470");
if((myvar0 == 1) && (var470 >= 0) && (var470 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var471;
klee_make_symbolic(&var471, sizeof(var471), "var471");
if((myvar0 == 1) && (var471 >= 0) && (var471 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var472;
klee_make_symbolic(&var472, sizeof(var472), "var472");
if((myvar0 == 1) && (var472 >= 0) && (var472 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var473;
klee_make_symbolic(&var473, sizeof(var473), "var473");
if((myvar0 == 1) && (var473 >= 0) && (var473 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var474;
klee_make_symbolic(&var474, sizeof(var474), "var474");
if((myvar0 == 1) && (var474 >= 0) && (var474 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var475;
klee_make_symbolic(&var475, sizeof(var475), "var475");
if((myvar0 == 1) && (var475 >= 0) && (var475 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var476;
klee_make_symbolic(&var476, sizeof(var476), "var476");
if((myvar0 == 1) && (var476 >= 0) && (var476 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var477;
klee_make_symbolic(&var477, sizeof(var477), "var477");
if((myvar0 == 1) && (var477 >= 0) && (var477 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var478;
klee_make_symbolic(&var478, sizeof(var478), "var478");
if((myvar0 == 1) && (var478 >= 0) && (var478 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var479;
klee_make_symbolic(&var479, sizeof(var479), "var479");
if((myvar0 == 1) && (var479 >= 0) && (var479 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var480;
klee_make_symbolic(&var480, sizeof(var480), "var480");
if((myvar0 == 1) && (var480 >= 0) && (var480 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var481;
klee_make_symbolic(&var481, sizeof(var481), "var481");
if((myvar0 == 1) && (var481 >= 0) && (var481 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var482;
klee_make_symbolic(&var482, sizeof(var482), "var482");
if((myvar0 == 1) && (var482 >= 0) && (var482 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var483;
klee_make_symbolic(&var483, sizeof(var483), "var483");
if((myvar0 == 1) && (var483 >= 0) && (var483 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var484;
klee_make_symbolic(&var484, sizeof(var484), "var484");
if((myvar0 == 1) && (var484 >= 0) && (var484 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var485;
klee_make_symbolic(&var485, sizeof(var485), "var485");
if((myvar0 == 1) && (var485 >= 0) && (var485 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var486;
klee_make_symbolic(&var486, sizeof(var486), "var486");
if((myvar0 == 1) && (var486 >= 0) && (var486 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var487;
klee_make_symbolic(&var487, sizeof(var487), "var487");
if((myvar0 == 1) && (var487 >= 0) && (var487 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var488;
klee_make_symbolic(&var488, sizeof(var488), "var488");
if((myvar0 == 1) && (var488 >= 0) && (var488 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var489;
klee_make_symbolic(&var489, sizeof(var489), "var489");
if((myvar0 == 1) && (var489 >= 0) && (var489 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var490;
klee_make_symbolic(&var490, sizeof(var490), "var490");
if((myvar0 == 1) && (var490 >= 0) && (var490 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var491;
klee_make_symbolic(&var491, sizeof(var491), "var491");
if((myvar0 == 1) && (var491 >= 0) && (var491 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var492;
klee_make_symbolic(&var492, sizeof(var492), "var492");
if((myvar0 == 1) && (var492 >= 0) && (var492 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var493;
klee_make_symbolic(&var493, sizeof(var493), "var493");
if((myvar0 == 1) && (var493 >= 0) && (var493 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var494;
klee_make_symbolic(&var494, sizeof(var494), "var494");
if((myvar0 == 1) && (var494 >= 0) && (var494 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var495;
klee_make_symbolic(&var495, sizeof(var495), "var495");
if((myvar0 == 1) && (var495 >= 0) && (var495 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var496;
klee_make_symbolic(&var496, sizeof(var496), "var496");
if((myvar0 == 1) && (var496 >= 0) && (var496 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var497;
klee_make_symbolic(&var497, sizeof(var497), "var497");
if((myvar0 == 1) && (var497 >= 0) && (var497 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var498;
klee_make_symbolic(&var498, sizeof(var498), "var498");
if((myvar0 == 1) && (var498 >= 0) && (var498 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var499;
klee_make_symbolic(&var499, sizeof(var499), "var499");
if((myvar0 == 1) && (var499 >= 0) && (var499 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var500;
klee_make_symbolic(&var500, sizeof(var500), "var500");
if((myvar0 == 1) && (var500 >= 0) && (var500 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var501;
klee_make_symbolic(&var501, sizeof(var501), "var501");
if((myvar0 == 1) && (var501 >= 0) && (var501 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var502;
klee_make_symbolic(&var502, sizeof(var502), "var502");
if((myvar0 == 1) && (var502 >= 0) && (var502 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var503;
klee_make_symbolic(&var503, sizeof(var503), "var503");
if((myvar0 == 1) && (var503 >= 0) && (var503 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var504;
klee_make_symbolic(&var504, sizeof(var504), "var504");
if((myvar0 == 1) && (var504 >= 0) && (var504 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var505;
klee_make_symbolic(&var505, sizeof(var505), "var505");
if((myvar0 == 1) && (var505 >= 0) && (var505 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var506;
klee_make_symbolic(&var506, sizeof(var506), "var506");
if((myvar0 == 1) && (var506 >= 0) && (var506 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var507;
klee_make_symbolic(&var507, sizeof(var507), "var507");
if((myvar0 == 1) && (var507 >= 0) && (var507 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var508;
klee_make_symbolic(&var508, sizeof(var508), "var508");
if((myvar0 == 1) && (var508 >= 0) && (var508 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var509;
klee_make_symbolic(&var509, sizeof(var509), "var509");
if((myvar0 == 1) && (var509 >= 0) && (var509 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var510;
klee_make_symbolic(&var510, sizeof(var510), "var510");
if((myvar0 == 1) && (var510 >= 0) && (var510 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var511;
klee_make_symbolic(&var511, sizeof(var511), "var511");
if((myvar0 == 1) && (var511 >= 0) && (var511 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var512;
klee_make_symbolic(&var512, sizeof(var512), "var512");
if((myvar0 == 1) && (var512 >= 0) && (var512 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var513;
klee_make_symbolic(&var513, sizeof(var513), "var513");
if((myvar0 == 1) && (var513 >= 0) && (var513 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var514;
klee_make_symbolic(&var514, sizeof(var514), "var514");
if((myvar0 == 1) && (var514 >= 0) && (var514 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var515;
klee_make_symbolic(&var515, sizeof(var515), "var515");
if((myvar0 == 1) && (var515 >= 0) && (var515 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var516;
klee_make_symbolic(&var516, sizeof(var516), "var516");
if((myvar0 == 1) && (var516 >= 0) && (var516 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var517;
klee_make_symbolic(&var517, sizeof(var517), "var517");
if((myvar0 == 1) && (var517 >= 0) && (var517 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var518;
klee_make_symbolic(&var518, sizeof(var518), "var518");
if((myvar0 == 1) && (var518 >= 0) && (var518 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var519;
klee_make_symbolic(&var519, sizeof(var519), "var519");
if((myvar0 == 1) && (var519 >= 0) && (var519 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var520;
klee_make_symbolic(&var520, sizeof(var520), "var520");
if((myvar0 == 1) && (var520 >= 0) && (var520 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var521;
klee_make_symbolic(&var521, sizeof(var521), "var521");
if((myvar0 == 1) && (var521 >= 0) && (var521 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var522;
klee_make_symbolic(&var522, sizeof(var522), "var522");
if((myvar0 == 1) && (var522 >= 0) && (var522 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var523;
klee_make_symbolic(&var523, sizeof(var523), "var523");
if((myvar0 == 1) && (var523 >= 0) && (var523 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var524;
klee_make_symbolic(&var524, sizeof(var524), "var524");
if((myvar0 == 1) && (var524 >= 0) && (var524 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var525;
klee_make_symbolic(&var525, sizeof(var525), "var525");
if((myvar0 == 1) && (var525 >= 0) && (var525 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var526;
klee_make_symbolic(&var526, sizeof(var526), "var526");
if((myvar0 == 1) && (var526 >= 0) && (var526 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var527;
klee_make_symbolic(&var527, sizeof(var527), "var527");
if((myvar0 == 1) && (var527 >= 0) && (var527 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var528;
klee_make_symbolic(&var528, sizeof(var528), "var528");
if((myvar0 == 1) && (var528 >= 0) && (var528 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var529;
klee_make_symbolic(&var529, sizeof(var529), "var529");
if((myvar0 == 1) && (var529 >= 0) && (var529 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var530;
klee_make_symbolic(&var530, sizeof(var530), "var530");
if((myvar0 == 1) && (var530 >= 0) && (var530 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var531;
klee_make_symbolic(&var531, sizeof(var531), "var531");
if((myvar0 == 1) && (var531 >= 0) && (var531 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var532;
klee_make_symbolic(&var532, sizeof(var532), "var532");
if((myvar0 == 1) && (var532 >= 0) && (var532 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var533;
klee_make_symbolic(&var533, sizeof(var533), "var533");
if((myvar0 == 1) && (var533 >= 0) && (var533 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var534;
klee_make_symbolic(&var534, sizeof(var534), "var534");
if((myvar0 == 1) && (var534 >= 0) && (var534 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var535;
klee_make_symbolic(&var535, sizeof(var535), "var535");
if((myvar0 == 1) && (var535 >= 0) && (var535 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var536;
klee_make_symbolic(&var536, sizeof(var536), "var536");
if((myvar0 == 1) && (var536 >= 0) && (var536 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var537;
klee_make_symbolic(&var537, sizeof(var537), "var537");
if((myvar0 == 1) && (var537 >= 0) && (var537 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var538;
klee_make_symbolic(&var538, sizeof(var538), "var538");
if((myvar0 == 1) && (var538 >= 0) && (var538 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var539;
klee_make_symbolic(&var539, sizeof(var539), "var539");
if((myvar0 == 1) && (var539 >= 0) && (var539 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var540;
klee_make_symbolic(&var540, sizeof(var540), "var540");
if((myvar0 == 1) && (var540 >= 0) && (var540 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var541;
klee_make_symbolic(&var541, sizeof(var541), "var541");
if((myvar0 == 1) && (var541 >= 0) && (var541 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var542;
klee_make_symbolic(&var542, sizeof(var542), "var542");
if((myvar0 == 1) && (var542 >= 0) && (var542 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var543;
klee_make_symbolic(&var543, sizeof(var543), "var543");
if((myvar0 == 1) && (var543 >= 0) && (var543 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var544;
klee_make_symbolic(&var544, sizeof(var544), "var544");
if((myvar0 == 1) && (var544 >= 0) && (var544 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var545;
klee_make_symbolic(&var545, sizeof(var545), "var545");
if((myvar0 == 1) && (var545 >= 0) && (var545 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var546;
klee_make_symbolic(&var546, sizeof(var546), "var546");
if((myvar0 == 1) && (var546 >= 0) && (var546 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var547;
klee_make_symbolic(&var547, sizeof(var547), "var547");
if((myvar0 == 1) && (var547 >= 0) && (var547 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var548;
klee_make_symbolic(&var548, sizeof(var548), "var548");
if((myvar0 == 1) && (var548 >= 0) && (var548 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var549;
klee_make_symbolic(&var549, sizeof(var549), "var549");
if((myvar0 == 1) && (var549 >= 0) && (var549 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var550;
klee_make_symbolic(&var550, sizeof(var550), "var550");
if((myvar0 == 1) && (var550 >= 0) && (var550 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var551;
klee_make_symbolic(&var551, sizeof(var551), "var551");
if((myvar0 == 1) && (var551 >= 0) && (var551 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var552;
klee_make_symbolic(&var552, sizeof(var552), "var552");
if((myvar0 == 1) && (var552 >= 0) && (var552 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var553;
klee_make_symbolic(&var553, sizeof(var553), "var553");
if((myvar0 == 1) && (var553 >= 0) && (var553 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var554;
klee_make_symbolic(&var554, sizeof(var554), "var554");
if((myvar0 == 1) && (var554 >= 0) && (var554 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var555;
klee_make_symbolic(&var555, sizeof(var555), "var555");
if((myvar0 == 1) && (var555 >= 0) && (var555 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var556;
klee_make_symbolic(&var556, sizeof(var556), "var556");
if((myvar0 == 1) && (var556 >= 0) && (var556 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var557;
klee_make_symbolic(&var557, sizeof(var557), "var557");
if((myvar0 == 1) && (var557 >= 0) && (var557 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var558;
klee_make_symbolic(&var558, sizeof(var558), "var558");
if((myvar0 == 1) && (var558 >= 0) && (var558 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var559;
klee_make_symbolic(&var559, sizeof(var559), "var559");
if((myvar0 == 1) && (var559 >= 0) && (var559 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var560;
klee_make_symbolic(&var560, sizeof(var560), "var560");
if((myvar0 == 1) && (var560 >= 0) && (var560 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var561;
klee_make_symbolic(&var561, sizeof(var561), "var561");
if((myvar0 == 1) && (var561 >= 0) && (var561 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var562;
klee_make_symbolic(&var562, sizeof(var562), "var562");
if((myvar0 == 1) && (var562 >= 0) && (var562 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var563;
klee_make_symbolic(&var563, sizeof(var563), "var563");
if((myvar0 == 1) && (var563 >= 0) && (var563 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var564;
klee_make_symbolic(&var564, sizeof(var564), "var564");
if((myvar0 == 1) && (var564 >= 0) && (var564 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var565;
klee_make_symbolic(&var565, sizeof(var565), "var565");
if((myvar0 == 1) && (var565 >= 0) && (var565 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var566;
klee_make_symbolic(&var566, sizeof(var566), "var566");
if((myvar0 == 1) && (var566 >= 0) && (var566 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var567;
klee_make_symbolic(&var567, sizeof(var567), "var567");
if((myvar0 == 1) && (var567 >= 0) && (var567 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var568;
klee_make_symbolic(&var568, sizeof(var568), "var568");
if((myvar0 == 1) && (var568 >= 0) && (var568 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var569;
klee_make_symbolic(&var569, sizeof(var569), "var569");
if((myvar0 == 1) && (var569 >= 0) && (var569 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var570;
klee_make_symbolic(&var570, sizeof(var570), "var570");
if((myvar0 == 1) && (var570 >= 0) && (var570 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var571;
klee_make_symbolic(&var571, sizeof(var571), "var571");
if((myvar0 == 1) && (var571 >= 0) && (var571 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var572;
klee_make_symbolic(&var572, sizeof(var572), "var572");
if((myvar0 == 1) && (var572 >= 0) && (var572 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var573;
klee_make_symbolic(&var573, sizeof(var573), "var573");
if((myvar0 == 1) && (var573 >= 0) && (var573 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var574;
klee_make_symbolic(&var574, sizeof(var574), "var574");
if((myvar0 == 1) && (var574 >= 0) && (var574 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var575;
klee_make_symbolic(&var575, sizeof(var575), "var575");
if((myvar0 == 1) && (var575 >= 0) && (var575 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var576;
klee_make_symbolic(&var576, sizeof(var576), "var576");
if((myvar0 == 1) && (var576 >= 0) && (var576 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var577;
klee_make_symbolic(&var577, sizeof(var577), "var577");
if((myvar0 == 1) && (var577 >= 0) && (var577 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var578;
klee_make_symbolic(&var578, sizeof(var578), "var578");
if((myvar0 == 1) && (var578 >= 0) && (var578 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var579;
klee_make_symbolic(&var579, sizeof(var579), "var579");
if((myvar0 == 1) && (var579 >= 0) && (var579 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var580;
klee_make_symbolic(&var580, sizeof(var580), "var580");
if((myvar0 == 1) && (var580 >= 0) && (var580 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var581;
klee_make_symbolic(&var581, sizeof(var581), "var581");
if((myvar0 == 1) && (var581 >= 0) && (var581 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var582;
klee_make_symbolic(&var582, sizeof(var582), "var582");
if((myvar0 == 1) && (var582 >= 0) && (var582 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var583;
klee_make_symbolic(&var583, sizeof(var583), "var583");
if((myvar0 == 1) && (var583 >= 0) && (var583 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var584;
klee_make_symbolic(&var584, sizeof(var584), "var584");
if((myvar0 == 1) && (var584 >= 0) && (var584 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var585;
klee_make_symbolic(&var585, sizeof(var585), "var585");
if((myvar0 == 1) && (var585 >= 0) && (var585 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var586;
klee_make_symbolic(&var586, sizeof(var586), "var586");
if((myvar0 == 1) && (var586 >= 0) && (var586 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var587;
klee_make_symbolic(&var587, sizeof(var587), "var587");
if((myvar0 == 1) && (var587 >= 0) && (var587 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var588;
klee_make_symbolic(&var588, sizeof(var588), "var588");
if((myvar0 == 1) && (var588 >= 0) && (var588 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var589;
klee_make_symbolic(&var589, sizeof(var589), "var589");
if((myvar0 == 1) && (var589 >= 0) && (var589 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var590;
klee_make_symbolic(&var590, sizeof(var590), "var590");
if((myvar0 == 1) && (var590 >= 0) && (var590 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var591;
klee_make_symbolic(&var591, sizeof(var591), "var591");
if((myvar0 == 1) && (var591 >= 0) && (var591 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var592;
klee_make_symbolic(&var592, sizeof(var592), "var592");
if((myvar0 == 1) && (var592 >= 0) && (var592 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var593;
klee_make_symbolic(&var593, sizeof(var593), "var593");
if((myvar0 == 1) && (var593 >= 0) && (var593 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var594;
klee_make_symbolic(&var594, sizeof(var594), "var594");
if((myvar0 == 1) && (var594 >= 0) && (var594 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var595;
klee_make_symbolic(&var595, sizeof(var595), "var595");
if((myvar0 == 1) && (var595 >= 0) && (var595 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var596;
klee_make_symbolic(&var596, sizeof(var596), "var596");
if((myvar0 == 1) && (var596 >= 0) && (var596 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var597;
klee_make_symbolic(&var597, sizeof(var597), "var597");
if((myvar0 == 1) && (var597 >= 0) && (var597 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var598;
klee_make_symbolic(&var598, sizeof(var598), "var598");
if((myvar0 == 1) && (var598 >= 0) && (var598 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var599;
klee_make_symbolic(&var599, sizeof(var599), "var599");
if((myvar0 == 1) && (var599 >= 0) && (var599 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var600;
klee_make_symbolic(&var600, sizeof(var600), "var600");
if((myvar0 == 1) && (var600 >= 0) && (var600 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var601;
klee_make_symbolic(&var601, sizeof(var601), "var601");
if((myvar0 == 1) && (var601 >= 0) && (var601 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var602;
klee_make_symbolic(&var602, sizeof(var602), "var602");
if((myvar0 == 1) && (var602 >= 0) && (var602 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var603;
klee_make_symbolic(&var603, sizeof(var603), "var603");
if((myvar0 == 1) && (var603 >= 0) && (var603 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var604;
klee_make_symbolic(&var604, sizeof(var604), "var604");
if((myvar0 == 1) && (var604 >= 0) && (var604 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var605;
klee_make_symbolic(&var605, sizeof(var605), "var605");
if((myvar0 == 1) && (var605 >= 0) && (var605 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var606;
klee_make_symbolic(&var606, sizeof(var606), "var606");
if((myvar0 == 1) && (var606 >= 0) && (var606 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var607;
klee_make_symbolic(&var607, sizeof(var607), "var607");
if((myvar0 == 1) && (var607 >= 0) && (var607 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var608;
klee_make_symbolic(&var608, sizeof(var608), "var608");
if((myvar0 == 1) && (var608 >= 0) && (var608 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var609;
klee_make_symbolic(&var609, sizeof(var609), "var609");
if((myvar0 == 1) && (var609 >= 0) && (var609 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var610;
klee_make_symbolic(&var610, sizeof(var610), "var610");
if((myvar0 == 1) && (var610 >= 0) && (var610 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var611;
klee_make_symbolic(&var611, sizeof(var611), "var611");
if((myvar0 == 1) && (var611 >= 0) && (var611 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var612;
klee_make_symbolic(&var612, sizeof(var612), "var612");
if((myvar0 == 1) && (var612 >= 0) && (var612 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var613;
klee_make_symbolic(&var613, sizeof(var613), "var613");
if((myvar0 == 1) && (var613 >= 0) && (var613 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var614;
klee_make_symbolic(&var614, sizeof(var614), "var614");
if((myvar0 == 1) && (var614 >= 0) && (var614 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var615;
klee_make_symbolic(&var615, sizeof(var615), "var615");
if((myvar0 == 1) && (var615 >= 0) && (var615 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var616;
klee_make_symbolic(&var616, sizeof(var616), "var616");
if((myvar0 == 1) && (var616 >= 0) && (var616 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var617;
klee_make_symbolic(&var617, sizeof(var617), "var617");
if((myvar0 == 1) && (var617 >= 0) && (var617 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var618;
klee_make_symbolic(&var618, sizeof(var618), "var618");
if((myvar0 == 1) && (var618 >= 0) && (var618 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var619;
klee_make_symbolic(&var619, sizeof(var619), "var619");
if((myvar0 == 1) && (var619 >= 0) && (var619 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var620;
klee_make_symbolic(&var620, sizeof(var620), "var620");
if((myvar0 == 1) && (var620 >= 0) && (var620 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var621;
klee_make_symbolic(&var621, sizeof(var621), "var621");
if((myvar0 == 1) && (var621 >= 0) && (var621 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var622;
klee_make_symbolic(&var622, sizeof(var622), "var622");
if((myvar0 == 1) && (var622 >= 0) && (var622 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var623;
klee_make_symbolic(&var623, sizeof(var623), "var623");
if((myvar0 == 1) && (var623 >= 0) && (var623 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var624;
klee_make_symbolic(&var624, sizeof(var624), "var624");
if((myvar0 == 1) && (var624 >= 0) && (var624 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var625;
klee_make_symbolic(&var625, sizeof(var625), "var625");
if((myvar0 == 1) && (var625 >= 0) && (var625 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var626;
klee_make_symbolic(&var626, sizeof(var626), "var626");
if((myvar0 == 1) && (var626 >= 0) && (var626 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var627;
klee_make_symbolic(&var627, sizeof(var627), "var627");
if((myvar0 == 1) && (var627 >= 0) && (var627 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var628;
klee_make_symbolic(&var628, sizeof(var628), "var628");
if((myvar0 == 1) && (var628 >= 0) && (var628 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var629;
klee_make_symbolic(&var629, sizeof(var629), "var629");
if((myvar0 == 1) && (var629 >= 0) && (var629 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var630;
klee_make_symbolic(&var630, sizeof(var630), "var630");
if((myvar0 == 1) && (var630 >= 0) && (var630 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var631;
klee_make_symbolic(&var631, sizeof(var631), "var631");
if((myvar0 == 1) && (var631 >= 0) && (var631 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var632;
klee_make_symbolic(&var632, sizeof(var632), "var632");
if((myvar0 == 1) && (var632 >= 0) && (var632 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var633;
klee_make_symbolic(&var633, sizeof(var633), "var633");
if((myvar0 == 1) && (var633 >= 0) && (var633 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var634;
klee_make_symbolic(&var634, sizeof(var634), "var634");
if((myvar0 == 1) && (var634 >= 0) && (var634 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var635;
klee_make_symbolic(&var635, sizeof(var635), "var635");
if((myvar0 == 1) && (var635 >= 0) && (var635 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var636;
klee_make_symbolic(&var636, sizeof(var636), "var636");
if((myvar0 == 1) && (var636 >= 0) && (var636 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var637;
klee_make_symbolic(&var637, sizeof(var637), "var637");
if((myvar0 == 1) && (var637 >= 0) && (var637 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var638;
klee_make_symbolic(&var638, sizeof(var638), "var638");
if((myvar0 == 1) && (var638 >= 0) && (var638 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var639;
klee_make_symbolic(&var639, sizeof(var639), "var639");
if((myvar0 == 1) && (var639 >= 0) && (var639 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var640;
klee_make_symbolic(&var640, sizeof(var640), "var640");
if((myvar0 == 1) && (var640 >= 0) && (var640 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var641;
klee_make_symbolic(&var641, sizeof(var641), "var641");
if((myvar0 == 1) && (var641 >= 0) && (var641 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var642;
klee_make_symbolic(&var642, sizeof(var642), "var642");
if((myvar0 == 1) && (var642 >= 0) && (var642 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var643;
klee_make_symbolic(&var643, sizeof(var643), "var643");
if((myvar0 == 1) && (var643 >= 0) && (var643 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var644;
klee_make_symbolic(&var644, sizeof(var644), "var644");
if((myvar0 == 1) && (var644 >= 0) && (var644 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var645;
klee_make_symbolic(&var645, sizeof(var645), "var645");
if((myvar0 == 1) && (var645 >= 0) && (var645 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var646;
klee_make_symbolic(&var646, sizeof(var646), "var646");
if((myvar0 == 1) && (var646 >= 0) && (var646 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var647;
klee_make_symbolic(&var647, sizeof(var647), "var647");
if((myvar0 == 1) && (var647 >= 0) && (var647 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var648;
klee_make_symbolic(&var648, sizeof(var648), "var648");
if((myvar0 == 1) && (var648 >= 0) && (var648 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var649;
klee_make_symbolic(&var649, sizeof(var649), "var649");
if((myvar0 == 1) && (var649 >= 0) && (var649 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var650;
klee_make_symbolic(&var650, sizeof(var650), "var650");
if((myvar0 == 1) && (var650 >= 0) && (var650 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var651;
klee_make_symbolic(&var651, sizeof(var651), "var651");
if((myvar0 == 1) && (var651 >= 0) && (var651 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var652;
klee_make_symbolic(&var652, sizeof(var652), "var652");
if((myvar0 == 1) && (var652 >= 0) && (var652 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var653;
klee_make_symbolic(&var653, sizeof(var653), "var653");
if((myvar0 == 1) && (var653 >= 0) && (var653 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var654;
klee_make_symbolic(&var654, sizeof(var654), "var654");
if((myvar0 == 1) && (var654 >= 0) && (var654 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var655;
klee_make_symbolic(&var655, sizeof(var655), "var655");
if((myvar0 == 1) && (var655 >= 0) && (var655 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var656;
klee_make_symbolic(&var656, sizeof(var656), "var656");
if((myvar0 == 1) && (var656 >= 0) && (var656 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var657;
klee_make_symbolic(&var657, sizeof(var657), "var657");
if((myvar0 == 1) && (var657 >= 0) && (var657 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var658;
klee_make_symbolic(&var658, sizeof(var658), "var658");
if((myvar0 == 1) && (var658 >= 0) && (var658 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var659;
klee_make_symbolic(&var659, sizeof(var659), "var659");
if((myvar0 == 1) && (var659 >= 0) && (var659 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var660;
klee_make_symbolic(&var660, sizeof(var660), "var660");
if((myvar0 == 1) && (var660 >= 0) && (var660 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var661;
klee_make_symbolic(&var661, sizeof(var661), "var661");
if((myvar0 == 1) && (var661 >= 0) && (var661 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var662;
klee_make_symbolic(&var662, sizeof(var662), "var662");
if((myvar0 == 1) && (var662 >= 0) && (var662 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var663;
klee_make_symbolic(&var663, sizeof(var663), "var663");
if((myvar0 == 1) && (var663 >= 0) && (var663 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var664;
klee_make_symbolic(&var664, sizeof(var664), "var664");
if((myvar0 == 1) && (var664 >= 0) && (var664 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var665;
klee_make_symbolic(&var665, sizeof(var665), "var665");
if((myvar0 == 1) && (var665 >= 0) && (var665 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var666;
klee_make_symbolic(&var666, sizeof(var666), "var666");
if((myvar0 == 1) && (var666 >= 0) && (var666 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var667;
klee_make_symbolic(&var667, sizeof(var667), "var667");
if((myvar0 == 1) && (var667 >= 0) && (var667 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var668;
klee_make_symbolic(&var668, sizeof(var668), "var668");
if((myvar0 == 1) && (var668 >= 0) && (var668 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var669;
klee_make_symbolic(&var669, sizeof(var669), "var669");
if((myvar0 == 1) && (var669 >= 0) && (var669 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var670;
klee_make_symbolic(&var670, sizeof(var670), "var670");
if((myvar0 == 1) && (var670 >= 0) && (var670 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var671;
klee_make_symbolic(&var671, sizeof(var671), "var671");
if((myvar0 == 1) && (var671 >= 0) && (var671 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var672;
klee_make_symbolic(&var672, sizeof(var672), "var672");
if((myvar0 == 1) && (var672 >= 0) && (var672 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var673;
klee_make_symbolic(&var673, sizeof(var673), "var673");
if((myvar0 == 1) && (var673 >= 0) && (var673 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var674;
klee_make_symbolic(&var674, sizeof(var674), "var674");
if((myvar0 == 1) && (var674 >= 0) && (var674 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var675;
klee_make_symbolic(&var675, sizeof(var675), "var675");
if((myvar0 == 1) && (var675 >= 0) && (var675 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var676;
klee_make_symbolic(&var676, sizeof(var676), "var676");
if((myvar0 == 1) && (var676 >= 0) && (var676 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var677;
klee_make_symbolic(&var677, sizeof(var677), "var677");
if((myvar0 == 1) && (var677 >= 0) && (var677 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var678;
klee_make_symbolic(&var678, sizeof(var678), "var678");
if((myvar0 == 1) && (var678 >= 0) && (var678 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var679;
klee_make_symbolic(&var679, sizeof(var679), "var679");
if((myvar0 == 1) && (var679 >= 0) && (var679 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var680;
klee_make_symbolic(&var680, sizeof(var680), "var680");
if((myvar0 == 1) && (var680 >= 0) && (var680 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var681;
klee_make_symbolic(&var681, sizeof(var681), "var681");
if((myvar0 == 1) && (var681 >= 0) && (var681 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var682;
klee_make_symbolic(&var682, sizeof(var682), "var682");
if((myvar0 == 1) && (var682 >= 0) && (var682 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var683;
klee_make_symbolic(&var683, sizeof(var683), "var683");
if((myvar0 == 1) && (var683 >= 0) && (var683 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var684;
klee_make_symbolic(&var684, sizeof(var684), "var684");
if((myvar0 == 1) && (var684 >= 0) && (var684 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var685;
klee_make_symbolic(&var685, sizeof(var685), "var685");
if((myvar0 == 1) && (var685 >= 0) && (var685 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var686;
klee_make_symbolic(&var686, sizeof(var686), "var686");
if((myvar0 == 1) && (var686 >= 0) && (var686 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var687;
klee_make_symbolic(&var687, sizeof(var687), "var687");
if((myvar0 == 1) && (var687 >= 0) && (var687 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var688;
klee_make_symbolic(&var688, sizeof(var688), "var688");
if((myvar0 == 1) && (var688 >= 0) && (var688 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var689;
klee_make_symbolic(&var689, sizeof(var689), "var689");
if((myvar0 == 1) && (var689 >= 0) && (var689 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var690;
klee_make_symbolic(&var690, sizeof(var690), "var690");
if((myvar0 == 1) && (var690 >= 0) && (var690 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var691;
klee_make_symbolic(&var691, sizeof(var691), "var691");
if((myvar0 == 1) && (var691 >= 0) && (var691 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var692;
klee_make_symbolic(&var692, sizeof(var692), "var692");
if((myvar0 == 1) && (var692 >= 0) && (var692 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var693;
klee_make_symbolic(&var693, sizeof(var693), "var693");
if((myvar0 == 1) && (var693 >= 0) && (var693 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var694;
klee_make_symbolic(&var694, sizeof(var694), "var694");
if((myvar0 == 1) && (var694 >= 0) && (var694 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var695;
klee_make_symbolic(&var695, sizeof(var695), "var695");
if((myvar0 == 1) && (var695 >= 0) && (var695 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var696;
klee_make_symbolic(&var696, sizeof(var696), "var696");
if((myvar0 == 1) && (var696 >= 0) && (var696 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var697;
klee_make_symbolic(&var697, sizeof(var697), "var697");
if((myvar0 == 1) && (var697 >= 0) && (var697 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var698;
klee_make_symbolic(&var698, sizeof(var698), "var698");
if((myvar0 == 1) && (var698 >= 0) && (var698 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var699;
klee_make_symbolic(&var699, sizeof(var699), "var699");
if((myvar0 == 1) && (var699 >= 0) && (var699 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var700;
klee_make_symbolic(&var700, sizeof(var700), "var700");
if((myvar0 == 1) && (var700 >= 0) && (var700 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var701;
klee_make_symbolic(&var701, sizeof(var701), "var701");
if((myvar0 == 1) && (var701 >= 0) && (var701 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var702;
klee_make_symbolic(&var702, sizeof(var702), "var702");
if((myvar0 == 1) && (var702 >= 0) && (var702 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var703;
klee_make_symbolic(&var703, sizeof(var703), "var703");
if((myvar0 == 1) && (var703 >= 0) && (var703 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var704;
klee_make_symbolic(&var704, sizeof(var704), "var704");
if((myvar0 == 1) && (var704 >= 0) && (var704 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var705;
klee_make_symbolic(&var705, sizeof(var705), "var705");
if((myvar0 == 1) && (var705 >= 0) && (var705 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var706;
klee_make_symbolic(&var706, sizeof(var706), "var706");
if((myvar0 == 1) && (var706 >= 0) && (var706 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var707;
klee_make_symbolic(&var707, sizeof(var707), "var707");
if((myvar0 == 1) && (var707 >= 0) && (var707 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var708;
klee_make_symbolic(&var708, sizeof(var708), "var708");
if((myvar0 == 1) && (var708 >= 0) && (var708 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var709;
klee_make_symbolic(&var709, sizeof(var709), "var709");
if((myvar0 == 1) && (var709 >= 0) && (var709 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var710;
klee_make_symbolic(&var710, sizeof(var710), "var710");
if((myvar0 == 1) && (var710 >= 0) && (var710 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var711;
klee_make_symbolic(&var711, sizeof(var711), "var711");
if((myvar0 == 1) && (var711 >= 0) && (var711 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var712;
klee_make_symbolic(&var712, sizeof(var712), "var712");
if((myvar0 == 1) && (var712 >= 0) && (var712 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var713;
klee_make_symbolic(&var713, sizeof(var713), "var713");
if((myvar0 == 1) && (var713 >= 0) && (var713 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var714;
klee_make_symbolic(&var714, sizeof(var714), "var714");
if((myvar0 == 1) && (var714 >= 0) && (var714 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var715;
klee_make_symbolic(&var715, sizeof(var715), "var715");
if((myvar0 == 1) && (var715 >= 0) && (var715 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var716;
klee_make_symbolic(&var716, sizeof(var716), "var716");
if((myvar0 == 1) && (var716 >= 0) && (var716 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var717;
klee_make_symbolic(&var717, sizeof(var717), "var717");
if((myvar0 == 1) && (var717 >= 0) && (var717 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var718;
klee_make_symbolic(&var718, sizeof(var718), "var718");
if((myvar0 == 1) && (var718 >= 0) && (var718 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var719;
klee_make_symbolic(&var719, sizeof(var719), "var719");
if((myvar0 == 1) && (var719 >= 0) && (var719 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var720;
klee_make_symbolic(&var720, sizeof(var720), "var720");
if((myvar0 == 1) && (var720 >= 0) && (var720 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var721;
klee_make_symbolic(&var721, sizeof(var721), "var721");
if((myvar0 == 1) && (var721 >= 0) && (var721 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var722;
klee_make_symbolic(&var722, sizeof(var722), "var722");
if((myvar0 == 1) && (var722 >= 0) && (var722 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var723;
klee_make_symbolic(&var723, sizeof(var723), "var723");
if((myvar0 == 1) && (var723 >= 0) && (var723 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var724;
klee_make_symbolic(&var724, sizeof(var724), "var724");
if((myvar0 == 1) && (var724 >= 0) && (var724 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var725;
klee_make_symbolic(&var725, sizeof(var725), "var725");
if((myvar0 == 1) && (var725 >= 0) && (var725 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var726;
klee_make_symbolic(&var726, sizeof(var726), "var726");
if((myvar0 == 1) && (var726 >= 0) && (var726 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var727;
klee_make_symbolic(&var727, sizeof(var727), "var727");
if((myvar0 == 1) && (var727 >= 0) && (var727 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var728;
klee_make_symbolic(&var728, sizeof(var728), "var728");
if((myvar0 == 1) && (var728 >= 0) && (var728 <= 26)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var10 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var102 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var114 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var118 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var121 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var126 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var127 != var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var135 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var137 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var140 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var150 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var726)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var162 != var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var164 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var165 != var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var174 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var175 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var180 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var613)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var190 != var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var195 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var196 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var197 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var198 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var199 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var200 != var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var201 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var202 != var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var203 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var204 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var205 != var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var207 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var208 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var209 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var210 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var211 != var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var212 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var213 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var215 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var218 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var219 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var220 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var221 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var222 != var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var224 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var225 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var226 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var227 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var228 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var229 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var230 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var231 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var232 != var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var234 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var235 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var236 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var237 != var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var238 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var239 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var240 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var243 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var244 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var245 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var246 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var247 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var248 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var249 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var251 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var252 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var253 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var254 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var255 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var256 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var258 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var259 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var260 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var261 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var262 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var263 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var264 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var265 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var266 != var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var267 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var268 != var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var269 != var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var27 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var270 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var271 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var272 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var273 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var274 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var276 != var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var277 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var278 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var279 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var280 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var281 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var282 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var283 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var284 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var285 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var286 != var726)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var287 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var288 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var289 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var613)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var290 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var613)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var291 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var292 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var293 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var296 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var297 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var298 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var299 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var300 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var301 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var302 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var303 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var304 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var305 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var306 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var307 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var308 != var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var309 != var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var310 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var311 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var312 != var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var313 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var314 != var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var316 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var317 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var318 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var319 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var320 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var321 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var323 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var327 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var328 != var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var329 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var331 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var333 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var334 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var335 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var336 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var337 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var338 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var339 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var340 != var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var341 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var342 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var343 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var344 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var345 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var346 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var347 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var349 != var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var350 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var351 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var352 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var353 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var580)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var355 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var356 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var357 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var358 != var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var359 != var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var360 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var361 != var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var362 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var726)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var363 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var364 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var365 != var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var366 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var367 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var368 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var369 != var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var370 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var371 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var372 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var373 != var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var374 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var375 != var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var377 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var378 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var379 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var380 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var381 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var382 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var384 != var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var385 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var386 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var387 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var388 != var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var389 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var390 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var391 != var613)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var393 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var395 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var396 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var397 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var398 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var399 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var400 != var726)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var401 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var402 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var403 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var408 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var409 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var412 != var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var413 != var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var416 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var417 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var418 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var419 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var420 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var421 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var422 != var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var423 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var424 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var425 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var426 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var427 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var428 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var430 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var431 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var432 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var433 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var434 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 != var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var436 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var437 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var438 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var439 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var44 != var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var440 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var441 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var442 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var443 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var444 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var445 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var447 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var448 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var613)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var449 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var450 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var451 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var452 != var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var453 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var454 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var455 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var456 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var457 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var459 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var613)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var460 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var461 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var462 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var462 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var462 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var462 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var463 != var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var464 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var466 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var468 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var469 != var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var470 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var471 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var472 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var473 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var474 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var474 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var475 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var476 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var477 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var478 != var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var479 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var480 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var481 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var483 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var484 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var485 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var486 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var487 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var488 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var489 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var490 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var491 != var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var493 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var494 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var494 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var494 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var494 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var495 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var496 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var498 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var499 != var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var500 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var501 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var501 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var501 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var501 != var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var502 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var503 != var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var504 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var505 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var506 != var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var507 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var508 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var509 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var510 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var511 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var512 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var513 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var514 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var515 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var517 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var518 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var519 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var520 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var521 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var522 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var523 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var524 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var525 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var526 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var527 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var553)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var528 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var529 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var530 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var531 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var533 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var534 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var535 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var536 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var537 != var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var537 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var537 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var537 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var537 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var538 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var538 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var540 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var542 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var543 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var545 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var546 != var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 != var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var548 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var549 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var550 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var551 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var552 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var552 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var552 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var553 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var553 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var553 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var553 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var553 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var554 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var555 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var555 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var555 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var555 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var557 != var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var558 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var559 != var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var560 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var561 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var562 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var563 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var564 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var565 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var566 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var566 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var568 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var569 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var570 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var572 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var573 != var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var575 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var575 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var575 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var575 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var575 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var576 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var576 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var576 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var576 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var577 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var577 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var577 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var577 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var577 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var577 != var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var578 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var578 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var578 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var578 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var578 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var578 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var579 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var580 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var580 != var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var580 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var580 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var580 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var580 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var581 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var581 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var581 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var581 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var581 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var581 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var581 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var582 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var582 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var583 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var583 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var583 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var583 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var583 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var584 != var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var585 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var585 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var586 != var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var587 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var587 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var587 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var587 != var580)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var587 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var587 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var589 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var589 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var589 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var590 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var591 != var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var592 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var593 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var594 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var594 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var594 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var594 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var595 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var595 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var596 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var596 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var596 != var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var596 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var596 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var596 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var598 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var599 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var600 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var600 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var600 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var600 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var601 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var601 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var601 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var601 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var601 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var601 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var602 != var726)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var603 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var603 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var603 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var603 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var603 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var603 != var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var603 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var604 != var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var605 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var605 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var605 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var605 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var607 != var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var608 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var608 != var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var610 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var611 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var612 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var612 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var612 != var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var612 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var612 != var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var612 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var612 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var613 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var613 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var613 != var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var613 != var575)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var613 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var614 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var614 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var615 != var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var615 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var615 != var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var615 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var616 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var617 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var617 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var617 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var617 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var618 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var619 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var619 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var620 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var621 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var624 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var624 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var624 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var628 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var628 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var628 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var628 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var629 != var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var631 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var631 != var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var631 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var631 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var631 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var632 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var633 != var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var571)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var634 != var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var580)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var635 != var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var636 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var636 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var636 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var636 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var636 != var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var636 != var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var636 != var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var637 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var639 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var639 != var686)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var630)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var641 != var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var642 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var642 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var642 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var642 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var643 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var644 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var644 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var644 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var644 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var644 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var644 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var644 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var645 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var645 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var645 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var646 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var648 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var648 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var648 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var648 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var648 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var649 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var649 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var649 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var649 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var650 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var650 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var650 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var650 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var651 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var652 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var652 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var652 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var652 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var653 != var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var653 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var653 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var654 != var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var654 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var654 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var654 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var654 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var654 != var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var654 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var655 != var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var656 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var657 != var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var657 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var657 != var392)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var657 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var657 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var658 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var658 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var659 != var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var659 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var659 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var659 != var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var659 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var660 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var660 != var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var660 != var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var660 != var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var660 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var660 != var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var660 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var661 != var304)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var661 != var385)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var661 != var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var661 != var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var661 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var662 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var663 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var663 != var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var663 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var663 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var664 != var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var664 != var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var664 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var664 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var664 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var664 != var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var664 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var665 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var665 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var665 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var665 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var666 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var666 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var666 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var667 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var667 != var626)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var669 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var67 != var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var670 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var670 != var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var670 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var670 != var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var670 != var721)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var671 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var671 != var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var671 != var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var671 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var671 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var671 != var638)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var671 != var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var672 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var672 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var672 != var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var672 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var672 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var672 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var673 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var673 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var674 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var674 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var674 != var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var676 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var677 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var678 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var679 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var679 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var679 != var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var679 != var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var679 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var679 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var681 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var682 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var682 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var682 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var682 != var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var682 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var682 != var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var682 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var475)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var683 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var685 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var686 != var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var686 != var597)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var647)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var688 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var689 != var728)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var690 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var690 != var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var690 != var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var690 != var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var690 != var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var690 != var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var691 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var693 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var694 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var694 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var695 != var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var695 != var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var695 != var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var695 != var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var695 != var646)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var695 != var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var696 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var697 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var697 != var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var697 != var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var697 != var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var516)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var698 != var620)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var699 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var700 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var701 != var241)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var701 != var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var701 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var702 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var703 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var703 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var703 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var703 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var703 != var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var704 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var704 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var704 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var704 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var704 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var705 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var705 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var705 != var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var706 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var706 != var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var706 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var706 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var706 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var706 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var707 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var707 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var707 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var707 != var692)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var708 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var708 != var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var708 != var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var708 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var249)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var580)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var709 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var487)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var710 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var710 != var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var710 != var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var710 != var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var710 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var710 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var711 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var711 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var711 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var711 != var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var711 != var539)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var711 != var568)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var711 != var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var712 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var712 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var712 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var712 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var712 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var712 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var310)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var713 != var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var714 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var714 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var714 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var714 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var714 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var715 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var715 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var715 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var715 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var715 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var715 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var716 != var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var717 != var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var717 != var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var717 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var717 != var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var717 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var718 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var718 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var718 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var718 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var719 != var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var720 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var722 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var722 != var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var722 != var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var722 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var723 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var724 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var724 != var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var724 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var724 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var725 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var725 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var725 != var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var725 != var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var725 != var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var725 != var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var725 != var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var726 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var727 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var727 != var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var223)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var617)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var406)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var415)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var632)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var684)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var215)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var497)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var87 != var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 != var206)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var372)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var625)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var93 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var394)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var574)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var545)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var158)*(var158 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var1 - var630)*(var630 - var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var134)*(var134 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var184)*(var184 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var188)*(var188 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var229)*(var229 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var288)*(var288 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var551)*(var551 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var652)*(var652 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var67)*(var67 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var677)*(var677 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var695)*(var695 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var110)*(var110 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var310)*(var310 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var539)*(var539 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var196)*(var196 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var256)*(var256 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var434)*(var434 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var580)*(var580 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var692)*(var692 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var707)*(var707 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var203)*(var203 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var276)*(var276 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var331)*(var331 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var498)*(var498 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var649)*(var649 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var727)*(var727 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var100)*(var100 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var539)*(var539 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var561)*(var561 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var568)*(var568 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var108)*(var108 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var154)*(var154 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var3)*(var3 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var39)*(var39 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var534)*(var534 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var566)*(var566 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var698)*(var698 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var223)*(var223 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var487)*(var487 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var492)*(var492 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var522)*(var522 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var264)*(var264 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var328)*(var328 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var558)*(var558 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var638)*(var638 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var671)*(var671 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var215)*(var215 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var226)*(var226 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var243)*(var243 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var293)*(var293 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var401)*(var401 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var66)*(var66 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var154)*(var154 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var45)*(var45 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var516)*(var516 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var542)*(var542 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var566)*(var566 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var249)*(var249 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var256)*(var256 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var434)*(var434 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var580)*(var580 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var681)*(var681 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var707)*(var707 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var539)*(var539 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var222)*(var222 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var271)*(var271 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var279)*(var279 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var37)*(var37 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var629)*(var629 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var659)*(var659 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var140)*(var140 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var228)*(var228 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var322)*(var322 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var643)*(var643 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var684)*(var684 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var385)*(var385 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var78)*(var78 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var121)*(var121 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var167)*(var167 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var199)*(var199 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var114 - var365)*(var365 - var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var113)*(var113 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var261)*(var261 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var297)*(var297 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var352)*(var352 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var385)*(var385 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var528)*(var528 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var553)*(var553 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var569)*(var569 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var623)*(var623 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var661)*(var661 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var136)*(var136 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var268)*(var268 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var27)*(var27 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var282)*(var282 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var523)*(var523 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var585)*(var585 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var632)*(var632 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var658)*(var658 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var117 - var626)*(var626 - var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var54)*(var54 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var118 - var726)*(var726 - var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var230)*(var230 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var582)*(var582 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var253)*(var253 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var336)*(var336 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var338)*(var338 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var341)*(var341 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var36)*(var36 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var426)*(var426 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var43)*(var43 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var440)*(var440 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var452)*(var452 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var457)*(var457 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var557)*(var557 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var567)*(var567 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var657)*(var657 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var87)*(var87 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var100)*(var100 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var110)*(var110 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var129)*(var129 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var432)*(var432 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var479)*(var479 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var496)*(var496 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var561)*(var561 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var644)*(var644 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var650)*(var650 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var126)*(var126 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var199)*(var199 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var394)*(var394 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var520)*(var520 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var538)*(var538 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var693)*(var693 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var121 - var93)*(var93 - var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var477)*(var477 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var54)*(var54 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var694)*(var694 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var726)*(var726 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var8)*(var8 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var170)*(var170 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var316)*(var316 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var371)*(var371 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var595)*(var595 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var61)*(var61 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var617)*(var617 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var630)*(var630 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var631)*(var631 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var75)*(var75 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var1)*(var1 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var124)*(var124 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var170)*(var170 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var231)*(var231 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var316)*(var316 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var318)*(var318 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var413)*(var413 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var595)*(var595 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var61)*(var61 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var641)*(var641 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var199)*(var199 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var394)*(var394 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var126 - var693)*(var693 - var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var165)*(var165 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var193)*(var193 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var281)*(var281 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var306)*(var306 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var34)*(var34 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var50)*(var50 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var501)*(var501 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var648)*(var648 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var127 - var90)*(var90 - var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var0)*(var0 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var431)*(var431 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var524)*(var524 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var577)*(var577 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var59)*(var59 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var614)*(var614 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var100)*(var100 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var110)*(var110 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var41)*(var41 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var479)*(var479 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var561)*(var561 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var279)*(var279 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var419)*(var419 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var608)*(var608 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var667)*(var667 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var349)*(var349 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var570)*(var570 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var601)*(var601 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var307)*(var307 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var497)*(var497 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var132 - var564)*(var564 - var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var176)*(var176 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var188)*(var188 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var194)*(var194 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var229)*(var229 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var262)*(var262 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var314)*(var314 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var324)*(var324 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var548)*(var548 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var628)*(var628 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var652)*(var652 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var159)*(var159 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var173)*(var173 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var244)*(var244 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var321)*(var321 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var333)*(var333 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var374)*(var374 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var410)*(var410 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var471)*(var471 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var492)*(var492 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var135 - var531)*(var531 - var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var137)*(var137 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var287)*(var287 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var360)*(var360 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var632)*(var632 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var80)*(var80 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var27)*(var27 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var28)*(var28 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var571)*(var571 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var585)*(var585 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var632)*(var632 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var658)*(var658 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var137 - var80)*(var80 - var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var180)*(var180 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var189)*(var189 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var238)*(var238 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var245)*(var245 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var250)*(var250 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var597)*(var597 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var62)*(var62 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var639)*(var639 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var666)*(var666 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var686)*(var686 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var131)*(var131 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var18)*(var18 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var213)*(var213 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var237)*(var237 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var251)*(var251 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var264)*(var264 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var327)*(var327 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var328)*(var328 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var488)*(var488 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var558)*(var558 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var579)*(var579 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var601)*(var601 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var668)*(var668 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var671)*(var671 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var139 - var88)*(var88 - var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var533)*(var533 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var574)*(var574 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var576)*(var576 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var140 - var322)*(var322 - var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var140 - var38)*(var38 - var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var140 - var475)*(var475 - var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var140 - var643)*(var643 - var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var140 - var81)*(var81 - var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var128)*(var128 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var181)*(var181 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var265)*(var265 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var290)*(var290 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var389)*(var389 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var431)*(var431 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var478)*(var478 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var59)*(var59 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var689)*(var689 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var708)*(var708 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var145)*(var145 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var206)*(var206 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var257)*(var257 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var376)*(var376 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var77)*(var77 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var210)*(var210 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var423)*(var423 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var490)*(var490 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var57)*(var57 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var590)*(var590 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var60)*(var60 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var83)*(var83 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var144 - var92)*(var92 - var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var627)*(var627 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var63)*(var63 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var100)*(var100 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var270)*(var270 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var310)*(var310 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var41)*(var41 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var561)*(var561 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var650)*(var650 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var248)*(var248 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var334)*(var334 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var85)*(var85 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var97)*(var97 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var574)*(var574 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var107)*(var107 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var132)*(var132 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var215)*(var215 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var243)*(var243 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var293)*(var293 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var33)*(var33 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var343)*(var343 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var401)*(var401 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var428)*(var428 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var438)*(var438 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var464)*(var464 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var497)*(var497 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var544)*(var544 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var564)*(var564 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var619)*(var619 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var66)*(var66 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var200)*(var200 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var253)*(var253 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var255)*(var255 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var301)*(var301 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var341)*(var341 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var392)*(var392 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var403)*(var403 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var43)*(var43 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var440)*(var440 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var457)*(var457 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var557)*(var557 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var567)*(var567 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var584)*(var584 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var657)*(var657 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var1)*(var1 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var170)*(var170 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var178)*(var178 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var231)*(var231 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var285)*(var285 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var312)*(var312 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var316)*(var316 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var318)*(var318 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var371)*(var371 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var595)*(var595 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var61)*(var61 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var617)*(var617 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var630)*(var630 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var631)*(var631 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var150 - var75)*(var75 - var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var281)*(var281 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var34)*(var34 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var501)*(var501 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var606)*(var606 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var90)*(var90 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var118)*(var118 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var22)*(var22 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var35)*(var35 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var54)*(var54 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var578)*(var578 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var406)*(var406 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var138)*(var138 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var156)*(var156 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var2)*(var2 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var254)*(var254 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var26)*(var26 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var353)*(var353 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var430)*(var430 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var486)*(var486 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var508)*(var508 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var512)*(var512 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var597)*(var597 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var62)*(var62 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var666)*(var666 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var180)*(var180 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var250)*(var250 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var254)*(var254 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var353)*(var353 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var486)*(var486 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var62)*(var62 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var666)*(var666 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var686)*(var686 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var306)*(var306 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var323)*(var323 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var34)*(var34 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var480)*(var480 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var501)*(var501 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var630)*(var630 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var410)*(var410 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var487)*(var487 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var492)*(var492 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var522)*(var522 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var493)*(var493 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var84)*(var84 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var97)*(var97 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var721)*(var721 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var79)*(var79 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var119)*(var119 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var225)*(var225 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var274)*(var274 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var356)*(var356 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var390)*(var390 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var395)*(var395 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var409)*(var409 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var541)*(var541 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var642)*(var642 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var665)*(var665 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var678)*(var678 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var701)*(var701 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var100)*(var100 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var110)*(var110 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var129)*(var129 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var146)*(var146 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var270)*(var270 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var496)*(var496 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var162 - var539)*(var539 - var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var155)*(var155 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var156)*(var156 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var168)*(var168 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var2)*(var2 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var238)*(var238 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var254)*(var254 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var26)*(var26 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var353)*(var353 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var485)*(var485 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var512)*(var512 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var540)*(var540 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var597)*(var597 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var62)*(var62 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var686)*(var686 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var193)*(var193 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var306)*(var306 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var323)*(var323 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var34)*(var34 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var480)*(var480 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var165 - var90)*(var90 - var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var12)*(var12 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var338)*(var338 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var392)*(var392 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var403)*(var403 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var426)*(var426 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var440)*(var440 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var457)*(var457 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var546)*(var546 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var584)*(var584 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var87)*(var87 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var167 - var394)*(var394 - var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var138)*(var138 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var180)*(var180 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var189)*(var189 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var2)*(var2 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var238)*(var238 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var245)*(var245 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var250)*(var250 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var512)*(var512 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var597)*(var597 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var62)*(var62 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var639)*(var639 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var160)*(var160 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var79)*(var79 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var158)*(var158 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var318)*(var318 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var371)*(var371 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var595)*(var595 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var61)*(var61 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var623)*(var623 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var142)*(var142 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var206)*(var206 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var242)*(var242 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var257)*(var257 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var275)*(var275 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var63)*(var63 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var640)*(var640 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var77)*(var77 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var244)*(var244 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var31)*(var31 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var374)*(var374 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var378)*(var378 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var13)*(var13 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var153)*(var153 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var203)*(var203 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var331)*(var331 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var342)*(var342 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var406)*(var406 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var649)*(var649 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var70)*(var70 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var727)*(var727 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var82)*(var82 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var188)*(var188 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var194)*(var194 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var288)*(var288 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var314)*(var314 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var315)*(var315 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var324)*(var324 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var551)*(var551 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var581)*(var581 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var628)*(var628 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var652)*(var652 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var545)*(var545 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var84)*(var84 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var1)*(var1 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var61)*(var61 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var617)*(var617 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var630)*(var630 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var724)*(var724 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var175)*(var175 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var214)*(var214 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var234)*(var234 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var179 - var674)*(var674 - var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var131)*(var131 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var213)*(var213 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var327)*(var327 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var474)*(var474 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var570)*(var570 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var668)*(var668 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var238)*(var238 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var250)*(var250 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var62)*(var62 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var686)*(var686 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var0)*(var0 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var128)*(var128 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var197)*(var197 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var431)*(var431 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var433)*(var433 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var525)*(var525 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var583)*(var583 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var589)*(var589 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var603)*(var603 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var614)*(var614 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var689)*(var689 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var181 - var728)*(var728 - var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var18)*(var18 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var237)*(var237 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var24)*(var24 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var264)*(var264 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var488)*(var488 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var668)*(var668 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var134)*(var134 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var188)*(var188 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var202)*(var202 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var262)*(var262 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var324)*(var324 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var548)*(var548 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var551)*(var551 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var581)*(var581 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var628)*(var628 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var636)*(var636 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var646)*(var646 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var695)*(var695 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var345)*(var345 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var483)*(var483 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var721)*(var721 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var79)*(var79 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var116)*(var116 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var136)*(var136 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var28)*(var28 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var360)*(var360 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var44)*(var44 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var560)*(var560 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var585)*(var585 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var699)*(var699 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var715)*(var715 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var720)*(var720 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var80)*(var80 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var194)*(var194 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var288)*(var288 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var315)*(var315 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var160)*(var160 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var212)*(var212 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var30)*(var30 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var345)*(var345 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var483)*(var483 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var613)*(var613 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var653)*(var653 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var721)*(var721 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var79)*(var79 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var140)*(var140 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var263)*(var263 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var313)*(var313 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var38)*(var38 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var596)*(var596 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var600)*(var600 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var68)*(var68 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var684)*(var684 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var81)*(var81 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var135)*(var135 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var21)*(var21 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var244)*(var244 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var272)*(var272 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var31)*(var31 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var321)*(var321 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var374)*(var374 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var410)*(var410 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var471)*(var471 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var492)*(var492 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var511)*(var511 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var522)*(var522 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var98)*(var98 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var136)*(var136 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var137)*(var137 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var268)*(var268 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var27)*(var27 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var287)*(var287 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var360)*(var360 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var523)*(var523 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var585)*(var585 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var632)*(var632 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var699)*(var699 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var715)*(var715 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var323)*(var323 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var606)*(var606 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var165)*(var165 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var193)*(var193 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var208)*(var208 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var269)*(var269 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var281)*(var281 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var306)*(var306 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var317)*(var317 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var375)*(var375 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var416)*(var416 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var437)*(var437 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var480)*(var480 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var50)*(var50 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var501)*(var501 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var648)*(var648 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var195 - var697)*(var697 - var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var249)*(var249 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var196 - var256)*(var256 - var196)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var128)*(var128 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var265)*(var265 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var433)*(var433 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var524)*(var524 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var525)*(var525 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var577)*(var577 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var589)*(var589 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var59)*(var59 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var614)*(var614 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var689)*(var689 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var197 - var728)*(var728 - var197)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var140)*(var140 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var228)*(var228 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var263)*(var263 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var322)*(var322 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var38)*(var38 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var198 - var402)*(var402 - var198)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var167)*(var167 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var199 - var520)*(var520 - var199)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var138)*(var138 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var180)*(var180 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var245)*(var245 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var250)*(var250 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var512)*(var512 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var1)*(var1 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var124)*(var124 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var150)*(var150 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var170)*(var170 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var178)*(var178 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var231)*(var231 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var285)*(var285 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var312)*(var312 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var318)*(var318 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var371)*(var371 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var413)*(var413 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var595)*(var595 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var61)*(var61 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var617)*(var617 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var641)*(var641 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var338)*(var338 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var341)*(var341 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var36)*(var36 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var392)*(var392 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var403)*(var403 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var426)*(var426 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var43)*(var43 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var440)*(var440 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var200 - var457)*(var457 - var200)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var186)*(var186 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var30)*(var30 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var345)*(var345 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var613)*(var613 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var201 - var721)*(var721 - var201)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var134)*(var134 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var176)*(var176 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var194)*(var194 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var262)*(var262 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var288)*(var288 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var314)*(var314 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var315)*(var315 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var324)*(var324 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var548)*(var548 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var628)*(var628 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var636)*(var636 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var202 - var646)*(var646 - var202)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var406)*(var406 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var494)*(var494 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var203 - var727)*(var727 - var203)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var112)*(var112 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var190)*(var190 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var402)*(var402 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var596)*(var596 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var600)*(var600 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var621)*(var621 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var654)*(var654 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var683)*(var683 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var684)*(var684 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var204 - var81)*(var81 - var204)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var100)*(var100 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var103)*(var103 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var120)*(var120 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var162)*(var162 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var232)*(var232 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var270)*(var270 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var41)*(var41 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var539)*(var539 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var568)*(var568 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var644)*(var644 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var650)*(var650 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var205 - var711)*(var711 - var205)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var114)*(var114 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var126)*(var126 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var311)*(var311 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var319)*(var319 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var394)*(var394 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var518)*(var518 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var520)*(var520 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var554)*(var554 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var563)*(var563 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var703)*(var703 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var207 - var94)*(var94 - var207)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var151)*(var151 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var165)*(var165 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var283)*(var283 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var323)*(var323 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var34)*(var34 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var416)*(var416 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var437)*(var437 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var50)*(var50 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var501)*(var501 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var606)*(var606 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var208 - var648)*(var648 - var208)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var247)*(var247 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var209 - var620)*(var620 - var209)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var173)*(var173 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var321)*(var321 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var374)*(var374 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var378)*(var378 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var410)*(var410 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var487)*(var487 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var492)*(var492 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var522)*(var522 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var69)*(var69 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var74)*(var74 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var296)*(var296 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var476)*(var476 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var490)*(var490 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var515)*(var515 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var57)*(var57 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var60)*(var60 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var605)*(var605 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var676)*(var676 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var7)*(var7 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var83)*(var83 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var210 - var92)*(var92 - var210)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var117)*(var117 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var130)*(var130 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var222)*(var222 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var279)*(var279 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var552)*(var552 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var608)*(var608 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var624)*(var624 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var626)*(var626 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var211 - var667)*(var667 - var211)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var160)*(var160 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var169)*(var169 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var212 - var613)*(var613 - var212)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var349)*(var349 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var213 - var668)*(var668 - var213)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var175)*(var175 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var53)*(var53 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var214 - var669)*(var669 - var214)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var142)*(var142 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var145)*(var145 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var242)*(var242 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var275)*(var275 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var376)*(var376 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var429)*(var429 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var594)*(var594 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var627)*(var627 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var63)*(var63 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var217 - var91)*(var91 - var217)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var11)*(var11 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var196)*(var196 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var235)*(var235 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var249)*(var249 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var397)*(var397 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var434)*(var434 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var580)*(var580 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var587)*(var587 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var681)*(var681 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var218 - var707)*(var707 - var218)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var1)*(var1 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var124)*(var124 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var125)*(var125 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var150)*(var150 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var158)*(var158 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var178)*(var178 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var20)*(var20 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var299)*(var299 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var312)*(var312 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var318)*(var318 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var371)*(var371 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var413)*(var413 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var219 - var617)*(var617 - var219)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var118)*(var118 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var335)*(var335 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var477)*(var477 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var645)*(var645 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var694)*(var694 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var726)*(var726 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var175)*(var175 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var444)*(var444 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var461)*(var461 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var47)*(var47 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var53)*(var53 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var535)*(var535 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var669)*(var669 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var220 - var674)*(var674 - var220)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var154)*(var154 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var221 - var516)*(var516 - var221)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var117)*(var117 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var279)*(var279 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var37)*(var37 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var419)*(var419 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var552)*(var552 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var624)*(var624 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var626)*(var626 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var222 - var667)*(var667 - var222)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var0)*(var0 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var181)*(var181 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var197)*(var197 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var265)*(var265 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var431)*(var431 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var524)*(var524 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var577)*(var577 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var583)*(var583 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var589)*(var589 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var59)*(var59 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var603)*(var603 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var689)*(var689 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var224 - var728)*(var728 - var224)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var119)*(var119 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var230)*(var230 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var241)*(var241 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var356)*(var356 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var395)*(var395 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var451)*(var451 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var541)*(var541 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var582)*(var582 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var6)*(var6 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var701)*(var701 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var225 - var710)*(var710 - var225)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var132)*(var132 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var243)*(var243 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var544)*(var544 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var564)*(var564 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var706)*(var706 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var226 - var712)*(var712 - var226)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var130)*(var130 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var211)*(var211 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var271)*(var271 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var361)*(var361 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var368)*(var368 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var37)*(var37 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var388)*(var388 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var419)*(var419 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var422)*(var422 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var552)*(var552 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var608)*(var608 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var624)*(var624 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var626)*(var626 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var659)*(var659 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var227 - var690)*(var690 - var227)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var322)*(var322 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var38)*(var38 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var643)*(var643 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var228 - var684)*(var684 - var228)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var194)*(var194 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var314)*(var314 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var551)*(var551 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var636)*(var636 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var652)*(var652 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var677)*(var677 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var229 - var695)*(var695 - var229)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var261)*(var261 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var297)*(var297 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var304)*(var304 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var352)*(var352 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var385)*(var385 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var528)*(var528 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var536)*(var536 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var661)*(var661 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var78)*(var78 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var230 - var241)*(var241 - var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var230 - var390)*(var390 - var230)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var1)*(var1 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var158)*(var158 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var170)*(var170 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var178)*(var178 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var316)*(var316 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var595)*(var595 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var61)*(var61 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var631)*(var631 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var231 - var75)*(var75 - var231)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var110)*(var110 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var146)*(var146 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var479)*(var479 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var496)*(var496 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var539)*(var539 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var644)*(var644 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var650)*(var650 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var232 - var711)*(var711 - var232)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var214)*(var214 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var669)*(var669 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var234 - var674)*(var674 - var234)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var249)*(var249 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var256)*(var256 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var397)*(var397 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var580)*(var580 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var681)*(var681 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var235 - var692)*(var692 - var235)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var14)*(var14 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var148)*(var148 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var240)*(var240 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var267)*(var267 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var278)*(var278 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var346)*(var346 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var441)*(var441 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var455)*(var455 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var55)*(var55 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var56)*(var56 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var662)*(var662 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var704)*(var704 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var714)*(var714 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var236 - var72)*(var72 - var236)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var213)*(var213 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var264)*(var264 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var328)*(var328 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var349)*(var349 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var474)*(var474 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var601)*(var601 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var237 - var671)*(var671 - var237)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var250)*(var250 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var597)*(var597 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var238 - var639)*(var639 - var238)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var128)*(var128 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var197)*(var197 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var224)*(var224 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var265)*(var265 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var290)*(var290 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var389)*(var389 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var524)*(var524 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var525)*(var525 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var603)*(var603 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var614)*(var614 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var239 - var728)*(var728 - var239)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var131)*(var131 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var237)*(var237 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var264)*(var264 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var327)*(var327 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var488)*(var488 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var570)*(var570 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var668)*(var668 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var671)*(var671 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var148)*(var148 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var55)*(var55 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var240 - var574)*(var574 - var240)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var206)*(var206 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var627)*(var627 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var63)*(var63 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var242 - var647)*(var647 - var242)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var132)*(var132 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var215)*(var215 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var544)*(var544 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var243 - var564)*(var564 - var243)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var159)*(var159 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var31)*(var31 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var333)*(var333 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var374)*(var374 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var410)*(var410 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var487)*(var487 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var522)*(var522 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var244 - var69)*(var69 - var244)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var180)*(var180 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var597)*(var597 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var62)*(var62 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var639)*(var639 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var666)*(var666 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var245 - var686)*(var686 - var245)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var296)*(var296 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var344)*(var344 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var372)*(var372 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var246 - var83)*(var83 - var246)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var516)*(var516 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var247 - var566)*(var566 - var247)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var248 - var84)*(var84 - var248)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var177)*(var177 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var334)*(var334 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var545)*(var545 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var97)*(var97 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var250 - var597)*(var597 - var250)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var18)*(var18 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var264)*(var264 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var349)*(var349 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var474)*(var474 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var558)*(var558 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var570)*(var570 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var668)*(var668 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var251 - var671)*(var671 - var251)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var112)*(var112 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var140)*(var140 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var190)*(var190 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var198)*(var198 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var313)*(var313 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var322)*(var322 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var38)*(var38 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var402)*(var402 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var475)*(var475 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var611)*(var611 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var621)*(var621 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var643)*(var643 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var252 - var81)*(var81 - var252)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var200)*(var200 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var255)*(var255 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var338)*(var338 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var36)*(var36 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var426)*(var426 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var439)*(var439 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var567)*(var567 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var253 - var657)*(var657 - var253)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var168)*(var168 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var2)*(var2 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var245)*(var245 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var250)*(var250 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var26)*(var26 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var512)*(var512 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var639)*(var639 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var254 - var686)*(var686 - var254)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var341)*(var341 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var36)*(var36 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var392)*(var392 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var403)*(var403 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var43)*(var43 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var457)*(var457 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var546)*(var546 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var567)*(var567 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var255 - var657)*(var657 - var255)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var249)*(var249 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var397)*(var397 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var681)*(var681 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var256 - var692)*(var692 - var256)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var63)*(var63 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var257 - var647)*(var647 - var257)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var123)*(var123 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var286)*(var286 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var335)*(var335 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var415)*(var415 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var454)*(var454 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var54)*(var54 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var578)*(var578 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var645)*(var645 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var258 - var726)*(var726 - var258)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var302)*(var302 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var367)*(var367 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var49)*(var49 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var259 - var609)*(var609 - var259)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var180)*(var180 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var2)*(var2 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var245)*(var245 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var250)*(var250 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var512)*(var512 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var597)*(var597 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var62)*(var62 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var273)*(var273 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var277)*(var277 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var357)*(var357 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var506)*(var506 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var514)*(var514 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var519)*(var519 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var555)*(var555 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var682)*(var682 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var84)*(var84 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var85)*(var85 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var260 - var97)*(var97 - var260)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var113)*(var113 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var171)*(var171 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var304)*(var304 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var536)*(var536 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var261 - var569)*(var569 - var261)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var262 - var315)*(var315 - var262)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var112)*(var112 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var140)*(var140 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var322)*(var322 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var263 - var684)*(var684 - var263)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var264 - var668)*(var668 - var264)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var128)*(var128 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var431)*(var431 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var524)*(var524 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var525)*(var525 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var577)*(var577 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var589)*(var589 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var59)*(var59 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var603)*(var603 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var614)*(var614 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var689)*(var689 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var265 - var708)*(var708 - var265)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var130)*(var130 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var211)*(var211 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var37)*(var37 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var419)*(var419 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var422)*(var422 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var552)*(var552 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var626)*(var626 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var659)*(var659 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var266 - var667)*(var667 - var266)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var148)*(var148 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var240)*(var240 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var278)*(var278 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var267 - var663)*(var663 - var267)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var27)*(var27 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var28)*(var28 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var282)*(var282 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var287)*(var287 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var523)*(var523 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var268 - var80)*(var80 - var268)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var165)*(var165 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var281)*(var281 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var306)*(var306 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var375)*(var375 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var437)*(var437 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var501)*(var501 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var606)*(var606 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var697)*(var697 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var269 - var90)*(var90 - var269)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var287)*(var287 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var571)*(var571 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var27 - var632)*(var632 - var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var100)*(var100 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var103)*(var103 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var270 - var568)*(var568 - var270)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var222)*(var222 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var266)*(var266 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var37)*(var37 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var510)*(var510 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var552)*(var552 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var608)*(var608 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var624)*(var624 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var659)*(var659 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var271 - var690)*(var690 - var271)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var105)*(var105 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var159)*(var159 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var173)*(var173 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var223)*(var223 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var31)*(var31 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var321)*(var321 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var333)*(var333 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var374)*(var374 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var378)*(var378 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var410)*(var410 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var487)*(var487 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var492)*(var492 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var522)*(var522 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var531)*(var531 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var272 - var71)*(var71 - var272)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var16)*(var16 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var248)*(var248 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var25)*(var25 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var555)*(var555 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var84)*(var84 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var273 - var85)*(var85 - var273)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var582)*(var582 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var274 - var701)*(var701 - var274)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var145)*(var145 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var206)*(var206 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var376)*(var376 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var594)*(var594 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var275 - var63)*(var63 - var275)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var406)*(var406 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var498)*(var498 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var727)*(var727 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var276 - var73)*(var73 - var276)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var147)*(var147 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var25)*(var25 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var334)*(var334 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var379)*(var379 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var572)*(var572 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var84)*(var84 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var277 - var85)*(var85 - var277)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var55)*(var55 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var278 - var574)*(var574 - var278)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var279 - var37)*(var37 - var279)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var27)*(var27 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var571)*(var571 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var658)*(var658 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var119)*(var119 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var241)*(var241 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var390)*(var390 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var395)*(var395 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var582)*(var582 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var6)*(var6 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var672)*(var672 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var280 - var701)*(var701 - var280)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var306)*(var306 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var606)*(var606 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var281 - var90)*(var90 - var281)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var137)*(var137 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var28)*(var28 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var523)*(var523 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var585)*(var585 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var658)*(var658 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var715)*(var715 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var282 - var80)*(var80 - var282)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var127)*(var127 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var157)*(var157 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var193)*(var193 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var269)*(var269 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var306)*(var306 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var34)*(var34 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var375)*(var375 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var416)*(var416 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var480)*(var480 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var606)*(var606 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var283 - var697)*(var697 - var283)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var177)*(var177 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var25)*(var25 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var260)*(var260 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var300)*(var300 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var357)*(var357 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var379)*(var379 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var493)*(var493 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var514)*(var514 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var521)*(var521 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var572)*(var572 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var64)*(var64 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var284 - var85)*(var85 - var284)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var158)*(var158 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var178)*(var178 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var316)*(var316 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var318)*(var318 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var371)*(var371 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var630)*(var630 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var631)*(var631 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var285 - var724)*(var724 - var285)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var415)*(var415 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var54)*(var54 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var694)*(var694 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var286 - var8)*(var8 - var286)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var571)*(var571 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var585)*(var585 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var287 - var632)*(var632 - var287)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var194)*(var194 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var315)*(var315 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var288 - var324)*(var324 - var288)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var190)*(var190 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var204)*(var204 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var263)*(var263 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var313)*(var313 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var322)*(var322 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var402)*(var402 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var475)*(var475 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var611)*(var611 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var621)*(var621 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var643)*(var643 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var654)*(var654 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var289 - var68)*(var68 - var289)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var186)*(var186 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var201)*(var201 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var212)*(var212 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var291)*(var291 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var30)*(var30 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var345)*(var345 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var358)*(var358 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var391)*(var391 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var460)*(var460 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var500)*(var500 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var537)*(var537 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var575)*(var575 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var653)*(var653 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var670)*(var670 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var0)*(var0 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var431)*(var431 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var433)*(var433 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var524)*(var524 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var525)*(var525 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var603)*(var603 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var290 - var614)*(var614 - var290)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var19)*(var19 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var201)*(var201 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var212)*(var212 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var575)*(var575 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var598)*(var598 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var291 - var653)*(var653 - var291)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var153)*(var153 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var203)*(var203 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var276)*(var276 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var494)*(var494 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var498)*(var498 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var649)*(var649 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var727)*(var727 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var73)*(var73 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var292 - var76)*(var76 - var292)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var401)*(var401 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var464)*(var464 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var564)*(var564 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var619)*(var619 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var293 - var712)*(var712 - var293)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var372)*(var372 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var476)*(var476 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var296 - var605)*(var605 - var296)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var171)*(var171 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var304)*(var304 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var352)*(var352 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var385)*(var385 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var553)*(var553 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var297 - var569)*(var569 - var297)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var218)*(var218 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var387)*(var387 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var399)*(var399 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var456)*(var456 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var458)*(var458 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var580)*(var580 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var587)*(var587 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var298 - var635)*(var635 - var298)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var124)*(var124 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var150)*(var150 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var170)*(var170 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var178)*(var178 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var285)*(var285 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var316)*(var316 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var318)*(var318 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var371)*(var371 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var595)*(var595 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var630)*(var630 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var631)*(var631 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var299 - var724)*(var724 - var299)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var221)*(var221 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var516)*(var516 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var566)*(var566 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var169)*(var169 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var186)*(var186 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var345)*(var345 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var483)*(var483 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var575)*(var575 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var613)*(var613 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var147)*(var147 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var177)*(var177 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var25)*(var25 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var273)*(var273 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var334)*(var334 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var379)*(var379 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var519)*(var519 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var545)*(var545 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var555)*(var555 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var84)*(var84 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var300 - var97)*(var97 - var300)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var12)*(var12 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var200)*(var200 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var255)*(var255 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var336)*(var336 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var351)*(var351 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var36)*(var36 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var403)*(var403 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var426)*(var426 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var43)*(var43 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var452)*(var452 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var457)*(var457 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var557)*(var557 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var657)*(var657 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var301 - var87)*(var87 - var301)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var366)*(var366 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var465)*(var465 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var302 - var609)*(var609 - var302)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var0)*(var0 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var128)*(var128 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var290)*(var290 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var525)*(var525 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var577)*(var577 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var583)*(var583 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var589)*(var589 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var59)*(var59 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var603)*(var603 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var614)*(var614 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var689)*(var689 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var303 - var728)*(var728 - var303)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var214)*(var214 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var234)*(var234 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var305 - var53)*(var53 - var305)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var323)*(var323 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var306 - var606)*(var606 - var306)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var497)*(var497 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var307 - var564)*(var564 - var307)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var154)*(var154 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var209)*(var209 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var247)*(var247 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var45)*(var45 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var468)*(var468 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var516)*(var516 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var615)*(var615 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var620)*(var620 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var308 - var698)*(var698 - var308)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var366)*(var366 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var367)*(var367 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var404)*(var404 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var42)*(var42 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var420)*(var420 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var447)*(var447 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var448)*(var448 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var465)*(var465 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var609)*(var609 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var673)*(var673 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var309 - var9)*(var9 - var309)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var159)*(var159 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var333)*(var333 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var374)*(var374 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var471)*(var471 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var522)*(var522 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var69)*(var69 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var121)*(var121 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var126)*(var126 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var199)*(var199 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var394)*(var394 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var425)*(var425 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var520)*(var520 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var693)*(var693 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var703)*(var703 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var311 - var94)*(var94 - var311)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var158)*(var158 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var170)*(var170 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var231)*(var231 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var371)*(var371 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var595)*(var595 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var61)*(var61 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var617)*(var617 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var630)*(var630 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var724)*(var724 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var312 - var75)*(var75 - var312)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var112)*(var112 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var198)*(var198 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var322)*(var322 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var38)*(var38 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var643)*(var643 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var313 - var68)*(var68 - var313)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var288)*(var288 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var324)*(var324 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var551)*(var551 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var581)*(var581 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var314 - var628)*(var628 - var314)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var194)*(var194 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var315 - var646)*(var646 - var315)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var1)*(var1 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var158)*(var158 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var178)*(var178 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var61)*(var61 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var316 - var75)*(var75 - var316)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var127)*(var127 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var193)*(var193 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var269)*(var269 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var480)*(var480 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var50)*(var50 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var501)*(var501 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var317 - var697)*(var697 - var317)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var318 - var630)*(var630 - var318)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var114)*(var114 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var121)*(var121 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var126)*(var126 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var167)*(var167 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var199)*(var199 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var365)*(var365 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var518)*(var518 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var520)*(var520 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var538)*(var538 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var563)*(var563 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var703)*(var703 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var319 - var94)*(var94 - var319)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var100)*(var100 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var129)*(var129 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var146)*(var146 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var270)*(var270 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var310)*(var310 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var41)*(var41 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var432)*(var432 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var479)*(var479 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var539)*(var539 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var568)*(var568 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var713)*(var713 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var101)*(var101 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var196)*(var196 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var218)*(var218 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var235)*(var235 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var249)*(var249 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var256)*(var256 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var397)*(var397 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var458)*(var458 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var580)*(var580 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var587)*(var587 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var320 - var692)*(var692 - var320)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var105)*(var105 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var173)*(var173 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var223)*(var223 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var244)*(var244 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var378)*(var378 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var410)*(var410 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var492)*(var492 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var522)*(var522 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var531)*(var531 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var321 - var69)*(var69 - var321)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var322 - var684)*(var684 - var322)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var323 - var90)*(var90 - var323)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var194)*(var194 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var262)*(var262 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var315)*(var315 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var324 - var646)*(var646 - var324)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var264)*(var264 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var327 - var668)*(var668 - var327)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var327)*(var327 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var570)*(var570 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var328 - var638)*(var638 - var328)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var144)*(var144 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var344)*(var344 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var453)*(var453 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var476)*(var476 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var484)*(var484 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var550)*(var550 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var57)*(var57 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var60)*(var60 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var605)*(var605 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var625)*(var625 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var676)*(var676 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var717)*(var717 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var718)*(var718 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var329 - var89)*(var89 - var329)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var153)*(var153 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var276)*(var276 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var406)*(var406 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var331 - var73)*(var73 - var331)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var142)*(var142 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var172)*(var172 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var206)*(var206 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var217)*(var217 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var242)*(var242 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var257)*(var257 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var275)*(var275 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var376)*(var376 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var414)*(var414 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var46)*(var46 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var547)*(var547 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var594)*(var594 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var627)*(var627 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var63)*(var63 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var640)*(var640 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var647)*(var647 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var332 - var679)*(var679 - var332)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var105)*(var105 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var159)*(var159 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var410)*(var410 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var471)*(var471 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var487)*(var487 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var522)*(var522 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var333 - var531)*(var531 - var333)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var177)*(var177 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var334 - var97)*(var97 - var334)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var415)*(var415 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var694)*(var694 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var726)*(var726 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var335 - var8)*(var8 - var335)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var255)*(var255 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var341)*(var341 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var426)*(var426 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var546)*(var546 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var657)*(var657 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var336 - var87)*(var87 - var336)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var102)*(var102 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var13)*(var13 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var203)*(var203 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var292)*(var292 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var473)*(var473 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var649)*(var649 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var337 - var76)*(var76 - var337)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var36)*(var36 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var43)*(var43 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var338 - var546)*(var546 - var338)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var302)*(var302 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var404)*(var404 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var609)*(var609 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var339 - var722)*(var722 - var339)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var193)*(var193 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var606)*(var606 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var108)*(var108 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var154)*(var154 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var221)*(var221 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var3)*(var3 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var370)*(var370 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var396)*(var396 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var45)*(var45 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var491)*(var491 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var502)*(var502 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var534)*(var534 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var542)*(var542 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var566)*(var566 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var573)*(var573 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var340 - var620)*(var620 - var340)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var341 - var338)*(var338 - var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var341 - var567)*(var567 - var341)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var153)*(var153 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var203)*(var203 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var473)*(var473 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var494)*(var494 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var498)*(var498 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var649)*(var649 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var342 - var82)*(var82 - var342)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var243)*(var243 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var33)*(var33 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var401)*(var401 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var464)*(var464 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var544)*(var544 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var343 - var564)*(var564 - var343)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var344 - var89)*(var89 - var344)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var721)*(var721 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var345 - var79)*(var79 - var345)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var267)*(var267 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var55)*(var55 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var346 - var72)*(var72 - var346)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var161)*(var161 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var225)*(var225 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var230)*(var230 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var274)*(var274 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var356)*(var356 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var451)*(var451 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var52)*(var52 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var541)*(var541 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var665)*(var665 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var672)*(var672 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var347 - var701)*(var701 - var347)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var264)*(var264 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var327)*(var327 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var474)*(var474 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var349 - var638)*(var638 - var349)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var118)*(var118 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var123)*(var123 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var22)*(var22 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var415)*(var415 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var54)*(var54 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var578)*(var578 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var645)*(var645 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var726)*(var726 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var215)*(var215 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var226)*(var226 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var243)*(var243 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var428)*(var428 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var438)*(var438 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var445)*(var445 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var464)*(var464 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var495)*(var495 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var66)*(var66 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var350 - var712)*(var712 - var350)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var255)*(var255 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var336)*(var336 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var338)*(var338 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var341)*(var341 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var392)*(var392 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var403)*(var403 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var426)*(var426 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var546)*(var546 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var657)*(var657 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var351 - var87)*(var87 - var351)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var171)*(var171 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var304)*(var304 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var385)*(var385 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var623)*(var623 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var352 - var78)*(var78 - var352)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var2)*(var2 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var238)*(var238 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var245)*(var245 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var254)*(var254 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var486)*(var486 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var512)*(var512 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var597)*(var597 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var353 - var686)*(var686 - var353)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var142)*(var142 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var145)*(var145 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var275)*(var275 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var627)*(var627 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var354 - var77)*(var77 - var354)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var11)*(var11 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var196)*(var196 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var218)*(var218 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var235)*(var235 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var256)*(var256 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var397)*(var397 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var399)*(var399 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var434)*(var434 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var456)*(var456 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var458)*(var458 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var587)*(var587 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var633)*(var633 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var635)*(var635 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var681)*(var681 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var355 - var709)*(var709 - var355)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var274)*(var274 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var390)*(var390 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var541)*(var541 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var356 - var672)*(var672 - var356)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var16)*(var16 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var300)*(var300 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var64)*(var64 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var682)*(var682 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var357 - var85)*(var85 - var357)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var186)*(var186 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var19)*(var19 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var212)*(var212 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var30)*(var30 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var345)*(var345 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var460)*(var460 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var500)*(var500 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var537)*(var537 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var613)*(var613 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var653)*(var653 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var721)*(var721 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var358 - var79)*(var79 - var358)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var115)*(var115 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var171)*(var171 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var297)*(var297 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var369)*(var369 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var385)*(var385 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var470)*(var470 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var529)*(var529 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var536)*(var536 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var553)*(var553 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var58)*(var58 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var618)*(var618 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var359 - var78)*(var78 - var359)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var392)*(var392 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var36 - var567)*(var567 - var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var137)*(var137 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var282)*(var282 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var287)*(var287 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var715)*(var715 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var360 - var80)*(var80 - var360)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var117)*(var117 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var211)*(var211 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var266)*(var266 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var279)*(var279 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var419)*(var419 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var659)*(var659 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var361 - var667)*(var667 - var361)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var163)*(var163 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var362 - var367)*(var367 - var362)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var118)*(var118 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var123)*(var123 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var22)*(var22 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var286)*(var286 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var335)*(var335 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var450)*(var450 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var54)*(var54 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var602)*(var602 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var604)*(var604 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var645)*(var645 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var363 - var694)*(var694 - var363)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var136)*(var136 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var268)*(var268 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var27)*(var27 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var282)*(var282 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var287)*(var287 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var360)*(var360 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var523)*(var523 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var585)*(var585 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var658)*(var658 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var364 - var715)*(var715 - var364)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var167)*(var167 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var199)*(var199 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var520)*(var520 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var538)*(var538 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var693)*(var693 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var93)*(var93 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var365 - var94)*(var94 - var365)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var404)*(var404 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var366 - var465)*(var465 - var366)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var163)*(var163 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var366)*(var366 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var465)*(var465 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var367 - var49)*(var49 - var367)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var117)*(var117 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var130)*(var130 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var266)*(var266 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var361)*(var361 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var419)*(var419 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var422)*(var422 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var510)*(var510 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var586)*(var586 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var624)*(var624 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var626)*(var626 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var629)*(var629 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var659)*(var659 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var368 - var690)*(var690 - var368)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var115)*(var115 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var171)*(var171 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var261)*(var261 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var297)*(var297 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var352)*(var352 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var528)*(var528 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var536)*(var536 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var569)*(var569 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var58)*(var58 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var618)*(var618 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var623)*(var623 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var369 - var78)*(var78 - var369)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var117)*(var117 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var419)*(var419 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var209)*(var209 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var247)*(var247 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var39)*(var39 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var502)*(var502 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var534)*(var534 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var566)*(var566 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var370 - var615)*(var615 - var370)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var158)*(var158 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var371 - var318)*(var318 - var371)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var113)*(var113 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var23)*(var23 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var297)*(var297 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var359)*(var359 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var470)*(var470 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var481)*(var481 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var528)*(var528 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var529)*(var529 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var536)*(var536 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var569)*(var569 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var58)*(var58 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var623)*(var623 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var373 - var78)*(var78 - var373)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var105)*(var105 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var159)*(var159 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var410)*(var410 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var471)*(var471 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var487)*(var487 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var492)*(var492 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var522)*(var522 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var374 - var69)*(var69 - var374)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var151)*(var151 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var165)*(var165 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var281)*(var281 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var34)*(var34 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var50)*(var50 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var501)*(var501 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var606)*(var606 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var697)*(var697 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var375 - var90)*(var90 - var375)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var257)*(var257 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var429)*(var429 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var594)*(var594 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var627)*(var627 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var647)*(var647 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var77)*(var77 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var376 - var91)*(var91 - var376)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var302)*(var302 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var309)*(var309 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var339)*(var339 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var362)*(var362 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var420)*(var420 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var447)*(var447 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var448)*(var448 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var463)*(var463 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var466)*(var466 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var610)*(var610 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var377 - var673)*(var673 - var377)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var105)*(var105 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var223)*(var223 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var31)*(var31 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var333)*(var333 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var410)*(var410 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var471)*(var471 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var487)*(var487 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var522)*(var522 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var531)*(var531 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var69)*(var69 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var378 - var71)*(var71 - var378)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var147)*(var147 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var177)*(var177 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var25)*(var25 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var545)*(var545 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var84)*(var84 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var379 - var97)*(var97 - var379)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var23)*(var23 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var261)*(var261 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var297)*(var297 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var385)*(var385 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var528)*(var528 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var536)*(var536 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var553)*(var553 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var569)*(var569 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var661)*(var661 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var380 - var78)*(var78 - var380)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var173)*(var173 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var244)*(var244 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var272)*(var272 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var31)*(var31 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var410)*(var410 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var471)*(var471 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var492)*(var492 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var522)*(var522 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var531)*(var531 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var381 - var74)*(var74 - var381)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var102)*(var102 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var174)*(var174 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var276)*(var276 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var292)*(var292 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var331)*(var331 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var342)*(var342 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var406)*(var406 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var498)*(var498 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var513)*(var513 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var543)*(var543 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var592)*(var592 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var649)*(var649 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var727)*(var727 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var382 - var82)*(var82 - var382)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var179)*(var179 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var214)*(var214 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var220)*(var220 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var234)*(var234 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var417)*(var417 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var461)*(var461 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var505)*(var505 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var53)*(var53 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var562)*(var562 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var591)*(var591 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var616)*(var616 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var660)*(var660 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var669)*(var669 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var384 - var674)*(var674 - var384)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var169)*(var169 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var186)*(var186 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var201)*(var201 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var212)*(var212 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var345)*(var345 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var483)*(var483 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var575)*(var575 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var386 - var613)*(var613 - var386)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var101)*(var101 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var196)*(var196 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var235)*(var235 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var256)*(var256 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var434)*(var434 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var580)*(var580 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var635)*(var635 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var681)*(var681 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var707)*(var707 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var387 - var709)*(var709 - var387)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var111)*(var111 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var130)*(var130 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var211)*(var211 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var279)*(var279 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var361)*(var361 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var37)*(var37 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var419)*(var419 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var510)*(var510 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var624)*(var624 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var626)*(var626 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var659)*(var659 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var388 - var667)*(var667 - var388)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var0)*(var0 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var181)*(var181 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var265)*(var265 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var290)*(var290 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var59)*(var59 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var614)*(var614 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var389 - var708)*(var708 - var389)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var516)*(var516 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var390 - var241)*(var241 - var390)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var160)*(var160 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var186)*(var186 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var201)*(var201 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var212)*(var212 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var291)*(var291 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var30)*(var30 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var345)*(var345 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var358)*(var358 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var460)*(var460 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var500)*(var500 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var537)*(var537 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var575)*(var575 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var598)*(var598 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var653)*(var653 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var670)*(var670 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var721)*(var721 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var391 - var79)*(var79 - var391)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var160)*(var160 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var201)*(var201 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var29)*(var29 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var30)*(var30 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var345)*(var345 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var500)*(var500 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var575)*(var575 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var598)*(var598 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var613)*(var613 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var653)*(var653 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var670)*(var670 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var393 - var721)*(var721 - var393)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var119)*(var119 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var230)*(var230 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var241)*(var241 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var582)*(var582 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var642)*(var642 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var672)*(var672 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var395 - var701)*(var701 - var395)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var104)*(var104 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var209)*(var209 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var221)*(var221 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var247)*(var247 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var370)*(var370 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var39)*(var39 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var45)*(var45 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var468)*(var468 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var534)*(var534 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var542)*(var542 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var566)*(var566 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var396 - var698)*(var698 - var396)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var249)*(var249 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var397 - var692)*(var692 - var397)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var175)*(var175 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var179)*(var179 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var214)*(var214 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var234)*(var234 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var305)*(var305 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var462)*(var462 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var53)*(var53 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var398 - var669)*(var669 - var398)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var101)*(var101 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var11)*(var11 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var196)*(var196 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var387)*(var387 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var427)*(var427 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var434)*(var434 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var580)*(var580 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var587)*(var587 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var635)*(var635 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var681)*(var681 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var692)*(var692 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var399 - var709)*(var709 - var399)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var176)*(var176 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var188)*(var188 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var194)*(var194 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var229)*(var229 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var262)*(var262 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var288)*(var288 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var314)*(var314 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var315)*(var315 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var324)*(var324 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var548)*(var548 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var551)*(var551 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var628)*(var628 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var652)*(var652 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var176)*(var176 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var184)*(var184 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var194)*(var194 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var202)*(var202 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var229)*(var229 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var262)*(var262 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var288)*(var288 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var314)*(var314 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var315)*(var315 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var551)*(var551 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var581)*(var581 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var628)*(var628 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var677)*(var677 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var695)*(var695 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var118)*(var118 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var123)*(var123 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var152)*(var152 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var22)*(var22 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var258)*(var258 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var335)*(var335 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var415)*(var415 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var450)*(var450 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var454)*(var454 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var504)*(var504 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var645)*(var645 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var651)*(var651 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var694)*(var694 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var400 - var8)*(var8 - var400)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var132)*(var132 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var215)*(var215 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var243)*(var243 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var544)*(var544 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var619)*(var619 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var401 - var706)*(var706 - var401)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var475)*(var475 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var402 - var643)*(var643 - var402)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var338)*(var338 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var341)*(var341 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var36)*(var36 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var392)*(var392 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var426)*(var426 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var403 - var546)*(var546 - var403)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var163)*(var163 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var404 - var465)*(var465 - var404)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var148)*(var148 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var240)*(var240 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var408 - var55)*(var55 - var408)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var274)*(var274 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var356)*(var356 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var390)*(var390 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var395)*(var395 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var541)*(var541 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var6)*(var6 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var665)*(var665 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var409 - var710)*(var710 - var409)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var479)*(var479 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var561)*(var561 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var568)*(var568 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var223)*(var223 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var410 - var487)*(var487 - var410)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var113)*(var113 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var261)*(var261 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var304)*(var304 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var359)*(var359 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var369)*(var369 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var373)*(var373 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var385)*(var385 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var481)*(var481 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var528)*(var528 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var529)*(var529 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var536)*(var536 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var58)*(var58 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var618)*(var618 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var412 - var78)*(var78 - var412)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var1)*(var1 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var150)*(var150 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var178)*(var178 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var285)*(var285 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var316)*(var316 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var371)*(var371 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var617)*(var617 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var630)*(var630 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var631)*(var631 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var413 - var75)*(var75 - var413)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var145)*(var145 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var206)*(var206 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var217)*(var217 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var429)*(var429 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var627)*(var627 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var63)*(var63 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var640)*(var640 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var647)*(var647 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var414 - var91)*(var91 - var414)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var165)*(var165 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var281)*(var281 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var323)*(var323 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var375)*(var375 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var606)*(var606 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var416 - var697)*(var697 - var416)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var179)*(var179 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var220)*(var220 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var462)*(var462 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var53)*(var53 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var535)*(var535 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var562)*(var562 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var417 - var591)*(var591 - var417)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var175)*(var175 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var214)*(var214 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var220)*(var220 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var234)*(var234 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var305)*(var305 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var398)*(var398 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var461)*(var461 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var462)*(var462 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var47)*(var47 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var53)*(var53 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var530)*(var530 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var562)*(var562 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var418 - var591)*(var591 - var418)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var419 - var117)*(var117 - var419)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var163)*(var163 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var366)*(var366 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var367)*(var367 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var465)*(var465 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var466)*(var466 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var565)*(var565 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var609)*(var609 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var673)*(var673 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var722)*(var722 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var259)*(var259 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var362)*(var362 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var367)*(var367 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var404)*(var404 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var447)*(var447 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var448)*(var448 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var466)*(var466 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var565)*(var565 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var420 - var722)*(var722 - var420)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var14)*(var14 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var267)*(var267 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var278)*(var278 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var441)*(var441 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var56)*(var56 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var574)*(var574 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var663)*(var663 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var702)*(var702 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var421 - var704)*(var704 - var421)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var130)*(var130 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var211)*(var211 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var222)*(var222 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var279)*(var279 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var552)*(var552 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var608)*(var608 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var667)*(var667 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var422 - var690)*(var690 - var422)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var296)*(var296 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var372)*(var372 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var476)*(var476 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var423 - var83)*(var83 - var423)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var148)*(var148 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var236)*(var236 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var240)*(var240 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var408)*(var408 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var421)*(var421 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var441)*(var441 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var443)*(var443 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var455)*(var455 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var576)*(var576 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var704)*(var704 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var714)*(var714 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var424 - var95)*(var95 - var424)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var167)*(var167 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var365)*(var365 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var394)*(var394 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var520)*(var520 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var538)*(var538 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var693)*(var693 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var705)*(var705 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var425 - var94)*(var94 - var425)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var43)*(var43 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var426 - var567)*(var567 - var426)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var196)*(var196 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var218)*(var218 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var235)*(var235 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var256)*(var256 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var397)*(var397 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var580)*(var580 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var587)*(var587 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var427 - var692)*(var692 - var427)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var215)*(var215 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var293)*(var293 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var33)*(var33 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var401)*(var401 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var497)*(var497 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var544)*(var544 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var619)*(var619 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var428 - var712)*(var712 - var428)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var242)*(var242 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var63)*(var63 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var429 - var647)*(var647 - var429)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var392)*(var392 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var546)*(var546 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var138)*(var138 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var156)*(var156 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var180)*(var180 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var189)*(var189 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var2)*(var2 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var512)*(var512 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var597)*(var597 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var639)*(var639 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var430 - var666)*(var666 - var430)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var433)*(var433 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var589)*(var589 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var431 - var614)*(var614 - var431)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var103)*(var103 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var110)*(var110 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var129)*(var129 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var146)*(var146 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var232)*(var232 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var270)*(var270 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var310)*(var310 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var41)*(var41 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var496)*(var496 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var561)*(var561 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var644)*(var644 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var650)*(var650 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var432 - var713)*(var713 - var432)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var433 - var0)*(var0 - var433)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var196)*(var196 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var249)*(var249 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var397)*(var397 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var434 - var681)*(var681 - var434)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var142)*(var142 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var172)*(var172 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var206)*(var206 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var275)*(var275 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var376)*(var376 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var429)*(var429 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var46)*(var46 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var63)*(var63 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var687)*(var687 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var77)*(var77 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var435 - var91)*(var91 - var435)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var130)*(var130 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var266)*(var266 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var361)*(var361 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var368)*(var368 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var37)*(var37 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var388)*(var388 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var510)*(var510 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var552)*(var552 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var586)*(var586 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var608)*(var608 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var629)*(var629 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var436 - var690)*(var690 - var436)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var151)*(var151 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var157)*(var157 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var281)*(var281 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var306)*(var306 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var323)*(var323 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var437 - var34)*(var34 - var437)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var107)*(var107 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var215)*(var215 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var226)*(var226 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var243)*(var243 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var307)*(var307 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var343)*(var343 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var495)*(var495 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var544)*(var544 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var564)*(var564 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var438 - var706)*(var706 - var438)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var36)*(var36 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var392)*(var392 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var426)*(var426 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var457)*(var457 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var567)*(var567 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var439 - var657)*(var657 - var439)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var136)*(var136 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var137)*(var137 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var268)*(var268 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var27)*(var27 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var364)*(var364 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var585)*(var585 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var632)*(var632 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var699)*(var699 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var715)*(var715 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var720)*(var720 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var80)*(var80 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var338)*(var338 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var341)*(var341 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var392)*(var392 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var403)*(var403 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var426)*(var426 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var43)*(var43 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var439)*(var439 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var457)*(var457 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var546)*(var546 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var567)*(var567 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var440 - var657)*(var657 - var440)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var14)*(var14 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var240)*(var240 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var346)*(var346 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var408)*(var408 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var533)*(var533 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var55)*(var55 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var576)*(var576 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var714)*(var714 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var441 - var72)*(var72 - var441)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var110)*(var110 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var232)*(var232 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var310)*(var310 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var32)*(var32 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var41)*(var41 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var51)*(var51 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var568)*(var568 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var442 - var713)*(var713 - var442)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var236)*(var236 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var408)*(var408 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var421)*(var421 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var574)*(var574 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var663)*(var663 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var702)*(var702 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var443 - var714)*(var714 - var443)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var175)*(var175 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var179)*(var179 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var214)*(var214 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var461)*(var461 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var462)*(var462 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var444 - var660)*(var660 - var444)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var107)*(var107 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var132)*(var132 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var243)*(var243 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var293)*(var293 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var343)*(var343 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var464)*(var464 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var497)*(var497 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var544)*(var544 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var706)*(var706 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var445 - var712)*(var712 - var445)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var163)*(var163 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var302)*(var302 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var367)*(var367 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var466)*(var466 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var447 - var722)*(var722 - var447)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var259)*(var259 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var362)*(var362 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var367)*(var367 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var404)*(var404 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var609)*(var609 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var448 - var673)*(var673 - var448)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var169)*(var169 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var186)*(var186 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var201)*(var201 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var29)*(var29 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var291)*(var291 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var30)*(var30 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var358)*(var358 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var386)*(var386 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var391)*(var391 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var460)*(var460 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var500)*(var500 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var537)*(var537 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var670)*(var670 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var449 - var721)*(var721 - var449)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var221)*(var221 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var3)*(var3 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var39)*(var39 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var534)*(var534 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var566)*(var566 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var615)*(var615 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var118)*(var118 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var152)*(var152 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var335)*(var335 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var477)*(var477 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var54)*(var54 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var578)*(var578 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var604)*(var604 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var450 - var726)*(var726 - var450)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var274)*(var274 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var356)*(var356 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var390)*(var390 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var48)*(var48 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var582)*(var582 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var6)*(var6 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var672)*(var672 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var451 - var710)*(var710 - var451)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var200)*(var200 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var253)*(var253 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var336)*(var336 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var351)*(var351 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var426)*(var426 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var43)*(var43 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var440)*(var440 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var452 - var87)*(var87 - var452)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var210)*(var210 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var246)*(var246 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var423)*(var423 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var490)*(var490 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var515)*(var515 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var60)*(var60 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var625)*(var625 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var7)*(var7 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var717)*(var717 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var718)*(var718 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var453 - var89)*(var89 - var453)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var118)*(var118 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var54)*(var54 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var726)*(var726 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var454 - var8)*(var8 - var454)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var148)*(var148 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var240)*(var240 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var267)*(var267 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var278)*(var278 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var346)*(var346 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var441)*(var441 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var533)*(var533 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var55)*(var55 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var576)*(var576 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var714)*(var714 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var455 - var72)*(var72 - var455)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var101)*(var101 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var11)*(var11 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var196)*(var196 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var218)*(var218 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var235)*(var235 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var249)*(var249 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var320)*(var320 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var397)*(var397 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var427)*(var427 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var434)*(var434 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var458)*(var458 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var580)*(var580 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var633)*(var633 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var681)*(var681 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var456 - var692)*(var692 - var456)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var341)*(var341 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var392)*(var392 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var426)*(var426 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var43)*(var43 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var546)*(var546 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var457 - var567)*(var567 - var457)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var458 - var692)*(var692 - var458)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var14)*(var14 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var236)*(var236 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var267)*(var267 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var278)*(var278 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var346)*(var346 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var408)*(var408 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var421)*(var421 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var424)*(var424 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var576)*(var576 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var702)*(var702 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var704)*(var704 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var714)*(var714 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var459 - var95)*(var95 - var459)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var145)*(var145 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var206)*(var206 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var242)*(var242 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var257)*(var257 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var275)*(var275 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var594)*(var594 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var640)*(var640 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var679)*(var679 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var77)*(var77 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var160)*(var160 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var186)*(var186 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var19)*(var19 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var201)*(var201 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var30)*(var30 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var386)*(var386 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var483)*(var483 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var500)*(var500 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var537)*(var537 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var670)*(var670 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var460 - var79)*(var79 - var460)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var179)*(var179 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var669)*(var669 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var461 - var674)*(var674 - var461)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var462 - var214)*(var214 - var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var462 - var674)*(var674 - var462)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var163)*(var163 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var259)*(var259 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var339)*(var339 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var362)*(var362 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var42)*(var42 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var447)*(var447 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var609)*(var609 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var463 - var9)*(var9 - var463)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var132)*(var132 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var215)*(var215 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var307)*(var307 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var33)*(var33 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var564)*(var564 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var706)*(var706 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var464 - var712)*(var712 - var464)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var465 - var163)*(var163 - var465)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var163)*(var163 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var259)*(var259 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var448)*(var448 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var465)*(var465 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var49)*(var49 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var565)*(var565 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var609)*(var609 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var673)*(var673 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var466 - var722)*(var722 - var466)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var154)*(var154 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var221)*(var221 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var247)*(var247 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var3)*(var3 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var39)*(var39 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var502)*(var502 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var468 - var534)*(var534 - var468)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var114)*(var114 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var126)*(var126 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var167)*(var167 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var199)*(var199 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var319)*(var319 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var365)*(var365 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var394)*(var394 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var518)*(var518 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var538)*(var538 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var563)*(var563 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var664)*(var664 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var693)*(var693 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var703)*(var703 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var93)*(var93 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var469 - var94)*(var94 - var469)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var234)*(var234 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var305)*(var305 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var461)*(var461 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var462)*(var462 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var53)*(var53 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var530)*(var530 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var562)*(var562 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var616)*(var616 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var669)*(var669 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var674)*(var674 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var113)*(var113 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var115)*(var115 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var171)*(var171 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var261)*(var261 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var304)*(var304 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var352)*(var352 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var528)*(var528 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var553)*(var553 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var569)*(var569 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var58)*(var58 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var470 - var618)*(var618 - var470)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var105)*(var105 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var159)*(var159 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var223)*(var223 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var410)*(var410 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var487)*(var487 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var492)*(var492 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var471 - var522)*(var522 - var471)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var108)*(var108 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var3)*(var3 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var340)*(var340 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var39)*(var39 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var396)*(var396 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var45)*(var45 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var468)*(var468 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var516)*(var516 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var573)*(var573 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var620)*(var620 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var472 - var698)*(var698 - var472)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var102)*(var102 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var203)*(var203 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var292)*(var292 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var498)*(var498 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var649)*(var649 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var73)*(var73 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var76)*(var76 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var473 - var82)*(var82 - var473)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var638)*(var638 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var474 - var668)*(var668 - var474)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var344)*(var344 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var605)*(var605 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var476 - var89)*(var89 - var476)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var335)*(var335 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var694)*(var694 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var726)*(var726 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var477 - var8)*(var8 - var477)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var181)*(var181 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var197)*(var197 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var224)*(var224 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var265)*(var265 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var290)*(var290 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var389)*(var389 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var431)*(var431 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var524)*(var524 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var577)*(var577 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var589)*(var589 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var614)*(var614 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var708)*(var708 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var478 - var728)*(var728 - var478)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var110)*(var110 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var310)*(var310 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var539)*(var539 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var479 - var561)*(var561 - var479)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var119)*(var119 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var241)*(var241 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var390)*(var390 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var395)*(var395 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var541)*(var541 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var665)*(var665 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var672)*(var672 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var480 - var90)*(var90 - var480)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var115)*(var115 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var23)*(var23 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var304)*(var304 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var380)*(var380 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var528)*(var528 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var553)*(var553 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var569)*(var569 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var58)*(var58 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var618)*(var618 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var623)*(var623 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var481 - var661)*(var661 - var481)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var169)*(var169 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var613)*(var613 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var721)*(var721 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var483 - var79)*(var79 - var483)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var296)*(var296 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var344)*(var344 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var423)*(var423 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var490)*(var490 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var57)*(var57 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var625)*(var625 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var717)*(var717 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var484 - var89)*(var89 - var484)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var155)*(var155 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var168)*(var168 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var189)*(var189 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var245)*(var245 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var254)*(var254 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var353)*(var353 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var430)*(var430 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var486)*(var486 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var508)*(var508 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var512)*(var512 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var527)*(var527 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var540)*(var540 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var597)*(var597 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var62)*(var62 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var639)*(var639 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var666)*(var666 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var485 - var686)*(var686 - var485)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var168)*(var168 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var180)*(var180 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var2)*(var2 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var250)*(var250 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var26)*(var26 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var512)*(var512 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var62)*(var62 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var639)*(var639 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var486 - var686)*(var686 - var486)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var131)*(var131 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var18)*(var18 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var264)*(var264 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var328)*(var328 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var349)*(var349 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var570)*(var570 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var668)*(var668 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var488 - var671)*(var671 - var488)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var114)*(var114 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var121)*(var121 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var126)*(var126 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var167)*(var167 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var199)*(var199 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var311)*(var311 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var365)*(var365 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var518)*(var518 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var520)*(var520 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var664)*(var664 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var693)*(var693 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var705)*(var705 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var489 - var93)*(var93 - var489)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var673)*(var673 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var296)*(var296 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var344)*(var344 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var515)*(var515 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var605)*(var605 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var625)*(var625 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var718)*(var718 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var83)*(var83 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var490 - var89)*(var89 - var490)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var108)*(var108 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var221)*(var221 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var247)*(var247 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var370)*(var370 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var45)*(var45 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var468)*(var468 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var502)*(var502 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var516)*(var516 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var491 - var615)*(var615 - var491)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var223)*(var223 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var410)*(var410 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var487)*(var487 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var492 - var522)*(var522 - var492)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var493 - var177)*(var177 - var493)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var494 - var498)*(var498 - var494)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var107)*(var107 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var132)*(var132 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var243)*(var243 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var293)*(var293 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var307)*(var307 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var343)*(var343 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var401)*(var401 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var428)*(var428 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var464)*(var464 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var497)*(var497 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var495 - var564)*(var564 - var495)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var496 - var100)*(var100 - var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var496 - var129)*(var129 - var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var496 - var146)*(var146 - var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var496 - var310)*(var310 - var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var496 - var711)*(var711 - var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var496 - var713)*(var713 - var496)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var13)*(var13 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var498 - var406)*(var406 - var498)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var176)*(var176 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var184)*(var184 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var188)*(var188 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var194)*(var194 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var229)*(var229 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var262)*(var262 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var288)*(var288 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var314)*(var314 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var628)*(var628 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var636)*(var636 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var499 - var652)*(var652 - var499)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var221)*(var221 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var308)*(var308 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var370)*(var370 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var396)*(var396 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var45)*(var45 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var468)*(var468 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var502)*(var502 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var542)*(var542 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var615)*(var615 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var193)*(var193 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var437)*(var437 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var501)*(var501 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var606)*(var606 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var697)*(var697 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var90)*(var90 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var169)*(var169 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var186)*(var186 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var19)*(var19 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var212)*(var212 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var345)*(var345 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var537)*(var537 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var598)*(var598 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var613)*(var613 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var500 - var79)*(var79 - var500)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var323)*(var323 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var34)*(var34 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var606)*(var606 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var501 - var90)*(var90 - var501)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var247)*(var247 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var39)*(var39 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var516)*(var516 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var566)*(var566 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var615)*(var615 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var502 - var620)*(var620 - var502)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var190)*(var190 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var263)*(var263 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var322)*(var322 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var38)*(var38 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var621)*(var621 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var643)*(var643 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var68)*(var68 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var684)*(var684 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var503 - var81)*(var81 - var503)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var123)*(var123 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var22)*(var22 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var258)*(var258 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var286)*(var286 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var415)*(var415 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var450)*(var450 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var578)*(var578 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var604)*(var604 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var645)*(var645 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var651)*(var651 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var694)*(var694 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var504 - var726)*(var726 - var504)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var179)*(var179 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var214)*(var214 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var220)*(var220 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var234)*(var234 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var305)*(var305 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var398)*(var398 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var462)*(var462 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var509)*(var509 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var53)*(var53 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var535)*(var535 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var562)*(var562 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var591)*(var591 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var616)*(var616 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var655)*(var655 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var660)*(var660 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var505 - var669)*(var669 - var505)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var16)*(var16 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var177)*(var177 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var25)*(var25 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var273)*(var273 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var277)*(var277 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var300)*(var300 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var357)*(var357 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var521)*(var521 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var545)*(var545 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var64)*(var64 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var682)*(var682 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var84)*(var84 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var85)*(var85 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var506 - var97)*(var97 - var506)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var163)*(var163 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var259)*(var259 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var302)*(var302 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var366)*(var366 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var367)*(var367 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var404)*(var404 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var42)*(var42 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var420)*(var420 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var463)*(var463 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var466)*(var466 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var49)*(var49 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var609)*(var609 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var610)*(var610 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var673)*(var673 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var722)*(var722 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var507 - var9)*(var9 - var507)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var138)*(var138 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var156)*(var156 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var2)*(var2 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var245)*(var245 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var250)*(var250 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var430)*(var430 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var486)*(var486 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var540)*(var540 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var597)*(var597 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var62)*(var62 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var639)*(var639 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var508 - var686)*(var686 - var508)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var220)*(var220 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var398)*(var398 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var461)*(var461 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var462)*(var462 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var562)*(var562 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var655)*(var655 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var669)*(var669 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var509 - var674)*(var674 - var509)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var100)*(var100 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var103)*(var103 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var129)*(var129 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var270)*(var270 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var41)*(var41 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var539)*(var539 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var568)*(var568 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var650)*(var650 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var222)*(var222 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var266)*(var266 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var279)*(var279 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var361)*(var361 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var419)*(var419 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var586)*(var586 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var608)*(var608 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var626)*(var626 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var659)*(var659 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var667)*(var667 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var510 - var690)*(var690 - var510)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var135)*(var135 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var272)*(var272 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var321)*(var321 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var333)*(var333 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var471)*(var471 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var531)*(var531 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var511 - var71)*(var71 - var511)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var189)*(var189 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var245)*(var245 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var250)*(var250 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var597)*(var597 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var62)*(var62 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var639)*(var639 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var512 - var666)*(var666 - var512)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var153)*(var153 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var203)*(var203 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var331)*(var331 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var342)*(var342 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var473)*(var473 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var498)*(var498 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var592)*(var592 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var649)*(var649 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var723)*(var723 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var513 - var76)*(var76 - var513)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var177)*(var177 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var273)*(var273 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var277)*(var277 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var300)*(var300 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var379)*(var379 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var493)*(var493 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var545)*(var545 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var572)*(var572 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var64)*(var64 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var514 - var84)*(var84 - var514)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var296)*(var296 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var57)*(var57 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var717)*(var717 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var515 - var89)*(var89 - var515)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var119)*(var119 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var225)*(var225 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var230)*(var230 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var241)*(var241 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var274)*(var274 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var280)*(var280 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var356)*(var356 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var395)*(var395 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var409)*(var409 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var48)*(var48 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var52)*(var52 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var541)*(var541 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var517 - var672)*(var672 - var517)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var114)*(var114 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var126)*(var126 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var199)*(var199 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var311)*(var311 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var394)*(var394 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var425)*(var425 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var520)*(var520 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var538)*(var538 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var563)*(var563 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var612)*(var612 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var693)*(var693 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var518 - var703)*(var703 - var518)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var519 - var147)*(var147 - var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var519 - var177)*(var177 - var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var519 - var493)*(var493 - var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var519 - var572)*(var572 - var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var519 - var85)*(var85 - var519)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var280)*(var280 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var582)*(var582 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var6)*(var6 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var701)*(var701 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var520 - var167)*(var167 - var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var520 - var394)*(var394 - var520)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var147)*(var147 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var273)*(var273 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var493)*(var493 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var514)*(var514 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var545)*(var545 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var572)*(var572 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var64)*(var64 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var85)*(var85 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var521 - var97)*(var97 - var521)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var522 - var410)*(var410 - var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var522 - var487)*(var487 - var522)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var27)*(var27 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var571)*(var571 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var585)*(var585 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var632)*(var632 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var658)*(var658 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var523 - var80)*(var80 - var523)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var524 - var0)*(var0 - var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var524 - var59)*(var59 - var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var524 - var728)*(var728 - var524)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var525 - var0)*(var0 - var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var525 - var431)*(var431 - var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var525 - var614)*(var614 - var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var525 - var708)*(var708 - var525)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var306)*(var306 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var317)*(var317 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var34)*(var34 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var375)*(var375 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var416)*(var416 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var437)*(var437 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var480)*(var480 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var50)*(var50 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var648)*(var648 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var526 - var697)*(var697 - var526)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var138)*(var138 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var156)*(var156 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var189)*(var189 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var238)*(var238 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var245)*(var245 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var26)*(var26 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var486)*(var486 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var62)*(var62 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var527 - var639)*(var639 - var527)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var113)*(var113 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var171)*(var171 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var261)*(var261 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var304)*(var304 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var352)*(var352 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var536)*(var536 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var569)*(var569 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var528 - var623)*(var623 - var528)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var113)*(var113 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var115)*(var115 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var261)*(var261 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var352)*(var352 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var536)*(var536 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var553)*(var553 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var623)*(var623 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var661)*(var661 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var529 - var78)*(var78 - var529)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var530 - var234)*(var234 - var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var530 - var461)*(var461 - var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var530 - var462)*(var462 - var530)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var531 - var410)*(var410 - var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var531 - var487)*(var487 - var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var531 - var492)*(var492 - var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var531 - var522)*(var522 - var531)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var172)*(var172 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var206)*(var206 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var217)*(var217 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var242)*(var242 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var257)*(var257 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var547)*(var547 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var63)*(var63 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var679)*(var679 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var532 - var77)*(var77 - var532)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var148)*(var148 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var278)*(var278 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var533 - var574)*(var574 - var533)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var534 - var154)*(var154 - var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var534 - var516)*(var516 - var534)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var214)*(var214 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var234)*(var234 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var462)*(var462 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var535 - var53)*(var53 - var535)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var352)*(var352 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var385)*(var385 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var553)*(var553 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var536 - var569)*(var569 - var536)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var160)*(var160 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var169)*(var169 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var186)*(var186 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var212)*(var212 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var386)*(var386 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var575)*(var575 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var613)*(var613 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var537 - var721)*(var721 - var537)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var126)*(var126 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var167)*(var167 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var199)*(var199 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var538 - var693)*(var693 - var538)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var415)*(var415 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var156)*(var156 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var168)*(var168 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var238)*(var238 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var353)*(var353 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var430)*(var430 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var597)*(var597 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var62)*(var62 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var540 - var639)*(var639 - var540)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var541 - var241)*(var241 - var541)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var209)*(var209 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var221)*(var221 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var247)*(var247 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var516)*(var516 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var615)*(var615 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var542 - var620)*(var620 - var542)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var292)*(var292 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var337)*(var337 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var342)*(var342 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var406)*(var406 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var473)*(var473 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var498)*(var498 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var649)*(var649 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var723)*(var723 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var543 - var73)*(var73 - var543)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var544 - var497)*(var497 - var544)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var36)*(var36 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var546 - var392)*(var392 - var546)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var142)*(var142 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var206)*(var206 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var217)*(var217 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var257)*(var257 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var429)*(var429 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var46)*(var46 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var77)*(var77 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var547 - var91)*(var91 - var547)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var188)*(var188 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var262)*(var262 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var315)*(var315 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var324)*(var324 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var677)*(var677 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var548 - var695)*(var695 - var548)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var114)*(var114 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var167)*(var167 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var311)*(var311 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var319)*(var319 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var518)*(var518 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var520)*(var520 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var538)*(var538 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var664)*(var664 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var549 - var703)*(var703 - var549)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var210)*(var210 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var246)*(var246 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var296)*(var296 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var344)*(var344 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var423)*(var423 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var476)*(var476 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var515)*(var515 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var57)*(var57 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var676)*(var676 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var717)*(var717 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var83)*(var83 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var89)*(var89 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var550 - var92)*(var92 - var550)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var188)*(var188 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var194)*(var194 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var262)*(var262 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var315)*(var315 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var551 - var677)*(var677 - var551)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var552 - var626)*(var626 - var552)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var121)*(var121 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var199)*(var199 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var311)*(var311 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var425)*(var425 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var518)*(var518 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var703)*(var703 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var705)*(var705 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var554 - var93)*(var93 - var554)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var555 - var16)*(var16 - var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var555 - var177)*(var177 - var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var555 - var493)*(var493 - var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var555 - var545)*(var545 - var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var555 - var85)*(var85 - var555)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var145)*(var145 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var217)*(var217 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var257)*(var257 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var275)*(var275 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var332)*(var332 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var354)*(var354 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var376)*(var376 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var414)*(var414 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var46)*(var46 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var547)*(var547 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var594)*(var594 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var627)*(var627 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var63)*(var63 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var640)*(var640 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var687)*(var687 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var556 - var91)*(var91 - var556)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var200)*(var200 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var253)*(var253 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var255)*(var255 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var336)*(var336 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var341)*(var341 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var351)*(var351 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var392)*(var392 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var426)*(var426 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var457)*(var457 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var567)*(var567 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var557 - var87)*(var87 - var557)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var183)*(var183 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var237)*(var237 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var24)*(var24 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var264)*(var264 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var474)*(var474 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var488)*(var488 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var558 - var601)*(var601 - var558)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var163)*(var163 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var259)*(var259 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var302)*(var302 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var404)*(var404 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var420)*(var420 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var447)*(var447 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var465)*(var465 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var466)*(var466 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var49)*(var49 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var609)*(var609 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var610)*(var610 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var722)*(var722 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var559 - var9)*(var9 - var559)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var408)*(var408 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var533)*(var533 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var55)*(var55 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var663)*(var663 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var714)*(var714 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var116)*(var116 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var136)*(var136 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var192)*(var192 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var28)*(var28 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var282)*(var282 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var699)*(var699 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var560 - var720)*(var720 - var560)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var110)*(var110 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var561 - var568)*(var568 - var561)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var175)*(var175 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var179)*(var179 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var462)*(var462 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var535)*(var535 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var562 - var674)*(var674 - var562)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var121)*(var121 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var126)*(var126 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var199)*(var199 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var394)*(var394 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var538)*(var538 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var693)*(var693 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var703)*(var703 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var563 - var93)*(var93 - var563)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var215)*(var215 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var564 - var544)*(var544 - var564)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var404)*(var404 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var465)*(var465 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var49)*(var49 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var609)*(var609 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var565 - var673)*(var673 - var565)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var566 - var221)*(var221 - var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var566 - var39)*(var39 - var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var566 - var534)*(var534 - var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var566 - var620)*(var620 - var566)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var567 - var392)*(var392 - var567)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var113)*(var113 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var553)*(var553 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var569 - var623)*(var623 - var569)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var246)*(var246 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var296)*(var296 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var372)*(var372 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var423)*(var423 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var89)*(var89 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var570 - var668)*(var668 - var570)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var248)*(var248 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var379)*(var379 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var84)*(var84 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var85)*(var85 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var572 - var97)*(var97 - var572)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var104)*(var104 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var154)*(var154 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var209)*(var209 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var221)*(var221 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var3)*(var3 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var39)*(var39 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var468)*(var468 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var491)*(var491 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var516)*(var516 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var534)*(var534 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var566)*(var566 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var573 - var620)*(var620 - var573)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var576 - var148)*(var148 - var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var576 - var278)*(var278 - var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var576 - var533)*(var533 - var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var576 - var663)*(var663 - var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var576 - var72)*(var72 - var576)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var577 - var524)*(var524 - var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var577 - var525)*(var525 - var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var577 - var589)*(var589 - var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var577 - var708)*(var708 - var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var577 - var728)*(var728 - var577)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var578 - var286)*(var286 - var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var578 - var477)*(var477 - var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var578 - var54)*(var54 - var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var578 - var694)*(var694 - var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var578 - var726)*(var726 - var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var578 - var8)*(var8 - var578)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var131)*(var131 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var183)*(var183 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var213)*(var213 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var24)*(var24 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var251)*(var251 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var327)*(var327 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var328)*(var328 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var474)*(var474 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var601)*(var601 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var638)*(var638 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var668)*(var668 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var579 - var88)*(var88 - var579)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var113)*(var113 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var115)*(var115 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var171)*(var171 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var297)*(var297 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var352)*(var352 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var529)*(var529 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var536)*(var536 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var553)*(var553 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var618)*(var618 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var623)*(var623 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var78)*(var78 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var580 - var196)*(var196 - var580)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var580 - var256)*(var256 - var580)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var580 - var692)*(var692 - var580)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var581 - var188)*(var188 - var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var581 - var324)*(var324 - var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var581 - var551)*(var551 - var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var581 - var628)*(var628 - var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var581 - var646)*(var646 - var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var581 - var695)*(var695 - var581)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var582 - var241)*(var241 - var582)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var0)*(var0 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var265)*(var265 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var290)*(var290 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var524)*(var524 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var525)*(var525 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var577)*(var577 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var59)*(var59 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var603)*(var603 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var614)*(var614 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var689)*(var689 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var583 - var708)*(var708 - var583)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var253)*(var253 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var255)*(var255 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var338)*(var338 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var341)*(var341 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var351)*(var351 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var36)*(var36 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var403)*(var403 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var439)*(var439 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var457)*(var457 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var567)*(var567 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var584 - var87)*(var87 - var584)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var585 - var571)*(var571 - var585)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var130)*(var130 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var222)*(var222 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var266)*(var266 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var422)*(var422 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var608)*(var608 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var624)*(var624 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var626)*(var626 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var586 - var659)*(var659 - var586)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var587 - var196)*(var196 - var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var587 - var249)*(var249 - var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var587 - var256)*(var256 - var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var587 - var397)*(var397 - var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var587 - var692)*(var692 - var587)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var589 - var433)*(var433 - var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var589 - var614)*(var614 - var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var589 - var728)*(var728 - var589)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var0)*(var0 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var728)*(var728 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var210)*(var210 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var246)*(var246 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var372)*(var372 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var423)*(var423 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var476)*(var476 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var515)*(var515 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var550)*(var550 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var60)*(var60 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var605)*(var605 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var676)*(var676 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var7)*(var7 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var590 - var717)*(var717 - var590)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var234)*(var234 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var305)*(var305 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var444)*(var444 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var462)*(var462 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var53)*(var53 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var530)*(var530 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var562)*(var562 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var616)*(var616 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var660)*(var660 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var669)*(var669 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var591 - var674)*(var674 - var591)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var102)*(var102 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var174)*(var174 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var203)*(var203 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var276)*(var276 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var292)*(var292 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var331)*(var331 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var473)*(var473 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var498)*(var498 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var70)*(var70 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var723)*(var723 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var592 - var82)*(var82 - var592)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var107)*(var107 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var149)*(var149 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var226)*(var226 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var243)*(var243 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var307)*(var307 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var343)*(var343 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var401)*(var401 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var438)*(var438 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var445)*(var445 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var495)*(var495 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var497)*(var497 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var564)*(var564 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var619)*(var619 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var593 - var706)*(var706 - var593)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var594 - var145)*(var145 - var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var594 - var206)*(var206 - var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var594 - var242)*(var242 - var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var594 - var63)*(var63 - var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var594 - var91)*(var91 - var594)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var595 - var158)*(var158 - var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var595 - var371)*(var371 - var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var595 - var617)*(var617 - var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var595 - var630)*(var630 - var595)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var228)*(var228 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var38)*(var38 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var475)*(var475 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var600)*(var600 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var611)*(var611 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var643)*(var643 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var68)*(var68 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var684)*(var684 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var596 - var81)*(var81 - var596)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var201)*(var201 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var212)*(var212 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var30)*(var30 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var345)*(var345 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var386)*(var386 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var537)*(var537 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var575)*(var575 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var598 - var613)*(var613 - var598)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var0)*(var0 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var141)*(var141 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var197)*(var197 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var239)*(var239 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var431)*(var431 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var433)*(var433 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var478)*(var478 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var524)*(var524 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var525)*(var525 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var577)*(var577 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var603)*(var603 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var599 - var708)*(var708 - var599)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var119)*(var119 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var230)*(var230 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var395)*(var395 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var541)*(var541 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var582)*(var582 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var642)*(var642 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var296)*(var296 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var423)*(var423 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var476)*(var476 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var57)*(var57 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var605)*(var605 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var718)*(var718 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var89)*(var89 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var140)*(var140 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var228)*(var228 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var322)*(var322 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var38)*(var38 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var402)*(var402 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var475)*(var475 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var643)*(var643 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var600 - var684)*(var684 - var600)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var601 - var213)*(var213 - var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var601 - var474)*(var474 - var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var601 - var570)*(var570 - var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var601 - var668)*(var668 - var601)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var123)*(var123 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var152)*(var152 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var258)*(var258 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var286)*(var286 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var415)*(var415 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var450)*(var450 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var454)*(var454 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var477)*(var477 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var504)*(var504 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var54)*(var54 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var578)*(var578 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var604)*(var604 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var651)*(var651 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var719)*(var719 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var602 - var8)*(var8 - var602)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var603 - var59)*(var59 - var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var603 - var708)*(var708 - var603)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var118)*(var118 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var123)*(var123 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var286)*(var286 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var335)*(var335 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var415)*(var415 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var578)*(var578 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var645)*(var645 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var726)*(var726 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var604 - var8)*(var8 - var604)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var605 - var83)*(var83 - var605)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var606 - var90)*(var90 - var606)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var124)*(var124 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var125)*(var125 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var285)*(var285 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var312)*(var312 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var371)*(var371 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var413)*(var413 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var617)*(var617 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var631)*(var631 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var724)*(var724 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var607 - var75)*(var75 - var607)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var608 - var117)*(var117 - var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var608 - var279)*(var279 - var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var608 - var419)*(var419 - var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var608 - var552)*(var552 - var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var608 - var626)*(var626 - var608)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var609 - var163)*(var163 - var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var609 - var404)*(var404 - var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var609 - var465)*(var465 - var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var609 - var673)*(var673 - var609)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var1)*(var1 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var318)*(var318 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var595)*(var595 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var630)*(var630 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var163)*(var163 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var339)*(var339 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var362)*(var362 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var366)*(var366 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var404)*(var404 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var447)*(var447 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var49)*(var49 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var609)*(var609 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var610 - var673)*(var673 - var610)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var611 - var112)*(var112 - var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var611 - var600)*(var600 - var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var611 - var684)*(var684 - var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var611 - var81)*(var81 - var611)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var121)*(var121 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var167)*(var167 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var199)*(var199 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var365)*(var365 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var394)*(var394 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var520)*(var520 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var538)*(var538 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var703)*(var703 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var705)*(var705 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var612 - var94)*(var94 - var612)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var613 - var79)*(var79 - var613)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var614 - var524)*(var524 - var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var614 - var59)*(var59 - var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var614 - var728)*(var728 - var614)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var615 - var154)*(var154 - var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var615 - var209)*(var209 - var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var615 - var221)*(var221 - var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var615 - var3)*(var3 - var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var615 - var516)*(var516 - var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var615 - var566)*(var566 - var615)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var616 - var175)*(var175 - var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var616 - var179)*(var179 - var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var616 - var305)*(var305 - var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var616 - var53)*(var53 - var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var616 - var562)*(var562 - var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var616 - var660)*(var660 - var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var616 - var674)*(var674 - var616)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var115)*(var115 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var261)*(var261 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var297)*(var297 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var304)*(var304 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var385)*(var385 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var528)*(var528 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var529)*(var529 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var553)*(var553 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var661)*(var661 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var618 - var78)*(var78 - var618)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var619 - var132)*(var132 - var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var619 - var215)*(var215 - var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var619 - var544)*(var544 - var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var619 - var564)*(var564 - var619)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var189)*(var189 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var597)*(var597 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var639)*(var639 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var621 - var198)*(var198 - var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var621 - var313)*(var313 - var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var621 - var322)*(var322 - var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var621 - var402)*(var402 - var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var621 - var600)*(var600 - var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var621 - var643)*(var643 - var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var621 - var684)*(var684 - var621)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var623 - var78)*(var78 - var623)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var624 - var279)*(var279 - var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var624 - var419)*(var419 - var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var624 - var552)*(var552 - var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var624 - var626)*(var626 - var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var624 - var667)*(var667 - var624)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var627 - var206)*(var206 - var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var627 - var63)*(var63 - var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var627 - var647)*(var647 - var627)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var628 - var188)*(var188 - var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var628 - var194)*(var194 - var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var628 - var315)*(var315 - var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var628 - var646)*(var646 - var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var628 - var677)*(var677 - var628)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var117)*(var117 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var271)*(var271 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var361)*(var361 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var37)*(var37 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var419)*(var419 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var422)*(var422 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var586)*(var586 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var608)*(var608 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var626)*(var626 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var667)*(var667 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var629 - var690)*(var690 - var629)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var158)*(var158 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var170)*(var170 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var178)*(var178 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var316)*(var316 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var61)*(var61 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var630)*(var630 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var724)*(var724 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var631 - var75)*(var75 - var631)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var633 - var249)*(var249 - var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var633 - var387)*(var387 - var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var633 - var397)*(var397 - var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var633 - var399)*(var399 - var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var633 - var580)*(var580 - var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var633 - var587)*(var587 - var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var633 - var635)*(var635 - var633)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var116)*(var116 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var268)*(var268 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var27)*(var27 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var282)*(var282 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var287)*(var287 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var360)*(var360 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var364)*(var364 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var523)*(var523 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var632)*(var632 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var658)*(var658 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var699)*(var699 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var715)*(var715 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var716)*(var716 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var725)*(var725 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var634 - var80)*(var80 - var634)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var11)*(var11 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var218)*(var218 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var235)*(var235 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var249)*(var249 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var320)*(var320 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var397)*(var397 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var427)*(var427 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var434)*(var434 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var635 - var458)*(var458 - var635)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var636 - var188)*(var188 - var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var636 - var288)*(var288 - var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var636 - var315)*(var315 - var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var636 - var551)*(var551 - var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var636 - var628)*(var628 - var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var636 - var646)*(var646 - var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var636 - var677)*(var677 - var636)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var112)*(var112 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var140)*(var140 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var190)*(var190 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var198)*(var198 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var228)*(var228 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var263)*(var263 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var322)*(var322 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var503)*(var503 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var600)*(var600 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var611)*(var611 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var621)*(var621 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var643)*(var643 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var654)*(var654 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var68)*(var68 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var683)*(var683 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var637 - var81)*(var81 - var637)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var639 - var250)*(var250 - var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var639 - var597)*(var597 - var639)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var147)*(var147 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var16)*(var16 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var177)*(var177 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var248)*(var248 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var277)*(var277 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var334)*(var334 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var493)*(var493 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var545)*(var545 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var97)*(var97 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var640 - var206)*(var206 - var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var640 - var242)*(var242 - var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var640 - var354)*(var354 - var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var640 - var376)*(var376 - var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var640 - var429)*(var429 - var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var640 - var627)*(var627 - var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var640 - var63)*(var63 - var640)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var124)*(var124 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var158)*(var158 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var170)*(var170 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var178)*(var178 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var312)*(var312 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var318)*(var318 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var371)*(var371 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var413)*(var413 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var617)*(var617 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var724)*(var724 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var641 - var75)*(var75 - var641)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var642 - var241)*(var241 - var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var642 - var541)*(var541 - var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var642 - var582)*(var582 - var642)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var643 - var322)*(var322 - var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var643 - var38)*(var38 - var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var643 - var684)*(var684 - var643)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var644 - var100)*(var100 - var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var644 - var103)*(var103 - var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var644 - var110)*(var110 - var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var644 - var129)*(var129 - var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var644 - var310)*(var310 - var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var644 - var479)*(var479 - var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var644 - var561)*(var561 - var644)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var645 - var118)*(var118 - var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var645 - var415)*(var415 - var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var645 - var54)*(var54 - var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var645 - var694)*(var694 - var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var645 - var726)*(var726 - var645)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var157)*(var157 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var165)*(var165 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var281)*(var281 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var306)*(var306 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var323)*(var323 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var437)*(var437 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var480)*(var480 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var501)*(var501 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var606)*(var606 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var648 - var697)*(var697 - var648)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var649 - var13)*(var13 - var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var649 - var494)*(var494 - var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var649 - var73)*(var73 - var649)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var13)*(var13 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var174)*(var174 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var203)*(var203 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var276)*(var276 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var292)*(var292 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var337)*(var337 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var342)*(var342 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var473)*(var473 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var513)*(var513 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var592)*(var592 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var70)*(var70 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var723)*(var723 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var650 - var100)*(var100 - var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var650 - var103)*(var103 - var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var650 - var310)*(var310 - var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var650 - var479)*(var479 - var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var650 - var561)*(var561 - var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var650 - var568)*(var568 - var650)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var118)*(var118 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var258)*(var258 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var286)*(var286 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var415)*(var415 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var454)*(var454 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var54)*(var54 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var694)*(var694 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var651 - var726)*(var726 - var651)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var652 - var262)*(var262 - var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var652 - var288)*(var288 - var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var652 - var315)*(var315 - var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var652 - var646)*(var646 - var652)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var160)*(var160 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var169)*(var169 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var186)*(var186 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var201)*(var201 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var212)*(var212 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var30)*(var30 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var345)*(var345 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var483)*(var483 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var537)*(var537 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var575)*(var575 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var653 - var613)*(var613 - var653)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var140)*(var140 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var190)*(var190 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var198)*(var198 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var263)*(var263 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var313)*(var313 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var38)*(var38 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var475)*(var475 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var503)*(var503 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var600)*(var600 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var611)*(var611 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var643)*(var643 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var68)*(var68 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var683)*(var683 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var654 - var81)*(var81 - var654)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var179)*(var179 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var214)*(var214 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var220)*(var220 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var234)*(var234 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var398)*(var398 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var444)*(var444 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var461)*(var461 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var47)*(var47 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var53)*(var53 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var655 - var535)*(var535 - var655)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var139)*(var139 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var18)*(var18 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var213)*(var213 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var237)*(var237 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var24)*(var24 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var251)*(var251 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var579)*(var579 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var601)*(var601 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var656 - var668)*(var668 - var656)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var657 - var341)*(var341 - var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var657 - var403)*(var403 - var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var657 - var426)*(var426 - var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var657 - var457)*(var457 - var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var657 - var567)*(var567 - var657)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var658 - var27)*(var27 - var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var658 - var571)*(var571 - var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var658 - var632)*(var632 - var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var658 - var80)*(var80 - var658)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var659 - var279)*(var279 - var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var659 - var37)*(var37 - var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var659 - var624)*(var624 - var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var659 - var667)*(var667 - var659)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var132)*(var132 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var215)*(var215 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var343)*(var343 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var428)*(var428 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var464)*(var464 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var544)*(var544 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var706)*(var706 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var660 - var179)*(var179 - var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var660 - var214)*(var214 - var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var660 - var305)*(var305 - var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var660 - var562)*(var562 - var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var660 - var674)*(var674 - var660)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var661 - var113)*(var113 - var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var661 - var171)*(var171 - var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var661 - var261)*(var261 - var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var661 - var297)*(var297 - var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var661 - var352)*(var352 - var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var661 - var536)*(var536 - var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var661 - var553)*(var553 - var661)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var14)*(var14 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var148)*(var148 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var240)*(var240 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var267)*(var267 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var408)*(var408 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var533)*(var533 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var56)*(var56 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var574)*(var574 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var663)*(var663 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var662 - var704)*(var704 - var662)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var663 - var148)*(var148 - var663)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var114)*(var114 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var121)*(var121 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var126)*(var126 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var167)*(var167 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var199)*(var199 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var311)*(var311 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var319)*(var319 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var394)*(var394 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var518)*(var518 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var554)*(var554 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var563)*(var563 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var612)*(var612 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var705)*(var705 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var664 - var93)*(var93 - var664)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var230)*(var230 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var241)*(var241 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var274)*(var274 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var390)*(var390 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var395)*(var395 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var541)*(var541 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var582)*(var582 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var665 - var701)*(var701 - var665)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var666 - var238)*(var238 - var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var666 - var597)*(var597 - var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var666 - var639)*(var639 - var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var666 - var686)*(var686 - var666)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var667 - var117)*(var117 - var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var667 - var419)*(var419 - var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var667 - var552)*(var552 - var667)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var668 - var638)*(var638 - var668)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var669 - var175)*(var175 - var669)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var134)*(var134 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var176)*(var176 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var188)*(var188 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var324)*(var324 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var4)*(var4 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var551)*(var551 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var581)*(var581 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var636)*(var636 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var646)*(var646 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var652)*(var652 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var677)*(var677 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var695)*(var695 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var186)*(var186 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var201)*(var201 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var30)*(var30 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var345)*(var345 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var386)*(var386 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var483)*(var483 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var537)*(var537 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var575)*(var575 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var613)*(var613 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var653)*(var653 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var670 - var79)*(var79 - var670)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var671 - var213)*(var213 - var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var671 - var327)*(var327 - var671)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var672 - var119)*(var119 - var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var672 - var274)*(var274 - var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var672 - var582)*(var582 - var672)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var673 - var465)*(var465 - var673)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var674 - var214)*(var214 - var674)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var676 - var246)*(var246 - var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var676 - var344)*(var344 - var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var676 - var423)*(var423 - var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var676 - var605)*(var605 - var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var676 - var625)*(var625 - var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var676 - var717)*(var717 - var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var676 - var718)*(var718 - var676)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var677 - var194)*(var194 - var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var677 - var262)*(var262 - var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var677 - var288)*(var288 - var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var677 - var315)*(var315 - var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var677 - var324)*(var324 - var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var677 - var646)*(var646 - var677)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var225)*(var225 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var230)*(var230 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var280)*(var280 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var390)*(var390 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var395)*(var395 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var52)*(var52 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var541)*(var541 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var6)*(var6 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var672)*(var672 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var678 - var701)*(var701 - var678)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var142)*(var142 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var206)*(var206 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var217)*(var217 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var242)*(var242 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var257)*(var257 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var376)*(var376 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var594)*(var594 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var63)*(var63 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var640)*(var640 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var647)*(var647 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var77)*(var77 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var679 - var91)*(var91 - var679)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var112)*(var112 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var140)*(var140 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var402)*(var402 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var81)*(var81 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var681 - var249)*(var249 - var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var681 - var397)*(var397 - var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var681 - var458)*(var458 - var681)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var682 - var177)*(var177 - var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var682 - var493)*(var493 - var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var682 - var84)*(var84 - var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var682 - var97)*(var97 - var682)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var112)*(var112 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var140)*(var140 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var190)*(var190 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var198)*(var198 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var263)*(var263 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var600)*(var600 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var611)*(var611 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var643)*(var643 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var683 - var68)*(var68 - var683)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var157)*(var157 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var165)*(var165 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var195)*(var195 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var269)*(var269 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var281)*(var281 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var283)*(var283 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var317)*(var317 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var323)*(var323 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var34)*(var34 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var375)*(var375 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var437)*(var437 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var480)*(var480 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var501)*(var501 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var685 - var697)*(var697 - var685)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var145)*(var145 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var206)*(var206 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var275)*(var275 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var354)*(var354 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var376)*(var376 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var429)*(var429 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var63)*(var63 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var679)*(var679 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var687 - var91)*(var91 - var687)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var100)*(var100 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var110)*(var110 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var162)*(var162 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var496)*(var496 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var51)*(var51 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var539)*(var539 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var711)*(var711 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var688 - var713)*(var713 - var688)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var689 - var128)*(var128 - var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var689 - var431)*(var431 - var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var689 - var525)*(var525 - var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var689 - var614)*(var614 - var689)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var105)*(var105 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var410)*(var410 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var471)*(var471 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var531)*(var531 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var690 - var117)*(var117 - var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var690 - var222)*(var222 - var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var690 - var37)*(var37 - var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var690 - var608)*(var608 - var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var690 - var626)*(var626 - var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var690 - var659)*(var659 - var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var690 - var667)*(var667 - var690)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var131)*(var131 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var18)*(var18 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var237)*(var237 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var264)*(var264 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var327)*(var327 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var328)*(var328 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var349)*(var349 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var638)*(var638 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var691 - var668)*(var668 - var691)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var693 - var167)*(var167 - var693)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var694 - var415)*(var415 - var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var694 - var54)*(var54 - var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var694 - var726)*(var726 - var694)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var695 - var188)*(var188 - var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var695 - var194)*(var194 - var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var695 - var315)*(var315 - var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var695 - var628)*(var628 - var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var695 - var652)*(var652 - var695)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var131)*(var131 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var183)*(var183 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var237)*(var237 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var24)*(var24 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var264)*(var264 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var327)*(var327 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var328)*(var328 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var349)*(var349 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var474)*(var474 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var488)*(var488 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var570)*(var570 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var638)*(var638 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var668)*(var668 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var696 - var671)*(var671 - var696)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var697 - var151)*(var151 - var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var697 - var281)*(var281 - var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var697 - var306)*(var306 - var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var697 - var34)*(var34 - var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var697 - var480)*(var480 - var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var697 - var90)*(var90 - var697)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var698 - var108)*(var108 - var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var698 - var154)*(var154 - var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var698 - var221)*(var221 - var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var698 - var247)*(var247 - var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var698 - var3)*(var3 - var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var698 - var39)*(var39 - var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var698 - var534)*(var534 - var698)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var137)*(var137 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var268)*(var268 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var27)*(var27 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var28)*(var28 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var282)*(var282 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var523)*(var523 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var571)*(var571 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var585)*(var585 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var632)*(var632 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var699 - var715)*(var715 - var699)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var246)*(var246 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var423)*(var423 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var476)*(var476 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var490)*(var490 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var625)*(var625 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var676)*(var676 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var717)*(var717 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var83)*(var83 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var102)*(var102 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var13)*(var13 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var153)*(var153 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var203)*(var203 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var276)*(var276 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var292)*(var292 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var331)*(var331 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var473)*(var473 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var494)*(var494 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var649)*(var649 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var723)*(var723 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var73)*(var73 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var76)*(var76 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var118)*(var118 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var258)*(var258 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var286)*(var286 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var335)*(var335 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var35)*(var35 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var415)*(var415 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var504)*(var504 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var54)*(var54 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var578)*(var578 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var602)*(var602 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var645)*(var645 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var719)*(var719 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var700 - var726)*(var726 - var700)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var701 - var390)*(var390 - var701)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var14)*(var14 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var240)*(var240 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var267)*(var267 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var278)*(var278 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var346)*(var346 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var533)*(var533 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var55)*(var55 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var663)*(var663 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var702 - var704)*(var704 - var702)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var703 - var520)*(var520 - var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var703 - var538)*(var538 - var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var703 - var93)*(var93 - var703)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var14)*(var14 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var240)*(var240 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var267)*(var267 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var278)*(var278 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var346)*(var346 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var533)*(var533 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var55)*(var55 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var56)*(var56 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var574)*(var574 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var576)*(var576 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var714)*(var714 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var704 - var72)*(var72 - var704)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var121)*(var121 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var126)*(var126 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var167)*(var167 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var365)*(var365 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var538)*(var538 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var563)*(var563 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var693)*(var693 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var703)*(var703 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var93)*(var93 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var705 - var94)*(var94 - var705)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var706 - var132)*(var132 - var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var706 - var215)*(var215 - var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var706 - var564)*(var564 - var706)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var707 - var196)*(var196 - var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var707 - var397)*(var397 - var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var707 - var681)*(var681 - var707)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var708 - var433)*(var433 - var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var708 - var524)*(var524 - var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var708 - var614)*(var614 - var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var708 - var728)*(var728 - var708)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var11)*(var11 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var196)*(var196 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var320)*(var320 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var397)*(var397 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var434)*(var434 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var458)*(var458 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var587)*(var587 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var681)*(var681 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var709 - var692)*(var692 - var709)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var223)*(var223 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var244)*(var244 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var31)*(var31 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var333)*(var333 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var374)*(var374 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var471)*(var471 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var531)*(var531 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var69)*(var69 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var119)*(var119 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var241)*(var241 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var274)*(var274 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var390)*(var390 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var541)*(var541 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var6)*(var6 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var642)*(var642 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var710 - var701)*(var701 - var710)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var711 - var100)*(var100 - var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var711 - var103)*(var103 - var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var711 - var110)*(var110 - var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var711 - var561)*(var561 - var711)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var712 - var307)*(var307 - var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var712 - var497)*(var497 - var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var712 - var564)*(var564 - var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var712 - var706)*(var706 - var712)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var713 - var270)*(var270 - var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var713 - var479)*(var479 - var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var713 - var51)*(var51 - var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var713 - var539)*(var539 - var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var713 - var561)*(var561 - var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var713 - var568)*(var568 - var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var713 - var650)*(var650 - var713)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var14)*(var14 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var148)*(var148 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var267)*(var267 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var346)*(var346 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var533)*(var533 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var574)*(var574 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var576)*(var576 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var714 - var663)*(var663 - var714)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var715 - var137)*(var137 - var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var715 - var523)*(var523 - var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var715 - var571)*(var571 - var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var715 - var585)*(var585 - var715)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var136)*(var136 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var137)*(var137 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var28)*(var28 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var282)*(var282 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var364)*(var364 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var44)*(var44 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var560)*(var560 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var571)*(var571 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var585)*(var585 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var658)*(var658 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var699)*(var699 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var725)*(var725 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var716 - var80)*(var80 - var716)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var717 - var246)*(var246 - var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var717 - var296)*(var296 - var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var717 - var344)*(var344 - var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var717 - var372)*(var372 - var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var717 - var423)*(var423 - var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var717 - var57)*(var57 - var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var717 - var83)*(var83 - var717)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var718 - var296)*(var296 - var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var718 - var344)*(var344 - var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var718 - var372)*(var372 - var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var718 - var476)*(var476 - var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var718 - var605)*(var605 - var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var718 - var83)*(var83 - var718)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var719 - var123)*(var123 - var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var719 - var477)*(var477 - var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var719 - var726)*(var726 - var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var719 - var8)*(var8 - var719)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var148)*(var148 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var240)*(var240 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var533)*(var533 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var137)*(var137 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var268)*(var268 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var282)*(var282 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var287)*(var287 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var364)*(var364 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var523)*(var523 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var571)*(var571 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var720 - var725)*(var725 - var720)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var259)*(var259 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var302)*(var302 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var362)*(var362 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var366)*(var366 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var448)*(var448 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var465)*(var465 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var49)*(var49 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var565)*(var565 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var722 - var673)*(var673 - var722)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var102)*(var102 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var13)*(var13 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var276)*(var276 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var331)*(var331 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var337)*(var337 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var473)*(var473 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var649)*(var649 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var727)*(var727 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var73)*(var73 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var723 - var76)*(var76 - var723)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var724 - var158)*(var158 - var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var724 - var318)*(var318 - var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var724 - var371)*(var371 - var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var724 - var630)*(var630 - var724)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var137)*(var137 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var268)*(var268 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var28)*(var28 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var282)*(var282 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var360)*(var360 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var571)*(var571 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var632)*(var632 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var715)*(var715 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var725 - var80)*(var80 - var725)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var726 - var415)*(var415 - var726)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var726 - var8)*(var8 - var726)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var727 - var13)*(var13 - var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var727 - var406)*(var406 - var727)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var406)*(var406 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var498)*(var498 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var105)*(var105 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var173)*(var173 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var244)*(var244 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var31)*(var31 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var333)*(var333 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var374)*(var374 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var410)*(var410 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var487)*(var487 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var492)*(var492 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var522)*(var522 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var69)*(var69 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var1)*(var1 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var318)*(var318 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var595)*(var595 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var630)*(var630 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var724)*(var724 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var153)*(var153 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var276)*(var276 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var494)*(var494 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var498)*(var498 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var727)*(var727 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var73)*(var73 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var82)*(var82 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var145)*(var145 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var257)*(var257 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var647)*(var647 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var91)*(var91 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var721)*(var721 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var54)*(var54 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var571)*(var571 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var38)*(var38 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var475)*(var475 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var643)*(var643 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var102)*(var102 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var13)*(var13 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var276)*(var276 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var331)*(var331 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var406)*(var406 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var498)*(var498 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var649)*(var649 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var73)*(var73 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var177)*(var177 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var248)*(var248 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var84)*(var84 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var149)*(var149 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var226)*(var226 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var293)*(var293 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var307)*(var307 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var401)*(var401 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var445)*(var445 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var464)*(var464 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var495)*(var495 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var712)*(var712 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var253)*(var253 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var255)*(var255 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var338)*(var338 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var341)*(var341 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var392)*(var392 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var403)*(var403 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var43)*(var43 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var439)*(var439 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var440)*(var440 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var87 - var567)*(var567 - var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var131)*(var131 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var183)*(var183 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var213)*(var213 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var237)*(var237 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var24)*(var24 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var251)*(var251 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var328)*(var328 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var349)*(var349 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var488)*(var488 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var558)*(var558 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var570)*(var570 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var638)*(var638 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var668)*(var668 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var372)*(var372 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var625)*(var625 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var163)*(var163 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var302)*(var302 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var362)*(var362 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var367)*(var367 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var404)*(var404 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var42)*(var42 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var447)*(var447 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var465)*(var465 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var466)*(var466 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var673)*(var673 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var722)*(var722 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var242)*(var242 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var429)*(var429 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var627)*(var627 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var63)*(var63 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var647)*(var647 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var296)*(var296 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var344)*(var344 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var476)*(var476 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var605)*(var605 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var92 - var718)*(var718 - var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var199)*(var199 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var394)*(var394 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var520)*(var520 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var93 - var693)*(var693 - var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var520)*(var520 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var693)*(var693 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var14)*(var14 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var267)*(var267 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var346)*(var346 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var408)*(var408 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var421)*(var421 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var533)*(var533 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var56)*(var56 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var702)*(var702 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var704)*(var704 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var714)*(var714 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var11)*(var11 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var196)*(var196 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var218)*(var218 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var235)*(var235 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var249)*(var249 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var320)*(var320 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var397)*(var397 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var399)*(var399 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var427)*(var427 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var580)*(var580 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var635)*(var635 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var692)*(var692 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var177)*(var177 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var493)*(var493 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var85)*(var85 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var105)*(var105 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var135)*(var135 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var159)*(var159 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var21)*(var21 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var223)*(var223 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var244)*(var244 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var321)*(var321 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var333)*(var333 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var374)*(var374 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var378)*(var378 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var381)*(var381 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var471)*(var471 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var487)*(var487 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var492)*(var492 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var511)*(var511 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var69)*(var69 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var74)*(var74 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var241)*(var241 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var274)*(var274 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var356)*(var356 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var390)*(var390 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var395)*(var395 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var409)*(var409 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var451)*(var451 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var52)*(var52 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var541)*(var541 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var582)*(var582 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var642)*(var642 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var678)*(var678 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var144) && (var109 + var144 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var210) && (var109 + var210 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var246) && (var109 + var246 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var296) && (var109 + var296 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var329) && (var109 + var329 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var344) && (var109 + var344 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var372) && (var109 + var372 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var423) && (var109 + var423 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var453) && (var109 + var453 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var476) && (var109 + var476 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var484) && (var109 + var484 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var490) && (var109 + var490 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var515) && (var109 + var515 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var550) && (var109 + var550 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var57) && (var109 + var57 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var590) && (var109 + var590 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var60) && (var109 + var60 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var605) && (var109 + var605 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var625) && (var109 + var625 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var676) && (var109 + var676 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var7) && (var109 + var7 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var717) && (var109 + var717 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var718) && (var109 + var718 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var83) && (var109 + var83 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var89) && (var109 + var89 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var109 != var92) && (var109 + var92 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var100) && (var122 + var100 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var103) && (var122 + var103 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var110) && (var122 + var110 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var120) && (var122 + var120 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var129) && (var122 + var129 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var146) && (var122 + var146 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var162) && (var122 + var162 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var205) && (var122 + var205 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var232) && (var122 + var232 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var270) && (var122 + var270 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var310) && (var122 + var310 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var32) && (var122 + var32 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var41) && (var122 + var41 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var432) && (var122 + var432 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var442) && (var122 + var442 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var479) && (var122 + var479 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var496) && (var122 + var496 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var51) && (var122 + var51 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var539) && (var122 + var539 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var561) && (var122 + var561 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var568) && (var122 + var568 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var644) && (var122 + var644 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var650) && (var122 + var650 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var688) && (var122 + var688 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var711) && (var122 + var711 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var713) && (var122 + var713 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var0) && (var133 + var0 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var128) && (var133 + var128 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var141) && (var133 + var141 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var181) && (var133 + var181 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var197) && (var133 + var197 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var224) && (var133 + var224 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var239) && (var133 + var239 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var265) && (var133 + var265 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var290) && (var133 + var290 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var303) && (var133 + var303 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var389) && (var133 + var389 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var431) && (var133 + var431 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var433) && (var133 + var433 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var478) && (var133 + var478 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var524) && (var133 + var524 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var525) && (var133 + var525 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var577) && (var133 + var577 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var583) && (var133 + var583 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var589) && (var133 + var589 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var59) && (var133 + var59 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var599) && (var133 + var599 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var603) && (var133 + var603 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var614) && (var133 + var614 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var689) && (var133 + var689 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var708) && (var133 + var708 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var133 != var728) && (var133 + var728 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var112) && (var143 + var112 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var140) && (var143 + var140 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var190) && (var143 + var190 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var198) && (var143 + var198 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var204) && (var143 + var204 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var228) && (var143 + var228 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var252) && (var143 + var252 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var263) && (var143 + var263 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var289) && (var143 + var289 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var313) && (var143 + var313 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var322) && (var143 + var322 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var38) && (var143 + var38 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var402) && (var143 + var402 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var475) && (var143 + var475 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var503) && (var143 + var503 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var596) && (var143 + var596 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var600) && (var143 + var600 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var611) && (var143 + var611 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var621) && (var143 + var621 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var637) && (var143 + var637 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var643) && (var143 + var643 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var654) && (var143 + var654 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var68) && (var143 + var68 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var683) && (var143 + var683 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var684) && (var143 + var684 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var143 != var81) && (var143 + var81 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var107) && (var17 + var107 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var132) && (var17 + var132 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var149) && (var17 + var149 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var215) && (var17 + var215 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var226) && (var17 + var226 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var243) && (var17 + var243 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var293) && (var17 + var293 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var307) && (var17 + var307 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var33) && (var17 + var33 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var343) && (var17 + var343 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var350) && (var17 + var350 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var401) && (var17 + var401 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var428) && (var17 + var428 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var438) && (var17 + var438 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var445) && (var17 + var445 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var464) && (var17 + var464 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var495) && (var17 + var495 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var497) && (var17 + var497 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var544) && (var17 + var544 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var564) && (var17 + var564 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var593) && (var17 + var593 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var619) && (var17 + var619 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var66) && (var17 + var66 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var706) && (var17 + var706 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var712) && (var17 + var712 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var17 != var86) && (var17 + var86 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var101) && (var182 + var101 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var11) && (var182 + var11 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var196) && (var182 + var196 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var218) && (var182 + var218 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var235) && (var182 + var235 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var249) && (var182 + var249 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var256) && (var182 + var256 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var298) && (var182 + var298 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var320) && (var182 + var320 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var355) && (var182 + var355 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var387) && (var182 + var387 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var397) && (var182 + var397 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var399) && (var182 + var399 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var427) && (var182 + var427 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var434) && (var182 + var434 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var456) && (var182 + var456 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var458) && (var182 + var458 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var580) && (var182 + var580 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var587) && (var182 + var587 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var633) && (var182 + var633 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var635) && (var182 + var635 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var681) && (var182 + var681 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var692) && (var182 + var692 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var707) && (var182 + var707 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var709) && (var182 + var709 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var182 != var96) && (var182 + var96 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var127) && (var185 + var127 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var151) && (var185 + var151 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var157) && (var185 + var157 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var165) && (var185 + var165 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var193) && (var185 + var193 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var195) && (var185 + var195 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var208) && (var185 + var208 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var269) && (var185 + var269 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var281) && (var185 + var281 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var283) && (var185 + var283 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var306) && (var185 + var306 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var317) && (var185 + var317 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var323) && (var185 + var323 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var34) && (var185 + var34 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var375) && (var185 + var375 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var416) && (var185 + var416 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var437) && (var185 + var437 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var480) && (var185 + var480 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var50) && (var185 + var50 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var501) && (var185 + var501 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var526) && (var185 + var526 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var606) && (var185 + var606 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var648) && (var185 + var648 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var685) && (var185 + var685 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var697) && (var185 + var697 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var185 != var90) && (var185 + var90 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var113) && (var216 + var113 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var115) && (var216 + var115 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var171) && (var216 + var171 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var23) && (var216 + var23 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var261) && (var216 + var261 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var297) && (var216 + var297 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var304) && (var216 + var304 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var352) && (var216 + var352 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var359) && (var216 + var359 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var369) && (var216 + var369 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var373) && (var216 + var373 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var380) && (var216 + var380 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var385) && (var216 + var385 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var412) && (var216 + var412 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var470) && (var216 + var470 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var481) && (var216 + var481 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var528) && (var216 + var528 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var529) && (var216 + var529 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var536) && (var216 + var536 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var553) && (var216 + var553 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var569) && (var216 + var569 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var58) && (var216 + var58 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var618) && (var216 + var618 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var623) && (var216 + var623 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var661) && (var216 + var661 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var216 != var78) && (var216 + var78 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var1) && (var233 + var1 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var124) && (var233 + var124 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var125) && (var233 + var125 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var150) && (var233 + var150 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var158) && (var233 + var158 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var170) && (var233 + var170 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var178) && (var233 + var178 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var20) && (var233 + var20 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var219) && (var233 + var219 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var231) && (var233 + var231 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var285) && (var233 + var285 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var299) && (var233 + var299 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var312) && (var233 + var312 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var316) && (var233 + var316 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var318) && (var233 + var318 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var371) && (var233 + var371 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var413) && (var233 + var413 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var595) && (var233 + var595 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var607) && (var233 + var607 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var61) && (var233 + var61 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var617) && (var233 + var617 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var630) && (var233 + var630 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var631) && (var233 + var631 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var641) && (var233 + var641 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var724) && (var233 + var724 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var233 != var75) && (var233 + var75 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var160) && (var294 + var160 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var169) && (var294 + var169 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var186) && (var294 + var186 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var19) && (var294 + var19 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var201) && (var294 + var201 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var212) && (var294 + var212 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var29) && (var294 + var29 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var291) && (var294 + var291 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var30) && (var294 + var30 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var345) && (var294 + var345 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var358) && (var294 + var358 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var386) && (var294 + var386 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var391) && (var294 + var391 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var393) && (var294 + var393 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var449) && (var294 + var449 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var460) && (var294 + var460 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var483) && (var294 + var483 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var500) && (var294 + var500 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var537) && (var294 + var537 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var575) && (var294 + var575 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var598) && (var294 + var598 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var613) && (var294 + var613 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var653) && (var294 + var653 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var670) && (var294 + var670 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var721) && (var294 + var721 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var294 != var79) && (var294 + var79 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var106) && (var295 + var106 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var131) && (var295 + var131 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var139) && (var295 + var139 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var18) && (var295 + var18 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var183) && (var295 + var183 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var213) && (var295 + var213 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var237) && (var295 + var237 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var24) && (var295 + var24 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var251) && (var295 + var251 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var264) && (var295 + var264 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var327) && (var295 + var327 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var328) && (var295 + var328 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var349) && (var295 + var349 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var474) && (var295 + var474 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var488) && (var295 + var488 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var558) && (var295 + var558 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var570) && (var295 + var570 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var579) && (var295 + var579 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var601) && (var295 + var601 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var638) && (var295 + var638 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var656) && (var295 + var656 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var668) && (var295 + var668 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var671) && (var295 + var671 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var691) && (var295 + var691 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var696) && (var295 + var696 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var295 != var88) && (var295 + var88 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var138) && (var325 + var138 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var155) && (var325 + var155 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var156) && (var325 + var156 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var164) && (var325 + var164 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var168) && (var325 + var168 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var180) && (var325 + var180 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var189) && (var325 + var189 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var2) && (var325 + var2 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var238) && (var325 + var238 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var245) && (var325 + var245 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var250) && (var325 + var250 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var254) && (var325 + var254 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var26) && (var325 + var26 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var353) && (var325 + var353 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var430) && (var325 + var430 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var485) && (var325 + var485 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var486) && (var325 + var486 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var508) && (var325 + var508 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var512) && (var325 + var512 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var527) && (var325 + var527 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var540) && (var325 + var540 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var597) && (var325 + var597 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var62) && (var325 + var62 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var639) && (var325 + var639 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var666) && (var325 + var666 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var325 != var686) && (var325 + var686 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var104) && (var326 + var104 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var108) && (var326 + var108 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var154) && (var326 + var154 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var209) && (var326 + var209 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var221) && (var326 + var221 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var247) && (var326 + var247 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var3) && (var326 + var3 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var308) && (var326 + var308 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var340) && (var326 + var340 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var370) && (var326 + var370 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var39) && (var326 + var39 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var396) && (var326 + var396 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var45) && (var326 + var45 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var468) && (var326 + var468 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var472) && (var326 + var472 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var491) && (var326 + var491 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var5) && (var326 + var5 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var502) && (var326 + var502 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var516) && (var326 + var516 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var534) && (var326 + var534 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var542) && (var326 + var542 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var566) && (var326 + var566 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var573) && (var326 + var573 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var615) && (var326 + var615 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var620) && (var326 + var620 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var326 != var698) && (var326 + var698 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var111) && (var330 + var111 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var117) && (var330 + var117 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var130) && (var330 + var130 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var211) && (var330 + var211 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var222) && (var330 + var222 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var227) && (var330 + var227 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var266) && (var330 + var266 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var271) && (var330 + var271 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var279) && (var330 + var279 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var361) && (var330 + var361 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var368) && (var330 + var368 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var37) && (var330 + var37 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var388) && (var330 + var388 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var419) && (var330 + var419 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var422) && (var330 + var422 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var436) && (var330 + var436 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var510) && (var330 + var510 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var552) && (var330 + var552 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var586) && (var330 + var586 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var608) && (var330 + var608 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var624) && (var330 + var624 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var626) && (var330 + var626 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var629) && (var330 + var629 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var659) && (var330 + var659 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var667) && (var330 + var667 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var330 != var690) && (var330 + var690 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var116) && (var348 + var116 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var136) && (var348 + var136 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var137) && (var348 + var137 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var187) && (var348 + var187 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var192) && (var348 + var192 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var268) && (var348 + var268 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var27) && (var348 + var27 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var28) && (var348 + var28 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var282) && (var348 + var282 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var287) && (var348 + var287 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var360) && (var348 + var360 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var364) && (var348 + var364 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var44) && (var348 + var44 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var523) && (var348 + var523 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var560) && (var348 + var560 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var571) && (var348 + var571 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var585) && (var348 + var585 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var632) && (var348 + var632 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var634) && (var348 + var634 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var658) && (var348 + var658 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var699) && (var348 + var699 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var715) && (var348 + var715 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var716) && (var348 + var716 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var720) && (var348 + var720 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var725) && (var348 + var725 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var348 != var80) && (var348 + var80 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var105) && (var383 + var105 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var135) && (var383 + var135 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var159) && (var383 + var159 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var173) && (var383 + var173 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var191) && (var383 + var191 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var21) && (var383 + var21 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var223) && (var383 + var223 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var244) && (var383 + var244 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var272) && (var383 + var272 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var31) && (var383 + var31 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var321) && (var383 + var321 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var333) && (var383 + var333 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var374) && (var383 + var374 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var378) && (var383 + var378 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var381) && (var383 + var381 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var410) && (var383 + var410 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var471) && (var383 + var471 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var487) && (var383 + var487 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var492) && (var383 + var492 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var511) && (var383 + var511 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var522) && (var383 + var522 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var531) && (var383 + var531 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var69) && (var383 + var69 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var71) && (var383 + var71 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var74) && (var383 + var74 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var383 != var98) && (var383 + var98 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var163) && (var405 + var163 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var259) && (var405 + var259 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var302) && (var405 + var302 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var309) && (var405 + var309 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var339) && (var405 + var339 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var362) && (var405 + var362 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var366) && (var405 + var366 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var367) && (var405 + var367 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var377) && (var405 + var377 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var404) && (var405 + var404 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var42) && (var405 + var42 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var420) && (var405 + var420 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var447) && (var405 + var447 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var448) && (var405 + var448 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var463) && (var405 + var463 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var465) && (var405 + var465 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var466) && (var405 + var466 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var49) && (var405 + var49 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var507) && (var405 + var507 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var559) && (var405 + var559 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var565) && (var405 + var565 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var609) && (var405 + var609 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var610) && (var405 + var610 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var673) && (var405 + var673 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var722) && (var405 + var722 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var405 != var9) && (var405 + var9 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var102) && (var407 + var102 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var13) && (var407 + var13 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var153) && (var407 + var153 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var174) && (var407 + var174 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var203) && (var407 + var203 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var276) && (var407 + var276 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var292) && (var407 + var292 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var331) && (var407 + var331 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var337) && (var407 + var337 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var342) && (var407 + var342 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var382) && (var407 + var382 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var406) && (var407 + var406 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var473) && (var407 + var473 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var494) && (var407 + var494 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var498) && (var407 + var498 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var513) && (var407 + var513 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var543) && (var407 + var543 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var592) && (var407 + var592 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var649) && (var407 + var649 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var65) && (var407 + var65 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var70) && (var407 + var70 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var723) && (var407 + var723 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var727) && (var407 + var727 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var73) && (var407 + var73 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var76) && (var407 + var76 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var407 != var82) && (var407 + var82 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var118) && (var411 + var118 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var123) && (var411 + var123 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var152) && (var411 + var152 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var22) && (var411 + var22 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var258) && (var411 + var258 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var286) && (var411 + var286 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var335) && (var411 + var335 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var35) && (var411 + var35 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var363) && (var411 + var363 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var400) && (var411 + var400 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var415) && (var411 + var415 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var450) && (var411 + var450 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var454) && (var411 + var454 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var477) && (var411 + var477 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var504) && (var411 + var504 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var54) && (var411 + var54 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var578) && (var411 + var578 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var602) && (var411 + var602 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var604) && (var411 + var604 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var645) && (var411 + var645 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var651) && (var411 + var651 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var694) && (var411 + var694 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var700) && (var411 + var700 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var719) && (var411 + var719 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var726) && (var411 + var726 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var411 != var8) && (var411 + var8 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var175) && (var446 + var175 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var179) && (var446 + var179 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var214) && (var446 + var214 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var220) && (var446 + var220 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var234) && (var446 + var234 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var305) && (var446 + var305 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var384) && (var446 + var384 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var398) && (var446 + var398 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var417) && (var446 + var417 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var418) && (var446 + var418 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var444) && (var446 + var444 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var461) && (var446 + var461 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var462) && (var446 + var462 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var47) && (var446 + var47 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var505) && (var446 + var505 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var509) && (var446 + var509 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var53) && (var446 + var53 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var530) && (var446 + var530 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var535) && (var446 + var535 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var562) && (var446 + var562 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var591) && (var446 + var591 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var616) && (var446 + var616 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var655) && (var446 + var655 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var660) && (var446 + var660 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var669) && (var446 + var669 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var446 != var674) && (var446 + var674 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var119) && (var467 + var119 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var161) && (var467 + var161 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var225) && (var467 + var225 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var230) && (var467 + var230 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var241) && (var467 + var241 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var274) && (var467 + var274 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var280) && (var467 + var280 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var347) && (var467 + var347 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var356) && (var467 + var356 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var390) && (var467 + var390 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var395) && (var467 + var395 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var409) && (var467 + var409 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var451) && (var467 + var451 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var48) && (var467 + var48 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var517) && (var467 + var517 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var52) && (var467 + var52 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var541) && (var467 + var541 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var582) && (var467 + var582 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var6) && (var467 + var6 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var642) && (var467 + var642 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var665) && (var467 + var665 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var672) && (var467 + var672 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var678) && (var467 + var678 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var701) && (var467 + var701 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var710) && (var467 + var710 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var467 != var99) && (var467 + var99 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var147) && (var482 + var147 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var16) && (var482 + var16 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var177) && (var482 + var177 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var248) && (var482 + var248 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var25) && (var482 + var25 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var260) && (var482 + var260 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var273) && (var482 + var273 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var277) && (var482 + var277 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var284) && (var482 + var284 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var300) && (var482 + var300 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var334) && (var482 + var334 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var357) && (var482 + var357 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var379) && (var482 + var379 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var493) && (var482 + var493 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var506) && (var482 + var506 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var514) && (var482 + var514 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var519) && (var482 + var519 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var521) && (var482 + var521 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var545) && (var482 + var545 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var555) && (var482 + var555 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var572) && (var482 + var572 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var64) && (var482 + var64 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var682) && (var482 + var682 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var84) && (var482 + var84 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var85) && (var482 + var85 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var482 != var97) && (var482 + var97 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var114) && (var588 + var114 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var121) && (var588 + var121 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var126) && (var588 + var126 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var167) && (var588 + var167 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var199) && (var588 + var199 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var207) && (var588 + var207 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var311) && (var588 + var311 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var319) && (var588 + var319 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var365) && (var588 + var365 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var394) && (var588 + var394 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var425) && (var588 + var425 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var469) && (var588 + var469 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var489) && (var588 + var489 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var518) && (var588 + var518 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var520) && (var588 + var520 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var538) && (var588 + var538 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var549) && (var588 + var549 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var554) && (var588 + var554 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var563) && (var588 + var563 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var612) && (var588 + var612 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var664) && (var588 + var664 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var693) && (var588 + var693 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var703) && (var588 + var703 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var705) && (var588 + var705 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var93) && (var588 + var93 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var588 != var94) && (var588 + var94 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var12) && (var622 + var12 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var15) && (var622 + var15 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var166) && (var622 + var166 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var200) && (var622 + var200 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var253) && (var622 + var253 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var255) && (var622 + var255 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var301) && (var622 + var301 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var336) && (var622 + var336 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var338) && (var622 + var338 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var341) && (var622 + var341 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var351) && (var622 + var351 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var36) && (var622 + var36 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var392) && (var622 + var392 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var403) && (var622 + var403 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var426) && (var622 + var426 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var43) && (var622 + var43 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var439) && (var622 + var439 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var440) && (var622 + var440 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var452) && (var622 + var452 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var457) && (var622 + var457 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var546) && (var622 + var546 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var557) && (var622 + var557 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var567) && (var622 + var567 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var584) && (var622 + var584 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var657) && (var622 + var657 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var622 != var87) && (var622 + var87 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var14) && (var675 + var14 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var148) && (var675 + var148 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var236) && (var675 + var236 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var240) && (var675 + var240 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var267) && (var675 + var267 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var278) && (var675 + var278 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var346) && (var675 + var346 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var408) && (var675 + var408 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var421) && (var675 + var421 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var424) && (var675 + var424 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var441) && (var675 + var441 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var443) && (var675 + var443 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var455) && (var675 + var455 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var459) && (var675 + var459 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var533) && (var675 + var533 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var55) && (var675 + var55 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var56) && (var675 + var56 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var574) && (var675 + var574 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var576) && (var675 + var576 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var662) && (var675 + var662 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var663) && (var675 + var663 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var702) && (var675 + var702 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var704) && (var675 + var704 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var714) && (var675 + var714 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var72) && (var675 + var72 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var675 != var95) && (var675 + var95 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var10) && (var680 + var10 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var134) && (var680 + var134 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var176) && (var680 + var176 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var184) && (var680 + var184 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var188) && (var680 + var188 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var194) && (var680 + var194 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var202) && (var680 + var202 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var229) && (var680 + var229 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var262) && (var680 + var262 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var288) && (var680 + var288 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var314) && (var680 + var314 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var315) && (var680 + var315 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var324) && (var680 + var324 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var4) && (var680 + var4 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var40) && (var680 + var40 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var499) && (var680 + var499 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var548) && (var680 + var548 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var551) && (var680 + var551 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var581) && (var680 + var581 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var628) && (var680 + var628 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var636) && (var680 + var636 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var646) && (var680 + var646 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var652) && (var680 + var652 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var67) && (var680 + var67 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var677) && (var680 + var677 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var680 != var695) && (var680 + var695 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var142 == var216)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 == var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 == var405)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var206 == var467)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var217 == var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var242 == var411)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var257 == var294)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var275 == var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var332 == var233)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var354 == var446)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var376 == var407)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var414 == var330)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var429 == var348)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var435 == var383)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 == var295)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var532 == var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var547 == var680)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var556 == var675)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var594 == var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var627 == var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 == var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var640 == var326)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var679 == var482)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var687 == var622)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 == var588)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var91 == var325)){myvar0= 1;}
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
576 x[576]
577 x[577]
578 x[578]
579 x[579]
580 x[580]
581 x[581]
582 x[582]
583 x[583]
584 x[584]
585 x[585]
586 x[586]
587 x[587]
588 x[588]
589 x[589]
590 x[590]
591 x[591]
592 x[592]
593 x[593]
594 x[594]
595 x[595]
596 x[596]
597 x[597]
598 x[598]
599 x[599]
600 x[600]
601 x[601]
602 x[602]
603 x[603]
604 x[604]
605 x[605]
606 x[606]
607 x[607]
608 x[608]
609 x[609]
610 x[610]
611 x[611]
612 x[612]
613 x[613]
614 x[614]
615 x[615]
616 x[616]
617 x[617]
618 x[618]
619 x[619]
620 x[620]
621 x[621]
622 x[622]
623 x[623]
624 x[624]
625 x[625]
626 x[626]
627 x[627]
628 x[628]
629 x[629]
630 x[630]
631 x[631]
632 x[632]
633 x[633]
634 x[634]
635 x[635]
636 x[636]
637 x[637]
638 x[638]
639 x[639]
640 x[640]
641 x[641]
642 x[642]
643 x[643]
644 x[644]
645 x[645]
646 x[646]
647 x[647]
648 x[648]
649 x[649]
650 x[650]
651 x[651]
652 x[652]
653 x[653]
654 x[654]
655 x[655]
656 x[656]
657 x[657]
658 x[658]
659 x[659]
660 x[660]
661 x[661]
662 x[662]
663 x[663]
664 x[664]
665 x[665]
666 x[666]
667 x[667]
668 x[668]
669 x[669]
670 x[670]
671 x[671]
672 x[672]
673 x[673]
674 x[674]
675 x[675]
676 x[676]
677 x[677]
678 x[678]
679 x[679]
680 x[680]
681 x[681]
682 x[682]
683 x[683]
684 x[684]
685 x[685]
686 x[686]
687 x[687]
688 x[688]
689 x[689]
690 x[690]
691 x[691]
692 x[692]
693 x[693]
694 x[694]
695 x[695]
696 x[696]
697 x[697]
698 x[698]
699 x[699]
700 x[700]
701 x[701]
702 x[702]
703 x[703]
704 x[704]
705 x[705]
706 x[706]
707 x[707]
708 x[708]
709 x[709]
710 x[710]
711 x[711]
712 x[712]
713 x[713]
714 x[714]
715 x[715]
716 x[716]
717 x[717]
718 x[718]
719 x[719]
720 x[720]
721 x[721]
722 x[722]
723 x[723]
724 x[724]
725 x[725]
726 x[726]
727 x[727]
728 x[728]
 */}
