
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
if((var0 >= 0) & (var0 <= 59)) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 59)) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 59)) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 59)) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 59)) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 59)) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 59)) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 59)) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 59)) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 59)) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 59)) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 59)) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 0) & (var12 <= 59)) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 0) & (var13 <= 59)) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 0) & (var14 <= 59)) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 0) & (var15 <= 59)) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 0) & (var16 <= 59)) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 0) & (var17 <= 59)) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 0) & (var18 <= 59)) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 0) & (var19 <= 59)) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 0) & (var20 <= 59)) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 0) & (var21 <= 59)) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 0) & (var22 <= 59)) {myvar0= 1;}
else {exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((var23 >= 0) & (var23 <= 59)) {myvar0= 1;}
else {exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((var24 >= 0) & (var24 <= 59)) {myvar0= 1;}
else {exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((var25 >= 0) & (var25 <= 59)) {myvar0= 1;}
else {exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((var26 >= 0) & (var26 <= 59)) {myvar0= 1;}
else {exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((var27 >= 0) & (var27 <= 59)) {myvar0= 1;}
else {exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((var28 >= 0) & (var28 <= 59)) {myvar0= 1;}
else {exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((var29 >= 0) & (var29 <= 59)) {myvar0= 1;}
else {exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((var30 >= 0) & (var30 <= 59)) {myvar0= 1;}
else {exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((var31 >= 0) & (var31 <= 59)) {myvar0= 1;}
else {exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((var32 >= 0) & (var32 <= 59)) {myvar0= 1;}
else {exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((var33 >= 0) & (var33 <= 59)) {myvar0= 1;}
else {exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((var34 >= 0) & (var34 <= 59)) {myvar0= 1;}
else {exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((var35 >= 0) & (var35 <= 59)) {myvar0= 1;}
else {exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((var36 >= 0) & (var36 <= 59)) {myvar0= 1;}
else {exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((var37 >= 0) & (var37 <= 59)) {myvar0= 1;}
else {exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((var38 >= 0) & (var38 <= 59)) {myvar0= 1;}
else {exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((var39 >= 0) & (var39 <= 59)) {myvar0= 1;}
else {exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((var40 >= 0) & (var40 <= 59)) {myvar0= 1;}
else {exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((var41 >= 0) & (var41 <= 59)) {myvar0= 1;}
else {exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((var42 >= 0) & (var42 <= 59)) {myvar0= 1;}
else {exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((var43 >= 0) & (var43 <= 59)) {myvar0= 1;}
else {exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((var44 >= 0) & (var44 <= 59)) {myvar0= 1;}
else {exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((var45 >= 0) & (var45 <= 59)) {myvar0= 1;}
else {exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((var46 >= 0) & (var46 <= 59)) {myvar0= 1;}
else {exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((var47 >= 0) & (var47 <= 59)) {myvar0= 1;}
else {exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((var48 >= 0) & (var48 <= 59)) {myvar0= 1;}
else {exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((var49 >= 0) & (var49 <= 59)) {myvar0= 1;}
else {exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((var50 >= 0) & (var50 <= 59)) {myvar0= 1;}
else {exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((var51 >= 0) & (var51 <= 59)) {myvar0= 1;}
else {exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((var52 >= 0) & (var52 <= 59)) {myvar0= 1;}
else {exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((var53 >= 0) & (var53 <= 59)) {myvar0= 1;}
else {exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((var54 >= 0) & (var54 <= 59)) {myvar0= 1;}
else {exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((var55 >= 0) & (var55 <= 59)) {myvar0= 1;}
else {exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((var56 >= 0) & (var56 <= 59)) {myvar0= 1;}
else {exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((var57 >= 0) & (var57 <= 59)) {myvar0= 1;}
else {exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((var58 >= 0) & (var58 <= 59)) {myvar0= 1;}
else {exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((var59 >= 0) & (var59 <= 59)) {myvar0= 1;}
else {exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((var60 >= 1) & (var60 <= 59)) {myvar0= 1;}
else {exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((var61 >= 1) & (var61 <= 59)) {myvar0= 1;}
else {exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((var62 >= 1) & (var62 <= 59)) {myvar0= 1;}
else {exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((var63 >= 1) & (var63 <= 59)) {myvar0= 1;}
else {exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((var64 >= 1) & (var64 <= 59)) {myvar0= 1;}
else {exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((var65 >= 1) & (var65 <= 59)) {myvar0= 1;}
else {exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((var66 >= 1) & (var66 <= 59)) {myvar0= 1;}
else {exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((var67 >= 1) & (var67 <= 59)) {myvar0= 1;}
else {exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((var68 >= 1) & (var68 <= 59)) {myvar0= 1;}
else {exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((var69 >= 1) & (var69 <= 59)) {myvar0= 1;}
else {exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((var70 >= 1) & (var70 <= 59)) {myvar0= 1;}
else {exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((var71 >= 1) & (var71 <= 59)) {myvar0= 1;}
else {exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((var72 >= 1) & (var72 <= 59)) {myvar0= 1;}
else {exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((var73 >= 1) & (var73 <= 59)) {myvar0= 1;}
else {exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((var74 >= 1) & (var74 <= 59)) {myvar0= 1;}
else {exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((var75 >= 1) & (var75 <= 59)) {myvar0= 1;}
else {exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((var76 >= 1) & (var76 <= 59)) {myvar0= 1;}
else {exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((var77 >= 1) & (var77 <= 59)) {myvar0= 1;}
else {exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((var78 >= 1) & (var78 <= 59)) {myvar0= 1;}
else {exit(0);}
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
if((var79 >= 1) & (var79 <= 59)) {myvar0= 1;}
else {exit(0);}
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
if((var80 >= 1) & (var80 <= 59)) {myvar0= 1;}
else {exit(0);}
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
if((var81 >= 1) & (var81 <= 59)) {myvar0= 1;}
else {exit(0);}
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
if((var82 >= 1) & (var82 <= 59)) {myvar0= 1;}
else {exit(0);}
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
if((var83 >= 1) & (var83 <= 59)) {myvar0= 1;}
else {exit(0);}
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
if((var84 >= 1) & (var84 <= 59)) {myvar0= 1;}
else {exit(0);}
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
if((var85 >= 1) & (var85 <= 59)) {myvar0= 1;}
else {exit(0);}
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
if((var86 >= 1) & (var86 <= 59)) {myvar0= 1;}
else {exit(0);}
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
if((var87 >= 1) & (var87 <= 59)) {myvar0= 1;}
else {exit(0);}
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
if((var88 >= 1) & (var88 <= 59)) {myvar0= 1;}
else {exit(0);}
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
if((var89 >= 1) & (var89 <= 59)) {myvar0= 1;}
else {exit(0);}
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
if((var90 >= 1) & (var90 <= 59)) {myvar0= 1;}
else {exit(0);}
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
if((var91 >= 1) & (var91 <= 59)) {myvar0= 1;}
else {exit(0);}
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
if((var92 >= 1) & (var92 <= 59)) {myvar0= 1;}
else {exit(0);}
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
if((var93 >= 1) & (var93 <= 59)) {myvar0= 1;}
else {exit(0);}
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
if((var94 >= 1) & (var94 <= 59)) {myvar0= 1;}
else {exit(0);}
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
if((var95 >= 1) & (var95 <= 59)) {myvar0= 1;}
else {exit(0);}
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
if((var96 >= 1) & (var96 <= 59)) {myvar0= 1;}
else {exit(0);}
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
if((var97 >= 1) & (var97 <= 59)) {myvar0= 1;}
else {exit(0);}
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
if((var98 >= 1) & (var98 <= 59)) {myvar0= 1;}
else {exit(0);}
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
if((var99 >= 1) & (var99 <= 59)) {myvar0= 1;}
else {exit(0);}
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
if((var100 >= 1) & (var100 <= 59)) {myvar0= 1;}
else {exit(0);}
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
if((var101 >= 1) & (var101 <= 59)) {myvar0= 1;}
else {exit(0);}
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
if((var102 >= 1) & (var102 <= 59)) {myvar0= 1;}
else {exit(0);}
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
if((var103 >= 1) & (var103 <= 59)) {myvar0= 1;}
else {exit(0);}
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
if((var104 >= 1) & (var104 <= 59)) {myvar0= 1;}
else {exit(0);}
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
if((var105 >= 1) & (var105 <= 59)) {myvar0= 1;}
else {exit(0);}
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
if((var106 >= 1) & (var106 <= 59)) {myvar0= 1;}
else {exit(0);}
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
if((var107 >= 1) & (var107 <= 59)) {myvar0= 1;}
else {exit(0);}
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
if((var108 >= 1) & (var108 <= 59)) {myvar0= 1;}
else {exit(0);}
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
if((var109 >= 1) & (var109 <= 59)) {myvar0= 1;}
else {exit(0);}
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
if((var110 >= 1) & (var110 <= 59)) {myvar0= 1;}
else {exit(0);}
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
if((var111 >= 1) & (var111 <= 59)) {myvar0= 1;}
else {exit(0);}
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
if((var112 >= 1) & (var112 <= 59)) {myvar0= 1;}
else {exit(0);}
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
if((var113 >= 1) & (var113 <= 59)) {myvar0= 1;}
else {exit(0);}
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
if((var114 >= 1) & (var114 <= 59)) {myvar0= 1;}
else {exit(0);}
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
if((var115 >= 1) & (var115 <= 59)) {myvar0= 1;}
else {exit(0);}
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
if((var116 >= 1) & (var116 <= 59)) {myvar0= 1;}
else {exit(0);}
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
if((var117 >= 1) & (var117 <= 59)) {myvar0= 1;}
else {exit(0);}
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
if((var118 >= 1) & (var118 <= 59)) {myvar0= 1;}
else {exit(0);}
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var0!=var14) & (var0!=var15) & (var0!=var16) & (var0!=var17) & (var0!=var18) & (var0!=var19) & (var0!=var20) & (var0!=var21) & (var0!=var22) & (var0!=var23) & (var0!=var24) & (var0!=var25) & (var0!=var26) & (var0!=var27) & (var0!=var28) & (var0!=var29) & (var0!=var30) & (var0!=var31) & (var0!=var32) & (var0!=var33) & (var0!=var34) & (var0!=var35) & (var0!=var36) & (var0!=var37) & (var0!=var38) & (var0!=var39) & (var0!=var40) & (var0!=var41) & (var0!=var42) & (var0!=var43) & (var0!=var44) & (var0!=var45) & (var0!=var46) & (var0!=var47) & (var0!=var48) & (var0!=var49) & (var0!=var50) & (var0!=var51) & (var0!=var52) & (var0!=var53) & (var0!=var54) & (var0!=var55) & (var0!=var56) & (var0!=var57) & (var0!=var58) & (var0!=var59) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var1!=var14) & (var1!=var15) & (var1!=var16) & (var1!=var17) & (var1!=var18) & (var1!=var19) & (var1!=var20) & (var1!=var21) & (var1!=var22) & (var1!=var23) & (var1!=var24) & (var1!=var25) & (var1!=var26) & (var1!=var27) & (var1!=var28) & (var1!=var29) & (var1!=var30) & (var1!=var31) & (var1!=var32) & (var1!=var33) & (var1!=var34) & (var1!=var35) & (var1!=var36) & (var1!=var37) & (var1!=var38) & (var1!=var39) & (var1!=var40) & (var1!=var41) & (var1!=var42) & (var1!=var43) & (var1!=var44) & (var1!=var45) & (var1!=var46) & (var1!=var47) & (var1!=var48) & (var1!=var49) & (var1!=var50) & (var1!=var51) & (var1!=var52) & (var1!=var53) & (var1!=var54) & (var1!=var55) & (var1!=var56) & (var1!=var57) & (var1!=var58) & (var1!=var59) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var2!=var14) & (var2!=var15) & (var2!=var16) & (var2!=var17) & (var2!=var18) & (var2!=var19) & (var2!=var20) & (var2!=var21) & (var2!=var22) & (var2!=var23) & (var2!=var24) & (var2!=var25) & (var2!=var26) & (var2!=var27) & (var2!=var28) & (var2!=var29) & (var2!=var30) & (var2!=var31) & (var2!=var32) & (var2!=var33) & (var2!=var34) & (var2!=var35) & (var2!=var36) & (var2!=var37) & (var2!=var38) & (var2!=var39) & (var2!=var40) & (var2!=var41) & (var2!=var42) & (var2!=var43) & (var2!=var44) & (var2!=var45) & (var2!=var46) & (var2!=var47) & (var2!=var48) & (var2!=var49) & (var2!=var50) & (var2!=var51) & (var2!=var52) & (var2!=var53) & (var2!=var54) & (var2!=var55) & (var2!=var56) & (var2!=var57) & (var2!=var58) & (var2!=var59) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var3!=var14) & (var3!=var15) & (var3!=var16) & (var3!=var17) & (var3!=var18) & (var3!=var19) & (var3!=var20) & (var3!=var21) & (var3!=var22) & (var3!=var23) & (var3!=var24) & (var3!=var25) & (var3!=var26) & (var3!=var27) & (var3!=var28) & (var3!=var29) & (var3!=var30) & (var3!=var31) & (var3!=var32) & (var3!=var33) & (var3!=var34) & (var3!=var35) & (var3!=var36) & (var3!=var37) & (var3!=var38) & (var3!=var39) & (var3!=var40) & (var3!=var41) & (var3!=var42) & (var3!=var43) & (var3!=var44) & (var3!=var45) & (var3!=var46) & (var3!=var47) & (var3!=var48) & (var3!=var49) & (var3!=var50) & (var3!=var51) & (var3!=var52) & (var3!=var53) & (var3!=var54) & (var3!=var55) & (var3!=var56) & (var3!=var57) & (var3!=var58) & (var3!=var59) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var4!=var14) & (var4!=var15) & (var4!=var16) & (var4!=var17) & (var4!=var18) & (var4!=var19) & (var4!=var20) & (var4!=var21) & (var4!=var22) & (var4!=var23) & (var4!=var24) & (var4!=var25) & (var4!=var26) & (var4!=var27) & (var4!=var28) & (var4!=var29) & (var4!=var30) & (var4!=var31) & (var4!=var32) & (var4!=var33) & (var4!=var34) & (var4!=var35) & (var4!=var36) & (var4!=var37) & (var4!=var38) & (var4!=var39) & (var4!=var40) & (var4!=var41) & (var4!=var42) & (var4!=var43) & (var4!=var44) & (var4!=var45) & (var4!=var46) & (var4!=var47) & (var4!=var48) & (var4!=var49) & (var4!=var50) & (var4!=var51) & (var4!=var52) & (var4!=var53) & (var4!=var54) & (var4!=var55) & (var4!=var56) & (var4!=var57) & (var4!=var58) & (var4!=var59) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var5!=var14) & (var5!=var15) & (var5!=var16) & (var5!=var17) & (var5!=var18) & (var5!=var19) & (var5!=var20) & (var5!=var21) & (var5!=var22) & (var5!=var23) & (var5!=var24) & (var5!=var25) & (var5!=var26) & (var5!=var27) & (var5!=var28) & (var5!=var29) & (var5!=var30) & (var5!=var31) & (var5!=var32) & (var5!=var33) & (var5!=var34) & (var5!=var35) & (var5!=var36) & (var5!=var37) & (var5!=var38) & (var5!=var39) & (var5!=var40) & (var5!=var41) & (var5!=var42) & (var5!=var43) & (var5!=var44) & (var5!=var45) & (var5!=var46) & (var5!=var47) & (var5!=var48) & (var5!=var49) & (var5!=var50) & (var5!=var51) & (var5!=var52) & (var5!=var53) & (var5!=var54) & (var5!=var55) & (var5!=var56) & (var5!=var57) & (var5!=var58) & (var5!=var59) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var6!=var14) & (var6!=var15) & (var6!=var16) & (var6!=var17) & (var6!=var18) & (var6!=var19) & (var6!=var20) & (var6!=var21) & (var6!=var22) & (var6!=var23) & (var6!=var24) & (var6!=var25) & (var6!=var26) & (var6!=var27) & (var6!=var28) & (var6!=var29) & (var6!=var30) & (var6!=var31) & (var6!=var32) & (var6!=var33) & (var6!=var34) & (var6!=var35) & (var6!=var36) & (var6!=var37) & (var6!=var38) & (var6!=var39) & (var6!=var40) & (var6!=var41) & (var6!=var42) & (var6!=var43) & (var6!=var44) & (var6!=var45) & (var6!=var46) & (var6!=var47) & (var6!=var48) & (var6!=var49) & (var6!=var50) & (var6!=var51) & (var6!=var52) & (var6!=var53) & (var6!=var54) & (var6!=var55) & (var6!=var56) & (var6!=var57) & (var6!=var58) & (var6!=var59) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var7!=var14) & (var7!=var15) & (var7!=var16) & (var7!=var17) & (var7!=var18) & (var7!=var19) & (var7!=var20) & (var7!=var21) & (var7!=var22) & (var7!=var23) & (var7!=var24) & (var7!=var25) & (var7!=var26) & (var7!=var27) & (var7!=var28) & (var7!=var29) & (var7!=var30) & (var7!=var31) & (var7!=var32) & (var7!=var33) & (var7!=var34) & (var7!=var35) & (var7!=var36) & (var7!=var37) & (var7!=var38) & (var7!=var39) & (var7!=var40) & (var7!=var41) & (var7!=var42) & (var7!=var43) & (var7!=var44) & (var7!=var45) & (var7!=var46) & (var7!=var47) & (var7!=var48) & (var7!=var49) & (var7!=var50) & (var7!=var51) & (var7!=var52) & (var7!=var53) & (var7!=var54) & (var7!=var55) & (var7!=var56) & (var7!=var57) & (var7!=var58) & (var7!=var59) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var8!=var15) & (var8!=var16) & (var8!=var17) & (var8!=var18) & (var8!=var19) & (var8!=var20) & (var8!=var21) & (var8!=var22) & (var8!=var23) & (var8!=var24) & (var8!=var25) & (var8!=var26) & (var8!=var27) & (var8!=var28) & (var8!=var29) & (var8!=var30) & (var8!=var31) & (var8!=var32) & (var8!=var33) & (var8!=var34) & (var8!=var35) & (var8!=var36) & (var8!=var37) & (var8!=var38) & (var8!=var39) & (var8!=var40) & (var8!=var41) & (var8!=var42) & (var8!=var43) & (var8!=var44) & (var8!=var45) & (var8!=var46) & (var8!=var47) & (var8!=var48) & (var8!=var49) & (var8!=var50) & (var8!=var51) & (var8!=var52) & (var8!=var53) & (var8!=var54) & (var8!=var55) & (var8!=var56) & (var8!=var57) & (var8!=var58) & (var8!=var59) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var9!=var15) & (var9!=var16) & (var9!=var17) & (var9!=var18) & (var9!=var19) & (var9!=var20) & (var9!=var21) & (var9!=var22) & (var9!=var23) & (var9!=var24) & (var9!=var25) & (var9!=var26) & (var9!=var27) & (var9!=var28) & (var9!=var29) & (var9!=var30) & (var9!=var31) & (var9!=var32) & (var9!=var33) & (var9!=var34) & (var9!=var35) & (var9!=var36) & (var9!=var37) & (var9!=var38) & (var9!=var39) & (var9!=var40) & (var9!=var41) & (var9!=var42) & (var9!=var43) & (var9!=var44) & (var9!=var45) & (var9!=var46) & (var9!=var47) & (var9!=var48) & (var9!=var49) & (var9!=var50) & (var9!=var51) & (var9!=var52) & (var9!=var53) & (var9!=var54) & (var9!=var55) & (var9!=var56) & (var9!=var57) & (var9!=var58) & (var9!=var59) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var10!=var15) & (var10!=var16) & (var10!=var17) & (var10!=var18) & (var10!=var19) & (var10!=var20) & (var10!=var21) & (var10!=var22) & (var10!=var23) & (var10!=var24) & (var10!=var25) & (var10!=var26) & (var10!=var27) & (var10!=var28) & (var10!=var29) & (var10!=var30) & (var10!=var31) & (var10!=var32) & (var10!=var33) & (var10!=var34) & (var10!=var35) & (var10!=var36) & (var10!=var37) & (var10!=var38) & (var10!=var39) & (var10!=var40) & (var10!=var41) & (var10!=var42) & (var10!=var43) & (var10!=var44) & (var10!=var45) & (var10!=var46) & (var10!=var47) & (var10!=var48) & (var10!=var49) & (var10!=var50) & (var10!=var51) & (var10!=var52) & (var10!=var53) & (var10!=var54) & (var10!=var55) & (var10!=var56) & (var10!=var57) & (var10!=var58) & (var10!=var59) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var11!=var16) & (var11!=var17) & (var11!=var18) & (var11!=var19) & (var11!=var20) & (var11!=var21) & (var11!=var22) & (var11!=var23) & (var11!=var24) & (var11!=var25) & (var11!=var26) & (var11!=var27) & (var11!=var28) & (var11!=var29) & (var11!=var30) & (var11!=var31) & (var11!=var32) & (var11!=var33) & (var11!=var34) & (var11!=var35) & (var11!=var36) & (var11!=var37) & (var11!=var38) & (var11!=var39) & (var11!=var40) & (var11!=var41) & (var11!=var42) & (var11!=var43) & (var11!=var44) & (var11!=var45) & (var11!=var46) & (var11!=var47) & (var11!=var48) & (var11!=var49) & (var11!=var50) & (var11!=var51) & (var11!=var52) & (var11!=var53) & (var11!=var54) & (var11!=var55) & (var11!=var56) & (var11!=var57) & (var11!=var58) & (var11!=var59) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var12!=var20) & (var12!=var21) & (var12!=var22) & (var12!=var23) & (var12!=var24) & (var12!=var25) & (var12!=var26) & (var12!=var27) & (var12!=var28) & (var12!=var29) & (var12!=var30) & (var12!=var31) & (var12!=var32) & (var12!=var33) & (var12!=var34) & (var12!=var35) & (var12!=var36) & (var12!=var37) & (var12!=var38) & (var12!=var39) & (var12!=var40) & (var12!=var41) & (var12!=var42) & (var12!=var43) & (var12!=var44) & (var12!=var45) & (var12!=var46) & (var12!=var47) & (var12!=var48) & (var12!=var49) & (var12!=var50) & (var12!=var51) & (var12!=var52) & (var12!=var53) & (var12!=var54) & (var12!=var55) & (var12!=var56) & (var12!=var57) & (var12!=var58) & (var12!=var59) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var13!=var20) & (var13!=var21) & (var13!=var22) & (var13!=var23) & (var13!=var24) & (var13!=var25) & (var13!=var26) & (var13!=var27) & (var13!=var28) & (var13!=var29) & (var13!=var30) & (var13!=var31) & (var13!=var32) & (var13!=var33) & (var13!=var34) & (var13!=var35) & (var13!=var36) & (var13!=var37) & (var13!=var38) & (var13!=var39) & (var13!=var40) & (var13!=var41) & (var13!=var42) & (var13!=var43) & (var13!=var44) & (var13!=var45) & (var13!=var46) & (var13!=var47) & (var13!=var48) & (var13!=var49) & (var13!=var50) & (var13!=var51) & (var13!=var52) & (var13!=var53) & (var13!=var54) & (var13!=var55) & (var13!=var56) & (var13!=var57) & (var13!=var58) & (var13!=var59) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var14!=var21) & (var14!=var22) & (var14!=var23) & (var14!=var24) & (var14!=var25) & (var14!=var26) & (var14!=var27) & (var14!=var28) & (var14!=var29) & (var14!=var30) & (var14!=var31) & (var14!=var32) & (var14!=var33) & (var14!=var34) & (var14!=var35) & (var14!=var36) & (var14!=var37) & (var14!=var38) & (var14!=var39) & (var14!=var40) & (var14!=var41) & (var14!=var42) & (var14!=var43) & (var14!=var44) & (var14!=var45) & (var14!=var46) & (var14!=var47) & (var14!=var48) & (var14!=var49) & (var14!=var50) & (var14!=var51) & (var14!=var52) & (var14!=var53) & (var14!=var54) & (var14!=var55) & (var14!=var56) & (var14!=var57) & (var14!=var58) & (var14!=var59) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var15!=var21) & (var15!=var22) & (var15!=var23) & (var15!=var24) & (var15!=var25) & (var15!=var26) & (var15!=var27) & (var15!=var28) & (var15!=var29) & (var15!=var30) & (var15!=var31) & (var15!=var32) & (var15!=var33) & (var15!=var34) & (var15!=var35) & (var15!=var36) & (var15!=var37) & (var15!=var38) & (var15!=var39) & (var15!=var40) & (var15!=var41) & (var15!=var42) & (var15!=var43) & (var15!=var44) & (var15!=var45) & (var15!=var46) & (var15!=var47) & (var15!=var48) & (var15!=var49) & (var15!=var50) & (var15!=var51) & (var15!=var52) & (var15!=var53) & (var15!=var54) & (var15!=var55) & (var15!=var56) & (var15!=var57) & (var15!=var58) & (var15!=var59) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var16!=var23) & (var16!=var24) & (var16!=var25) & (var16!=var26) & (var16!=var27) & (var16!=var28) & (var16!=var29) & (var16!=var30) & (var16!=var31) & (var16!=var32) & (var16!=var33) & (var16!=var34) & (var16!=var35) & (var16!=var36) & (var16!=var37) & (var16!=var38) & (var16!=var39) & (var16!=var40) & (var16!=var41) & (var16!=var42) & (var16!=var43) & (var16!=var44) & (var16!=var45) & (var16!=var46) & (var16!=var47) & (var16!=var48) & (var16!=var49) & (var16!=var50) & (var16!=var51) & (var16!=var52) & (var16!=var53) & (var16!=var54) & (var16!=var55) & (var16!=var56) & (var16!=var57) & (var16!=var58) & (var16!=var59) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var17!=var23) & (var17!=var24) & (var17!=var25) & (var17!=var26) & (var17!=var27) & (var17!=var28) & (var17!=var29) & (var17!=var30) & (var17!=var31) & (var17!=var32) & (var17!=var33) & (var17!=var34) & (var17!=var35) & (var17!=var36) & (var17!=var37) & (var17!=var38) & (var17!=var39) & (var17!=var40) & (var17!=var41) & (var17!=var42) & (var17!=var43) & (var17!=var44) & (var17!=var45) & (var17!=var46) & (var17!=var47) & (var17!=var48) & (var17!=var49) & (var17!=var50) & (var17!=var51) & (var17!=var52) & (var17!=var53) & (var17!=var54) & (var17!=var55) & (var17!=var56) & (var17!=var57) & (var17!=var58) & (var17!=var59) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var18!=var23) & (var18!=var24) & (var18!=var25) & (var18!=var26) & (var18!=var27) & (var18!=var28) & (var18!=var29) & (var18!=var30) & (var18!=var31) & (var18!=var32) & (var18!=var33) & (var18!=var34) & (var18!=var35) & (var18!=var36) & (var18!=var37) & (var18!=var38) & (var18!=var39) & (var18!=var40) & (var18!=var41) & (var18!=var42) & (var18!=var43) & (var18!=var44) & (var18!=var45) & (var18!=var46) & (var18!=var47) & (var18!=var48) & (var18!=var49) & (var18!=var50) & (var18!=var51) & (var18!=var52) & (var18!=var53) & (var18!=var54) & (var18!=var55) & (var18!=var56) & (var18!=var57) & (var18!=var58) & (var18!=var59) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var19!=var23) & (var19!=var24) & (var19!=var25) & (var19!=var26) & (var19!=var27) & (var19!=var28) & (var19!=var29) & (var19!=var30) & (var19!=var31) & (var19!=var32) & (var19!=var33) & (var19!=var34) & (var19!=var35) & (var19!=var36) & (var19!=var37) & (var19!=var38) & (var19!=var39) & (var19!=var40) & (var19!=var41) & (var19!=var42) & (var19!=var43) & (var19!=var44) & (var19!=var45) & (var19!=var46) & (var19!=var47) & (var19!=var48) & (var19!=var49) & (var19!=var50) & (var19!=var51) & (var19!=var52) & (var19!=var53) & (var19!=var54) & (var19!=var55) & (var19!=var56) & (var19!=var57) & (var19!=var58) & (var19!=var59) & (var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var20!=var27) & (var20!=var28) & (var20!=var29) & (var20!=var30) & (var20!=var31) & (var20!=var32) & (var20!=var33) & (var20!=var34) & (var20!=var35) & (var20!=var36) & (var20!=var37) & (var20!=var38) & (var20!=var39) & (var20!=var40) & (var20!=var41) & (var20!=var42) & (var20!=var43) & (var20!=var44) & (var20!=var45) & (var20!=var46) & (var20!=var47) & (var20!=var48) & (var20!=var49) & (var20!=var50) & (var20!=var51) & (var20!=var52) & (var20!=var53) & (var20!=var54) & (var20!=var55) & (var20!=var56) & (var20!=var57) & (var20!=var58) & (var20!=var59) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var21!=var30) & (var21!=var31) & (var21!=var32) & (var21!=var33) & (var21!=var34) & (var21!=var35) & (var21!=var36) & (var21!=var37) & (var21!=var38) & (var21!=var39) & (var21!=var40) & (var21!=var41) & (var21!=var42) & (var21!=var43) & (var21!=var44) & (var21!=var45) & (var21!=var46) & (var21!=var47) & (var21!=var48) & (var21!=var49) & (var21!=var50) & (var21!=var51) & (var21!=var52) & (var21!=var53) & (var21!=var54) & (var21!=var55) & (var21!=var56) & (var21!=var57) & (var21!=var58) & (var21!=var59) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var22!=var30) & (var22!=var31) & (var22!=var32) & (var22!=var33) & (var22!=var34) & (var22!=var35) & (var22!=var36) & (var22!=var37) & (var22!=var38) & (var22!=var39) & (var22!=var40) & (var22!=var41) & (var22!=var42) & (var22!=var43) & (var22!=var44) & (var22!=var45) & (var22!=var46) & (var22!=var47) & (var22!=var48) & (var22!=var49) & (var22!=var50) & (var22!=var51) & (var22!=var52) & (var22!=var53) & (var22!=var54) & (var22!=var55) & (var22!=var56) & (var22!=var57) & (var22!=var58) & (var22!=var59) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var23!=var30) & (var23!=var31) & (var23!=var32) & (var23!=var33) & (var23!=var34) & (var23!=var35) & (var23!=var36) & (var23!=var37) & (var23!=var38) & (var23!=var39) & (var23!=var40) & (var23!=var41) & (var23!=var42) & (var23!=var43) & (var23!=var44) & (var23!=var45) & (var23!=var46) & (var23!=var47) & (var23!=var48) & (var23!=var49) & (var23!=var50) & (var23!=var51) & (var23!=var52) & (var23!=var53) & (var23!=var54) & (var23!=var55) & (var23!=var56) & (var23!=var57) & (var23!=var58) & (var23!=var59) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var24!=var30) & (var24!=var31) & (var24!=var32) & (var24!=var33) & (var24!=var34) & (var24!=var35) & (var24!=var36) & (var24!=var37) & (var24!=var38) & (var24!=var39) & (var24!=var40) & (var24!=var41) & (var24!=var42) & (var24!=var43) & (var24!=var44) & (var24!=var45) & (var24!=var46) & (var24!=var47) & (var24!=var48) & (var24!=var49) & (var24!=var50) & (var24!=var51) & (var24!=var52) & (var24!=var53) & (var24!=var54) & (var24!=var55) & (var24!=var56) & (var24!=var57) & (var24!=var58) & (var24!=var59) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var25!=var30) & (var25!=var31) & (var25!=var32) & (var25!=var33) & (var25!=var34) & (var25!=var35) & (var25!=var36) & (var25!=var37) & (var25!=var38) & (var25!=var39) & (var25!=var40) & (var25!=var41) & (var25!=var42) & (var25!=var43) & (var25!=var44) & (var25!=var45) & (var25!=var46) & (var25!=var47) & (var25!=var48) & (var25!=var49) & (var25!=var50) & (var25!=var51) & (var25!=var52) & (var25!=var53) & (var25!=var54) & (var25!=var55) & (var25!=var56) & (var25!=var57) & (var25!=var58) & (var25!=var59) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var26!=var30) & (var26!=var31) & (var26!=var32) & (var26!=var33) & (var26!=var34) & (var26!=var35) & (var26!=var36) & (var26!=var37) & (var26!=var38) & (var26!=var39) & (var26!=var40) & (var26!=var41) & (var26!=var42) & (var26!=var43) & (var26!=var44) & (var26!=var45) & (var26!=var46) & (var26!=var47) & (var26!=var48) & (var26!=var49) & (var26!=var50) & (var26!=var51) & (var26!=var52) & (var26!=var53) & (var26!=var54) & (var26!=var55) & (var26!=var56) & (var26!=var57) & (var26!=var58) & (var26!=var59) & (var27!=var28) & (var27!=var29) & (var27!=var30) & (var27!=var31) & (var27!=var32) & (var27!=var33) & (var27!=var34) & (var27!=var35) & (var27!=var36) & (var27!=var37) & (var27!=var38) & (var27!=var39) & (var27!=var40) & (var27!=var41) & (var27!=var42) & (var27!=var43) & (var27!=var44) & (var27!=var45) & (var27!=var46) & (var27!=var47) & (var27!=var48) & (var27!=var49) & (var27!=var50) & (var27!=var51) & (var27!=var52) & (var27!=var53) & (var27!=var54) & (var27!=var55) & (var27!=var56) & (var27!=var57) & (var27!=var58) & (var27!=var59) & (var28!=var29) & (var28!=var30) & (var28!=var31) & (var28!=var32) & (var28!=var33) & (var28!=var34) & (var28!=var35) & (var28!=var36) & (var28!=var37) & (var28!=var38) & (var28!=var39) & (var28!=var40) & (var28!=var41) & (var28!=var42) & (var28!=var43) & (var28!=var44) & (var28!=var45) & (var28!=var46) & (var28!=var47) & (var28!=var48) & (var28!=var49) & (var28!=var50) & (var28!=var51) & (var28!=var52) & (var28!=var53) & (var28!=var54) & (var28!=var55) & (var28!=var56) & (var28!=var57) & (var28!=var58) & (var28!=var59) & (var29!=var30) & (var29!=var31) & (var29!=var32) & (var29!=var33) & (var29!=var34) & (var29!=var35) & (var29!=var36) & (var29!=var37) & (var29!=var38) & (var29!=var39) & (var29!=var40) & (var29!=var41) & (var29!=var42) & (var29!=var43) & (var29!=var44) & (var29!=var45) & (var29!=var46) & (var29!=var47) & (var29!=var48) & (var29!=var49) & (var29!=var50) & (var29!=var51) & (var29!=var52) & (var29!=var53) & (var29!=var54) & (var29!=var55) & (var29!=var56) & (var29!=var57) & (var29!=var58) & (var29!=var59) & (var30!=var31) & (var30!=var32) & (var30!=var33) & (var30!=var34) & (var30!=var35) & (var30!=var36) & (var30!=var37) & (var30!=var38) & (var30!=var39) & (var30!=var40) & (var30!=var41) & (var30!=var42) & (var30!=var43) & (var30!=var44) & (var30!=var45) & (var30!=var46) & (var30!=var47) & (var30!=var48) & (var30!=var49) & (var30!=var50) & (var30!=var51) & (var30!=var52) & (var30!=var53) & (var30!=var54) & (var30!=var55) & (var30!=var56) & (var30!=var57) & (var30!=var58) & (var30!=var59) & (var31!=var32) & (var31!=var33) & (var31!=var34) & (var31!=var35) & (var31!=var36) & (var31!=var37) & (var31!=var38) & (var31!=var39) & (var31!=var40) & (var31!=var41) & (var31!=var42) & (var31!=var43) & (var31!=var44) & (var31!=var45) & (var31!=var46) & (var31!=var47) & (var31!=var48) & (var31!=var49) & (var31!=var50) & (var31!=var51) & (var31!=var52) & (var31!=var53) & (var31!=var54) & (var31!=var55) & (var31!=var56) & (var31!=var57) & (var31!=var58) & (var31!=var59) & (var32!=var33) & (var32!=var34) & (var32!=var35) & (var32!=var36) & (var32!=var37) & (var32!=var38) & (var32!=var39) & (var32!=var40) & (var32!=var41) & (var32!=var42) & (var32!=var43) & (var32!=var44) & (var32!=var45) & (var32!=var46) & (var32!=var47) & (var32!=var48) & (var32!=var49) & (var32!=var50) & (var32!=var51) & (var32!=var52) & (var32!=var53) & (var32!=var54) & (var32!=var55) & (var32!=var56) & (var32!=var57) & (var32!=var58) & (var32!=var59) & (var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var33!=var38) & (var33!=var39) & (var33!=var40) & (var33!=var41) & (var33!=var42) & (var33!=var43) & (var33!=var44) & (var33!=var45) & (var33!=var46) & (var33!=var47) & (var33!=var48) & (var33!=var49) & (var33!=var50) & (var33!=var51) & (var33!=var52) & (var33!=var53) & (var33!=var54) & (var33!=var55) & (var33!=var56) & (var33!=var57) & (var33!=var58) & (var33!=var59) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var34!=var38) & (var34!=var39) & (var34!=var40) & (var34!=var41) & (var34!=var42) & (var34!=var43) & (var34!=var44) & (var34!=var45) & (var34!=var46) & (var34!=var47) & (var34!=var48) & (var34!=var49) & (var34!=var50) & (var34!=var51) & (var34!=var52) & (var34!=var53) & (var34!=var54) & (var34!=var55) & (var34!=var56) & (var34!=var57) & (var34!=var58) & (var34!=var59) & (var35!=var36) & (var35!=var37) & (var35!=var38) & (var35!=var39) & (var35!=var40) & (var35!=var41) & (var35!=var42) & (var35!=var43) & (var35!=var44) & (var35!=var45) & (var35!=var46) & (var35!=var47) & (var35!=var48) & (var35!=var49) & (var35!=var50) & (var35!=var51) & (var35!=var52) & (var35!=var53) & (var35!=var54) & (var35!=var55) & (var35!=var56) & (var35!=var57) & (var35!=var58) & (var35!=var59) & (var36!=var37) & (var36!=var38) & (var36!=var39) & (var36!=var40) & (var36!=var41) & (var36!=var42) & (var36!=var43) & (var36!=var44) & (var36!=var45) & (var36!=var46) & (var36!=var47) & (var36!=var48) & (var36!=var49) & (var36!=var50) & (var36!=var51) & (var36!=var52) & (var36!=var53) & (var36!=var54) & (var36!=var55) & (var36!=var56) & (var36!=var57) & (var36!=var58) & (var36!=var59) & (var37!=var38) & (var37!=var39) & (var37!=var40) & (var37!=var41) & (var37!=var42) & (var37!=var43) & (var37!=var44) & (var37!=var45) & (var37!=var46) & (var37!=var47) & (var37!=var48) & (var37!=var49) & (var37!=var50) & (var37!=var51) & (var37!=var52) & (var37!=var53) & (var37!=var54) & (var37!=var55) & (var37!=var56) & (var37!=var57) & (var37!=var58) & (var37!=var59) & (var38!=var39) & (var38!=var40) & (var38!=var41) & (var38!=var42) & (var38!=var43) & (var38!=var44) & (var38!=var45) & (var38!=var46) & (var38!=var47) & (var38!=var48) & (var38!=var49) & (var38!=var50) & (var38!=var51) & (var38!=var52) & (var38!=var53) & (var38!=var54) & (var38!=var55) & (var38!=var56) & (var38!=var57) & (var38!=var58) & (var38!=var59) & (var39!=var40) & (var39!=var41) & (var39!=var42) & (var39!=var43) & (var39!=var44) & (var39!=var45) & (var39!=var46) & (var39!=var47) & (var39!=var48) & (var39!=var49) & (var39!=var50) & (var39!=var51) & (var39!=var52) & (var39!=var53) & (var39!=var54) & (var39!=var55) & (var39!=var56) & (var39!=var57) & (var39!=var58) & (var39!=var59) & (var40!=var41) & (var40!=var42) & (var40!=var43) & (var40!=var44) & (var40!=var45) & (var40!=var46) & (var40!=var47) & (var40!=var48) & (var40!=var49) & (var40!=var50) & (var40!=var51) & (var40!=var52) & (var40!=var53) & (var40!=var54) & (var40!=var55) & (var40!=var56) & (var40!=var57) & (var40!=var58) & (var40!=var59) & (var41!=var42) & (var41!=var43) & (var41!=var44) & (var41!=var45) & (var41!=var46) & (var41!=var47) & (var41!=var48) & (var41!=var49) & (var41!=var50) & (var41!=var51) & (var41!=var52) & (var41!=var53) & (var41!=var54) & (var41!=var55) & (var41!=var56) & (var41!=var57) & (var41!=var58) & (var41!=var59) & (var42!=var43) & (var42!=var44) & (var42!=var45) & (var42!=var46) & (var42!=var47) & (var42!=var48) & (var42!=var49) & (var42!=var50) & (var42!=var51) & (var42!=var52) & (var42!=var53) & (var42!=var54) & (var42!=var55) & (var42!=var56) & (var42!=var57) & (var42!=var58) & (var42!=var59) & (var43!=var44) & (var43!=var45) & (var43!=var46) & (var43!=var47) & (var43!=var48) & (var43!=var49) & (var43!=var50) & (var43!=var51) & (var43!=var52) & (var43!=var53) & (var43!=var54) & (var43!=var55) & (var43!=var56) & (var43!=var57) & (var43!=var58) & (var43!=var59) & (var44!=var45) & (var44!=var46) & (var44!=var47) & (var44!=var48) & (var44!=var49) & (var44!=var50) & (var44!=var51) & (var44!=var52) & (var44!=var53) & (var44!=var54) & (var44!=var55) & (var44!=var56) & (var44!=var57) & (var44!=var58) & (var44!=var59) & (var45!=var46) & (var45!=var47) & (var45!=var48) & (var45!=var49) & (var45!=var50) & (var45!=var51) & (var45!=var52) & (var45!=var53) & (var45!=var54) & (var45!=var55) & (var45!=var56) & (var45!=var57) & (var45!=var58) & (var45!=var59) & (var46!=var47) & (var46!=var48) & (var46!=var49) & (var46!=var50) & (var46!=var51) & (var46!=var52) & (var46!=var53) & (var46!=var54) & (var46!=var55) & (var46!=var56) & (var46!=var57) & (var46!=var58) & (var46!=var59) & (var47!=var48) & (var47!=var49) & (var47!=var50) & (var47!=var51) & (var47!=var52) & (var47!=var53) & (var47!=var54) & (var47!=var55) & (var47!=var56) & (var47!=var57) & (var47!=var58) & (var47!=var59) & (var48!=var49) & (var48!=var50) & (var48!=var51) & (var48!=var52) & (var48!=var53) & (var48!=var54) & (var48!=var55) & (var48!=var56) & (var48!=var57) & (var48!=var58) & (var48!=var59) & (var49!=var50) & (var49!=var51) & (var49!=var52) & (var49!=var53) & (var49!=var54) & (var49!=var55) & (var49!=var56) & (var49!=var57) & (var49!=var58) & (var49!=var59) & (var50!=var51) & (var50!=var52) & (var50!=var53) & (var50!=var54) & (var50!=var55) & (var50!=var56) & (var50!=var57) & (var50!=var58) & (var50!=var59) & (var51!=var52) & (var51!=var53) & (var51!=var54) & (var51!=var55) & (var51!=var56) & (var51!=var57) & (var51!=var58) & (var51!=var59) & (var52!=var53) & (var52!=var54) & (var52!=var55) & (var52!=var56) & (var52!=var57) & (var52!=var58) & (var52!=var59) & (var53!=var54) & (var53!=var55) & (var53!=var56) & (var53!=var57) & (var53!=var58) & (var53!=var59) & (var54!=var55) & (var54!=var56) & (var54!=var57) & (var54!=var58) & (var54!=var59) & (var55!=var56) & (var55!=var57) & (var55!=var58) & (var55!=var59) & (var56!=var57) & (var56!=var58) & (var56!=var59) & (var57!=var58) & (var57!=var59) & (var58!=var59) &  1))
{myvar0= 1;}
else {exit(0);}
if(((var60!=var61) & (var60!=var62) & (var60!=var63) & (var60!=var64) & (var60!=var65) & (var60!=var66) & (var60!=var67) & (var60!=var68) & (var60!=var69) & (var60!=var70) & (var60!=var71) & (var60!=var72) & (var60!=var73) & (var60!=var74) & (var60!=var75) & (var60!=var76) & (var60!=var77) & (var60!=var78) & (var60!=var79) & (var60!=var80) & (var60!=var81) & (var60!=var82) & (var60!=var83) & (var60!=var84) & (var60!=var85) & (var60!=var86) & (var60!=var87) & (var60!=var88) & (var60!=var89) & (var60!=var90) & (var60!=var91) & (var60!=var92) & (var60!=var93) & (var60!=var94) & (var60!=var95) & (var60!=var96) & (var60!=var97) & (var60!=var98) & (var60!=var99) & (var60!=var100) & (var60!=var101) & (var60!=var102) & (var60!=var103) & (var60!=var104) & (var60!=var105) & (var60!=var106) & (var60!=var107) & (var60!=var108) & (var60!=var109) & (var60!=var110) & (var60!=var111) & (var60!=var112) & (var60!=var113) & (var60!=var114) & (var60!=var115) & (var60!=var116) & (var60!=var117) & (var60!=var118) & (var61!=var62) & (var61!=var63) & (var61!=var64) & (var61!=var65) & (var61!=var66) & (var61!=var67) & (var61!=var68) & (var61!=var69) & (var61!=var70) & (var61!=var71) & (var61!=var72) & (var61!=var73) & (var61!=var74) & (var61!=var75) & (var61!=var76) & (var61!=var77) & (var61!=var78) & (var61!=var79) & (var61!=var80) & (var61!=var81) & (var61!=var82) & (var61!=var83) & (var61!=var84) & (var61!=var85) & (var61!=var86) & (var61!=var87) & (var61!=var88) & (var61!=var89) & (var61!=var90) & (var61!=var91) & (var61!=var92) & (var61!=var93) & (var61!=var94) & (var61!=var95) & (var61!=var96) & (var61!=var97) & (var61!=var98) & (var61!=var99) & (var61!=var100) & (var61!=var101) & (var61!=var102) & (var61!=var103) & (var61!=var104) & (var61!=var105) & (var61!=var106) & (var61!=var107) & (var61!=var108) & (var61!=var109) & (var61!=var110) & (var61!=var111) & (var61!=var112) & (var61!=var113) & (var61!=var114) & (var61!=var115) & (var61!=var116) & (var61!=var117) & (var61!=var118) & (var62!=var63) & (var62!=var64) & (var62!=var65) & (var62!=var66) & (var62!=var67) & (var62!=var68) & (var62!=var69) & (var62!=var70) & (var62!=var71) & (var62!=var72) & (var62!=var73) & (var62!=var74) & (var62!=var75) & (var62!=var76) & (var62!=var77) & (var62!=var78) & (var62!=var79) & (var62!=var80) & (var62!=var81) & (var62!=var82) & (var62!=var83) & (var62!=var84) & (var62!=var85) & (var62!=var86) & (var62!=var87) & (var62!=var88) & (var62!=var89) & (var62!=var90) & (var62!=var91) & (var62!=var92) & (var62!=var93) & (var62!=var94) & (var62!=var95) & (var62!=var96) & (var62!=var97) & (var62!=var98) & (var62!=var99) & (var62!=var100) & (var62!=var101) & (var62!=var102) & (var62!=var103) & (var62!=var104) & (var62!=var105) & (var62!=var106) & (var62!=var107) & (var62!=var108) & (var62!=var109) & (var62!=var110) & (var62!=var111) & (var62!=var112) & (var62!=var113) & (var62!=var114) & (var62!=var115) & (var62!=var116) & (var62!=var117) & (var62!=var118) & (var63!=var64) & (var63!=var65) & (var63!=var66) & (var63!=var67) & (var63!=var68) & (var63!=var69) & (var63!=var70) & (var63!=var71) & (var63!=var72) & (var63!=var73) & (var63!=var74) & (var63!=var75) & (var63!=var76) & (var63!=var77) & (var63!=var78) & (var63!=var79) & (var63!=var80) & (var63!=var81) & (var63!=var82) & (var63!=var83) & (var63!=var84) & (var63!=var85) & (var63!=var86) & (var63!=var87) & (var63!=var88) & (var63!=var89) & (var63!=var90) & (var63!=var91) & (var63!=var92) & (var63!=var93) & (var63!=var94) & (var63!=var95) & (var63!=var96) & (var63!=var97) & (var63!=var98) & (var63!=var99) & (var63!=var100) & (var63!=var101) & (var63!=var102) & (var63!=var103) & (var63!=var104) & (var63!=var105) & (var63!=var106) & (var63!=var107) & (var63!=var108) & (var63!=var109) & (var63!=var110) & (var63!=var111) & (var63!=var112) & (var63!=var113) & (var63!=var114) & (var63!=var115) & (var63!=var116) & (var63!=var117) & (var63!=var118) & (var64!=var65) & (var64!=var66) & (var64!=var67) & (var64!=var68) & (var64!=var69) & (var64!=var70) & (var64!=var71) & (var64!=var72) & (var64!=var73) & (var64!=var74) & (var64!=var75) & (var64!=var76) & (var64!=var77) & (var64!=var78) & (var64!=var79) & (var64!=var80) & (var64!=var81) & (var64!=var82) & (var64!=var83) & (var64!=var84) & (var64!=var85) & (var64!=var86) & (var64!=var87) & (var64!=var88) & (var64!=var89) & (var64!=var90) & (var64!=var91) & (var64!=var92) & (var64!=var93) & (var64!=var94) & (var64!=var95) & (var64!=var96) & (var64!=var97) & (var64!=var98) & (var64!=var99) & (var64!=var100) & (var64!=var101) & (var64!=var102) & (var64!=var103) & (var64!=var104) & (var64!=var105) & (var64!=var106) & (var64!=var107) & (var64!=var108) & (var64!=var109) & (var64!=var110) & (var64!=var111) & (var64!=var112) & (var64!=var113) & (var64!=var114) & (var64!=var115) & (var64!=var116) & (var64!=var117) & (var64!=var118) & (var65!=var66) & (var65!=var67) & (var65!=var68) & (var65!=var69) & (var65!=var70) & (var65!=var71) & (var65!=var72) & (var65!=var73) & (var65!=var74) & (var65!=var75) & (var65!=var76) & (var65!=var77) & (var65!=var78) & (var65!=var79) & (var65!=var80) & (var65!=var81) & (var65!=var82) & (var65!=var83) & (var65!=var84) & (var65!=var85) & (var65!=var86) & (var65!=var87) & (var65!=var88) & (var65!=var89) & (var65!=var90) & (var65!=var91) & (var65!=var92) & (var65!=var93) & (var65!=var94) & (var65!=var95) & (var65!=var96) & (var65!=var97) & (var65!=var98) & (var65!=var99) & (var65!=var100) & (var65!=var101) & (var65!=var102) & (var65!=var103) & (var65!=var104) & (var65!=var105) & (var65!=var106) & (var65!=var107) & (var65!=var108) & (var65!=var109) & (var65!=var110) & (var65!=var111) & (var65!=var112) & (var65!=var113) & (var65!=var114) & (var65!=var115) & (var65!=var116) & (var65!=var117) & (var65!=var118) & (var66!=var67) & (var66!=var68) & (var66!=var69) & (var66!=var70) & (var66!=var71) & (var66!=var72) & (var66!=var73) & (var66!=var74) & (var66!=var75) & (var66!=var76) & (var66!=var77) & (var66!=var78) & (var66!=var79) & (var66!=var80) & (var66!=var81) & (var66!=var82) & (var66!=var83) & (var66!=var84) & (var66!=var85) & (var66!=var86) & (var66!=var87) & (var66!=var88) & (var66!=var89) & (var66!=var90) & (var66!=var91) & (var66!=var92) & (var66!=var93) & (var66!=var94) & (var66!=var95) & (var66!=var96) & (var66!=var97) & (var66!=var98) & (var66!=var99) & (var66!=var100) & (var66!=var101) & (var66!=var102) & (var66!=var103) & (var66!=var104) & (var66!=var105) & (var66!=var106) & (var66!=var107) & (var66!=var108) & (var66!=var109) & (var66!=var110) & (var66!=var111) & (var66!=var112) & (var66!=var113) & (var66!=var114) & (var66!=var115) & (var66!=var116) & (var66!=var117) & (var66!=var118) & (var67!=var68) & (var67!=var69) & (var67!=var70) & (var67!=var71) & (var67!=var72) & (var67!=var73) & (var67!=var74) & (var67!=var75) & (var67!=var76) & (var67!=var77) & (var67!=var78) & (var67!=var79) & (var67!=var80) & (var67!=var81) & (var67!=var82) & (var67!=var83) & (var67!=var84) & (var67!=var85) & (var67!=var86) & (var67!=var87) & (var67!=var88) & (var67!=var89) & (var67!=var90) & (var67!=var91) & (var67!=var92) & (var67!=var93) & (var67!=var94) & (var67!=var95) & (var67!=var96) & (var67!=var97) & (var67!=var98) & (var67!=var99) & (var67!=var100) & (var67!=var101) & (var67!=var102) & (var67!=var103) & (var67!=var104) & (var67!=var105) & (var67!=var106) & (var67!=var107) & (var67!=var108) & (var67!=var109) & (var67!=var110) & (var67!=var111) & (var67!=var112) & (var67!=var113) & (var67!=var114) & (var67!=var115) & (var67!=var116) & (var67!=var117) & (var67!=var118) & (var68!=var69) & (var68!=var70) & (var68!=var71) & (var68!=var72) & (var68!=var73) & (var68!=var74) & (var68!=var75) & (var68!=var76) & (var68!=var77) & (var68!=var78) & (var68!=var79) & (var68!=var80) & (var68!=var81) & (var68!=var82) & (var68!=var83) & (var68!=var84) & (var68!=var85) & (var68!=var86) & (var68!=var87) & (var68!=var88) & (var68!=var89) & (var68!=var90) & (var68!=var91) & (var68!=var92) & (var68!=var93) & (var68!=var94) & (var68!=var95) & (var68!=var96) & (var68!=var97) & (var68!=var98) & (var68!=var99) & (var68!=var100) & (var68!=var101) & (var68!=var102) & (var68!=var103) & (var68!=var104) & (var68!=var105) & (var68!=var106) & (var68!=var107) & (var68!=var108) & (var68!=var109) & (var68!=var110) & (var68!=var111) & (var68!=var112) & (var68!=var113) & (var68!=var114) & (var68!=var115) & (var68!=var116) & (var68!=var117) & (var68!=var118) & (var69!=var70) & (var69!=var71) & (var69!=var72) & (var69!=var73) & (var69!=var74) & (var69!=var75) & (var69!=var76) & (var69!=var77) & (var69!=var78) & (var69!=var79) & (var69!=var80) & (var69!=var81) & (var69!=var82) & (var69!=var83) & (var69!=var84) & (var69!=var85) & (var69!=var86) & (var69!=var87) & (var69!=var88) & (var69!=var89) & (var69!=var90) & (var69!=var91) & (var69!=var92) & (var69!=var93) & (var69!=var94) & (var69!=var95) & (var69!=var96) & (var69!=var97) & (var69!=var98) & (var69!=var99) & (var69!=var100) & (var69!=var101) & (var69!=var102) & (var69!=var103) & (var69!=var104) & (var69!=var105) & (var69!=var106) & (var69!=var107) & (var69!=var108) & (var69!=var109) & (var69!=var110) & (var69!=var111) & (var69!=var112) & (var69!=var113) & (var69!=var114) & (var69!=var115) & (var69!=var116) & (var69!=var117) & (var69!=var118) & (var70!=var71) & (var70!=var72) & (var70!=var73) & (var70!=var74) & (var70!=var75) & (var70!=var76) & (var70!=var77) & (var70!=var78) & (var70!=var79) & (var70!=var80) & (var70!=var81) & (var70!=var82) & (var70!=var83) & (var70!=var84) & (var70!=var85) & (var70!=var86) & (var70!=var87) & (var70!=var88) & (var70!=var89) & (var70!=var90) & (var70!=var91) & (var70!=var92) & (var70!=var93) & (var70!=var94) & (var70!=var95) & (var70!=var96) & (var70!=var97) & (var70!=var98) & (var70!=var99) & (var70!=var100) & (var70!=var101) & (var70!=var102) & (var70!=var103) & (var70!=var104) & (var70!=var105) & (var70!=var106) & (var70!=var107) & (var70!=var108) & (var70!=var109) & (var70!=var110) & (var70!=var111) & (var70!=var112) & (var70!=var113) & (var70!=var114) & (var70!=var115) & (var70!=var116) & (var70!=var117) & (var70!=var118) & (var71!=var72) & (var71!=var73) & (var71!=var74) & (var71!=var75) & (var71!=var76) & (var71!=var77) & (var71!=var78) & (var71!=var79) & (var71!=var80) & (var71!=var81) & (var71!=var82) & (var71!=var83) & (var71!=var84) & (var71!=var85) & (var71!=var86) & (var71!=var87) & (var71!=var88) & (var71!=var89) & (var71!=var90) & (var71!=var91) & (var71!=var92) & (var71!=var93) & (var71!=var94) & (var71!=var95) & (var71!=var96) & (var71!=var97) & (var71!=var98) & (var71!=var99) & (var71!=var100) & (var71!=var101) & (var71!=var102) & (var71!=var103) & (var71!=var104) & (var71!=var105) & (var71!=var106) & (var71!=var107) & (var71!=var108) & (var71!=var109) & (var71!=var110) & (var71!=var111) & (var71!=var112) & (var71!=var113) & (var71!=var114) & (var71!=var115) & (var71!=var116) & (var71!=var117) & (var71!=var118) & (var72!=var73) & (var72!=var74) & (var72!=var75) & (var72!=var76) & (var72!=var77) & (var72!=var78) & (var72!=var79) & (var72!=var80) & (var72!=var81) & (var72!=var82) & (var72!=var83) & (var72!=var84) & (var72!=var85) & (var72!=var86) & (var72!=var87) & (var72!=var88) & (var72!=var89) & (var72!=var90) & (var72!=var91) & (var72!=var92) & (var72!=var93) & (var72!=var94) & (var72!=var95) & (var72!=var96) & (var72!=var97) & (var72!=var98) & (var72!=var99) & (var72!=var100) & (var72!=var101) & (var72!=var102) & (var72!=var103) & (var72!=var104) & (var72!=var105) & (var72!=var106) & (var72!=var107) & (var72!=var108) & (var72!=var109) & (var72!=var110) & (var72!=var111) & (var72!=var112) & (var72!=var113) & (var72!=var114) & (var72!=var115) & (var72!=var116) & (var72!=var117) & (var72!=var118) & (var73!=var74) & (var73!=var75) & (var73!=var76) & (var73!=var77) & (var73!=var78) & (var73!=var79) & (var73!=var80) & (var73!=var81) & (var73!=var82) & (var73!=var83) & (var73!=var84) & (var73!=var85) & (var73!=var86) & (var73!=var87) & (var73!=var88) & (var73!=var89) & (var73!=var90) & (var73!=var91) & (var73!=var92) & (var73!=var93) & (var73!=var94) & (var73!=var95) & (var73!=var96) & (var73!=var97) & (var73!=var98) & (var73!=var99) & (var73!=var100) & (var73!=var101) & (var73!=var102) & (var73!=var103) & (var73!=var104) & (var73!=var105) & (var73!=var106) & (var73!=var107) & (var73!=var108) & (var73!=var109) & (var73!=var110) & (var73!=var111) & (var73!=var112) & (var73!=var113) & (var73!=var114) & (var73!=var115) & (var73!=var116) & (var73!=var117) & (var73!=var118) & (var74!=var75) & (var74!=var76) & (var74!=var77) & (var74!=var78) & (var74!=var79) & (var74!=var80) & (var74!=var81) & (var74!=var82) & (var74!=var83) & (var74!=var84) & (var74!=var85) & (var74!=var86) & (var74!=var87) & (var74!=var88) & (var74!=var89) & (var74!=var90) & (var74!=var91) & (var74!=var92) & (var74!=var93) & (var74!=var94) & (var74!=var95) & (var74!=var96) & (var74!=var97) & (var74!=var98) & (var74!=var99) & (var74!=var100) & (var74!=var101) & (var74!=var102) & (var74!=var103) & (var74!=var104) & (var74!=var105) & (var74!=var106) & (var74!=var107) & (var74!=var108) & (var74!=var109) & (var74!=var110) & (var74!=var111) & (var74!=var112) & (var74!=var113) & (var74!=var114) & (var74!=var115) & (var74!=var116) & (var74!=var117) & (var74!=var118) & (var75!=var76) & (var75!=var77) & (var75!=var78) & (var75!=var79) & (var75!=var80) & (var75!=var81) & (var75!=var82) & (var75!=var83) & (var75!=var84) & (var75!=var85) & (var75!=var86) & (var75!=var87) & (var75!=var88) & (var75!=var89) & (var75!=var90) & (var75!=var91) & (var75!=var92) & (var75!=var93) & (var75!=var94) & (var75!=var95) & (var75!=var96) & (var75!=var97) & (var75!=var98) & (var75!=var99) & (var75!=var100) & (var75!=var101) & (var75!=var102) & (var75!=var103) & (var75!=var104) & (var75!=var105) & (var75!=var106) & (var75!=var107) & (var75!=var108) & (var75!=var109) & (var75!=var110) & (var75!=var111) & (var75!=var112) & (var75!=var113) & (var75!=var114) & (var75!=var115) & (var75!=var116) & (var75!=var117) & (var75!=var118) & (var76!=var77) & (var76!=var78) & (var76!=var79) & (var76!=var80) & (var76!=var81) & (var76!=var82) & (var76!=var83) & (var76!=var84) & (var76!=var85) & (var76!=var86) & (var76!=var87) & (var76!=var88) & (var76!=var89) & (var76!=var90) & (var76!=var91) & (var76!=var92) & (var76!=var93) & (var76!=var94) & (var76!=var95) & (var76!=var96) & (var76!=var97) & (var76!=var98) & (var76!=var99) & (var76!=var100) & (var76!=var101) & (var76!=var102) & (var76!=var103) & (var76!=var104) & (var76!=var105) & (var76!=var106) & (var76!=var107) & (var76!=var108) & (var76!=var109) & (var76!=var110) & (var76!=var111) & (var76!=var112) & (var76!=var113) & (var76!=var114) & (var76!=var115) & (var76!=var116) & (var76!=var117) & (var76!=var118) & (var77!=var78) & (var77!=var79) & (var77!=var80) & (var77!=var81) & (var77!=var82) & (var77!=var83) & (var77!=var84) & (var77!=var85) & (var77!=var86) & (var77!=var87) & (var77!=var88) & (var77!=var89) & (var77!=var90) & (var77!=var91) & (var77!=var92) & (var77!=var93) & (var77!=var94) & (var77!=var95) & (var77!=var96) & (var77!=var97) & (var77!=var98) & (var77!=var99) & (var77!=var100) & (var77!=var101) & (var77!=var102) & (var77!=var103) & (var77!=var104) & (var77!=var105) & (var77!=var106) & (var77!=var107) & (var77!=var108) & (var77!=var109) & (var77!=var110) & (var77!=var111) & (var77!=var112) & (var77!=var113) & (var77!=var114) & (var77!=var115) & (var77!=var116) & (var77!=var117) & (var77!=var118) & (var78!=var79) & (var78!=var80) & (var78!=var81) & (var78!=var82) & (var78!=var83) & (var78!=var84) & (var78!=var85) & (var78!=var86) & (var78!=var87) & (var78!=var88) & (var78!=var89) & (var78!=var90) & (var78!=var91) & (var78!=var92) & (var78!=var93) & (var78!=var94) & (var78!=var95) & (var78!=var96) & (var78!=var97) & (var78!=var98) & (var78!=var99) & (var78!=var100) & (var78!=var101) & (var78!=var102) & (var78!=var103) & (var78!=var104) & (var78!=var105) & (var78!=var106) & (var78!=var107) & (var78!=var108) & (var78!=var109) & (var78!=var110) & (var78!=var111) & (var78!=var112) & (var78!=var113) & (var78!=var114) & (var78!=var115) & (var78!=var116) & (var78!=var117) & (var78!=var118) & (var79!=var80) & (var79!=var81) & (var79!=var82) & (var79!=var83) & (var79!=var84) & (var79!=var85) & (var79!=var86) & (var79!=var87) & (var79!=var88) & (var79!=var89) & (var79!=var90) & (var79!=var91) & (var79!=var92) & (var79!=var93) & (var79!=var94) & (var79!=var95) & (var79!=var96) & (var79!=var97) & (var79!=var98) & (var79!=var99) & (var79!=var100) & (var79!=var101) & (var79!=var102) & (var79!=var103) & (var79!=var104) & (var79!=var105) & (var79!=var106) & (var79!=var107) & (var79!=var108) & (var79!=var109) & (var79!=var110) & (var79!=var111) & (var79!=var112) & (var79!=var113) & (var79!=var114) & (var79!=var115) & (var79!=var116) & (var79!=var117) & (var79!=var118) & (var80!=var81) & (var80!=var82) & (var80!=var83) & (var80!=var84) & (var80!=var85) & (var80!=var86) & (var80!=var87) & (var80!=var88) & (var80!=var89) & (var80!=var90) & (var80!=var91) & (var80!=var92) & (var80!=var93) & (var80!=var94) & (var80!=var95) & (var80!=var96) & (var80!=var97) & (var80!=var98) & (var80!=var99) & (var80!=var100) & (var80!=var101) & (var80!=var102) & (var80!=var103) & (var80!=var104) & (var80!=var105) & (var80!=var106) & (var80!=var107) & (var80!=var108) & (var80!=var109) & (var80!=var110) & (var80!=var111) & (var80!=var112) & (var80!=var113) & (var80!=var114) & (var80!=var115) & (var80!=var116) & (var80!=var117) & (var80!=var118) & (var81!=var82) & (var81!=var83) & (var81!=var84) & (var81!=var85) & (var81!=var86) & (var81!=var87) & (var81!=var88) & (var81!=var89) & (var81!=var90) & (var81!=var91) & (var81!=var92) & (var81!=var93) & (var81!=var94) & (var81!=var95) & (var81!=var96) & (var81!=var97) & (var81!=var98) & (var81!=var99) & (var81!=var100) & (var81!=var101) & (var81!=var102) & (var81!=var103) & (var81!=var104) & (var81!=var105) & (var81!=var106) & (var81!=var107) & (var81!=var108) & (var81!=var109) & (var81!=var110) & (var81!=var111) & (var81!=var112) & (var81!=var113) & (var81!=var114) & (var81!=var115) & (var81!=var116) & (var81!=var117) & (var81!=var118) & (var82!=var83) & (var82!=var84) & (var82!=var85) & (var82!=var86) & (var82!=var87) & (var82!=var88) & (var82!=var89) & (var82!=var90) & (var82!=var91) & (var82!=var92) & (var82!=var93) & (var82!=var94) & (var82!=var95) & (var82!=var96) & (var82!=var97) & (var82!=var98) & (var82!=var99) & (var82!=var100) & (var82!=var101) & (var82!=var102) & (var82!=var103) & (var82!=var104) & (var82!=var105) & (var82!=var106) & (var82!=var107) & (var82!=var108) & (var82!=var109) & (var82!=var110) & (var82!=var111) & (var82!=var112) & (var82!=var113) & (var82!=var114) & (var82!=var115) & (var82!=var116) & (var82!=var117) & (var82!=var118) & (var83!=var84) & (var83!=var85) & (var83!=var86) & (var83!=var87) & (var83!=var88) & (var83!=var89) & (var83!=var90) & (var83!=var91) & (var83!=var92) & (var83!=var93) & (var83!=var94) & (var83!=var95) & (var83!=var96) & (var83!=var97) & (var83!=var98) & (var83!=var99) & (var83!=var100) & (var83!=var101) & (var83!=var102) & (var83!=var103) & (var83!=var104) & (var83!=var105) & (var83!=var106) & (var83!=var107) & (var83!=var108) & (var83!=var109) & (var83!=var110) & (var83!=var111) & (var83!=var112) & (var83!=var113) & (var83!=var114) & (var83!=var115) & (var83!=var116) & (var83!=var117) & (var83!=var118) & (var84!=var85) & (var84!=var86) & (var84!=var87) & (var84!=var88) & (var84!=var89) & (var84!=var90) & (var84!=var91) & (var84!=var92) & (var84!=var93) & (var84!=var94) & (var84!=var95) & (var84!=var96) & (var84!=var97) & (var84!=var98) & (var84!=var99) & (var84!=var100) & (var84!=var101) & (var84!=var102) & (var84!=var103) & (var84!=var104) & (var84!=var105) & (var84!=var106) & (var84!=var107) & (var84!=var108) & (var84!=var109) & (var84!=var110) & (var84!=var111) & (var84!=var112) & (var84!=var113) & (var84!=var114) & (var84!=var115) & (var84!=var116) & (var84!=var117) & (var84!=var118) & (var85!=var86) & (var85!=var87) & (var85!=var88) & (var85!=var89) & (var85!=var90) & (var85!=var91) & (var85!=var92) & (var85!=var93) & (var85!=var94) & (var85!=var95) & (var85!=var96) & (var85!=var97) & (var85!=var98) & (var85!=var99) & (var85!=var100) & (var85!=var101) & (var85!=var102) & (var85!=var103) & (var85!=var104) & (var85!=var105) & (var85!=var106) & (var85!=var107) & (var85!=var108) & (var85!=var109) & (var85!=var110) & (var85!=var111) & (var85!=var112) & (var85!=var113) & (var85!=var114) & (var85!=var115) & (var85!=var116) & (var85!=var117) & (var85!=var118) & (var86!=var87) & (var86!=var88) & (var86!=var89) & (var86!=var90) & (var86!=var91) & (var86!=var92) & (var86!=var93) & (var86!=var94) & (var86!=var95) & (var86!=var96) & (var86!=var97) & (var86!=var98) & (var86!=var99) & (var86!=var100) & (var86!=var101) & (var86!=var102) & (var86!=var103) & (var86!=var104) & (var86!=var105) & (var86!=var106) & (var86!=var107) & (var86!=var108) & (var86!=var109) & (var86!=var110) & (var86!=var111) & (var86!=var112) & (var86!=var113) & (var86!=var114) & (var86!=var115) & (var86!=var116) & (var86!=var117) & (var86!=var118) & (var87!=var88) & (var87!=var89) & (var87!=var90) & (var87!=var91) & (var87!=var92) & (var87!=var93) & (var87!=var94) & (var87!=var95) & (var87!=var96) & (var87!=var97) & (var87!=var98) & (var87!=var99) & (var87!=var100) & (var87!=var101) & (var87!=var102) & (var87!=var103) & (var87!=var104) & (var87!=var105) & (var87!=var106) & (var87!=var107) & (var87!=var108) & (var87!=var109) & (var87!=var110) & (var87!=var111) & (var87!=var112) & (var87!=var113) & (var87!=var114) & (var87!=var115) & (var87!=var116) & (var87!=var117) & (var87!=var118) & (var88!=var89) & (var88!=var90) & (var88!=var91) & (var88!=var92) & (var88!=var93) & (var88!=var94) & (var88!=var95) & (var88!=var96) & (var88!=var97) & (var88!=var98) & (var88!=var99) & (var88!=var100) & (var88!=var101) & (var88!=var102) & (var88!=var103) & (var88!=var104) & (var88!=var105) & (var88!=var106) & (var88!=var107) & (var88!=var108) & (var88!=var109) & (var88!=var110) & (var88!=var111) & (var88!=var112) & (var88!=var113) & (var88!=var114) & (var88!=var115) & (var88!=var116) & (var88!=var117) & (var88!=var118) & (var89!=var90) & (var89!=var91) & (var89!=var92) & (var89!=var93) & (var89!=var94) & (var89!=var95) & (var89!=var96) & (var89!=var97) & (var89!=var98) & (var89!=var99) & (var89!=var100) & (var89!=var101) & (var89!=var102) & (var89!=var103) & (var89!=var104) & (var89!=var105) & (var89!=var106) & (var89!=var107) & (var89!=var108) & (var89!=var109) & (var89!=var110) & (var89!=var111) & (var89!=var112) & (var89!=var113) & (var89!=var114) & (var89!=var115) & (var89!=var116) & (var89!=var117) & (var89!=var118) & (var90!=var91) & (var90!=var92) & (var90!=var93) & (var90!=var94) & (var90!=var95) & (var90!=var96) & (var90!=var97) & (var90!=var98) & (var90!=var99) & (var90!=var100) & (var90!=var101) & (var90!=var102) & (var90!=var103) & (var90!=var104) & (var90!=var105) & (var90!=var106) & (var90!=var107) & (var90!=var108) & (var90!=var109) & (var90!=var110) & (var90!=var111) & (var90!=var112) & (var90!=var113) & (var90!=var114) & (var90!=var115) & (var90!=var116) & (var90!=var117) & (var90!=var118) & (var91!=var92) & (var91!=var93) & (var91!=var94) & (var91!=var95) & (var91!=var96) & (var91!=var97) & (var91!=var98) & (var91!=var99) & (var91!=var100) & (var91!=var101) & (var91!=var102) & (var91!=var103) & (var91!=var104) & (var91!=var105) & (var91!=var106) & (var91!=var107) & (var91!=var108) & (var91!=var109) & (var91!=var110) & (var91!=var111) & (var91!=var112) & (var91!=var113) & (var91!=var114) & (var91!=var115) & (var91!=var116) & (var91!=var117) & (var91!=var118) & (var92!=var93) & (var92!=var94) & (var92!=var95) & (var92!=var96) & (var92!=var97) & (var92!=var98) & (var92!=var99) & (var92!=var100) & (var92!=var101) & (var92!=var102) & (var92!=var103) & (var92!=var104) & (var92!=var105) & (var92!=var106) & (var92!=var107) & (var92!=var108) & (var92!=var109) & (var92!=var110) & (var92!=var111) & (var92!=var112) & (var92!=var113) & (var92!=var114) & (var92!=var115) & (var92!=var116) & (var92!=var117) & (var92!=var118) & (var93!=var94) & (var93!=var95) & (var93!=var96) & (var93!=var97) & (var93!=var98) & (var93!=var99) & (var93!=var100) & (var93!=var101) & (var93!=var102) & (var93!=var103) & (var93!=var104) & (var93!=var105) & (var93!=var106) & (var93!=var107) & (var93!=var108) & (var93!=var109) & (var93!=var110) & (var93!=var111) & (var93!=var112) & (var93!=var113) & (var93!=var114) & (var93!=var115) & (var93!=var116) & (var93!=var117) & (var93!=var118) & (var94!=var95) & (var94!=var96) & (var94!=var97) & (var94!=var98) & (var94!=var99) & (var94!=var100) & (var94!=var101) & (var94!=var102) & (var94!=var103) & (var94!=var104) & (var94!=var105) & (var94!=var106) & (var94!=var107) & (var94!=var108) & (var94!=var109) & (var94!=var110) & (var94!=var111) & (var94!=var112) & (var94!=var113) & (var94!=var114) & (var94!=var115) & (var94!=var116) & (var94!=var117) & (var94!=var118) & (var95!=var96) & (var95!=var97) & (var95!=var98) & (var95!=var99) & (var95!=var100) & (var95!=var101) & (var95!=var102) & (var95!=var103) & (var95!=var104) & (var95!=var105) & (var95!=var106) & (var95!=var107) & (var95!=var108) & (var95!=var109) & (var95!=var110) & (var95!=var111) & (var95!=var112) & (var95!=var113) & (var95!=var114) & (var95!=var115) & (var95!=var116) & (var95!=var117) & (var95!=var118) & (var96!=var97) & (var96!=var98) & (var96!=var99) & (var96!=var100) & (var96!=var101) & (var96!=var102) & (var96!=var103) & (var96!=var104) & (var96!=var105) & (var96!=var106) & (var96!=var107) & (var96!=var108) & (var96!=var109) & (var96!=var110) & (var96!=var111) & (var96!=var112) & (var96!=var113) & (var96!=var114) & (var96!=var115) & (var96!=var116) & (var96!=var117) & (var96!=var118) & (var97!=var98) & (var97!=var99) & (var97!=var100) & (var97!=var101) & (var97!=var102) & (var97!=var103) & (var97!=var104) & (var97!=var105) & (var97!=var106) & (var97!=var107) & (var97!=var108) & (var97!=var109) & (var97!=var110) & (var97!=var111) & (var97!=var112) & (var97!=var113) & (var97!=var114) & (var97!=var115) & (var97!=var116) & (var97!=var117) & (var97!=var118) & (var98!=var99) & (var98!=var100) & (var98!=var101) & (var98!=var102) & (var98!=var103) & (var98!=var104) & (var98!=var105) & (var98!=var106) & (var98!=var107) & (var98!=var108) & (var98!=var109) & (var98!=var110) & (var98!=var111) & (var98!=var112) & (var98!=var113) & (var98!=var114) & (var98!=var115) & (var98!=var116) & (var98!=var117) & (var98!=var118) & (var99!=var100) & (var99!=var101) & (var99!=var102) & (var99!=var103) & (var99!=var104) & (var99!=var105) & (var99!=var106) & (var99!=var107) & (var99!=var108) & (var99!=var109) & (var99!=var110) & (var99!=var111) & (var99!=var112) & (var99!=var113) & (var99!=var114) & (var99!=var115) & (var99!=var116) & (var99!=var117) & (var99!=var118) & (var100!=var101) & (var100!=var102) & (var100!=var103) & (var100!=var104) & (var100!=var105) & (var100!=var106) & (var100!=var107) & (var100!=var108) & (var100!=var109) & (var100!=var110) & (var100!=var111) & (var100!=var112) & (var100!=var113) & (var100!=var114) & (var100!=var115) & (var100!=var116) & (var100!=var117) & (var100!=var118) & (var101!=var102) & (var101!=var103) & (var101!=var104) & (var101!=var105) & (var101!=var106) & (var101!=var107) & (var101!=var108) & (var101!=var109) & (var101!=var110) & (var101!=var111) & (var101!=var112) & (var101!=var113) & (var101!=var114) & (var101!=var115) & (var101!=var116) & (var101!=var117) & (var101!=var118) & (var102!=var103) & (var102!=var104) & (var102!=var105) & (var102!=var106) & (var102!=var107) & (var102!=var108) & (var102!=var109) & (var102!=var110) & (var102!=var111) & (var102!=var112) & (var102!=var113) & (var102!=var114) & (var102!=var115) & (var102!=var116) & (var102!=var117) & (var102!=var118) & (var103!=var104) & (var103!=var105) & (var103!=var106) & (var103!=var107) & (var103!=var108) & (var103!=var109) & (var103!=var110) & (var103!=var111) & (var103!=var112) & (var103!=var113) & (var103!=var114) & (var103!=var115) & (var103!=var116) & (var103!=var117) & (var103!=var118) & (var104!=var105) & (var104!=var106) & (var104!=var107) & (var104!=var108) & (var104!=var109) & (var104!=var110) & (var104!=var111) & (var104!=var112) & (var104!=var113) & (var104!=var114) & (var104!=var115) & (var104!=var116) & (var104!=var117) & (var104!=var118) & (var105!=var106) & (var105!=var107) & (var105!=var108) & (var105!=var109) & (var105!=var110) & (var105!=var111) & (var105!=var112) & (var105!=var113) & (var105!=var114) & (var105!=var115) & (var105!=var116) & (var105!=var117) & (var105!=var118) & (var106!=var107) & (var106!=var108) & (var106!=var109) & (var106!=var110) & (var106!=var111) & (var106!=var112) & (var106!=var113) & (var106!=var114) & (var106!=var115) & (var106!=var116) & (var106!=var117) & (var106!=var118) & (var107!=var108) & (var107!=var109) & (var107!=var110) & (var107!=var111) & (var107!=var112) & (var107!=var113) & (var107!=var114) & (var107!=var115) & (var107!=var116) & (var107!=var117) & (var107!=var118) & (var108!=var109) & (var108!=var110) & (var108!=var111) & (var108!=var112) & (var108!=var113) & (var108!=var114) & (var108!=var115) & (var108!=var116) & (var108!=var117) & (var108!=var118) & (var109!=var110) & (var109!=var111) & (var109!=var112) & (var109!=var113) & (var109!=var114) & (var109!=var115) & (var109!=var116) & (var109!=var117) & (var109!=var118) & (var110!=var111) & (var110!=var112) & (var110!=var113) & (var110!=var114) & (var110!=var115) & (var110!=var116) & (var110!=var117) & (var110!=var118) & (var111!=var112) & (var111!=var113) & (var111!=var114) & (var111!=var115) & (var111!=var116) & (var111!=var117) & (var111!=var118) & (var112!=var113) & (var112!=var114) & (var112!=var115) & (var112!=var116) & (var112!=var117) & (var112!=var118) & (var113!=var114) & (var113!=var115) & (var113!=var116) & (var113!=var117) & (var113!=var118) & (var114!=var115) & (var114!=var116) & (var114!=var117) & (var114!=var118) & (var115!=var116) & (var115!=var117) & (var115!=var118) & (var116!=var117) & (var116!=var118) & (var117!=var118) &  1))
{myvar0= 1;}
else {exit(0);}
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var60 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var61 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var62 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var63 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var64 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var65 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var66 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var67 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var68 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var69 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var70 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var11 - var12;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var71 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var12 - var13;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var72 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var13 - var14;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var73 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var14 - var15;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var74 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var15 - var16;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var75 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var16 - var17;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var76 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var17 - var18;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var77 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var18 - var19;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var78 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var19 - var20;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var79 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var20 - var21;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var80 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var21 - var22;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var81 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var22 - var23;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var82 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var23 - var24;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var83 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var24 - var25;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var84 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var25 - var26;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var85 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var26 - var27;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var86 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var27 - var28;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var87 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var28 - var29;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var88 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var29 - var30;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var89 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var30 - var31;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var90 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var31 - var32;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var91 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var32 - var33;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var92 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var33 - var34;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var93 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var34 - var35;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var94 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var35 - var36;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var95 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var36 - var37;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var96 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var37 - var38;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var97 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var38 - var39;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var98 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var39 - var40;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var99 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var40 - var41;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var100 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var41 - var42;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var101 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var42 - var43;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var102 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var43 - var44;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var103 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var44 - var45;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var104 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var45 - var46;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var105 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var46 - var47;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var106 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var47 - var48;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var107 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var48 - var49;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var108 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var49 - var50;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var109 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var50 - var51;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var110 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var51 - var52;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var111 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var52 - var53;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var112 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var53 - var54;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var113 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var54 - var55;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var114 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var55 - var56;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var115 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var56 - var57;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var116 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var57 - var58;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var117 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var58 - var59;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var118 == var_for_abs){myvar0= 1;}
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
60 y[0]
61 y[1]
62 y[2]
63 y[3]
64 y[4]
65 y[5]
66 y[6]
67 y[7]
68 y[8]
69 y[9]
70 y[10]
71 y[11]
72 y[12]
73 y[13]
74 y[14]
75 y[15]
76 y[16]
77 y[17]
78 y[18]
79 y[19]
80 y[20]
81 y[21]
82 y[22]
83 y[23]
84 y[24]
85 y[25]
86 y[26]
87 y[27]
88 y[28]
89 y[29]
90 y[30]
91 y[31]
92 y[32]
93 y[33]
94 y[34]
95 y[35]
96 y[36]
97 y[37]
98 y[38]
99 y[39]
100 y[40]
101 y[41]
102 y[42]
103 y[43]
104 y[44]
105 y[45]
106 y[46]
107 y[47]
108 y[48]
109 y[49]
110 y[50]
111 y[51]
112 y[52]
113 y[53]
114 y[54]
115 y[55]
116 y[56]
117 y[57]
118 y[58]
 */}
