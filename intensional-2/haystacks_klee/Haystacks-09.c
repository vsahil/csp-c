
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 0) && (var40 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 0) && (var41 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 0) && (var42 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 0) && (var43 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 0) && (var44 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 0) && (var45 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 0) && (var46 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 0) && (var47 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 0) && (var48 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 0) && (var49 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 0) && (var50 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 0) && (var51 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 0) && (var52 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 0) && (var53 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 0) && (var54 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 0) && (var55 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 0) && (var56 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 0) && (var57 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 0) && (var58 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 0) && (var59 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 0) && (var60 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 0) && (var61 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 0) && (var62 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 0) && (var63 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 0) && (var64 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 0) && (var65 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 0) && (var66 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 0) && (var67 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 0) && (var68 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 0) && (var69 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 0) && (var70 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 0) && (var71 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 0) && (var72 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 0) && (var73 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 0) && (var74 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 0) && (var75 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 0) && (var76 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 0) && (var77 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 0) && (var78 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((myvar0 == 1) && (var79 >= 0) && (var79 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((myvar0 == 1) && (var80 >= 0) && (var80 <= 8)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var11 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var12 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var17 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var18 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var2 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var22 != var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var23 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var24 != var76)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var28 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var29 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var3 != var18)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var31 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var32 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var34 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var35 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var36 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var45)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var37 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var4 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 != var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var42 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var43 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var45 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var46 != var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var48 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var49 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var53)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var50 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var51 != var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var48)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var52 != var7)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var54 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var56 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var26)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var57 != var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var58 != var10)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var59 != var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 != var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var60 != var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var61 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var62 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var63 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var64 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var68 != var16)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var14)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var69 != var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var7 != var27)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var73 != var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var28)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var74 != var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var75 != var36)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var76 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var77 != var65)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var78 != var49)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var20)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 != var39)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var80 != var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var0 - var15)*(var15 - var0)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var11 - var26)*(var26 - var11)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var0)*(var0 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var10)*(var10 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var12 - var58)*(var58 - var12)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var15 - var10)*(var10 - var15)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var17 - var27)*(var27 - var17)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var34)*(var34 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var2 - var49)*(var49 - var2)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var12)*(var12 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var22 - var15)*(var15 - var22)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var21)*(var21 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var4)*(var4 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var44)*(var44 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var23 - var56)*(var56 - var23)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var42)*(var42 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var24 - var55)*(var55 - var24)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var39)*(var39 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var25 - var8)*(var8 - var25)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var0)*(var0 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var15)*(var15 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var29 - var58)*(var58 - var29)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var16)*(var16 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var3 - var63)*(var63 - var3)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var30 - var26)*(var26 - var30)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var30)*(var30 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var31 - var43)*(var43 - var31)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var32 - var17)*(var17 - var32)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var33 - var21)*(var21 - var33)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var49)*(var49 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var34 - var78)*(var78 - var34)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var16)*(var16 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var18)*(var18 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var60)*(var60 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var35 - var68)*(var68 - var35)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var37 - var2)*(var2 - var37)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var20)*(var20 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var38 - var8)*(var8 - var38)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var21)*(var21 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var44)*(var44 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var4 - var56)*(var56 - var4)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var25)*(var25 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var38)*(var38 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var39)*(var39 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var47)*(var47 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var40 - var8)*(var8 - var40)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var42 - var55)*(var55 - var42)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var43 - var30)*(var30 - var43)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var21)*(var21 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var44 - var33)*(var33 - var44)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var11)*(var11 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var26)*(var26 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var30)*(var30 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var31)*(var31 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var46 - var9)*(var9 - var46)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var25)*(var25 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var38)*(var38 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var79)*(var79 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var47 - var8)*(var8 - var47)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var28)*(var28 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var36)*(var36 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var59)*(var59 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var70)*(var70 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var50 - var74)*(var74 - var50)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var18)*(var18 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var51 - var3)*(var3 - var51)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var17)*(var17 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var52 - var61)*(var61 - var52)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var27)*(var27 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var54 - var7)*(var7 - var54)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var55 - var65)*(var65 - var55)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var21)*(var21 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var56 - var33)*(var33 - var56)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var57 - var30)*(var30 - var57)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var58 - var15)*(var15 - var58)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var28)*(var28 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var53)*(var53 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var59 - var70)*(var70 - var59)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var25)*(var25 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var38)*(var38 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var47)*(var47 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var79)*(var79 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var6 - var8)*(var8 - var6)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var18)*(var18 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var60 - var63)*(var63 - var60)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var54)*(var54 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var61 - var7)*(var7 - var61)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var24)*(var24 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var42)*(var42 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var64)*(var64 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var65)*(var65 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var76)*(var76 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var62 - var77)*(var77 - var62)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var63 - var18)*(var18 - var63)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var24)*(var24 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var42)*(var42 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var65)*(var65 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var76)*(var76 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var64 - var77)*(var77 - var64)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var0)*(var0 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var10)*(var10 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var15)*(var15 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var29)*(var29 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var67 - var58)*(var58 - var67)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var18)*(var18 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var3)*(var3 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var51)*(var51 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var60)*(var60 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var68 - var63)*(var63 - var68)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var2)*(var2 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var45)*(var45 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var69 - var49)*(var49 - var69)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var36)*(var36 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var70 - var53)*(var53 - var70)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var21)*(var21 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var4)*(var4 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var73 - var44)*(var44 - var73)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var36)*(var36 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var53)*(var53 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var74 - var75)*(var75 - var74)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var28)*(var28 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var53)*(var53 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var75 - var70)*(var70 - var75)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var24)*(var24 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var42)*(var42 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var55)*(var55 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var77 - var76)*(var76 - var77)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var78 - var14)*(var14 - var78)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var25)*(var25 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var38)*(var38 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var79 - var8)*(var8 - var79)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var20)*(var20 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var8 - var39)*(var39 - var8)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var80 - var21)*(var21 - var80)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var26)*(var26 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) &&  0 > (var9 - var30)*(var30 - var9)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var21) && (var1 + var21 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var23) && (var1 + var23 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var33) && (var1 + var33 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var4) && (var1 + var4 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var44) && (var1 + var44 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var56) && (var1 + var56 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var73) && (var1 + var73 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var1 != var80) && (var1 + var80 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var24) && (var13 + var24 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var42) && (var13 + var42 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var55) && (var13 + var55 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var62) && (var13 + var62 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var64) && (var13 + var64 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var65) && (var13 + var65 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var76) && (var13 + var76 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var13 != var77) && (var13 + var77 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var16) && (var19 + var16 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var18) && (var19 + var18 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var3) && (var19 + var3 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var35) && (var19 + var35 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var51) && (var19 + var51 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var60) && (var19 + var60 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var63) && (var19 + var63 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var19 != var68) && (var19 + var68 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var14) && (var41 + var14 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var2) && (var41 + var2 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var34) && (var41 + var34 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var37) && (var41 + var37 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var45) && (var41 + var45 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var49) && (var41 + var49 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var69) && (var41 + var69 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var41 != var78) && (var41 + var78 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var28) && (var5 + var28 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var36) && (var5 + var36 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var50) && (var5 + var50 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var53) && (var5 + var53 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var59) && (var5 + var59 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var70) && (var5 + var70 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var74) && (var5 + var74 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var5 != var75) && (var5 + var75 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var0) && (var66 + var0 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var10) && (var66 + var10 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var12) && (var66 + var12 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var15) && (var66 + var15 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var22) && (var66 + var22 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var29) && (var66 + var29 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var58) && (var66 + var58 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var66 != var67) && (var66 + var67 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var17) && (var71 + var17 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var27) && (var71 + var27 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var32) && (var71 + var32 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var48) && (var71 + var48 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var52) && (var71 + var52 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var54) && (var71 + var54 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var61) && (var71 + var61 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var71 != var7) && (var71 + var7 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var11) && (var72 + var11 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var26) && (var72 + var26 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var30) && (var72 + var30 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var31) && (var72 + var31 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var43) && (var72 + var43 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var46) && (var72 + var46 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var57) && (var72 + var57 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if(( myvar0 == 1) && (var72 != var9) && (var72 + var9 >=2 )){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var25 == var13)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var38 == var5)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var39 == var72)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40 == var1)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var47 == var41)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var6 == var71)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var79 == var19)){myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var8 == var66)){myvar0= 1;}
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
 */}
