
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
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
int myvar0 = 1;
if((((var0 >= 1 && var0 <= 10) && (var1 >= 1 && var1 <= 10) && (var2 >= 1 && var2 <= 10) && (var3 >= 1 && var3 <= 10) && (var4 >= 1 && var4 <= 10) && (var5 >= 1 && var5 <= 10) && (var6 >= 1 && var6 <= 10) && (var7 >= 1 && var7 <= 10) && (var8 >= 1 && var8 <= 10) && (var9 >= 1 && var9 <= 10) &&  1)) && (((var10 >= -9 && var10 <= 9 && var10 != 0 &&  1) && (var11 >= -9 && var11 <= 9 && var11 != 0 &&  1) && (var12 >= -9 && var12 <= 9 && var12 != 0 &&  1) && (var13 >= -9 && var13 <= 9 && var13 != 0 &&  1) && (var14 >= -9 && var14 <= 9 && var14 != 0 &&  1) && (var15 >= -9 && var15 <= 9 && var15 != 0 &&  1) && (var16 >= -9 && var16 <= 9 && var16 != 0 &&  1) && (var17 >= -9 && var17 <= 9 && var17 != 0 &&  1) && (var18 >= -9 && var18 <= 9 && var18 != 0 &&  1) && (var19 >= -9 && var19 <= 9 && var19 != 0 &&  1) && (var20 >= -9 && var20 <= 9 && var20 != 0 &&  1) && (var21 >= -9 && var21 <= 9 && var21 != 0 &&  1) && (var22 >= -9 && var22 <= 9 && var22 != 0 &&  1) && (var23 >= -9 && var23 <= 9 && var23 != 0 &&  1) && (var24 >= -9 && var24 <= 9 && var24 != 0 &&  1) && (var25 >= -9 && var25 <= 9 && var25 != 0 &&  1) && (var26 >= -9 && var26 <= 9 && var26 != 0 &&  1) && (var27 >= -9 && var27 <= 9 && var27 != 0 &&  1) && (var28 >= -9 && var28 <= 9 && var28 != 0 &&  1) && (var29 >= -9 && var29 <= 9 && var29 != 0 &&  1) && (var30 >= -9 && var30 <= 9 && var30 != 0 &&  1) && (var31 >= -9 && var31 <= 9 && var31 != 0 &&  1) && (var32 >= -9 && var32 <= 9 && var32 != 0 &&  1) && (var33 >= -9 && var33 <= 9 && var33 != 0 &&  1) && (var34 >= -9 && var34 <= 9 && var34 != 0 &&  1) && (var35 >= -9 && var35 <= 9 && var35 != 0 &&  1) && (var36 >= -9 && var36 <= 9 && var36 != 0 &&  1) && (var37 >= -9 && var37 <= 9 && var37 != 0 &&  1) && (var38 >= -9 && var38 <= 9 && var38 != 0 &&  1) && (var39 >= -9 && var39 <= 9 && var39 != 0 &&  1) && (var40 >= -9 && var40 <= 9 && var40 != 0 &&  1) && (var41 >= -9 && var41 <= 9 && var41 != 0 &&  1) && (var42 >= -9 && var42 <= 9 && var42 != 0 &&  1) && (var43 >= -9 && var43 <= 9 && var43 != 0 &&  1) && (var44 >= -9 && var44 <= 9 && var44 != 0 &&  1) && (var45 >= -9 && var45 <= 9 && var45 != 0 &&  1) && (var46 >= -9 && var46 <= 9 && var46 != 0 &&  1) && (var47 >= -9 && var47 <= 9 && var47 != 0 &&  1) && (var48 >= -9 && var48 <= 9 && var48 != 0 &&  1) && (var49 >= -9 && var49 <= 9 && var49 != 0 &&  1) && (var50 >= -9 && var50 <= 9 && var50 != 0 &&  1) && (var51 >= -9 && var51 <= 9 && var51 != 0 &&  1) &&  1)) && (((var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var7!=var8) && (var7!=var9) && (var8!=var9) &&  1)) && (((var10!=var11) && (var10!=var12) && (var10!=var13) && (var10!=var14) && (var10!=var15) && (var10!=var16) && (var10!=var17) && (var10!=var18) && (var11!=var12) && (var11!=var13) && (var11!=var14) && (var11!=var15) && (var11!=var16) && (var11!=var17) && (var11!=var18) && (var12!=var13) && (var12!=var14) && (var12!=var15) && (var12!=var16) && (var12!=var17) && (var12!=var18) && (var13!=var14) && (var13!=var15) && (var13!=var16) && (var13!=var17) && (var13!=var18) && (var14!=var15) && (var14!=var16) && (var14!=var17) && (var14!=var18) && (var15!=var16) && (var15!=var17) && (var15!=var18) && (var16!=var17) && (var16!=var18) && (var17!=var18) &&  1)) && (((var19!=var20) && (var19!=var21) && (var19!=var22) && (var19!=var23) && (var19!=var24) && (var19!=var25) && (var19!=var26) && (var20!=var21) && (var20!=var22) && (var20!=var23) && (var20!=var24) && (var20!=var25) && (var20!=var26) && (var21!=var22) && (var21!=var23) && (var21!=var24) && (var21!=var25) && (var21!=var26) && (var22!=var23) && (var22!=var24) && (var22!=var25) && (var22!=var26) && (var23!=var24) && (var23!=var25) && (var23!=var26) && (var24!=var25) && (var24!=var26) && (var25!=var26) &&  1)) && (((var27!=var28) && (var27!=var29) && (var27!=var30) && (var27!=var31) && (var27!=var32) && (var27!=var33) && (var28!=var29) && (var28!=var30) && (var28!=var31) && (var28!=var32) && (var28!=var33) && (var29!=var30) && (var29!=var31) && (var29!=var32) && (var29!=var33) && (var30!=var31) && (var30!=var32) && (var30!=var33) && (var31!=var32) && (var31!=var33) && (var32!=var33) &&  1)) && (((var34!=var35) && (var34!=var36) && (var34!=var37) && (var34!=var38) && (var34!=var39) && (var35!=var36) && (var35!=var37) && (var35!=var38) && (var35!=var39) && (var36!=var37) && (var36!=var38) && (var36!=var39) && (var37!=var38) && (var37!=var39) && (var38!=var39) &&  1)) && (((var40!=var41) && (var40!=var42) && (var40!=var43) && (var40!=var44) && (var41!=var42) && (var41!=var43) && (var41!=var44) && (var42!=var43) && (var42!=var44) && (var43!=var44) &&  1)) && (((var45!=var46) && (var45!=var47) && (var45!=var48) && (var46!=var47) && (var46!=var48) && (var47!=var48) &&  1)) && (((var49!=var50) && (var49!=var51) && (var50!=var51) &&  1)) && (((var0 - var1 == var10) && (var1 - var2 == var11) && (var2 - var3 == var12) && (var3 - var4 == var13) && (var4 - var5 == var14) && (var5 - var6 == var15) && (var6 - var7 == var16) && (var7 - var8 == var17) && (var8 - var9 == var18) && (var0 - var2 == var19) && (var1 - var3 == var20) && (var2 - var4 == var21) && (var3 - var5 == var22) && (var4 - var6 == var23) && (var5 - var7 == var24) && (var6 - var8 == var25) && (var7 - var9 == var26) && (var0 - var3 == var27) && (var1 - var4 == var28) && (var2 - var5 == var29) && (var3 - var6 == var30) && (var4 - var7 == var31) && (var5 - var8 == var32) && (var6 - var9 == var33) && (var0 - var4 == var34) && (var1 - var5 == var35) && (var2 - var6 == var36) && (var3 - var7 == var37) && (var4 - var8 == var38) && (var5 - var9 == var39) && (var0 - var5 == var40) && (var1 - var6 == var41) && (var2 - var7 == var42) && (var3 - var8 == var43) && (var4 - var9 == var44) && (var0 - var6 == var45) && (var1 - var7 == var46) && (var2 - var8 == var47) && (var3 - var9 == var48) && (var0 - var7 == var49) && (var1 - var8 == var50) && (var2 - var9 == var51) &&  1)) && ((((var0 - var8) != (var1 - var9)) &&  1)) && 1 )
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
10 y[0]
11 y[1]
12 y[2]
13 y[3]
14 y[4]
15 y[5]
16 y[6]
17 y[7]
18 y[8]
19 y[9]
20 y[10]
21 y[11]
22 y[12]
23 y[13]
24 y[14]
25 y[15]
26 y[16]
27 y[17]
28 y[18]
29 y[19]
30 y[20]
31 y[21]
32 y[22]
33 y[23]
34 y[24]
35 y[25]
36 y[26]
37 y[27]
38 y[28]
39 y[29]
40 y[30]
41 y[31]
42 y[32]
43 y[33]
44 y[34]
45 y[35]
46 y[36]
47 y[37]
48 y[38]
49 y[39]
50 y[40]
51 y[41]
 */}
