
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
if((var0 >= 0) & (var0 <= 7)) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 7)) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 7)) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 7)) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 7)) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 7)) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 7)) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 7)) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 7)) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 7)) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 7)) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 7)) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 0) & (var12 <= 7)) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 0) & (var13 <= 7)) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 0) & (var14 <= 7)) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 0) & (var15 <= 7)) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 0) & (var16 <= 7)) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 0) & (var17 <= 7)) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 0) & (var18 <= 7)) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 0) & (var19 <= 7)) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 0) & (var20 <= 7)) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 0) & (var21 <= 7)) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 0) & (var22 <= 7)) {myvar0= 1;}
else {exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((var23 >= 0) & (var23 <= 7)) {myvar0= 1;}
else {exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((var24 >= 0) & (var24 <= 7)) {myvar0= 1;}
else {exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((var25 >= 0) & (var25 <= 7)) {myvar0= 1;}
else {exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((var26 >= 0) & (var26 <= 7)) {myvar0= 1;}
else {exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((var27 >= 0) & (var27 <= 7)) {myvar0= 1;}
else {exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((var28 >= 0) & (var28 <= 7)) {myvar0= 1;}
else {exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((var29 >= 0) & (var29 <= 7)) {myvar0= 1;}
else {exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((var30 >= 0) & (var30 <= 7)) {myvar0= 1;}
else {exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((var31 >= 0) & (var31 <= 7)) {myvar0= 1;}
else {exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((var32 >= 0) & (var32 <= 7)) {myvar0= 1;}
else {exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((var33 >= 0) & (var33 <= 7)) {myvar0= 1;}
else {exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((var34 >= 0) & (var34 <= 7)) {myvar0= 1;}
else {exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((var35 >= 0) & (var35 <= 7)) {myvar0= 1;}
else {exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((var36 >= 0) & (var36 <= 7)) {myvar0= 1;}
else {exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((var37 >= 0) & (var37 <= 7)) {myvar0= 1;}
else {exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((var38 >= 0) & (var38 <= 7)) {myvar0= 1;}
else {exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((var39 >= 0) & (var39 <= 7)) {myvar0= 1;}
else {exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((var40 >= 0) & (var40 <= 7)) {myvar0= 1;}
else {exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((var41 >= 0) & (var41 <= 7)) {myvar0= 1;}
else {exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((var42 >= 0) & (var42 <= 7)) {myvar0= 1;}
else {exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((var43 >= 0) & (var43 <= 7)) {myvar0= 1;}
else {exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((var44 >= 0) & (var44 <= 7)) {myvar0= 1;}
else {exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((var45 >= 0) & (var45 <= 7)) {myvar0= 1;}
else {exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((var46 >= 0) & (var46 <= 7)) {myvar0= 1;}
else {exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((var47 >= 0) & (var47 <= 7)) {myvar0= 1;}
else {exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((var48 >= 0) & (var48 <= 7)) {myvar0= 1;}
else {exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((var49 >= 0) & (var49 <= 7)) {myvar0= 1;}
else {exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((var50 >= 0) & (var50 <= 7)) {myvar0= 1;}
else {exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((var51 >= 0) & (var51 <= 7)) {myvar0= 1;}
else {exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((var52 >= 0) & (var52 <= 7)) {myvar0= 1;}
else {exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((var53 >= 0) & (var53 <= 7)) {myvar0= 1;}
else {exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((var54 >= 0) & (var54 <= 7)) {myvar0= 1;}
else {exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((var55 >= 0) & (var55 <= 7)) {myvar0= 1;}
else {exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((var56 >= 0) & (var56 <= 7)) {myvar0= 1;}
else {exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((var57 >= 0) & (var57 <= 7)) {myvar0= 1;}
else {exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((var58 >= 0) & (var58 <= 7)) {myvar0= 1;}
else {exit(0);}
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
if((var59 >= 0) & (var59 <= 7)) {myvar0= 1;}
else {exit(0);}
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
if((var60 >= 0) & (var60 <= 7)) {myvar0= 1;}
else {exit(0);}
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
if((var61 >= 0) & (var61 <= 7)) {myvar0= 1;}
else {exit(0);}
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
if((var62 >= 0) & (var62 <= 7)) {myvar0= 1;}
else {exit(0);}
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
if((var63 >= 0) & (var63 <= 7)) {myvar0= 1;}
else {exit(0);}
if(var0 != var11){myvar0= 1;}
else {exit(0);}
if(var1 != var41){myvar0= 1;}
else {exit(0);}
if(var1 != var47){myvar0= 1;}
else {exit(0);}
if(var12 != var5){myvar0= 1;}
else {exit(0);}
if(var14 != var47){myvar0= 1;}
else {exit(0);}
if(var16 != var21){myvar0= 1;}
else {exit(0);}
if(var16 != var29){myvar0= 1;}
else {exit(0);}
if(var16 != var32){myvar0= 1;}
else {exit(0);}
if(var16 != var55){myvar0= 1;}
else {exit(0);}
if(var17 != var28){myvar0= 1;}
else {exit(0);}
if(var17 != var44){myvar0= 1;}
else {exit(0);}
if(var18 != var0){myvar0= 1;}
else {exit(0);}
if(var18 != var11){myvar0= 1;}
else {exit(0);}
if(var18 != var20){myvar0= 1;}
else {exit(0);}
if(var18 != var40){myvar0= 1;}
else {exit(0);}
if(var20 != var0){myvar0= 1;}
else {exit(0);}
if(var20 != var11){myvar0= 1;}
else {exit(0);}
if(var20 != var24){myvar0= 1;}
else {exit(0);}
if(var21 != var55){myvar0= 1;}
else {exit(0);}
if(var22 != var46){myvar0= 1;}
else {exit(0);}
if(var22 != var8){myvar0= 1;}
else {exit(0);}
if(var23 != var29){myvar0= 1;}
else {exit(0);}
if(var23 != var32){myvar0= 1;}
else {exit(0);}
if(var24 != var0){myvar0= 1;}
else {exit(0);}
if(var24 != var11){myvar0= 1;}
else {exit(0);}
if(var24 != var40){myvar0= 1;}
else {exit(0);}
if(var25 != var46){myvar0= 1;}
else {exit(0);}
if(var26 != var22){myvar0= 1;}
else {exit(0);}
if(var26 != var25){myvar0= 1;}
else {exit(0);}
if(var26 != var46){myvar0= 1;}
else {exit(0);}
if(var26 != var62){myvar0= 1;}
else {exit(0);}
if(var30 != var36){myvar0= 1;}
else {exit(0);}
if(var31 != var13){myvar0= 1;}
else {exit(0);}
if(var32 != var21){myvar0= 1;}
else {exit(0);}
if(var33 != var14){myvar0= 1;}
else {exit(0);}
if(var33 != var15){myvar0= 1;}
else {exit(0);}
if(var33 != var34){myvar0= 1;}
else {exit(0);}
if(var34 != var1){myvar0= 1;}
else {exit(0);}
if(var34 != var14){myvar0= 1;}
else {exit(0);}
if(var34 != var15){myvar0= 1;}
else {exit(0);}
if(var37 != var13){myvar0= 1;}
else {exit(0);}
if(var37 != var27){myvar0= 1;}
else {exit(0);}
if(var37 != var31){myvar0= 1;}
else {exit(0);}
if(var39 != var28){myvar0= 1;}
else {exit(0);}
if(var39 != var42){myvar0= 1;}
else {exit(0);}
if(var39 != var44){myvar0= 1;}
else {exit(0);}
if(var39 != var51){myvar0= 1;}
else {exit(0);}
if(var39 != var9){myvar0= 1;}
else {exit(0);}
if(var4 != var12){myvar0= 1;}
else {exit(0);}
if(var4 != var3){myvar0= 1;}
else {exit(0);}
if(var4 != var53){myvar0= 1;}
else {exit(0);}
if(var40 != var0){myvar0= 1;}
else {exit(0);}
if(var42 != var44){myvar0= 1;}
else {exit(0);}
if(var43 != var10){myvar0= 1;}
else {exit(0);}
if(var43 != var19){myvar0= 1;}
else {exit(0);}
if(var45 != var31){myvar0= 1;}
else {exit(0);}
if(var45 != var37){myvar0= 1;}
else {exit(0);}
if(var45 != var48){myvar0= 1;}
else {exit(0);}
if(var45 != var63){myvar0= 1;}
else {exit(0);}
if(var48 != var27){myvar0= 1;}
else {exit(0);}
if(var48 != var31){myvar0= 1;}
else {exit(0);}
if(var50 != var10){myvar0= 1;}
else {exit(0);}
if(var50 != var36){myvar0= 1;}
else {exit(0);}
if(var52 != var62){myvar0= 1;}
else {exit(0);}
if(var52 != var8){myvar0= 1;}
else {exit(0);}
if(var53 != var3){myvar0= 1;}
else {exit(0);}
if(var53 != var5){myvar0= 1;}
else {exit(0);}
if(var53 != var6){myvar0= 1;}
else {exit(0);}
if(var55 != var29){myvar0= 1;}
else {exit(0);}
if(var56 != var0){myvar0= 1;}
else {exit(0);}
if(var56 != var11){myvar0= 1;}
else {exit(0);}
if(var56 != var24){myvar0= 1;}
else {exit(0);}
if(var56 != var40){myvar0= 1;}
else {exit(0);}
if(var57 != var42){myvar0= 1;}
else {exit(0);}
if(var57 != var44){myvar0= 1;}
else {exit(0);}
if(var58 != var19){myvar0= 1;}
else {exit(0);}
if(var58 != var36){myvar0= 1;}
else {exit(0);}
if(var6 != var3){myvar0= 1;}
else {exit(0);}
if(var61 != var3){myvar0= 1;}
else {exit(0);}
if(var61 != var5){myvar0= 1;}
else {exit(0);}
if(var62 != var25){myvar0= 1;}
else {exit(0);}
if(var63 != var13){myvar0= 1;}
else {exit(0);}
if(var63 != var27){myvar0= 1;}
else {exit(0);}
if(var63 != var37){myvar0= 1;}
else {exit(0);}
if(var63 != var48){myvar0= 1;}
else {exit(0);}
if(var8 != var25){myvar0= 1;}
else {exit(0);}
if(var9 != var42){myvar0= 1;}
else {exit(0);}
if(var9 != var44){myvar0= 1;}
else {exit(0);}
if(var9 != var51){myvar0= 1;}
else {exit(0);}
if(0 > (var1 - var14)*(var14 - var1)){myvar0= 1;}
else {exit(0);}
if(0 > (var12 - var3)*(var3 - var12)){myvar0= 1;}
else {exit(0);}
if(0 > (var12 - var61)*(var61 - var12)){myvar0= 1;}
else {exit(0);}
if(0 > (var13 - var27)*(var27 - var13)){myvar0= 1;}
else {exit(0);}
if(0 > (var14 - var41)*(var41 - var14)){myvar0= 1;}
else {exit(0);}
if(0 > (var15 - var1)*(var1 - var15)){myvar0= 1;}
else {exit(0);}
if(0 > (var15 - var14)*(var14 - var15)){myvar0= 1;}
else {exit(0);}
if(0 > (var15 - var41)*(var41 - var15)){myvar0= 1;}
else {exit(0);}
if(0 > (var15 - var47)*(var47 - var15)){myvar0= 1;}
else {exit(0);}
if(0 > (var16 - var23)*(var23 - var16)){myvar0= 1;}
else {exit(0);}
if(0 > (var16 - var49)*(var49 - var16)){myvar0= 1;}
else {exit(0);}
if(0 > (var17 - var42)*(var42 - var17)){myvar0= 1;}
else {exit(0);}
if(0 > (var18 - var24)*(var24 - var18)){myvar0= 1;}
else {exit(0);}
if(0 > (var18 - var56)*(var56 - var18)){myvar0= 1;}
else {exit(0);}
if(0 > (var19 - var10)*(var10 - var19)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var40)*(var40 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var20 - var56)*(var56 - var20)){myvar0= 1;}
else {exit(0);}
if(0 > (var21 - var29)*(var29 - var21)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var25)*(var25 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var52)*(var52 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var22 - var62)*(var62 - var22)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var21)*(var21 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var49)*(var49 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var23 - var55)*(var55 - var23)){myvar0= 1;}
else {exit(0);}
if(0 > (var26 - var52)*(var52 - var26)){myvar0= 1;}
else {exit(0);}
if(0 > (var26 - var8)*(var8 - var26)){myvar0= 1;}
else {exit(0);}
if(0 > (var28 - var44)*(var44 - var28)){myvar0= 1;}
else {exit(0);}
if(0 > (var3 - var5)*(var5 - var3)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var10)*(var10 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var19)*(var19 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var43)*(var43 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var50)*(var50 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var30 - var58)*(var58 - var30)){myvar0= 1;}
else {exit(0);}
if(0 > (var31 - var27)*(var27 - var31)){myvar0= 1;}
else {exit(0);}
if(0 > (var32 - var29)*(var29 - var32)){myvar0= 1;}
else {exit(0);}
if(0 > (var32 - var49)*(var49 - var32)){myvar0= 1;}
else {exit(0);}
if(0 > (var32 - var55)*(var55 - var32)){myvar0= 1;}
else {exit(0);}
if(0 > (var33 - var1)*(var1 - var33)){myvar0= 1;}
else {exit(0);}
if(0 > (var33 - var41)*(var41 - var33)){myvar0= 1;}
else {exit(0);}
if(0 > (var33 - var47)*(var47 - var33)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var41)*(var41 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var34 - var47)*(var47 - var34)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var10)*(var10 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var36 - var19)*(var19 - var36)){myvar0= 1;}
else {exit(0);}
if(0 > (var39 - var17)*(var17 - var39)){myvar0= 1;}
else {exit(0);}
if(0 > (var39 - var57)*(var57 - var39)){myvar0= 1;}
else {exit(0);}
if(0 > (var4 - var5)*(var5 - var4)){myvar0= 1;}
else {exit(0);}
if(0 > (var4 - var6)*(var6 - var4)){myvar0= 1;}
else {exit(0);}
if(0 > (var4 - var61)*(var61 - var4)){myvar0= 1;}
else {exit(0);}
if(0 > (var40 - var11)*(var11 - var40)){myvar0= 1;}
else {exit(0);}
if(0 > (var42 - var28)*(var28 - var42)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var36)*(var36 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var43 - var50)*(var50 - var43)){myvar0= 1;}
else {exit(0);}
if(0 > (var45 - var13)*(var13 - var45)){myvar0= 1;}
else {exit(0);}
if(0 > (var45 - var27)*(var27 - var45)){myvar0= 1;}
else {exit(0);}
if(0 > (var47 - var41)*(var41 - var47)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var13)*(var13 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var48 - var37)*(var37 - var48)){myvar0= 1;}
else {exit(0);}
if(0 > (var49 - var21)*(var21 - var49)){myvar0= 1;}
else {exit(0);}
if(0 > (var49 - var29)*(var29 - var49)){myvar0= 1;}
else {exit(0);}
if(0 > (var49 - var55)*(var55 - var49)){myvar0= 1;}
else {exit(0);}
if(0 > (var50 - var19)*(var19 - var50)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var17)*(var17 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var28)*(var28 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var42)*(var42 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var51 - var44)*(var44 - var51)){myvar0= 1;}
else {exit(0);}
if(0 > (var52 - var25)*(var25 - var52)){myvar0= 1;}
else {exit(0);}
if(0 > (var52 - var46)*(var46 - var52)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var12)*(var12 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var53 - var61)*(var61 - var53)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var17)*(var17 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var28)*(var28 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var57 - var51)*(var51 - var57)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var10)*(var10 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var43)*(var43 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var58 - var50)*(var50 - var58)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var12)*(var12 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var5)*(var5 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var6 - var61)*(var61 - var6)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var46)*(var46 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var62 - var8)*(var8 - var62)){myvar0= 1;}
else {exit(0);}
if(0 > (var63 - var31)*(var31 - var63)){myvar0= 1;}
else {exit(0);}
if(0 > (var8 - var46)*(var46 - var8)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var17)*(var17 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var28)*(var28 - var9)){myvar0= 1;}
else {exit(0);}
if(0 > (var9 - var57)*(var57 - var9)){myvar0= 1;}
else {exit(0);}
if(var17 == var54){myvar0= 1;}
else {exit(0);}
if(var28 == var35){myvar0= 1;}
else {exit(0);}
if(var39 == var2){myvar0= 1;}
else {exit(0);}
if(var42 == var59){myvar0= 1;}
else {exit(0);}
if(var51 == var38){myvar0= 1;}
else {exit(0);}
if(var57 == var7){myvar0= 1;}
else {exit(0);}
if(var9 == var60){myvar0= 1;}
else {exit(0);}
if((var2 != var10) & (var2 + var10 >=2 )){myvar0= 1;}
else {exit(0);}
if((var2 != var19) & (var2 + var19 >=2 )){myvar0= 1;}
else {exit(0);}
if((var2 != var30) & (var2 + var30 >=2 )){myvar0= 1;}
else {exit(0);}
if((var2 != var36) & (var2 + var36 >=2 )){myvar0= 1;}
else {exit(0);}
if((var2 != var43) & (var2 + var43 >=2 )){myvar0= 1;}
else {exit(0);}
if((var2 != var50) & (var2 + var50 >=2 )){myvar0= 1;}
else {exit(0);}
if((var2 != var58) & (var2 + var58 >=2 )){myvar0= 1;}
else {exit(0);}
if((var35 != var12) & (var35 + var12 >=2 )){myvar0= 1;}
else {exit(0);}
if((var35 != var3) & (var35 + var3 >=2 )){myvar0= 1;}
else {exit(0);}
if((var35 != var4) & (var35 + var4 >=2 )){myvar0= 1;}
else {exit(0);}
if((var35 != var5) & (var35 + var5 >=2 )){myvar0= 1;}
else {exit(0);}
if((var35 != var53) & (var35 + var53 >=2 )){myvar0= 1;}
else {exit(0);}
if((var35 != var6) & (var35 + var6 >=2 )){myvar0= 1;}
else {exit(0);}
if((var35 != var61) & (var35 + var61 >=2 )){myvar0= 1;}
else {exit(0);}
if((var38 != var16) & (var38 + var16 >=2 )){myvar0= 1;}
else {exit(0);}
if((var38 != var21) & (var38 + var21 >=2 )){myvar0= 1;}
else {exit(0);}
if((var38 != var23) & (var38 + var23 >=2 )){myvar0= 1;}
else {exit(0);}
if((var38 != var29) & (var38 + var29 >=2 )){myvar0= 1;}
else {exit(0);}
if((var38 != var32) & (var38 + var32 >=2 )){myvar0= 1;}
else {exit(0);}
if((var38 != var49) & (var38 + var49 >=2 )){myvar0= 1;}
else {exit(0);}
if((var38 != var55) & (var38 + var55 >=2 )){myvar0= 1;}
else {exit(0);}
if((var54 != var13) & (var54 + var13 >=2 )){myvar0= 1;}
else {exit(0);}
if((var54 != var27) & (var54 + var27 >=2 )){myvar0= 1;}
else {exit(0);}
if((var54 != var31) & (var54 + var31 >=2 )){myvar0= 1;}
else {exit(0);}
if((var54 != var37) & (var54 + var37 >=2 )){myvar0= 1;}
else {exit(0);}
if((var54 != var45) & (var54 + var45 >=2 )){myvar0= 1;}
else {exit(0);}
if((var54 != var48) & (var54 + var48 >=2 )){myvar0= 1;}
else {exit(0);}
if((var54 != var63) & (var54 + var63 >=2 )){myvar0= 1;}
else {exit(0);}
if((var59 != var1) & (var59 + var1 >=2 )){myvar0= 1;}
else {exit(0);}
if((var59 != var14) & (var59 + var14 >=2 )){myvar0= 1;}
else {exit(0);}
if((var59 != var15) & (var59 + var15 >=2 )){myvar0= 1;}
else {exit(0);}
if((var59 != var33) & (var59 + var33 >=2 )){myvar0= 1;}
else {exit(0);}
if((var59 != var34) & (var59 + var34 >=2 )){myvar0= 1;}
else {exit(0);}
if((var59 != var41) & (var59 + var41 >=2 )){myvar0= 1;}
else {exit(0);}
if((var59 != var47) & (var59 + var47 >=2 )){myvar0= 1;}
else {exit(0);}
if((var60 != var0) & (var60 + var0 >=2 )){myvar0= 1;}
else {exit(0);}
if((var60 != var11) & (var60 + var11 >=2 )){myvar0= 1;}
else {exit(0);}
if((var60 != var18) & (var60 + var18 >=2 )){myvar0= 1;}
else {exit(0);}
if((var60 != var20) & (var60 + var20 >=2 )){myvar0= 1;}
else {exit(0);}
if((var60 != var24) & (var60 + var24 >=2 )){myvar0= 1;}
else {exit(0);}
if((var60 != var40) & (var60 + var40 >=2 )){myvar0= 1;}
else {exit(0);}
if((var60 != var56) & (var60 + var56 >=2 )){myvar0= 1;}
else {exit(0);}
if((var7 != var22) & (var7 + var22 >=2 )){myvar0= 1;}
else {exit(0);}
if((var7 != var25) & (var7 + var25 >=2 )){myvar0= 1;}
else {exit(0);}
if((var7 != var26) & (var7 + var26 >=2 )){myvar0= 1;}
else {exit(0);}
if((var7 != var46) & (var7 + var46 >=2 )){myvar0= 1;}
else {exit(0);}
if((var7 != var52) & (var7 + var52 >=2 )){myvar0= 1;}
else {exit(0);}
if((var7 != var62) & (var7 + var62 >=2 )){myvar0= 1;}
else {exit(0);}
if((var7 != var8) & (var7 + var8 >=2 )){myvar0= 1;}
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
60 x[60]
61 x[61]
62 x[62]
63 x[63]
 */}
