
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
if((var0 >= 0) & (var0 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 0) & (var12 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 0) & (var13 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 0) & (var14 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 0) & (var15 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 0) & (var16 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 0) & (var17 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 0) & (var18 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 0) & (var19 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 0) & (var20 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 0) & (var21 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 0) & (var22 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((var23 >= 0) & (var23 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((var24 >= 0) & (var24 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((var25 >= 0) & (var25 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((var26 >= 0) & (var26 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((var27 >= 0) & (var27 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((var28 >= 0) & (var28 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((var29 >= 0) & (var29 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((var30 >= 0) & (var30 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((var31 >= 0) & (var31 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((var32 >= 0) & (var32 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((var33 >= 0) & (var33 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((var34 >= 0) & (var34 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((var35 >= 0) & (var35 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((var36 >= 0) & (var36 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((var37 >= 0) & (var37 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((var38 >= 0) & (var38 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((var39 >= 0) & (var39 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((var40 >= 0) & (var40 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((var41 >= 0) & (var41 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((var42 >= 0) & (var42 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((var43 >= 0) & (var43 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((var44 >= 0) & (var44 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((var45 >= 0) & (var45 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((var46 >= 0) & (var46 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((var47 >= 0) & (var47 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((var48 >= 0) & (var48 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((var49 >= 0) & (var49 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((var50 >= 0) & (var50 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((var51 >= 0) & (var51 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((var52 >= 0) & (var52 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((var53 >= 0) & (var53 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((var54 >= 0) & (var54 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((var55 >= 0) & (var55 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((var56 >= 0) & (var56 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((var57 >= 0) & (var57 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((var58 >= 0) & (var58 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((var59 >= 0) & (var59 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((var60 >= 0) & (var60 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((var61 >= 0) & (var61 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((var62 >= 0) & (var62 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((var63 >= 0) & (var63 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((var64 >= 0) & (var64 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((var65 >= 0) & (var65 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((var66 >= 0) & (var66 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((var67 >= 0) & (var67 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((var68 >= 0) & (var68 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((var69 >= 0) & (var69 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((var70 >= 0) & (var70 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((var71 >= 0) & (var71 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((var72 >= 0) & (var72 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((var73 >= 0) & (var73 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((var74 >= 0) & (var74 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((var75 >= 0) & (var75 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((var76 >= 0) & (var76 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((var77 >= 0) & (var77 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((var78 >= 0) & (var78 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((var79 >= 0) & (var79 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((var80 >= 0) & (var80 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((var81 >= 0) & (var81 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((var82 >= 0) & (var82 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((var83 >= 0) & (var83 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((var84 >= 0) & (var84 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((var85 >= 0) & (var85 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((var86 >= 0) & (var86 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((var87 >= 0) & (var87 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((var88 >= 0) & (var88 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((var89 >= 0) & (var89 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((var90 >= 0) & (var90 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((var91 >= 0) & (var91 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((var92 >= 0) & (var92 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((var93 >= 0) & (var93 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((var94 >= 0) & (var94 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((var95 >= 0) & (var95 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((var96 >= 0) & (var96 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((var97 >= 0) & (var97 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((var98 >= 0) & (var98 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((var99 >= 0) & (var99 <= 1) & 1) {myvar0= 1;}
else {exit(0);}
if(( var1 == 1 & var13 == 1 & var68 == 0 ) |  0) 
exit(0);
if(( var14 == 1 & var59 == 1 & var63 == 0 ) |  0) 
exit(0);
if(( var2 == 1 & var67 == 1 & var88 == 0 ) |  0) 
exit(0);
if(( var34 == 1 & var40 == 1 & var96 == 0 ) |  0) 
exit(0);
if(( var28 == 1 & var29 == 1 & var39 == 0 ) |  0) 
exit(0);
if(( var39 == 1 & var62 == 1 & var75 == 0 ) |  0) 
exit(0);
if(( var11 == 1 & var46 == 1 & var51 == 0 ) |  0) 
exit(0);
if(( var9 == 1 & var42 == 1 & var87 == 0 ) |  0) 
exit(0);
if(( var9 == 1 & var72 == 1 & var87 == 0 ) |  0) 
exit(0);
if(( var10 == 1 & var27 == 1 & var72 == 0 ) |  0) 
exit(0);
if(( var18 == 1 & var21 == 1 & var66 == 0 ) |  0) 
exit(0);
if(( var21 == 1 & var66 == 1 & var77 == 0 ) |  0) 
exit(0);
if(( var66 == 1 & var77 == 1 & var82 == 0 ) |  0) 
exit(0);
if(( var32 == 1 & var71 == 1 & var79 == 0 ) |  0) 
exit(0);
if(( var48 == 1 & var79 == 1 & var94 == 0 ) |  0) 
exit(0);
if(( var0 == 1 & var6 == 1 & var67 == 0 ) |  0) 
exit(0);
if(( var42 == 1 & var49 == 1 & var89 == 0 ) |  0) 
exit(0);
if(( var5 == 1 & var87 == 1 & var91 == 0 ) |  0) 
exit(0);
if(( var16 == 1 & var25 == 1 & var71 == 0 ) |  0) 
exit(0);
if(( var5 == 1 & var60 == 1 & var94 == 0 ) |  0) 
exit(0);
if(( var15 == 1 & var64 == 1 & var94 == 0 ) |  0) 
exit(0);
if(( var53 == 1 & var54 == 1 & var70 == 0 ) |  0) 
exit(0);
if(( var38 == 1 & var83 == 1 & var98 == 0 ) |  0) 
exit(0);
if(( var41 == 1 & var44 == 1 & var47 == 0 ) |  0) 
exit(0);
if(( var3 == 0 & var6 == 1 & var61 == 1 ) |  0) 
exit(0);
if(( var1 == 0 & var13 == 1 & var57 == 1 ) |  0) 
exit(0);
if(( var10 == 0 & var63 == 1 & var99 == 1 ) |  0) 
exit(0);
if(( var38 == 0 & var50 == 1 & var88 == 1 ) |  0) 
exit(0);
if(( var24 == 0 & var62 == 1 & var86 == 1 ) |  0) 
exit(0);
if(( var22 == 0 & var42 == 1 & var92 == 1 ) |  0) 
exit(0);
if(( var23 == 0 & var57 == 1 & var96 == 1 ) |  0) 
exit(0);
if(( var15 == 0 & var91 == 1 & var97 == 1 ) |  0) 
exit(0);
if(( var26 == 0 & var29 == 1 & var64 == 1 ) |  0) 
exit(0);
if(( var45 == 0 & var56 == 1 & var81 == 1 ) |  0) 
exit(0);
if(( var19 == 0 & var45 == 1 & var47 == 1 ) |  0) 
exit(0);
if(( var20 == 0 & var28 == 1 & var84 == 1 ) |  0) 
exit(0);
if(( var9 == 0 & var20 == 1 & var84 == 1 ) |  0) 
exit(0);
if(( var10 == 0 & var18 == 1 & var27 == 1 ) |  0) 
exit(0);
if(( var48 == 0 & var71 == 1 & var79 == 1 ) |  0) 
exit(0);
if(( var33 == 0 & var48 == 1 & var94 == 1 ) |  0) 
exit(0);
if(( var7 == 0 & var40 == 1 & var65 == 1 ) |  0) 
exit(0);
if(( var56 == 0 & var60 == 1 & var72 == 1 ) |  0) 
exit(0);
if(( var7 == 0 & var22 == 1 & var97 == 1 ) |  0) 
exit(0);
if(( var41 == 0 & var83 == 1 & var85 == 1 ) |  0) 
exit(0);
if(( var0 == 0 & var55 == 1 & var70 == 0 ) | ( var0 == 1 & var55 == 1 & var70 == 0 ) |  0) 
exit(0);
if(( var26 == 0 & var41 == 1 & var44 == 0 ) | ( var26 == 1 & var41 == 1 & var44 == 0 ) |  0) 
exit(0);
if(( var35 == 1 & var55 == 0 & var84 == 0 ) |  0) 
exit(0);
if(( var35 == 1 & var55 == 0 & var58 == 0 ) |  0) 
exit(0);
if(( var10 == 1 & var35 == 0 & var58 == 0 ) |  0) 
exit(0);
if(( var14 == 1 & var59 == 0 & var67 == 0 ) |  0) 
exit(0);
if(( var24 == 1 & var25 == 0 & var50 == 0 ) |  0) 
exit(0);
if(( var22 == 1 & var24 == 0 & var86 == 0 ) |  0) 
exit(0);
if(( var4 == 1 & var22 == 0 & var92 == 0 ) |  0) 
exit(0);
if(( var30 == 1 & var40 == 0 & var96 == 0 ) |  0) 
exit(0);
if(( var11 == 1 & var69 == 0 & var74 == 0 ) |  0) 
exit(0);
if(( var29 == 1 & var62 == 0 & var64 == 0 ) |  0) 
exit(0);
if(( var37 == 1 & var56 == 0 & var99 == 0 ) |  0) 
exit(0);
if(( var37 == 1 & var45 == 0 & var81 == 0 ) |  0) 
exit(0);
if(( var46 == 1 & var51 == 0 & var52 == 0 ) |  0) 
exit(0);
if(( var18 == 1 & var21 == 0 & var72 == 0 ) |  0) 
exit(0);
if(( var32 == 1 & var71 == 0 & var95 == 0 ) |  0) 
exit(0);
if(( var79 == 1 & var94 == 0 & var95 == 0 ) |  0) 
exit(0);
if(( var15 == 1 & var65 == 0 & var90 == 0 ) |  0) 
exit(0);
if(( var4 == 1 & var8 == 0 & var79 == 0 ) |  0) 
exit(0);
if(( var58 == 1 & var75 == 0 & var82 == 0 ) |  0) 
exit(0);
if(( var12 == 1 & var20 == 0 & var33 == 0 ) |  0) 
exit(0);
if(( var22 == 1 & var27 == 0 & var78 == 0 ) |  0) 
exit(0);
if(( var3 == 1 & var16 == 0 & var80 == 0 ) |  0) 
exit(0);
if(( var44 == 1 & var52 == 0 & var54 == 0 ) | ( var44 == 1 & var52 == 1 & var54 == 0 ) |  0) 
exit(0);
if(( var6 == 0 & var13 == 0 & var16 == 0 ) |  0) 
exit(0);
if(( var14 == 0 & var63 == 0 & var80 == 0 ) |  0) 
exit(0);
if(( var4 == 0 & var8 == 0 & var92 == 0 ) |  0) 
exit(0);
if(( var30 == 0 & var40 == 0 & var89 == 0 ) |  0) 
exit(0);
if(( var66 == 0 & var74 == 0 & var93 == 0 ) |  0) 
exit(0);
if(( var11 == 0 & var69 == 0 & var93 == 0 ) |  0) 
exit(0);
if(( var28 == 0 & var39 == 0 & var64 == 0 ) |  0) 
exit(0);
if(( var19 == 0 & var47 == 0 & var98 == 0 ) |  0) 
exit(0);
if(( var0 == 0 & var2 == 0 & var17 == 0 ) |  0) 
exit(0);
if(( var18 == 0 & var42 == 0 & var72 == 0 ) |  0) 
exit(0);
if(( var65 == 0 & var76 == 0 & var90 == 0 ) |  0) 
exit(0);
if(( var5 == 0 & var38 == 0 & var44 == 0 ) |  0) 
exit(0);
if(( var43 == 0 & var61 == 0 & var99 == 0 ) |  0) 
exit(0);
if(( var10 == 0 & var30 == 0 & var62 == 0 ) |  0) 
exit(0);
if(( var14 == 0 & var77 == 0 & var78 == 0 ) |  0) 
exit(0);
if(( var1 == 0 & var9 == 0 & var75 == 0 ) |  0) 
exit(0);
if(( var17 == 0 & var48 == 0 & var75 == 0 ) |  0) 
exit(0);
if(( var7 == 0 & var8 == 0 & var73 == 0 ) |  0) 
exit(0);
if(( var16 == 0 & var61 == 0 & var83 == 0 ) |  0) 
exit(0);
if(( var7 == 1 & var78 == 0 & var88 == 1 ) |  0) 
exit(0);
if(( var25 == 1 & var50 == 0 & var78 == 1 ) |  0) 
exit(0);
if(( var34 == 1 & var57 == 0 & var96 == 1 ) |  0) 
exit(0);
if(( var26 == 1 & var69 == 0 & var93 == 1 ) |  0) 
exit(0);
if(( var17 == 1 & var46 == 0 & var73 == 1 ) |  0) 
exit(0);
if(( var23 == 1 & var32 == 0 & var77 == 1 ) |  0) 
exit(0);
if(( var33 == 1 & var49 == 0 & var60 == 1 ) |  0) 
exit(0);
if(( var53 == 1 & var76 == 0 & var90 == 1 ) |  0) 
exit(0);
if(( var44 == 1 & var53 == 0 & var90 == 1 ) |  0) 
exit(0);
if(( var5 == 1 & var53 == 0 & var90 == 1 ) |  0) 
exit(0);
if(( var19 == 1 & var48 == 0 & var65 == 1 ) |  0) 
exit(0);
if(( var16 == 1 & var83 == 0 & var85 == 1 ) |  0) 
exit(0);
if(( var3 == 1 & var61 == 1 & var80 == 1 ) |  0) 
exit(0);
if(( var1 == 1 & var68 == 1 & var70 == 1 ) |  0) 
exit(0);
if(( var1 == 1 & var58 == 1 & var68 == 1 ) |  0) 
exit(0);
if(( var38 == 1 & var50 == 1 & var78 == 1 ) |  0) 
exit(0);
if(( var8 == 1 & var23 == 1 & var34 == 1 ) |  0) 
exit(0);
if(( var15 == 1 & var89 == 1 & var91 == 1 ) |  0) 
exit(0);
if(( var12 == 1 & var39 == 1 & var75 == 1 ) |  0) 
exit(0);
if(( var37 == 1 & var75 == 1 & var99 == 1 ) |  0) 
exit(0);
if(( var19 == 1 & var45 == 1 & var56 == 1 ) |  0) 
exit(0);
if(( var2 == 1 & var31 == 1 & var98 == 1 ) |  0) 
exit(0);
if(( var0 == 1 & var31 == 1 & var98 == 1 ) |  0) 
exit(0);
if(( var46 == 1 & var51 == 1 & var73 == 1 ) |  0) 
exit(0);
if(( var9 == 1 & var20 == 1 & var87 == 1 ) |  0) 
exit(0);
if(( var77 == 1 & var82 == 1 & var95 == 1 ) |  0) 
exit(0);
if(( var48 == 1 & var54 == 1 & var71 == 1 ) |  0) 
exit(0);
if(( var33 == 1 & var49 == 1 & var94 == 1 ) |  0) 
exit(0);
if(( var24 == 1 & var51 == 1 & var69 == 1 ) |  0) 
exit(0);
if(( var19 == 1 & var22 == 1 & var30 == 1 ) |  0) 
exit(0);
if(( var0 == 1 & var25 == 1 & var64 == 1 ) |  0) 
exit(0);
if(( var44 == 1 & var47 == 1 & var54 == 1 ) |  0) 
exit(0);
if(( var41 == 0 & var43 == 0 & var85 == 0 ) | ( var41 == 0 & var43 == 1 & var85 == 0 ) |  0) 
exit(0);
if(( var35 == 0 & var36 == 1 & var58 == 0 ) |  0) 
exit(0);
if(( var36 == 0 & var63 == 1 & var99 == 0 ) |  0) 
exit(0);
if(( var2 == 0 & var7 == 1 & var88 == 0 ) |  0) 
exit(0);
if(( var4 == 0 & var8 == 1 & var34 == 0 ) |  0) 
exit(0);
if(( var40 == 0 & var89 == 1 & var91 == 0 ) |  0) 
exit(0);
if(( var15 == 0 & var69 == 1 & var97 == 0 ) |  0) 
exit(0);
if(( var15 == 0 & var74 == 1 & var97 == 0 ) |  0) 
exit(0);
if(( var0 == 0 & var17 == 1 & var73 == 0 ) |  0) 
exit(0);
if(( var11 == 0 & var52 == 1 & var84 == 0 ) |  0) 
exit(0);
if(( var60 == 0 & var65 == 1 & var76 == 0 ) |  0) 
exit(0);
if(( var11 == 0 & var70 == 1 & var81 == 0 ) |  0) 
exit(0);
if(( var46 == 0 & var59 == 1 & var89 == 0 ) |  0) 
exit(0);
if(( var34 == 0 & var36 == 1 & var79 == 0 ) |  0) 
exit(0);
if(( var11 == 0 & var60 == 1 & var91 == 0 ) |  0) 
exit(0);
if(( var29 == 0 & var74 == 1 & var85 == 0 ) |  0) 
exit(0);
if(( var18 == 0 & var36 == 1 & var58 == 0 ) |  0) 
exit(0);
if(( var6 == 0 & var13 == 1 & var57 == 0 ) |  0) 
exit(0);
if(( var36 == 0 & var63 == 0 & var80 == 1 ) |  0) 
exit(0);
if(( var7 == 0 & var59 == 0 & var67 == 1 ) |  0) 
exit(0);
if(( var24 == 0 & var25 == 0 & var43 == 1 ) |  0) 
exit(0);
if(( var21 == 0 & var62 == 0 & var86 == 1 ) |  0) 
exit(0);
if(( var25 == 0 & var62 == 0 & var86 == 1 ) |  0) 
exit(0);
if(( var42 == 0 & var86 == 0 & var92 == 1 ) |  0) 
exit(0);
if(( var26 == 0 & var29 == 0 & var93 == 1 ) |  0) 
exit(0);
if(( var12 == 0 & var37 == 0 & var75 == 1 ) |  0) 
exit(0);
if(( var12 == 0 & var37 == 0 & var95 == 1 ) |  0) 
exit(0);
if(( var31 == 0 & var47 == 0 & var98 == 1 ) |  0) 
exit(0);
if(( var11 == 0 & var28 == 0 & var52 == 1 ) |  0) 
exit(0);
if(( var23 == 0 & var32 == 0 & var82 == 1 ) |  0) 
exit(0);
if(( var49 == 0 & var60 == 0 & var76 == 1 ) |  0) 
exit(0);
if(( var5 == 0 & var44 == 0 & var81 == 1 ) |  0) 
exit(0);
if(( var31 == 0 & var61 == 0 & var76 == 1 ) |  0) 
exit(0);
if(( var18 == 0 & var68 == 0 & var72 == 1 ) |  0) 
exit(0);
if(( var27 == 0 & var33 == 0 & var38 == 1 ) |  0) 
exit(0);
if(( var3 == 0 & var13 == 0 & var16 == 1 ) |  0) 
exit(0);
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
 */}
