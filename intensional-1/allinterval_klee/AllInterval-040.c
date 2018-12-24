
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 0) && (var14 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 0) && (var15 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 0) && (var16 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 0) && (var17 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 0) && (var18 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 0) && (var19 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 0) && (var20 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 0) && (var21 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 0) && (var22 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 0) && (var23 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 0) && (var24 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 0) && (var25 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 0) && (var26 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((myvar0 == 1) && (var27 >= 0) && (var27 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((myvar0 == 1) && (var28 >= 0) && (var28 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((myvar0 == 1) && (var29 >= 0) && (var29 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((myvar0 == 1) && (var30 >= 0) && (var30 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((myvar0 == 1) && (var31 >= 0) && (var31 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((myvar0 == 1) && (var32 >= 0) && (var32 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((myvar0 == 1) && (var33 >= 0) && (var33 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((myvar0 == 1) && (var34 >= 0) && (var34 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((myvar0 == 1) && (var35 >= 0) && (var35 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((myvar0 == 1) && (var36 >= 0) && (var36 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((myvar0 == 1) && (var37 >= 0) && (var37 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((myvar0 == 1) && (var38 >= 0) && (var38 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((myvar0 == 1) && (var39 >= 0) && (var39 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((myvar0 == 1) && (var40 >= 1) && (var40 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((myvar0 == 1) && (var41 >= 1) && (var41 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((myvar0 == 1) && (var42 >= 1) && (var42 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((myvar0 == 1) && (var43 >= 1) && (var43 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((myvar0 == 1) && (var44 >= 1) && (var44 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((myvar0 == 1) && (var45 >= 1) && (var45 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((myvar0 == 1) && (var46 >= 1) && (var46 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((myvar0 == 1) && (var47 >= 1) && (var47 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((myvar0 == 1) && (var48 >= 1) && (var48 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((myvar0 == 1) && (var49 >= 1) && (var49 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((myvar0 == 1) && (var50 >= 1) && (var50 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((myvar0 == 1) && (var51 >= 1) && (var51 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((myvar0 == 1) && (var52 >= 1) && (var52 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((myvar0 == 1) && (var53 >= 1) && (var53 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((myvar0 == 1) && (var54 >= 1) && (var54 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((myvar0 == 1) && (var55 >= 1) && (var55 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((myvar0 == 1) && (var56 >= 1) && (var56 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((myvar0 == 1) && (var57 >= 1) && (var57 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((myvar0 == 1) && (var58 >= 1) && (var58 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((myvar0 == 1) && (var59 >= 1) && (var59 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((myvar0 == 1) && (var60 >= 1) && (var60 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((myvar0 == 1) && (var61 >= 1) && (var61 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((myvar0 == 1) && (var62 >= 1) && (var62 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((myvar0 == 1) && (var63 >= 1) && (var63 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
if((myvar0 == 1) && (var64 >= 1) && (var64 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
if((myvar0 == 1) && (var65 >= 1) && (var65 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
if((myvar0 == 1) && (var66 >= 1) && (var66 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
if((myvar0 == 1) && (var67 >= 1) && (var67 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
if((myvar0 == 1) && (var68 >= 1) && (var68 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
if((myvar0 == 1) && (var69 >= 1) && (var69 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
if((myvar0 == 1) && (var70 >= 1) && (var70 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
if((myvar0 == 1) && (var71 >= 1) && (var71 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
if((myvar0 == 1) && (var72 >= 1) && (var72 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
if((myvar0 == 1) && (var73 >= 1) && (var73 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
if((myvar0 == 1) && (var74 >= 1) && (var74 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
if((myvar0 == 1) && (var75 >= 1) && (var75 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
if((myvar0 == 1) && (var76 >= 1) && (var76 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
if((myvar0 == 1) && (var77 >= 1) && (var77 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
if((myvar0 == 1) && (var78 >= 1) && (var78 <= 39)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var0!=var10) && (var0!=var11) && (var0!=var12) && (var0!=var13) && (var0!=var14) && (var0!=var15) && (var0!=var16) && (var0!=var17) && (var0!=var18) && (var0!=var19) && (var0!=var20) && (var0!=var21) && (var0!=var22) && (var0!=var23) && (var0!=var24) && (var0!=var25) && (var0!=var26) && (var0!=var27) && (var0!=var28) && (var0!=var29) && (var0!=var30) && (var0!=var31) && (var0!=var32) && (var0!=var33) && (var0!=var34) && (var0!=var35) && (var0!=var36) && (var0!=var37) && (var0!=var38) && (var0!=var39) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var1!=var10) && (var1!=var11) && (var1!=var12) && (var1!=var13) && (var1!=var14) && (var1!=var15) && (var1!=var16) && (var1!=var17) && (var1!=var18) && (var1!=var19) && (var1!=var20) && (var1!=var21) && (var1!=var22) && (var1!=var23) && (var1!=var24) && (var1!=var25) && (var1!=var26) && (var1!=var27) && (var1!=var28) && (var1!=var29) && (var1!=var30) && (var1!=var31) && (var1!=var32) && (var1!=var33) && (var1!=var34) && (var1!=var35) && (var1!=var36) && (var1!=var37) && (var1!=var38) && (var1!=var39) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var2!=var10) && (var2!=var11) && (var2!=var12) && (var2!=var13) && (var2!=var14) && (var2!=var15) && (var2!=var16) && (var2!=var17) && (var2!=var18) && (var2!=var19) && (var2!=var20) && (var2!=var21) && (var2!=var22) && (var2!=var23) && (var2!=var24) && (var2!=var25) && (var2!=var26) && (var2!=var27) && (var2!=var28) && (var2!=var29) && (var2!=var30) && (var2!=var31) && (var2!=var32) && (var2!=var33) && (var2!=var34) && (var2!=var35) && (var2!=var36) && (var2!=var37) && (var2!=var38) && (var2!=var39) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var3!=var10) && (var3!=var11) && (var3!=var12) && (var3!=var13) && (var3!=var14) && (var3!=var15) && (var3!=var16) && (var3!=var17) && (var3!=var18) && (var3!=var19) && (var3!=var20) && (var3!=var21) && (var3!=var22) && (var3!=var23) && (var3!=var24) && (var3!=var25) && (var3!=var26) && (var3!=var27) && (var3!=var28) && (var3!=var29) && (var3!=var30) && (var3!=var31) && (var3!=var32) && (var3!=var33) && (var3!=var34) && (var3!=var35) && (var3!=var36) && (var3!=var37) && (var3!=var38) && (var3!=var39) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var4!=var10) && (var4!=var11) && (var4!=var12) && (var4!=var13) && (var4!=var14) && (var4!=var15) && (var4!=var16) && (var4!=var17) && (var4!=var18) && (var4!=var19) && (var4!=var20) && (var4!=var21) && (var4!=var22) && (var4!=var23) && (var4!=var24) && (var4!=var25) && (var4!=var26) && (var4!=var27) && (var4!=var28) && (var4!=var29) && (var4!=var30) && (var4!=var31) && (var4!=var32) && (var4!=var33) && (var4!=var34) && (var4!=var35) && (var4!=var36) && (var4!=var37) && (var4!=var38) && (var4!=var39) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var5!=var10) && (var5!=var11) && (var5!=var12) && (var5!=var13) && (var5!=var14) && (var5!=var15) && (var5!=var16) && (var5!=var17) && (var5!=var18) && (var5!=var19) && (var5!=var20) && (var5!=var21) && (var5!=var22) && (var5!=var23) && (var5!=var24) && (var5!=var25) && (var5!=var26) && (var5!=var27) && (var5!=var28) && (var5!=var29) && (var5!=var30) && (var5!=var31) && (var5!=var32) && (var5!=var33) && (var5!=var34) && (var5!=var35) && (var5!=var36) && (var5!=var37) && (var5!=var38) && (var5!=var39) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var6!=var10) && (var6!=var11) && (var6!=var12) && (var6!=var13) && (var6!=var14) && (var6!=var15) && (var6!=var16) && (var6!=var17) && (var6!=var18) && (var6!=var19) && (var6!=var20) && (var6!=var21) && (var6!=var22) && (var6!=var23) && (var6!=var24) && (var6!=var25) && (var6!=var26) && (var6!=var27) && (var6!=var28) && (var6!=var29) && (var6!=var30) && (var6!=var31) && (var6!=var32) && (var6!=var33) && (var6!=var34) && (var6!=var35) && (var6!=var36) && (var6!=var37) && (var6!=var38) && (var6!=var39) && (var7!=var8) && (var7!=var9) && (var7!=var10) && (var7!=var11) && (var7!=var12) && (var7!=var13) && (var7!=var14) && (var7!=var15) && (var7!=var16) && (var7!=var17) && (var7!=var18) && (var7!=var19) && (var7!=var20) && (var7!=var21) && (var7!=var22) && (var7!=var23) && (var7!=var24) && (var7!=var25) && (var7!=var26) && (var7!=var27) && (var7!=var28) && (var7!=var29) && (var7!=var30) && (var7!=var31) && (var7!=var32) && (var7!=var33) && (var7!=var34) && (var7!=var35) && (var7!=var36) && (var7!=var37) && (var7!=var38) && (var7!=var39) && (var8!=var9) && (var8!=var10) && (var8!=var11) && (var8!=var12) && (var8!=var13) && (var8!=var14) && (var8!=var15) && (var8!=var16) && (var8!=var17) && (var8!=var18) && (var8!=var19) && (var8!=var20) && (var8!=var21) && (var8!=var22) && (var8!=var23) && (var8!=var24) && (var8!=var25) && (var8!=var26) && (var8!=var27) && (var8!=var28) && (var8!=var29) && (var8!=var30) && (var8!=var31) && (var8!=var32) && (var8!=var33) && (var8!=var34) && (var8!=var35) && (var8!=var36) && (var8!=var37) && (var8!=var38) && (var8!=var39) && (var9!=var10) && (var9!=var11) && (var9!=var12) && (var9!=var13) && (var9!=var14) && (var9!=var15) && (var9!=var16) && (var9!=var17) && (var9!=var18) && (var9!=var19) && (var9!=var20) && (var9!=var21) && (var9!=var22) && (var9!=var23) && (var9!=var24) && (var9!=var25) && (var9!=var26) && (var9!=var27) && (var9!=var28) && (var9!=var29) && (var9!=var30) && (var9!=var31) && (var9!=var32) && (var9!=var33) && (var9!=var34) && (var9!=var35) && (var9!=var36) && (var9!=var37) && (var9!=var38) && (var9!=var39) && (var10!=var11) && (var10!=var12) && (var10!=var13) && (var10!=var14) && (var10!=var15) && (var10!=var16) && (var10!=var17) && (var10!=var18) && (var10!=var19) && (var10!=var20) && (var10!=var21) && (var10!=var22) && (var10!=var23) && (var10!=var24) && (var10!=var25) && (var10!=var26) && (var10!=var27) && (var10!=var28) && (var10!=var29) && (var10!=var30) && (var10!=var31) && (var10!=var32) && (var10!=var33) && (var10!=var34) && (var10!=var35) && (var10!=var36) && (var10!=var37) && (var10!=var38) && (var10!=var39) && (var11!=var12) && (var11!=var13) && (var11!=var14) && (var11!=var15) && (var11!=var16) && (var11!=var17) && (var11!=var18) && (var11!=var19) && (var11!=var20) && (var11!=var21) && (var11!=var22) && (var11!=var23) && (var11!=var24) && (var11!=var25) && (var11!=var26) && (var11!=var27) && (var11!=var28) && (var11!=var29) && (var11!=var30) && (var11!=var31) && (var11!=var32) && (var11!=var33) && (var11!=var34) && (var11!=var35) && (var11!=var36) && (var11!=var37) && (var11!=var38) && (var11!=var39) && (var12!=var13) && (var12!=var14) && (var12!=var15) && (var12!=var16) && (var12!=var17) && (var12!=var18) && (var12!=var19) && (var12!=var20) && (var12!=var21) && (var12!=var22) && (var12!=var23) && (var12!=var24) && (var12!=var25) && (var12!=var26) && (var12!=var27) && (var12!=var28) && (var12!=var29) && (var12!=var30) && (var12!=var31) && (var12!=var32) && (var12!=var33) && (var12!=var34) && (var12!=var35) && (var12!=var36) && (var12!=var37) && (var12!=var38) && (var12!=var39) && (var13!=var14) && (var13!=var15) && (var13!=var16) && (var13!=var17) && (var13!=var18) && (var13!=var19) && (var13!=var20) && (var13!=var21) && (var13!=var22) && (var13!=var23) && (var13!=var24) && (var13!=var25) && (var13!=var26) && (var13!=var27) && (var13!=var28) && (var13!=var29) && (var13!=var30) && (var13!=var31) && (var13!=var32) && (var13!=var33) && (var13!=var34) && (var13!=var35) && (var13!=var36) && (var13!=var37) && (var13!=var38) && (var13!=var39) && (var14!=var15) && (var14!=var16) && (var14!=var17) && (var14!=var18) && (var14!=var19) && (var14!=var20) && (var14!=var21) && (var14!=var22) && (var14!=var23) && (var14!=var24) && (var14!=var25) && (var14!=var26) && (var14!=var27) && (var14!=var28) && (var14!=var29) && (var14!=var30) && (var14!=var31) && (var14!=var32) && (var14!=var33) && (var14!=var34) && (var14!=var35) && (var14!=var36) && (var14!=var37) && (var14!=var38) && (var14!=var39) && (var15!=var16) && (var15!=var17) && (var15!=var18) && (var15!=var19) && (var15!=var20) && (var15!=var21) && (var15!=var22) && (var15!=var23) && (var15!=var24) && (var15!=var25) && (var15!=var26) && (var15!=var27) && (var15!=var28) && (var15!=var29) && (var15!=var30) && (var15!=var31) && (var15!=var32) && (var15!=var33) && (var15!=var34) && (var15!=var35) && (var15!=var36) && (var15!=var37) && (var15!=var38) && (var15!=var39) && (var16!=var17) && (var16!=var18) && (var16!=var19) && (var16!=var20) && (var16!=var21) && (var16!=var22) && (var16!=var23) && (var16!=var24) && (var16!=var25) && (var16!=var26) && (var16!=var27) && (var16!=var28) && (var16!=var29) && (var16!=var30) && (var16!=var31) && (var16!=var32) && (var16!=var33) && (var16!=var34) && (var16!=var35) && (var16!=var36) && (var16!=var37) && (var16!=var38) && (var16!=var39) && (var17!=var18) && (var17!=var19) && (var17!=var20) && (var17!=var21) && (var17!=var22) && (var17!=var23) && (var17!=var24) && (var17!=var25) && (var17!=var26) && (var17!=var27) && (var17!=var28) && (var17!=var29) && (var17!=var30) && (var17!=var31) && (var17!=var32) && (var17!=var33) && (var17!=var34) && (var17!=var35) && (var17!=var36) && (var17!=var37) && (var17!=var38) && (var17!=var39) && (var18!=var19) && (var18!=var20) && (var18!=var21) && (var18!=var22) && (var18!=var23) && (var18!=var24) && (var18!=var25) && (var18!=var26) && (var18!=var27) && (var18!=var28) && (var18!=var29) && (var18!=var30) && (var18!=var31) && (var18!=var32) && (var18!=var33) && (var18!=var34) && (var18!=var35) && (var18!=var36) && (var18!=var37) && (var18!=var38) && (var18!=var39) && (var19!=var20) && (var19!=var21) && (var19!=var22) && (var19!=var23) && (var19!=var24) && (var19!=var25) && (var19!=var26) && (var19!=var27) && (var19!=var28) && (var19!=var29) && (var19!=var30) && (var19!=var31) && (var19!=var32) && (var19!=var33) && (var19!=var34) && (var19!=var35) && (var19!=var36) && (var19!=var37) && (var19!=var38) && (var19!=var39) && (var20!=var21) && (var20!=var22) && (var20!=var23) && (var20!=var24) && (var20!=var25) && (var20!=var26) && (var20!=var27) && (var20!=var28) && (var20!=var29) && (var20!=var30) && (var20!=var31) && (var20!=var32) && (var20!=var33) && (var20!=var34) && (var20!=var35) && (var20!=var36) && (var20!=var37) && (var20!=var38) && (var20!=var39) && (var21!=var22) && (var21!=var23) && (var21!=var24) && (var21!=var25) && (var21!=var26) && (var21!=var27) && (var21!=var28) && (var21!=var29) && (var21!=var30) && (var21!=var31) && (var21!=var32) && (var21!=var33) && (var21!=var34) && (var21!=var35) && (var21!=var36) && (var21!=var37) && (var21!=var38) && (var21!=var39) && (var22!=var23) && (var22!=var24) && (var22!=var25) && (var22!=var26) && (var22!=var27) && (var22!=var28) && (var22!=var29) && (var22!=var30) && (var22!=var31) && (var22!=var32) && (var22!=var33) && (var22!=var34) && (var22!=var35) && (var22!=var36) && (var22!=var37) && (var22!=var38) && (var22!=var39) && (var23!=var24) && (var23!=var25) && (var23!=var26) && (var23!=var27) && (var23!=var28) && (var23!=var29) && (var23!=var30) && (var23!=var31) && (var23!=var32) && (var23!=var33) && (var23!=var34) && (var23!=var35) && (var23!=var36) && (var23!=var37) && (var23!=var38) && (var23!=var39) && (var24!=var25) && (var24!=var26) && (var24!=var27) && (var24!=var28) && (var24!=var29) && (var24!=var30) && (var24!=var31) && (var24!=var32) && (var24!=var33) && (var24!=var34) && (var24!=var35) && (var24!=var36) && (var24!=var37) && (var24!=var38) && (var24!=var39) && (var25!=var26) && (var25!=var27) && (var25!=var28) && (var25!=var29) && (var25!=var30) && (var25!=var31) && (var25!=var32) && (var25!=var33) && (var25!=var34) && (var25!=var35) && (var25!=var36) && (var25!=var37) && (var25!=var38) && (var25!=var39) && (var26!=var27) && (var26!=var28) && (var26!=var29) && (var26!=var30) && (var26!=var31) && (var26!=var32) && (var26!=var33) && (var26!=var34) && (var26!=var35) && (var26!=var36) && (var26!=var37) && (var26!=var38) && (var26!=var39) && (var27!=var28) && (var27!=var29) && (var27!=var30) && (var27!=var31) && (var27!=var32) && (var27!=var33) && (var27!=var34) && (var27!=var35) && (var27!=var36) && (var27!=var37) && (var27!=var38) && (var27!=var39) && (var28!=var29) && (var28!=var30) && (var28!=var31) && (var28!=var32) && (var28!=var33) && (var28!=var34) && (var28!=var35) && (var28!=var36) && (var28!=var37) && (var28!=var38) && (var28!=var39) && (var29!=var30) && (var29!=var31) && (var29!=var32) && (var29!=var33) && (var29!=var34) && (var29!=var35) && (var29!=var36) && (var29!=var37) && (var29!=var38) && (var29!=var39) && (var30!=var31) && (var30!=var32) && (var30!=var33) && (var30!=var34) && (var30!=var35) && (var30!=var36) && (var30!=var37) && (var30!=var38) && (var30!=var39) && (var31!=var32) && (var31!=var33) && (var31!=var34) && (var31!=var35) && (var31!=var36) && (var31!=var37) && (var31!=var38) && (var31!=var39) && (var32!=var33) && (var32!=var34) && (var32!=var35) && (var32!=var36) && (var32!=var37) && (var32!=var38) && (var32!=var39) && (var33!=var34) && (var33!=var35) && (var33!=var36) && (var33!=var37) && (var33!=var38) && (var33!=var39) && (var34!=var35) && (var34!=var36) && (var34!=var37) && (var34!=var38) && (var34!=var39) && (var35!=var36) && (var35!=var37) && (var35!=var38) && (var35!=var39) && (var36!=var37) && (var36!=var38) && (var36!=var39) && (var37!=var38) && (var37!=var39) && (var38!=var39) &&  1)
{myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var40!=var41) && (var40!=var42) && (var40!=var43) && (var40!=var44) && (var40!=var45) && (var40!=var46) && (var40!=var47) && (var40!=var48) && (var40!=var49) && (var40!=var50) && (var40!=var51) && (var40!=var52) && (var40!=var53) && (var40!=var54) && (var40!=var55) && (var40!=var56) && (var40!=var57) && (var40!=var58) && (var40!=var59) && (var40!=var60) && (var40!=var61) && (var40!=var62) && (var40!=var63) && (var40!=var64) && (var40!=var65) && (var40!=var66) && (var40!=var67) && (var40!=var68) && (var40!=var69) && (var40!=var70) && (var40!=var71) && (var40!=var72) && (var40!=var73) && (var40!=var74) && (var40!=var75) && (var40!=var76) && (var40!=var77) && (var40!=var78) && (var41!=var42) && (var41!=var43) && (var41!=var44) && (var41!=var45) && (var41!=var46) && (var41!=var47) && (var41!=var48) && (var41!=var49) && (var41!=var50) && (var41!=var51) && (var41!=var52) && (var41!=var53) && (var41!=var54) && (var41!=var55) && (var41!=var56) && (var41!=var57) && (var41!=var58) && (var41!=var59) && (var41!=var60) && (var41!=var61) && (var41!=var62) && (var41!=var63) && (var41!=var64) && (var41!=var65) && (var41!=var66) && (var41!=var67) && (var41!=var68) && (var41!=var69) && (var41!=var70) && (var41!=var71) && (var41!=var72) && (var41!=var73) && (var41!=var74) && (var41!=var75) && (var41!=var76) && (var41!=var77) && (var41!=var78) && (var42!=var43) && (var42!=var44) && (var42!=var45) && (var42!=var46) && (var42!=var47) && (var42!=var48) && (var42!=var49) && (var42!=var50) && (var42!=var51) && (var42!=var52) && (var42!=var53) && (var42!=var54) && (var42!=var55) && (var42!=var56) && (var42!=var57) && (var42!=var58) && (var42!=var59) && (var42!=var60) && (var42!=var61) && (var42!=var62) && (var42!=var63) && (var42!=var64) && (var42!=var65) && (var42!=var66) && (var42!=var67) && (var42!=var68) && (var42!=var69) && (var42!=var70) && (var42!=var71) && (var42!=var72) && (var42!=var73) && (var42!=var74) && (var42!=var75) && (var42!=var76) && (var42!=var77) && (var42!=var78) && (var43!=var44) && (var43!=var45) && (var43!=var46) && (var43!=var47) && (var43!=var48) && (var43!=var49) && (var43!=var50) && (var43!=var51) && (var43!=var52) && (var43!=var53) && (var43!=var54) && (var43!=var55) && (var43!=var56) && (var43!=var57) && (var43!=var58) && (var43!=var59) && (var43!=var60) && (var43!=var61) && (var43!=var62) && (var43!=var63) && (var43!=var64) && (var43!=var65) && (var43!=var66) && (var43!=var67) && (var43!=var68) && (var43!=var69) && (var43!=var70) && (var43!=var71) && (var43!=var72) && (var43!=var73) && (var43!=var74) && (var43!=var75) && (var43!=var76) && (var43!=var77) && (var43!=var78) && (var44!=var45) && (var44!=var46) && (var44!=var47) && (var44!=var48) && (var44!=var49) && (var44!=var50) && (var44!=var51) && (var44!=var52) && (var44!=var53) && (var44!=var54) && (var44!=var55) && (var44!=var56) && (var44!=var57) && (var44!=var58) && (var44!=var59) && (var44!=var60) && (var44!=var61) && (var44!=var62) && (var44!=var63) && (var44!=var64) && (var44!=var65) && (var44!=var66) && (var44!=var67) && (var44!=var68) && (var44!=var69) && (var44!=var70) && (var44!=var71) && (var44!=var72) && (var44!=var73) && (var44!=var74) && (var44!=var75) && (var44!=var76) && (var44!=var77) && (var44!=var78) && (var45!=var46) && (var45!=var47) && (var45!=var48) && (var45!=var49) && (var45!=var50) && (var45!=var51) && (var45!=var52) && (var45!=var53) && (var45!=var54) && (var45!=var55) && (var45!=var56) && (var45!=var57) && (var45!=var58) && (var45!=var59) && (var45!=var60) && (var45!=var61) && (var45!=var62) && (var45!=var63) && (var45!=var64) && (var45!=var65) && (var45!=var66) && (var45!=var67) && (var45!=var68) && (var45!=var69) && (var45!=var70) && (var45!=var71) && (var45!=var72) && (var45!=var73) && (var45!=var74) && (var45!=var75) && (var45!=var76) && (var45!=var77) && (var45!=var78) && (var46!=var47) && (var46!=var48) && (var46!=var49) && (var46!=var50) && (var46!=var51) && (var46!=var52) && (var46!=var53) && (var46!=var54) && (var46!=var55) && (var46!=var56) && (var46!=var57) && (var46!=var58) && (var46!=var59) && (var46!=var60) && (var46!=var61) && (var46!=var62) && (var46!=var63) && (var46!=var64) && (var46!=var65) && (var46!=var66) && (var46!=var67) && (var46!=var68) && (var46!=var69) && (var46!=var70) && (var46!=var71) && (var46!=var72) && (var46!=var73) && (var46!=var74) && (var46!=var75) && (var46!=var76) && (var46!=var77) && (var46!=var78) && (var47!=var48) && (var47!=var49) && (var47!=var50) && (var47!=var51) && (var47!=var52) && (var47!=var53) && (var47!=var54) && (var47!=var55) && (var47!=var56) && (var47!=var57) && (var47!=var58) && (var47!=var59) && (var47!=var60) && (var47!=var61) && (var47!=var62) && (var47!=var63) && (var47!=var64) && (var47!=var65) && (var47!=var66) && (var47!=var67) && (var47!=var68) && (var47!=var69) && (var47!=var70) && (var47!=var71) && (var47!=var72) && (var47!=var73) && (var47!=var74) && (var47!=var75) && (var47!=var76) && (var47!=var77) && (var47!=var78) && (var48!=var49) && (var48!=var50) && (var48!=var51) && (var48!=var52) && (var48!=var53) && (var48!=var54) && (var48!=var55) && (var48!=var56) && (var48!=var57) && (var48!=var58) && (var48!=var59) && (var48!=var60) && (var48!=var61) && (var48!=var62) && (var48!=var63) && (var48!=var64) && (var48!=var65) && (var48!=var66) && (var48!=var67) && (var48!=var68) && (var48!=var69) && (var48!=var70) && (var48!=var71) && (var48!=var72) && (var48!=var73) && (var48!=var74) && (var48!=var75) && (var48!=var76) && (var48!=var77) && (var48!=var78) && (var49!=var50) && (var49!=var51) && (var49!=var52) && (var49!=var53) && (var49!=var54) && (var49!=var55) && (var49!=var56) && (var49!=var57) && (var49!=var58) && (var49!=var59) && (var49!=var60) && (var49!=var61) && (var49!=var62) && (var49!=var63) && (var49!=var64) && (var49!=var65) && (var49!=var66) && (var49!=var67) && (var49!=var68) && (var49!=var69) && (var49!=var70) && (var49!=var71) && (var49!=var72) && (var49!=var73) && (var49!=var74) && (var49!=var75) && (var49!=var76) && (var49!=var77) && (var49!=var78) && (var50!=var51) && (var50!=var52) && (var50!=var53) && (var50!=var54) && (var50!=var55) && (var50!=var56) && (var50!=var57) && (var50!=var58) && (var50!=var59) && (var50!=var60) && (var50!=var61) && (var50!=var62) && (var50!=var63) && (var50!=var64) && (var50!=var65) && (var50!=var66) && (var50!=var67) && (var50!=var68) && (var50!=var69) && (var50!=var70) && (var50!=var71) && (var50!=var72) && (var50!=var73) && (var50!=var74) && (var50!=var75) && (var50!=var76) && (var50!=var77) && (var50!=var78) && (var51!=var52) && (var51!=var53) && (var51!=var54) && (var51!=var55) && (var51!=var56) && (var51!=var57) && (var51!=var58) && (var51!=var59) && (var51!=var60) && (var51!=var61) && (var51!=var62) && (var51!=var63) && (var51!=var64) && (var51!=var65) && (var51!=var66) && (var51!=var67) && (var51!=var68) && (var51!=var69) && (var51!=var70) && (var51!=var71) && (var51!=var72) && (var51!=var73) && (var51!=var74) && (var51!=var75) && (var51!=var76) && (var51!=var77) && (var51!=var78) && (var52!=var53) && (var52!=var54) && (var52!=var55) && (var52!=var56) && (var52!=var57) && (var52!=var58) && (var52!=var59) && (var52!=var60) && (var52!=var61) && (var52!=var62) && (var52!=var63) && (var52!=var64) && (var52!=var65) && (var52!=var66) && (var52!=var67) && (var52!=var68) && (var52!=var69) && (var52!=var70) && (var52!=var71) && (var52!=var72) && (var52!=var73) && (var52!=var74) && (var52!=var75) && (var52!=var76) && (var52!=var77) && (var52!=var78) && (var53!=var54) && (var53!=var55) && (var53!=var56) && (var53!=var57) && (var53!=var58) && (var53!=var59) && (var53!=var60) && (var53!=var61) && (var53!=var62) && (var53!=var63) && (var53!=var64) && (var53!=var65) && (var53!=var66) && (var53!=var67) && (var53!=var68) && (var53!=var69) && (var53!=var70) && (var53!=var71) && (var53!=var72) && (var53!=var73) && (var53!=var74) && (var53!=var75) && (var53!=var76) && (var53!=var77) && (var53!=var78) && (var54!=var55) && (var54!=var56) && (var54!=var57) && (var54!=var58) && (var54!=var59) && (var54!=var60) && (var54!=var61) && (var54!=var62) && (var54!=var63) && (var54!=var64) && (var54!=var65) && (var54!=var66) && (var54!=var67) && (var54!=var68) && (var54!=var69) && (var54!=var70) && (var54!=var71) && (var54!=var72) && (var54!=var73) && (var54!=var74) && (var54!=var75) && (var54!=var76) && (var54!=var77) && (var54!=var78) && (var55!=var56) && (var55!=var57) && (var55!=var58) && (var55!=var59) && (var55!=var60) && (var55!=var61) && (var55!=var62) && (var55!=var63) && (var55!=var64) && (var55!=var65) && (var55!=var66) && (var55!=var67) && (var55!=var68) && (var55!=var69) && (var55!=var70) && (var55!=var71) && (var55!=var72) && (var55!=var73) && (var55!=var74) && (var55!=var75) && (var55!=var76) && (var55!=var77) && (var55!=var78) && (var56!=var57) && (var56!=var58) && (var56!=var59) && (var56!=var60) && (var56!=var61) && (var56!=var62) && (var56!=var63) && (var56!=var64) && (var56!=var65) && (var56!=var66) && (var56!=var67) && (var56!=var68) && (var56!=var69) && (var56!=var70) && (var56!=var71) && (var56!=var72) && (var56!=var73) && (var56!=var74) && (var56!=var75) && (var56!=var76) && (var56!=var77) && (var56!=var78) && (var57!=var58) && (var57!=var59) && (var57!=var60) && (var57!=var61) && (var57!=var62) && (var57!=var63) && (var57!=var64) && (var57!=var65) && (var57!=var66) && (var57!=var67) && (var57!=var68) && (var57!=var69) && (var57!=var70) && (var57!=var71) && (var57!=var72) && (var57!=var73) && (var57!=var74) && (var57!=var75) && (var57!=var76) && (var57!=var77) && (var57!=var78) && (var58!=var59) && (var58!=var60) && (var58!=var61) && (var58!=var62) && (var58!=var63) && (var58!=var64) && (var58!=var65) && (var58!=var66) && (var58!=var67) && (var58!=var68) && (var58!=var69) && (var58!=var70) && (var58!=var71) && (var58!=var72) && (var58!=var73) && (var58!=var74) && (var58!=var75) && (var58!=var76) && (var58!=var77) && (var58!=var78) && (var59!=var60) && (var59!=var61) && (var59!=var62) && (var59!=var63) && (var59!=var64) && (var59!=var65) && (var59!=var66) && (var59!=var67) && (var59!=var68) && (var59!=var69) && (var59!=var70) && (var59!=var71) && (var59!=var72) && (var59!=var73) && (var59!=var74) && (var59!=var75) && (var59!=var76) && (var59!=var77) && (var59!=var78) && (var60!=var61) && (var60!=var62) && (var60!=var63) && (var60!=var64) && (var60!=var65) && (var60!=var66) && (var60!=var67) && (var60!=var68) && (var60!=var69) && (var60!=var70) && (var60!=var71) && (var60!=var72) && (var60!=var73) && (var60!=var74) && (var60!=var75) && (var60!=var76) && (var60!=var77) && (var60!=var78) && (var61!=var62) && (var61!=var63) && (var61!=var64) && (var61!=var65) && (var61!=var66) && (var61!=var67) && (var61!=var68) && (var61!=var69) && (var61!=var70) && (var61!=var71) && (var61!=var72) && (var61!=var73) && (var61!=var74) && (var61!=var75) && (var61!=var76) && (var61!=var77) && (var61!=var78) && (var62!=var63) && (var62!=var64) && (var62!=var65) && (var62!=var66) && (var62!=var67) && (var62!=var68) && (var62!=var69) && (var62!=var70) && (var62!=var71) && (var62!=var72) && (var62!=var73) && (var62!=var74) && (var62!=var75) && (var62!=var76) && (var62!=var77) && (var62!=var78) && (var63!=var64) && (var63!=var65) && (var63!=var66) && (var63!=var67) && (var63!=var68) && (var63!=var69) && (var63!=var70) && (var63!=var71) && (var63!=var72) && (var63!=var73) && (var63!=var74) && (var63!=var75) && (var63!=var76) && (var63!=var77) && (var63!=var78) && (var64!=var65) && (var64!=var66) && (var64!=var67) && (var64!=var68) && (var64!=var69) && (var64!=var70) && (var64!=var71) && (var64!=var72) && (var64!=var73) && (var64!=var74) && (var64!=var75) && (var64!=var76) && (var64!=var77) && (var64!=var78) && (var65!=var66) && (var65!=var67) && (var65!=var68) && (var65!=var69) && (var65!=var70) && (var65!=var71) && (var65!=var72) && (var65!=var73) && (var65!=var74) && (var65!=var75) && (var65!=var76) && (var65!=var77) && (var65!=var78) && (var66!=var67) && (var66!=var68) && (var66!=var69) && (var66!=var70) && (var66!=var71) && (var66!=var72) && (var66!=var73) && (var66!=var74) && (var66!=var75) && (var66!=var76) && (var66!=var77) && (var66!=var78) && (var67!=var68) && (var67!=var69) && (var67!=var70) && (var67!=var71) && (var67!=var72) && (var67!=var73) && (var67!=var74) && (var67!=var75) && (var67!=var76) && (var67!=var77) && (var67!=var78) && (var68!=var69) && (var68!=var70) && (var68!=var71) && (var68!=var72) && (var68!=var73) && (var68!=var74) && (var68!=var75) && (var68!=var76) && (var68!=var77) && (var68!=var78) && (var69!=var70) && (var69!=var71) && (var69!=var72) && (var69!=var73) && (var69!=var74) && (var69!=var75) && (var69!=var76) && (var69!=var77) && (var69!=var78) && (var70!=var71) && (var70!=var72) && (var70!=var73) && (var70!=var74) && (var70!=var75) && (var70!=var76) && (var70!=var77) && (var70!=var78) && (var71!=var72) && (var71!=var73) && (var71!=var74) && (var71!=var75) && (var71!=var76) && (var71!=var77) && (var71!=var78) && (var72!=var73) && (var72!=var74) && (var72!=var75) && (var72!=var76) && (var72!=var77) && (var72!=var78) && (var73!=var74) && (var73!=var75) && (var73!=var76) && (var73!=var77) && (var73!=var78) && (var74!=var75) && (var74!=var76) && (var74!=var77) && (var74!=var78) && (var75!=var76) && (var75!=var77) && (var75!=var78) && (var76!=var77) && (var76!=var78) && (var77!=var78) &&  1)
{myvar0= 1;}
else {myvar0= 0;exit(0);}
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var40 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var41 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var42 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var43 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var44 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var45 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var46 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var47 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var48 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var49 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var50 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var11 - var12;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var51 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var12 - var13;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var52 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var13 - var14;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var53 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var14 - var15;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var54 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var15 - var16;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var55 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var16 - var17;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var56 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var17 - var18;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var57 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var18 - var19;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var58 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var19 - var20;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var59 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var20 - var21;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var60 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var21 - var22;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var61 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var22 - var23;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var62 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var23 - var24;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var63 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var24 - var25;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var64 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var25 - var26;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var65 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var26 - var27;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var66 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var27 - var28;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var67 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var28 - var29;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var68 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var29 - var30;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var69 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var30 - var31;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var70 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var31 - var32;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var71 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var32 - var33;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var72 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var33 - var34;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var73 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var34 - var35;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var74 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var35 - var36;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var75 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var36 - var37;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var76 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var37 - var38;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var77 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var38 - var39;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var78 == var_for_abs)){myvar0= 1;}
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
40 y[0]
41 y[1]
42 y[2]
43 y[3]
44 y[4]
45 y[5]
46 y[6]
47 y[7]
48 y[8]
49 y[9]
50 y[10]
51 y[11]
52 y[12]
53 y[13]
54 y[14]
55 y[15]
56 y[16]
57 y[17]
58 y[18]
59 y[19]
60 y[20]
61 y[21]
62 y[22]
63 y[23]
64 y[24]
65 y[25]
66 y[26]
67 y[27]
68 y[28]
69 y[29]
70 y[30]
71 y[31]
72 y[32]
73 y[33]
74 y[34]
75 y[35]
76 y[36]
77 y[37]
78 y[38]
 */}
