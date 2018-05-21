
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
if((var0 >= 0) & (var0 <= 29)) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 29)) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 29)) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 29)) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 29)) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 29)) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 29)) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 29)) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 29)) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 29)) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 29)) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 29)) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 0) & (var12 <= 29)) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 0) & (var13 <= 29)) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 0) & (var14 <= 29)) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 0) & (var15 <= 29)) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 0) & (var16 <= 29)) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 0) & (var17 <= 29)) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 0) & (var18 <= 29)) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 0) & (var19 <= 29)) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 0) & (var20 <= 29)) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 0) & (var21 <= 29)) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 0) & (var22 <= 29)) {myvar0= 1;}
else {exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((var23 >= 0) & (var23 <= 29)) {myvar0= 1;}
else {exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((var24 >= 0) & (var24 <= 29)) {myvar0= 1;}
else {exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((var25 >= 0) & (var25 <= 29)) {myvar0= 1;}
else {exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((var26 >= 0) & (var26 <= 29)) {myvar0= 1;}
else {exit(0);}
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
if((var27 >= 0) & (var27 <= 29)) {myvar0= 1;}
else {exit(0);}
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
if((var28 >= 0) & (var28 <= 29)) {myvar0= 1;}
else {exit(0);}
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
if((var29 >= 0) & (var29 <= 29)) {myvar0= 1;}
else {exit(0);}
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
if((var30 >= 1) & (var30 <= 29)) {myvar0= 1;}
else {exit(0);}
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
if((var31 >= 1) & (var31 <= 29)) {myvar0= 1;}
else {exit(0);}
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
if((var32 >= 1) & (var32 <= 29)) {myvar0= 1;}
else {exit(0);}
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
if((var33 >= 1) & (var33 <= 29)) {myvar0= 1;}
else {exit(0);}
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
if((var34 >= 1) & (var34 <= 29)) {myvar0= 1;}
else {exit(0);}
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
if((var35 >= 1) & (var35 <= 29)) {myvar0= 1;}
else {exit(0);}
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
if((var36 >= 1) & (var36 <= 29)) {myvar0= 1;}
else {exit(0);}
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
if((var37 >= 1) & (var37 <= 29)) {myvar0= 1;}
else {exit(0);}
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
if((var38 >= 1) & (var38 <= 29)) {myvar0= 1;}
else {exit(0);}
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
if((var39 >= 1) & (var39 <= 29)) {myvar0= 1;}
else {exit(0);}
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
if((var40 >= 1) & (var40 <= 29)) {myvar0= 1;}
else {exit(0);}
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
if((var41 >= 1) & (var41 <= 29)) {myvar0= 1;}
else {exit(0);}
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
if((var42 >= 1) & (var42 <= 29)) {myvar0= 1;}
else {exit(0);}
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
if((var43 >= 1) & (var43 <= 29)) {myvar0= 1;}
else {exit(0);}
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
if((var44 >= 1) & (var44 <= 29)) {myvar0= 1;}
else {exit(0);}
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
if((var45 >= 1) & (var45 <= 29)) {myvar0= 1;}
else {exit(0);}
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
if((var46 >= 1) & (var46 <= 29)) {myvar0= 1;}
else {exit(0);}
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
if((var47 >= 1) & (var47 <= 29)) {myvar0= 1;}
else {exit(0);}
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
if((var48 >= 1) & (var48 <= 29)) {myvar0= 1;}
else {exit(0);}
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
if((var49 >= 1) & (var49 <= 29)) {myvar0= 1;}
else {exit(0);}
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
if((var50 >= 1) & (var50 <= 29)) {myvar0= 1;}
else {exit(0);}
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
if((var51 >= 1) & (var51 <= 29)) {myvar0= 1;}
else {exit(0);}
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
if((var52 >= 1) & (var52 <= 29)) {myvar0= 1;}
else {exit(0);}
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
if((var53 >= 1) & (var53 <= 29)) {myvar0= 1;}
else {exit(0);}
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
if((var54 >= 1) & (var54 <= 29)) {myvar0= 1;}
else {exit(0);}
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
if((var55 >= 1) & (var55 <= 29)) {myvar0= 1;}
else {exit(0);}
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
if((var56 >= 1) & (var56 <= 29)) {myvar0= 1;}
else {exit(0);}
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
if((var57 >= 1) & (var57 <= 29)) {myvar0= 1;}
else {exit(0);}
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
if((var58 >= 1) & (var58 <= 29)) {myvar0= 1;}
else {exit(0);}
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var0!=var12) & (var0!=var13) & (var0!=var14) & (var0!=var15) & (var0!=var16) & (var0!=var17) & (var0!=var18) & (var0!=var19) & (var0!=var20) & (var0!=var21) & (var0!=var22) & (var0!=var23) & (var0!=var24) & (var0!=var25) & (var0!=var26) & (var0!=var27) & (var0!=var28) & (var0!=var29) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var1!=var12) & (var1!=var13) & (var1!=var14) & (var1!=var15) & (var1!=var16) & (var1!=var17) & (var1!=var18) & (var1!=var19) & (var1!=var20) & (var1!=var21) & (var1!=var22) & (var1!=var23) & (var1!=var24) & (var1!=var25) & (var1!=var26) & (var1!=var27) & (var1!=var28) & (var1!=var29) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var2!=var12) & (var2!=var13) & (var2!=var14) & (var2!=var15) & (var2!=var16) & (var2!=var17) & (var2!=var18) & (var2!=var19) & (var2!=var20) & (var2!=var21) & (var2!=var22) & (var2!=var23) & (var2!=var24) & (var2!=var25) & (var2!=var26) & (var2!=var27) & (var2!=var28) & (var2!=var29) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var3!=var12) & (var3!=var13) & (var3!=var14) & (var3!=var15) & (var3!=var16) & (var3!=var17) & (var3!=var18) & (var3!=var19) & (var3!=var20) & (var3!=var21) & (var3!=var22) & (var3!=var23) & (var3!=var24) & (var3!=var25) & (var3!=var26) & (var3!=var27) & (var3!=var28) & (var3!=var29) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var4!=var12) & (var4!=var13) & (var4!=var14) & (var4!=var15) & (var4!=var16) & (var4!=var17) & (var4!=var18) & (var4!=var19) & (var4!=var20) & (var4!=var21) & (var4!=var22) & (var4!=var23) & (var4!=var24) & (var4!=var25) & (var4!=var26) & (var4!=var27) & (var4!=var28) & (var4!=var29) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var5!=var12) & (var5!=var13) & (var5!=var14) & (var5!=var15) & (var5!=var16) & (var5!=var17) & (var5!=var18) & (var5!=var19) & (var5!=var20) & (var5!=var21) & (var5!=var22) & (var5!=var23) & (var5!=var24) & (var5!=var25) & (var5!=var26) & (var5!=var27) & (var5!=var28) & (var5!=var29) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var6!=var12) & (var6!=var13) & (var6!=var14) & (var6!=var15) & (var6!=var16) & (var6!=var17) & (var6!=var18) & (var6!=var19) & (var6!=var20) & (var6!=var21) & (var6!=var22) & (var6!=var23) & (var6!=var24) & (var6!=var25) & (var6!=var26) & (var6!=var27) & (var6!=var28) & (var6!=var29) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var7!=var12) & (var7!=var13) & (var7!=var14) & (var7!=var15) & (var7!=var16) & (var7!=var17) & (var7!=var18) & (var7!=var19) & (var7!=var20) & (var7!=var21) & (var7!=var22) & (var7!=var23) & (var7!=var24) & (var7!=var25) & (var7!=var26) & (var7!=var27) & (var7!=var28) & (var7!=var29) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var8!=var12) & (var8!=var13) & (var8!=var14) & (var8!=var15) & (var8!=var16) & (var8!=var17) & (var8!=var18) & (var8!=var19) & (var8!=var20) & (var8!=var21) & (var8!=var22) & (var8!=var23) & (var8!=var24) & (var8!=var25) & (var8!=var26) & (var8!=var27) & (var8!=var28) & (var8!=var29) & (var9!=var10) & (var9!=var11) & (var9!=var12) & (var9!=var13) & (var9!=var14) & (var9!=var15) & (var9!=var16) & (var9!=var17) & (var9!=var18) & (var9!=var19) & (var9!=var20) & (var9!=var21) & (var9!=var22) & (var9!=var23) & (var9!=var24) & (var9!=var25) & (var9!=var26) & (var9!=var27) & (var9!=var28) & (var9!=var29) & (var10!=var11) & (var10!=var12) & (var10!=var13) & (var10!=var14) & (var10!=var15) & (var10!=var16) & (var10!=var17) & (var10!=var18) & (var10!=var19) & (var10!=var20) & (var10!=var21) & (var10!=var22) & (var10!=var23) & (var10!=var24) & (var10!=var25) & (var10!=var26) & (var10!=var27) & (var10!=var28) & (var10!=var29) & (var11!=var12) & (var11!=var13) & (var11!=var14) & (var11!=var15) & (var11!=var16) & (var11!=var17) & (var11!=var18) & (var11!=var19) & (var11!=var20) & (var11!=var21) & (var11!=var22) & (var11!=var23) & (var11!=var24) & (var11!=var25) & (var11!=var26) & (var11!=var27) & (var11!=var28) & (var11!=var29) & (var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var12!=var20) & (var12!=var21) & (var12!=var22) & (var12!=var23) & (var12!=var24) & (var12!=var25) & (var12!=var26) & (var12!=var27) & (var12!=var28) & (var12!=var29) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var13!=var20) & (var13!=var21) & (var13!=var22) & (var13!=var23) & (var13!=var24) & (var13!=var25) & (var13!=var26) & (var13!=var27) & (var13!=var28) & (var13!=var29) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var14!=var21) & (var14!=var22) & (var14!=var23) & (var14!=var24) & (var14!=var25) & (var14!=var26) & (var14!=var27) & (var14!=var28) & (var14!=var29) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var15!=var21) & (var15!=var22) & (var15!=var23) & (var15!=var24) & (var15!=var25) & (var15!=var26) & (var15!=var27) & (var15!=var28) & (var15!=var29) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var16!=var23) & (var16!=var24) & (var16!=var25) & (var16!=var26) & (var16!=var27) & (var16!=var28) & (var16!=var29) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var17!=var23) & (var17!=var24) & (var17!=var25) & (var17!=var26) & (var17!=var27) & (var17!=var28) & (var17!=var29) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var18!=var23) & (var18!=var24) & (var18!=var25) & (var18!=var26) & (var18!=var27) & (var18!=var28) & (var18!=var29) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var19!=var23) & (var19!=var24) & (var19!=var25) & (var19!=var26) & (var19!=var27) & (var19!=var28) & (var19!=var29) & (var20!=var21) & (var20!=var22) & (var20!=var23) & (var20!=var24) & (var20!=var25) & (var20!=var26) & (var20!=var27) & (var20!=var28) & (var20!=var29) & (var21!=var22) & (var21!=var23) & (var21!=var24) & (var21!=var25) & (var21!=var26) & (var21!=var27) & (var21!=var28) & (var21!=var29) & (var22!=var23) & (var22!=var24) & (var22!=var25) & (var22!=var26) & (var22!=var27) & (var22!=var28) & (var22!=var29) & (var23!=var24) & (var23!=var25) & (var23!=var26) & (var23!=var27) & (var23!=var28) & (var23!=var29) & (var24!=var25) & (var24!=var26) & (var24!=var27) & (var24!=var28) & (var24!=var29) & (var25!=var26) & (var25!=var27) & (var25!=var28) & (var25!=var29) & (var26!=var27) & (var26!=var28) & (var26!=var29) & (var27!=var28) & (var27!=var29) & (var28!=var29) &  1))
{myvar0= 1;}
else {exit(0);}
if(((var30!=var31) & (var30!=var32) & (var30!=var33) & (var30!=var34) & (var30!=var35) & (var30!=var36) & (var30!=var37) & (var30!=var38) & (var30!=var39) & (var30!=var40) & (var30!=var41) & (var30!=var42) & (var30!=var43) & (var30!=var44) & (var30!=var45) & (var30!=var46) & (var30!=var47) & (var30!=var48) & (var30!=var49) & (var30!=var50) & (var30!=var51) & (var30!=var52) & (var30!=var53) & (var30!=var54) & (var30!=var55) & (var30!=var56) & (var30!=var57) & (var30!=var58) & (var31!=var32) & (var31!=var33) & (var31!=var34) & (var31!=var35) & (var31!=var36) & (var31!=var37) & (var31!=var38) & (var31!=var39) & (var31!=var40) & (var31!=var41) & (var31!=var42) & (var31!=var43) & (var31!=var44) & (var31!=var45) & (var31!=var46) & (var31!=var47) & (var31!=var48) & (var31!=var49) & (var31!=var50) & (var31!=var51) & (var31!=var52) & (var31!=var53) & (var31!=var54) & (var31!=var55) & (var31!=var56) & (var31!=var57) & (var31!=var58) & (var32!=var33) & (var32!=var34) & (var32!=var35) & (var32!=var36) & (var32!=var37) & (var32!=var38) & (var32!=var39) & (var32!=var40) & (var32!=var41) & (var32!=var42) & (var32!=var43) & (var32!=var44) & (var32!=var45) & (var32!=var46) & (var32!=var47) & (var32!=var48) & (var32!=var49) & (var32!=var50) & (var32!=var51) & (var32!=var52) & (var32!=var53) & (var32!=var54) & (var32!=var55) & (var32!=var56) & (var32!=var57) & (var32!=var58) & (var33!=var34) & (var33!=var35) & (var33!=var36) & (var33!=var37) & (var33!=var38) & (var33!=var39) & (var33!=var40) & (var33!=var41) & (var33!=var42) & (var33!=var43) & (var33!=var44) & (var33!=var45) & (var33!=var46) & (var33!=var47) & (var33!=var48) & (var33!=var49) & (var33!=var50) & (var33!=var51) & (var33!=var52) & (var33!=var53) & (var33!=var54) & (var33!=var55) & (var33!=var56) & (var33!=var57) & (var33!=var58) & (var34!=var35) & (var34!=var36) & (var34!=var37) & (var34!=var38) & (var34!=var39) & (var34!=var40) & (var34!=var41) & (var34!=var42) & (var34!=var43) & (var34!=var44) & (var34!=var45) & (var34!=var46) & (var34!=var47) & (var34!=var48) & (var34!=var49) & (var34!=var50) & (var34!=var51) & (var34!=var52) & (var34!=var53) & (var34!=var54) & (var34!=var55) & (var34!=var56) & (var34!=var57) & (var34!=var58) & (var35!=var36) & (var35!=var37) & (var35!=var38) & (var35!=var39) & (var35!=var40) & (var35!=var41) & (var35!=var42) & (var35!=var43) & (var35!=var44) & (var35!=var45) & (var35!=var46) & (var35!=var47) & (var35!=var48) & (var35!=var49) & (var35!=var50) & (var35!=var51) & (var35!=var52) & (var35!=var53) & (var35!=var54) & (var35!=var55) & (var35!=var56) & (var35!=var57) & (var35!=var58) & (var36!=var37) & (var36!=var38) & (var36!=var39) & (var36!=var40) & (var36!=var41) & (var36!=var42) & (var36!=var43) & (var36!=var44) & (var36!=var45) & (var36!=var46) & (var36!=var47) & (var36!=var48) & (var36!=var49) & (var36!=var50) & (var36!=var51) & (var36!=var52) & (var36!=var53) & (var36!=var54) & (var36!=var55) & (var36!=var56) & (var36!=var57) & (var36!=var58) & (var37!=var38) & (var37!=var39) & (var37!=var40) & (var37!=var41) & (var37!=var42) & (var37!=var43) & (var37!=var44) & (var37!=var45) & (var37!=var46) & (var37!=var47) & (var37!=var48) & (var37!=var49) & (var37!=var50) & (var37!=var51) & (var37!=var52) & (var37!=var53) & (var37!=var54) & (var37!=var55) & (var37!=var56) & (var37!=var57) & (var37!=var58) & (var38!=var39) & (var38!=var40) & (var38!=var41) & (var38!=var42) & (var38!=var43) & (var38!=var44) & (var38!=var45) & (var38!=var46) & (var38!=var47) & (var38!=var48) & (var38!=var49) & (var38!=var50) & (var38!=var51) & (var38!=var52) & (var38!=var53) & (var38!=var54) & (var38!=var55) & (var38!=var56) & (var38!=var57) & (var38!=var58) & (var39!=var40) & (var39!=var41) & (var39!=var42) & (var39!=var43) & (var39!=var44) & (var39!=var45) & (var39!=var46) & (var39!=var47) & (var39!=var48) & (var39!=var49) & (var39!=var50) & (var39!=var51) & (var39!=var52) & (var39!=var53) & (var39!=var54) & (var39!=var55) & (var39!=var56) & (var39!=var57) & (var39!=var58) & (var40!=var41) & (var40!=var42) & (var40!=var43) & (var40!=var44) & (var40!=var45) & (var40!=var46) & (var40!=var47) & (var40!=var48) & (var40!=var49) & (var40!=var50) & (var40!=var51) & (var40!=var52) & (var40!=var53) & (var40!=var54) & (var40!=var55) & (var40!=var56) & (var40!=var57) & (var40!=var58) & (var41!=var42) & (var41!=var43) & (var41!=var44) & (var41!=var45) & (var41!=var46) & (var41!=var47) & (var41!=var48) & (var41!=var49) & (var41!=var50) & (var41!=var51) & (var41!=var52) & (var41!=var53) & (var41!=var54) & (var41!=var55) & (var41!=var56) & (var41!=var57) & (var41!=var58) & (var42!=var43) & (var42!=var44) & (var42!=var45) & (var42!=var46) & (var42!=var47) & (var42!=var48) & (var42!=var49) & (var42!=var50) & (var42!=var51) & (var42!=var52) & (var42!=var53) & (var42!=var54) & (var42!=var55) & (var42!=var56) & (var42!=var57) & (var42!=var58) & (var43!=var44) & (var43!=var45) & (var43!=var46) & (var43!=var47) & (var43!=var48) & (var43!=var49) & (var43!=var50) & (var43!=var51) & (var43!=var52) & (var43!=var53) & (var43!=var54) & (var43!=var55) & (var43!=var56) & (var43!=var57) & (var43!=var58) & (var44!=var45) & (var44!=var46) & (var44!=var47) & (var44!=var48) & (var44!=var49) & (var44!=var50) & (var44!=var51) & (var44!=var52) & (var44!=var53) & (var44!=var54) & (var44!=var55) & (var44!=var56) & (var44!=var57) & (var44!=var58) & (var45!=var46) & (var45!=var47) & (var45!=var48) & (var45!=var49) & (var45!=var50) & (var45!=var51) & (var45!=var52) & (var45!=var53) & (var45!=var54) & (var45!=var55) & (var45!=var56) & (var45!=var57) & (var45!=var58) & (var46!=var47) & (var46!=var48) & (var46!=var49) & (var46!=var50) & (var46!=var51) & (var46!=var52) & (var46!=var53) & (var46!=var54) & (var46!=var55) & (var46!=var56) & (var46!=var57) & (var46!=var58) & (var47!=var48) & (var47!=var49) & (var47!=var50) & (var47!=var51) & (var47!=var52) & (var47!=var53) & (var47!=var54) & (var47!=var55) & (var47!=var56) & (var47!=var57) & (var47!=var58) & (var48!=var49) & (var48!=var50) & (var48!=var51) & (var48!=var52) & (var48!=var53) & (var48!=var54) & (var48!=var55) & (var48!=var56) & (var48!=var57) & (var48!=var58) & (var49!=var50) & (var49!=var51) & (var49!=var52) & (var49!=var53) & (var49!=var54) & (var49!=var55) & (var49!=var56) & (var49!=var57) & (var49!=var58) & (var50!=var51) & (var50!=var52) & (var50!=var53) & (var50!=var54) & (var50!=var55) & (var50!=var56) & (var50!=var57) & (var50!=var58) & (var51!=var52) & (var51!=var53) & (var51!=var54) & (var51!=var55) & (var51!=var56) & (var51!=var57) & (var51!=var58) & (var52!=var53) & (var52!=var54) & (var52!=var55) & (var52!=var56) & (var52!=var57) & (var52!=var58) & (var53!=var54) & (var53!=var55) & (var53!=var56) & (var53!=var57) & (var53!=var58) & (var54!=var55) & (var54!=var56) & (var54!=var57) & (var54!=var58) & (var55!=var56) & (var55!=var57) & (var55!=var58) & (var56!=var57) & (var56!=var58) & (var57!=var58) &  1))
{myvar0= 1;}
else {exit(0);}
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var30 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var31 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var32 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var33 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var34 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var35 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var36 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var37 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var38 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var39 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var40 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var11 - var12;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var41 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var12 - var13;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var42 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var13 - var14;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var43 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var14 - var15;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var44 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var15 - var16;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var45 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var16 - var17;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var46 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var17 - var18;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var47 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var18 - var19;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var48 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var19 - var20;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var49 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var20 - var21;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var50 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var21 - var22;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var51 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var22 - var23;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var52 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var23 - var24;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var53 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var24 - var25;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var54 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var25 - var26;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var55 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var26 - var27;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var56 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var27 - var28;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var57 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var28 - var29;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var58 == var_for_abs){myvar0= 1;}
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
30 y[0]
31 y[1]
32 y[2]
33 y[3]
34 y[4]
35 y[5]
36 y[6]
37 y[7]
38 y[8]
39 y[9]
40 y[10]
41 y[11]
42 y[12]
43 y[13]
44 y[14]
45 y[15]
46 y[16]
47 y[17]
48 y[18]
49 y[19]
50 y[20]
51 y[21]
52 y[22]
53 y[23]
54 y[24]
55 y[25]
56 y[26]
57 y[27]
58 y[28]
 */}
