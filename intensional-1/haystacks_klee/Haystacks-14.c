
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 0) && (var40 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 0) && (var41 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 0) && (var42 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 0) && (var43 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 0) && (var44 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 0) && (var45 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 0) && (var46 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 0) && (var47 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 0) && (var48 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 0) && (var49 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 0) && (var50 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 0) && (var51 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 0) && (var52 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 0) && (var53 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 0) && (var54 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 0) && (var55 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 0) && (var56 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 0) && (var57 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 0) && (var58 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 0) && (var59 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 0) && (var60 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 0) && (var61 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 0) && (var62 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 0) && (var63 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 0) && (var64 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 0) && (var65 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 0) && (var66 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 0) && (var67 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 0) && (var68 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 0) && (var69 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 0) && (var70 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 0) && (var71 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 0) && (var72 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 0) && (var73 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 0) && (var74 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 0) && (var75 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 0) && (var76 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 0) && (var77 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 0) && (var78 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((myvar0 == 1) && (var79 >= 0) && (var79 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((myvar0 == 1) && (var80 >= 0) && (var80 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((myvar0 == 1) && (var81 >= 0) && (var81 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((myvar0 == 1) && (var82 >= 0) && (var82 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((myvar0 == 1) && (var83 >= 0) && (var83 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((myvar0 == 1) && (var84 >= 0) && (var84 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((myvar0 == 1) && (var85 >= 0) && (var85 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((myvar0 == 1) && (var86 >= 0) && (var86 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((myvar0 == 1) && (var87 >= 0) && (var87 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((myvar0 == 1) && (var88 >= 0) && (var88 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((myvar0 == 1) && (var89 >= 0) && (var89 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((myvar0 == 1) && (var90 >= 0) && (var90 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((myvar0 == 1) && (var91 >= 0) && (var91 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((myvar0 == 1) && (var92 >= 0) && (var92 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((myvar0 == 1) && (var93 >= 0) && (var93 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((myvar0 == 1) && (var94 >= 0) && (var94 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((myvar0 == 1) && (var95 >= 0) && (var95 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((myvar0 == 1) && (var96 >= 0) && (var96 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((myvar0 == 1) && (var97 >= 0) && (var97 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((myvar0 == 1) && (var98 >= 0) && (var98 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((myvar0 == 1) && (var99 >= 0) && (var99 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((myvar0 == 1) && (var100 >= 0) && (var100 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((myvar0 == 1) && (var101 >= 0) && (var101 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((myvar0 == 1) && (var102 >= 0) && (var102 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((myvar0 == 1) && (var103 >= 0) && (var103 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((myvar0 == 1) && (var104 >= 0) && (var104 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((myvar0 == 1) && (var105 >= 0) && (var105 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((myvar0 == 1) && (var106 >= 0) && (var106 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((myvar0 == 1) && (var107 >= 0) && (var107 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((myvar0 == 1) && (var108 >= 0) && (var108 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((myvar0 == 1) && (var109 >= 0) && (var109 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((myvar0 == 1) && (var110 >= 0) && (var110 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((myvar0 == 1) && (var111 >= 0) && (var111 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((myvar0 == 1) && (var112 >= 0) && (var112 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((myvar0 == 1) && (var113 >= 0) && (var113 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((myvar0 == 1) && (var114 >= 0) && (var114 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((myvar0 == 1) && (var115 >= 0) && (var115 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((myvar0 == 1) && (var116 >= 0) && (var116 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((myvar0 == 1) && (var117 >= 0) && (var117 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((myvar0 == 1) && (var118 >= 0) && (var118 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
if((myvar0 == 1) && (var119 >= 0) && (var119 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
if((myvar0 == 1) && (var120 >= 0) && (var120 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
if((myvar0 == 1) && (var121 >= 0) && (var121 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
if((myvar0 == 1) && (var122 >= 0) && (var122 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
if((myvar0 == 1) && (var123 >= 0) && (var123 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
if((myvar0 == 1) && (var124 >= 0) && (var124 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
if((myvar0 == 1) && (var125 >= 0) && (var125 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
if((myvar0 == 1) && (var126 >= 0) && (var126 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
if((myvar0 == 1) && (var127 >= 0) && (var127 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
if((myvar0 == 1) && (var128 >= 0) && (var128 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
if((myvar0 == 1) && (var129 >= 0) && (var129 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
if((myvar0 == 1) && (var130 >= 0) && (var130 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
if((myvar0 == 1) && (var131 >= 0) && (var131 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
if((myvar0 == 1) && (var132 >= 0) && (var132 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
if((myvar0 == 1) && (var133 >= 0) && (var133 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
if((myvar0 == 1) && (var134 >= 0) && (var134 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
if((myvar0 == 1) && (var135 >= 0) && (var135 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
if((myvar0 == 1) && (var136 >= 0) && (var136 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
if((myvar0 == 1) && (var137 >= 0) && (var137 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
if((myvar0 == 1) && (var138 >= 0) && (var138 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
if((myvar0 == 1) && (var139 >= 0) && (var139 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
if((myvar0 == 1) && (var140 >= 0) && (var140 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
if((myvar0 == 1) && (var141 >= 0) && (var141 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
if((myvar0 == 1) && (var142 >= 0) && (var142 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
if((myvar0 == 1) && (var143 >= 0) && (var143 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
if((myvar0 == 1) && (var144 >= 0) && (var144 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
if((myvar0 == 1) && (var145 >= 0) && (var145 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
if((myvar0 == 1) && (var146 >= 0) && (var146 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
if((myvar0 == 1) && (var147 >= 0) && (var147 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
if((myvar0 == 1) && (var148 >= 0) && (var148 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
if((myvar0 == 1) && (var149 >= 0) && (var149 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
if((myvar0 == 1) && (var150 >= 0) && (var150 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
if((myvar0 == 1) && (var151 >= 0) && (var151 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
if((myvar0 == 1) && (var152 >= 0) && (var152 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
if((myvar0 == 1) && (var153 >= 0) && (var153 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
if((myvar0 == 1) && (var154 >= 0) && (var154 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
if((myvar0 == 1) && (var155 >= 0) && (var155 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
if((myvar0 == 1) && (var156 >= 0) && (var156 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
if((myvar0 == 1) && (var157 >= 0) && (var157 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
if((myvar0 == 1) && (var158 >= 0) && (var158 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
if((myvar0 == 1) && (var159 >= 0) && (var159 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
if((myvar0 == 1) && (var160 >= 0) && (var160 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
if((myvar0 == 1) && (var161 >= 0) && (var161 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
if((myvar0 == 1) && (var162 >= 0) && (var162 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
if((myvar0 == 1) && (var163 >= 0) && (var163 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
if((myvar0 == 1) && (var164 >= 0) && (var164 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
if((myvar0 == 1) && (var165 >= 0) && (var165 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
if((myvar0 == 1) && (var166 >= 0) && (var166 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
if((myvar0 == 1) && (var167 >= 0) && (var167 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
if((myvar0 == 1) && (var168 >= 0) && (var168 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
if((myvar0 == 1) && (var169 >= 0) && (var169 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
if((myvar0 == 1) && (var170 >= 0) && (var170 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
if((myvar0 == 1) && (var171 >= 0) && (var171 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
if((myvar0 == 1) && (var172 >= 0) && (var172 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
if((myvar0 == 1) && (var173 >= 0) && (var173 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
if((myvar0 == 1) && (var174 >= 0) && (var174 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
if((myvar0 == 1) && (var175 >= 0) && (var175 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
if((myvar0 == 1) && (var176 >= 0) && (var176 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
if((myvar0 == 1) && (var177 >= 0) && (var177 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
if((myvar0 == 1) && (var178 >= 0) && (var178 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
if((myvar0 == 1) && (var179 >= 0) && (var179 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
if((myvar0 == 1) && (var180 >= 0) && (var180 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
if((myvar0 == 1) && (var181 >= 0) && (var181 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
if((myvar0 == 1) && (var182 >= 0) && (var182 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
if((myvar0 == 1) && (var183 >= 0) && (var183 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
if((myvar0 == 1) && (var184 >= 0) && (var184 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
if((myvar0 == 1) && (var185 >= 0) && (var185 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
if((myvar0 == 1) && (var186 >= 0) && (var186 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
if((myvar0 == 1) && (var187 >= 0) && (var187 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
if((myvar0 == 1) && (var188 >= 0) && (var188 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
if((myvar0 == 1) && (var189 >= 0) && (var189 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
if((myvar0 == 1) && (var190 >= 0) && (var190 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
if((myvar0 == 1) && (var191 >= 0) && (var191 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
if((myvar0 == 1) && (var192 >= 0) && (var192 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
if((myvar0 == 1) && (var193 >= 0) && (var193 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
if((myvar0 == 1) && (var194 >= 0) && (var194 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
if((myvar0 == 1) && (var195 >= 0) && (var195 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var0 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var1 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var100 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var101 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var103 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var104 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var105 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var106 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var107 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var108 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var109 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var111 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var112 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var113 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var115 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var116 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var119 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var120 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var123 != var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var124 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var125 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var128 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var129 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var13 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var130 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var131 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var132 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var133 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var134 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var136 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var138 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var139 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var141 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var143 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var144 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var145 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var146 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var147 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var148 != var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var151 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var152 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var153 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var154 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var155 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var156 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var157 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var159 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var16 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var160 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var161 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var163 != var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var166 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var168 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var169 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var170 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var172 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var173 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var176 != var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var177 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var178 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var179 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var181 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var182 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var183 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var184 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var185 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var187 != var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var188 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var189 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var19 != var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var191 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var192 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var193 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var194 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var20 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var21 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var132)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var179)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var26 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var30 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var33 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var92)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var41 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var121)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var5 != var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var165)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var55 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var65 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var66 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var195)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var70 != var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var71 != var150)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var72 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var81 != var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var82 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var83 != var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var84 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 != var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 != var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var88 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var118)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var89 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var9 != var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var144)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var90 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var114)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var92 != var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var139)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var162)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var181)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var94 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var95 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var96 != var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var126)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var97 != var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var98 != var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var137)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var99 != var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var192)*(var192 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var69)*(var69 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var10 - var165)*(var165 - var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var100 - var121)*(var121 - var100)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var100)*(var100 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var55)*(var55 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var101 - var64)*(var64 - var101)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var109)*(var109 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var137)*(var137 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var164)*(var164 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var102 - var33)*(var33 - var102)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var147)*(var147 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var158)*(var158 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var195)*(var195 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var3)*(var3 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var48)*(var48 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var103 - var51)*(var51 - var103)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var100)*(var100 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var101)*(var101 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var134)*(var134 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var2)*(var2 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var49)*(var49 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var55)*(var55 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var64)*(var64 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var68)*(var68 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var104 - var91)*(var91 - var104)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var185)*(var185 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var190)*(var190 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var105 - var25)*(var25 - var105)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var129)*(var129 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var150)*(var150 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var160)*(var160 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var106 - var41)*(var41 - var106)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var107 - var10)*(var10 - var107)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var126)*(var126 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var180)*(var180 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var77)*(var77 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var108 - var79)*(var79 - var108)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var109 - var164)*(var164 - var109)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var161)*(var161 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var92)*(var92 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var171)*(var171 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var53)*(var53 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var60)*(var60 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var110 - var67)*(var67 - var110)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var102)*(var102 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var164)*(var164 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var33)*(var33 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var111 - var99)*(var99 - var111)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var130)*(var130 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var22)*(var22 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var112 - var39)*(var39 - var112)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var126)*(var126 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var136)*(var136 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var138)*(var138 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var163)*(var163 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var113 - var97)*(var97 - var113)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var161)*(var161 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var22)*(var22 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var39)*(var39 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var115 - var92)*(var92 - var115)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var116 - var76)*(var76 - var116)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var119 - var132)*(var132 - var119)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var47)*(var47 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var53)*(var53 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var57)*(var57 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var60)*(var60 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var67)*(var67 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var86)*(var86 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var162)*(var162 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var17)*(var17 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var173)*(var173 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var176)*(var176 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var120 - var94)*(var94 - var120)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var102)*(var102 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var111)*(var111 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var137)*(var137 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var172)*(var172 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var19)*(var19 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var6)*(var6 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var123 - var99)*(var99 - var123)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var103)*(var103 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var158)*(var158 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var195)*(var195 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var3)*(var3 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var51)*(var51 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var7)*(var7 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var124 - var88)*(var88 - var124)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var166)*(var166 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var175)*(var175 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var194)*(var194 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var23)*(var23 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var30)*(var30 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var38)*(var38 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var46)*(var46 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var125 - var66)*(var66 - var125)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var11)*(var11 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var112)*(var112 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var115)*(var115 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var130)*(var130 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var39)*(var39 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var128 - var92)*(var92 - var128)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var16)*(var16 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var71)*(var71 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var129 - var81)*(var81 - var129)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var27)*(var27 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var13 - var73)*(var73 - var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var161)*(var161 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var193)*(var193 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var130 - var92)*(var92 - var130)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var142)*(var142 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var16)*(var16 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var131 - var71)*(var71 - var131)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var151)*(var151 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var157)*(var157 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var165)*(var165 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var133 - var54)*(var54 - var133)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var134 - var64)*(var64 - var134)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var136 - var79)*(var79 - var136)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var126)*(var126 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var136)*(var136 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var154)*(var154 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var180)*(var180 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var138 - var35)*(var35 - var138)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var144)*(var144 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var27)*(var27 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var56)*(var56 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var14 - var73)*(var73 - var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var11)*(var11 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var112)*(var112 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var193)*(var193 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var39)*(var39 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var141 - var92)*(var92 - var141)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var142 - var150)*(var150 - var142)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var143 - var76)*(var76 - var143)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var139)*(var139 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var162)*(var162 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var145 - var74)*(var74 - var145)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var11)*(var11 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var112)*(var112 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var114)*(var114 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var146 - var115)*(var115 - var146)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var158)*(var158 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var147 - var195)*(var195 - var147)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var108)*(var108 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var138)*(var138 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var77)*(var77 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var148 - var79)*(var79 - var148)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var110)*(var110 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var12)*(var12 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var171)*(var171 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var47)*(var47 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var67)*(var67 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var149 - var85)*(var85 - var149)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var12)*(var12 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var186)*(var186 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var47)*(var47 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var53)*(var53 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var67)*(var67 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var85)*(var85 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var86)*(var86 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var10)*(var10 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var107)*(var107 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var151 - var165)*(var165 - var151)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var1)*(var1 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var116)*(var116 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var152 - var118)*(var118 - var152)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var129)*(var129 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var142)*(var142 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var16)*(var16 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var40)*(var40 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var153 - var41)*(var41 - var153)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var154 - var180)*(var180 - var154)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var173)*(var173 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var181)*(var181 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var4)*(var4 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var74)*(var74 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var155 - var94)*(var94 - var155)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var179)*(var179 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var185)*(var185 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var192)*(var192 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var156 - var20)*(var20 - var156)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var107)*(var107 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var165)*(var165 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var54)*(var54 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var65)*(var65 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var157 - var8)*(var8 - var157)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var195)*(var195 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var158 - var51)*(var51 - var158)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var0)*(var0 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var105)*(var105 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var156)*(var156 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var179)*(var179 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var185)*(var185 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var190)*(var190 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var25)*(var25 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var159 - var69)*(var69 - var159)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var16 - var150)*(var150 - var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var160 - var142)*(var142 - var160)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var193)*(var193 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var161 - var39)*(var39 - var161)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var136)*(var136 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var180)*(var180 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var35)*(var35 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var77)*(var77 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var79)*(var79 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var163 - var97)*(var97 - var163)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var164 - var137)*(var137 - var164)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var31)*(var31 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var166 - var66)*(var66 - var166)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var189)*(var189 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var5)*(var5 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var168 - var80)*(var80 - var168)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var119)*(var119 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var132)*(var132 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var168)*(var168 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var178)*(var178 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var189)*(var189 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var24)*(var24 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var169 - var83)*(var83 - var169)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var139)*(var139 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var155)*(var155 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var162)*(var162 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var173)*(var173 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var181)*(var181 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var0)*(var0 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var105)*(var105 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var190)*(var190 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var192)*(var192 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var20)*(var20 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var25)*(var25 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var170 - var50)*(var50 - var170)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var171 - var53)*(var53 - var171)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var102)*(var102 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var111)*(var111 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var137)*(var137 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var172 - var33)*(var33 - var172)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var145)*(var145 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var173 - var181)*(var181 - var173)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var132)*(var132 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var189)*(var189 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var5)*(var5 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var174 - var80)*(var80 - var174)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var31)*(var31 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var175 - var63)*(var63 - var175)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var145)*(var145 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var155)*(var155 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var17)*(var17 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var173)*(var173 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var181)*(var181 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var176 - var4)*(var4 - var176)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var139)*(var139 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var145)*(var145 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var155)*(var155 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var17)*(var17 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var173)*(var173 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var176)*(var176 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var181)*(var181 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var4)*(var4 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var74)*(var74 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var177 - var94)*(var94 - var177)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var119)*(var119 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var132)*(var132 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var168)*(var168 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var174)*(var174 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var189)*(var189 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var178 - var24)*(var24 - var178)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var147)*(var147 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var195)*(var195 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var18 - var88)*(var88 - var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var180 - var126)*(var126 - var180)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var100)*(var100 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var134)*(var134 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var182 - var91)*(var91 - var182)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var102)*(var102 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var183 - var33)*(var33 - var183)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var13)*(var13 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var52)*(var52 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var73)*(var73 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var184 - var90)*(var90 - var184)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var179)*(var179 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var190)*(var190 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var185 - var20)*(var20 - var185)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var110)*(var110 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var149)*(var149 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var171)*(var171 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var37)*(var37 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var53)*(var53 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var60)*(var60 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var186 - var85)*(var85 - var186)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var133)*(var133 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var151)*(var151 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var157)*(var157 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var165)*(var165 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var187 - var8)*(var8 - var187)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var188 - var30)*(var30 - var188)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var189 - var80)*(var80 - var189)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var111)*(var111 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var137)*(var137 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var33)*(var33 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var58)*(var58 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var19 - var6)*(var6 - var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var179)*(var179 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var20)*(var20 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var190 - var50)*(var50 - var190)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var52)*(var52 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var191 - var90)*(var90 - var191)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var105)*(var105 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var190)*(var190 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var20)*(var20 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var25)*(var25 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var192 - var69)*(var69 - var192)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var114)*(var114 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var39)*(var39 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var193 - var92)*(var92 - var193)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var166)*(var166 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var175)*(var175 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var188)*(var188 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var63)*(var63 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var194 - var84)*(var84 - var194)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var121)*(var121 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var134)*(var134 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var68)*(var68 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var91)*(var91 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var20 - var50)*(var50 - var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var52)*(var52 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var56)*(var56 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var21 - var73)*(var73 - var21)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var114)*(var114 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var166)*(var166 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var175)*(var175 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var63)*(var63 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var168)*(var168 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var190)*(var190 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var20)*(var20 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var103)*(var103 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var124)*(var124 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var18)*(var18 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var3)*(var3 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var48)*(var48 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var51)*(var51 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var7)*(var7 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var26 - var88)*(var88 - var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var1)*(var1 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var118)*(var118 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var143)*(var143 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var76)*(var76 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var28 - var89)*(var89 - var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var116)*(var116 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var118)*(var118 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var28)*(var28 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var75)*(var75 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var76)*(var76 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var89)*(var89 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var95)*(var95 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var147)*(var147 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var158)*(var158 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var48)*(var48 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var175)*(var175 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var66)*(var66 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var119)*(var119 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var132)*(var132 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var169)*(var169 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var189)*(var189 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var24)*(var24 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var34)*(var34 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var5)*(var5 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var83)*(var83 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var164)*(var164 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var132)*(var132 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var174)*(var174 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var189)*(var189 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var24)*(var24 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var5)*(var5 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var154)*(var154 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var180)*(var180 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var77)*(var77 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var79)*(var79 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var110)*(var110 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var149)*(var149 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var47)*(var47 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var53)*(var53 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var57)*(var57 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var86)*(var86 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var188)*(var188 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var23)*(var23 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var63)*(var63 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var114)*(var114 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var39 - var22)*(var22 - var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var173)*(var173 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var129)*(var129 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var131)*(var131 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var150)*(var150 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var16)*(var16 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var41)*(var41 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var71)*(var71 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var81)*(var81 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var150)*(var150 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var16)*(var16 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var71)*(var71 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var41 - var81)*(var81 - var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var100)*(var100 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var134)*(var134 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var45 - var2)*(var2 - var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var23)*(var23 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var66)*(var66 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var53)*(var53 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var67)*(var67 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var147)*(var147 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var195)*(var195 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var48 - var51)*(var51 - var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var182)*(var182 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var2)*(var2 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var64)*(var64 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var49 - var68)*(var68 - var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var132)*(var132 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var5 - var80)*(var80 - var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var195)*(var195 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var13)*(var13 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var144)*(var144 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var90)*(var90 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var10)*(var10 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var151)*(var151 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var8)*(var8 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var121)*(var121 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var68)*(var68 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var91)*(var91 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var13)*(var13 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var144)*(var144 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var52)*(var52 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var171)*(var171 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var60)*(var60 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var67)*(var67 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var102)*(var102 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var109)*(var109 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var111)*(var111 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var137)*(var137 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var164)*(var164 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var183)*(var183 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var99)*(var99 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var133)*(var133 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var157)*(var157 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var165)*(var165 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var8)*(var8 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var98)*(var98 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var33)*(var33 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var171)*(var171 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var150)*(var150 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var160)*(var160 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var71)*(var71 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var10)*(var10 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var107)*(var107 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var157)*(var157 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var165)*(var165 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var54)*(var54 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var65)*(var65 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var8)*(var8 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var121)*(var121 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var65 - var165)*(var165 - var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var66 - var175)*(var175 - var66)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var121)*(var121 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var91)*(var91 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var179)*(var179 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var190)*(var190 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var50)*(var50 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var103)*(var103 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var7 - var48)*(var48 - var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var147)*(var147 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var18)*(var18 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var195)*(var195 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var48)*(var48 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var51)*(var51 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var142)*(var142 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var16)*(var16 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var71 - var160)*(var160 - var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var116)*(var116 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var118)*(var118 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var28)*(var28 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var75)*(var75 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var72 - var95)*(var95 - var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var27)*(var27 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var139)*(var139 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var162)*(var162 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var116)*(var116 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var28)*(var28 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var76)*(var76 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var89)*(var89 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var95)*(var95 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var1)*(var1 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var76 - var118)*(var118 - var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var180)*(var180 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var165)*(var165 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var142)*(var142 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var81 - var150)*(var150 - var81)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var13)*(var13 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var184)*(var184 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var191)*(var191 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var82 - var27)*(var27 - var82)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var119)*(var119 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var132)*(var132 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var168)*(var168 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var174)*(var174 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var178)*(var178 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var189)*(var189 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var83 - var80)*(var80 - var83)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var166)*(var166 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var175)*(var175 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var188)*(var188 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var31)*(var31 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var84 - var66)*(var66 - var84)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var110)*(var110 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var171)*(var171 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var47)*(var47 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var57)*(var57 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var60)*(var60 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var85 - var67)*(var67 - var85)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var47)*(var47 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var53)*(var53 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var57)*(var57 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var60)*(var60 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var86 - var67)*(var67 - var86)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var158)*(var158 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var195)*(var195 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var48)*(var48 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var88 - var51)*(var51 - var88)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var143)*(var143 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var89 - var76)*(var76 - var89)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var27)*(var27 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var56)*(var56 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var90 - var27)*(var27 - var90)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var100)*(var100 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var121)*(var121 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var91 - var64)*(var64 - var91)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var94 - var74)*(var74 - var94)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var116)*(var116 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var95 - var118)*(var118 - var95)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var96 - var118)*(var118 - var96)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var154)*(var154 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var77)*(var77 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var97 - var79)*(var79 - var97)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var10)*(var10 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var107)*(var107 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var151)*(var151 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var157)*(var157 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var165)*(var165 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var54)*(var54 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var98 - var65)*(var65 - var98)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var102)*(var102 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var164)*(var164 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var99 - var33)*(var33 - var99)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var110 == var140)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 == var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var149 == var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var15 == var167)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var171 == var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var186 == var127)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 == var117)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 == var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var53 == var135)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 == var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 == var93)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var85 == var122)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var86 == var87)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var100) && (var117 + var100 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var101) && (var117 + var101 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var104) && (var117 + var104 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var121) && (var117 + var121 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var134) && (var117 + var134 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var182) && (var117 + var182 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var2) && (var117 + var2 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var45) && (var117 + var45 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var49) && (var117 + var49 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var55) && (var117 + var55 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var64) && (var117 + var64 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var68) && (var117 + var68 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var117 != var91) && (var117 + var91 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var108) && (var122 + var108 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var113) && (var122 + var113 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var126) && (var122 + var126 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var136) && (var122 + var136 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var138) && (var122 + var138 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var148) && (var122 + var148 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var154) && (var122 + var154 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var163) && (var122 + var163 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var180) && (var122 + var180 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var35) && (var122 + var35 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var77) && (var122 + var77 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var79) && (var122 + var79 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var122 != var97) && (var122 + var97 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var10) && (var127 + var10 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var107) && (var127 + var107 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var133) && (var127 + var133 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var151) && (var127 + var151 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var157) && (var127 + var157 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var165) && (var127 + var165 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var187) && (var127 + var187 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var54) && (var127 + var54 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var59) && (var127 + var59 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var62) && (var127 + var62 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var65) && (var127 + var65 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var8) && (var127 + var8 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var127 != var98) && (var127 + var98 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var13) && (var135 + var13 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var14) && (var135 + var14 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var144) && (var135 + var144 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var184) && (var135 + var184 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var191) && (var135 + var191 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var21) && (var135 + var21 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var27) && (var135 + var27 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var52) && (var135 + var52 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var56) && (var135 + var56 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var73) && (var135 + var73 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var82) && (var135 + var82 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var9) && (var135 + var9 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var135 != var90) && (var135 + var90 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var1) && (var140 + var1 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var116) && (var140 + var116 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var118) && (var140 + var118 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var143) && (var140 + var143 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var152) && (var140 + var152 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var28) && (var140 + var28 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var29) && (var140 + var29 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var72) && (var140 + var72 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var75) && (var140 + var75 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var76) && (var140 + var76 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var89) && (var140 + var89 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var95) && (var140 + var95 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var140 != var96) && (var140 + var96 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var103) && (var167 + var103 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var124) && (var167 + var124 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var147) && (var167 + var147 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var158) && (var167 + var158 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var18) && (var167 + var18 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var195) && (var167 + var195 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var26) && (var167 + var26 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var3) && (var167 + var3 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var48) && (var167 + var48 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var51) && (var167 + var51 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var7) && (var167 + var7 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var70) && (var167 + var70 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var167 != var88) && (var167 + var88 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var102) && (var36 + var102 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var109) && (var36 + var109 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var111) && (var36 + var111 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var123) && (var36 + var123 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var137) && (var36 + var137 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var164) && (var36 + var164 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var172) && (var36 + var172 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var183) && (var36 + var183 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var19) && (var36 + var19 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var33) && (var36 + var33 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var58) && (var36 + var58 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var6) && (var36 + var6 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var36 != var99) && (var36 + var99 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var120) && (var42 + var120 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var139) && (var42 + var139 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var145) && (var42 + var145 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var155) && (var42 + var155 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var162) && (var42 + var162 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var17) && (var42 + var17 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var173) && (var42 + var173 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var176) && (var42 + var176 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var177) && (var42 + var177 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var181) && (var42 + var181 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var4) && (var42 + var4 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var74) && (var42 + var74 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var42 != var94) && (var42 + var94 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var119) && (var43 + var119 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var132) && (var43 + var132 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var168) && (var43 + var168 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var169) && (var43 + var169 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var174) && (var43 + var174 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var178) && (var43 + var178 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var189) && (var43 + var189 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var24) && (var43 + var24 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var32) && (var43 + var32 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var34) && (var43 + var34 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var5) && (var43 + var5 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var80) && (var43 + var80 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var43 != var83) && (var43 + var83 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var125) && (var44 + var125 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var166) && (var44 + var166 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var175) && (var44 + var175 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var188) && (var44 + var188 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var194) && (var44 + var194 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var23) && (var44 + var23 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var30) && (var44 + var30 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var31) && (var44 + var31 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var38) && (var44 + var38 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var46) && (var44 + var46 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var63) && (var44 + var63 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var66) && (var44 + var66 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var44 != var84) && (var44 + var84 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var0) && (var78 + var0 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var105) && (var78 + var105 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var156) && (var78 + var156 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var159) && (var78 + var159 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var170) && (var78 + var170 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var179) && (var78 + var179 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var185) && (var78 + var185 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var190) && (var78 + var190 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var192) && (var78 + var192 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var20) && (var78 + var20 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var25) && (var78 + var25 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var50) && (var78 + var50 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var78 != var69) && (var78 + var69 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var11) && (var87 + var11 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var112) && (var87 + var112 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var114) && (var87 + var114 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var115) && (var87 + var115 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var128) && (var87 + var128 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var130) && (var87 + var130 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var141) && (var87 + var141 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var146) && (var87 + var146 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var161) && (var87 + var161 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var193) && (var87 + var193 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var22) && (var87 + var22 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var39) && (var87 + var39 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var87 != var92) && (var87 + var92 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var106) && (var93 + var106 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var129) && (var93 + var129 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var131) && (var93 + var131 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var142) && (var93 + var142 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var150) && (var93 + var150 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var153) && (var93 + var153 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var16) && (var93 + var16 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var160) && (var93 + var160 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var40) && (var93 + var40 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var41) && (var93 + var41 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var61) && (var93 + var61 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var71) && (var93 + var71 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var93 != var81) && (var93 + var81 >=2 )){myvar0= 1;}
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
 */}
