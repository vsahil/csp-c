
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
int myvar0 = 1;
klee_assume((((var0 >= 0 && var0 <= 24) && (var1 >= 0 && var1 <= 24) && (var2 >= 0 && var2 <= 24) && (var3 >= 0 && var3 <= 24) && (var4 >= 0 && var4 <= 24) && (var5 >= 0 && var5 <= 24) && (var6 >= 0 && var6 <= 24) && (var7 >= 0 && var7 <= 24) && (var8 >= 0 && var8 <= 24) && (var9 >= 0 && var9 <= 24) && (var10 >= 0 && var10 <= 24) && (var11 >= 0 && var11 <= 24) && (var12 >= 0 && var12 <= 24) && (var13 >= 0 && var13 <= 24) && (var14 >= 0 && var14 <= 24) && (var15 >= 0 && var15 <= 24) && (var16 >= 0 && var16 <= 24) && (var17 >= 0 && var17 <= 24) && (var18 >= 0 && var18 <= 24) && (var19 >= 0 && var19 <= 24) && (var20 >= 0 && var20 <= 24) && (var21 >= 0 && var21 <= 24) && (var22 >= 0 && var22 <= 24) && (var23 >= 0 && var23 <= 24) && (var24 >= 0 && var24 <= 24) && (var25 >= 1 && var25 <= 24) && (var26 >= 1 && var26 <= 24) && (var27 >= 1 && var27 <= 24) && (var28 >= 1 && var28 <= 24) && (var29 >= 1 && var29 <= 24) && (var30 >= 1 && var30 <= 24) && (var31 >= 1 && var31 <= 24) && (var32 >= 1 && var32 <= 24) && (var33 >= 1 && var33 <= 24) && (var34 >= 1 && var34 <= 24) && (var35 >= 1 && var35 <= 24) && (var36 >= 1 && var36 <= 24) && (var37 >= 1 && var37 <= 24) && (var38 >= 1 && var38 <= 24) && (var39 >= 1 && var39 <= 24) && (var40 >= 1 && var40 <= 24) && (var41 >= 1 && var41 <= 24) && (var42 >= 1 && var42 <= 24) && (var43 >= 1 && var43 <= 24) && (var44 >= 1 && var44 <= 24) && (var45 >= 1 && var45 <= 24) && (var46 >= 1 && var46 <= 24) && (var47 >= 1 && var47 <= 24) && (var48 >= 1 && var48 <= 24) &&  1)) & (( 1)) & (((var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var0!=var10) && (var0!=var11) && (var0!=var12) && (var0!=var13) && (var0!=var14) && (var0!=var15) && (var0!=var16) && (var0!=var17) && (var0!=var18) && (var0!=var19) && (var0!=var20) && (var0!=var21) && (var0!=var22) && (var0!=var23) && (var0!=var24) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var1!=var10) && (var1!=var11) && (var1!=var12) && (var1!=var13) && (var1!=var14) && (var1!=var15) && (var1!=var16) && (var1!=var17) && (var1!=var18) && (var1!=var19) && (var1!=var20) && (var1!=var21) && (var1!=var22) && (var1!=var23) && (var1!=var24) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var2!=var10) && (var2!=var11) && (var2!=var12) && (var2!=var13) && (var2!=var14) && (var2!=var15) && (var2!=var16) && (var2!=var17) && (var2!=var18) && (var2!=var19) && (var2!=var20) && (var2!=var21) && (var2!=var22) && (var2!=var23) && (var2!=var24) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var3!=var10) && (var3!=var11) && (var3!=var12) && (var3!=var13) && (var3!=var14) && (var3!=var15) && (var3!=var16) && (var3!=var17) && (var3!=var18) && (var3!=var19) && (var3!=var20) && (var3!=var21) && (var3!=var22) && (var3!=var23) && (var3!=var24) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var4!=var10) && (var4!=var11) && (var4!=var12) && (var4!=var13) && (var4!=var14) && (var4!=var15) && (var4!=var16) && (var4!=var17) && (var4!=var18) && (var4!=var19) && (var4!=var20) && (var4!=var21) && (var4!=var22) && (var4!=var23) && (var4!=var24) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var5!=var10) && (var5!=var11) && (var5!=var12) && (var5!=var13) && (var5!=var14) && (var5!=var15) && (var5!=var16) && (var5!=var17) && (var5!=var18) && (var5!=var19) && (var5!=var20) && (var5!=var21) && (var5!=var22) && (var5!=var23) && (var5!=var24) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var6!=var10) && (var6!=var11) && (var6!=var12) && (var6!=var13) && (var6!=var14) && (var6!=var15) && (var6!=var16) && (var6!=var17) && (var6!=var18) && (var6!=var19) && (var6!=var20) && (var6!=var21) && (var6!=var22) && (var6!=var23) && (var6!=var24) && (var7!=var8) && (var7!=var9) && (var7!=var10) && (var7!=var11) && (var7!=var12) && (var7!=var13) && (var7!=var14) && (var7!=var15) && (var7!=var16) && (var7!=var17) && (var7!=var18) && (var7!=var19) && (var7!=var20) && (var7!=var21) && (var7!=var22) && (var7!=var23) && (var7!=var24) && (var8!=var9) && (var8!=var10) && (var8!=var11) && (var8!=var12) && (var8!=var13) && (var8!=var14) && (var8!=var15) && (var8!=var16) && (var8!=var17) && (var8!=var18) && (var8!=var19) && (var8!=var20) && (var8!=var21) && (var8!=var22) && (var8!=var23) && (var8!=var24) && (var9!=var10) && (var9!=var11) && (var9!=var12) && (var9!=var13) && (var9!=var14) && (var9!=var15) && (var9!=var16) && (var9!=var17) && (var9!=var18) && (var9!=var19) && (var9!=var20) && (var9!=var21) && (var9!=var22) && (var9!=var23) && (var9!=var24) && (var10!=var11) && (var10!=var12) && (var10!=var13) && (var10!=var14) && (var10!=var15) && (var10!=var16) && (var10!=var17) && (var10!=var18) && (var10!=var19) && (var10!=var20) && (var10!=var21) && (var10!=var22) && (var10!=var23) && (var10!=var24) && (var11!=var12) && (var11!=var13) && (var11!=var14) && (var11!=var15) && (var11!=var16) && (var11!=var17) && (var11!=var18) && (var11!=var19) && (var11!=var20) && (var11!=var21) && (var11!=var22) && (var11!=var23) && (var11!=var24) && (var12!=var13) && (var12!=var14) && (var12!=var15) && (var12!=var16) && (var12!=var17) && (var12!=var18) && (var12!=var19) && (var12!=var20) && (var12!=var21) && (var12!=var22) && (var12!=var23) && (var12!=var24) && (var13!=var14) && (var13!=var15) && (var13!=var16) && (var13!=var17) && (var13!=var18) && (var13!=var19) && (var13!=var20) && (var13!=var21) && (var13!=var22) && (var13!=var23) && (var13!=var24) && (var14!=var15) && (var14!=var16) && (var14!=var17) && (var14!=var18) && (var14!=var19) && (var14!=var20) && (var14!=var21) && (var14!=var22) && (var14!=var23) && (var14!=var24) && (var15!=var16) && (var15!=var17) && (var15!=var18) && (var15!=var19) && (var15!=var20) && (var15!=var21) && (var15!=var22) && (var15!=var23) && (var15!=var24) && (var16!=var17) && (var16!=var18) && (var16!=var19) && (var16!=var20) && (var16!=var21) && (var16!=var22) && (var16!=var23) && (var16!=var24) && (var17!=var18) && (var17!=var19) && (var17!=var20) && (var17!=var21) && (var17!=var22) && (var17!=var23) && (var17!=var24) && (var18!=var19) && (var18!=var20) && (var18!=var21) && (var18!=var22) && (var18!=var23) && (var18!=var24) && (var19!=var20) && (var19!=var21) && (var19!=var22) && (var19!=var23) && (var19!=var24) && (var20!=var21) && (var20!=var22) && (var20!=var23) && (var20!=var24) && (var21!=var22) && (var21!=var23) && (var21!=var24) && (var22!=var23) && (var22!=var24) && (var23!=var24) &&  1)) & (((var25!=var26) && (var25!=var27) && (var25!=var28) && (var25!=var29) && (var25!=var30) && (var25!=var31) && (var25!=var32) && (var25!=var33) && (var25!=var34) && (var25!=var35) && (var25!=var36) && (var25!=var37) && (var25!=var38) && (var25!=var39) && (var25!=var40) && (var25!=var41) && (var25!=var42) && (var25!=var43) && (var25!=var44) && (var25!=var45) && (var25!=var46) && (var25!=var47) && (var25!=var48) && (var26!=var27) && (var26!=var28) && (var26!=var29) && (var26!=var30) && (var26!=var31) && (var26!=var32) && (var26!=var33) && (var26!=var34) && (var26!=var35) && (var26!=var36) && (var26!=var37) && (var26!=var38) && (var26!=var39) && (var26!=var40) && (var26!=var41) && (var26!=var42) && (var26!=var43) && (var26!=var44) && (var26!=var45) && (var26!=var46) && (var26!=var47) && (var26!=var48) && (var27!=var28) && (var27!=var29) && (var27!=var30) && (var27!=var31) && (var27!=var32) && (var27!=var33) && (var27!=var34) && (var27!=var35) && (var27!=var36) && (var27!=var37) && (var27!=var38) && (var27!=var39) && (var27!=var40) && (var27!=var41) && (var27!=var42) && (var27!=var43) && (var27!=var44) && (var27!=var45) && (var27!=var46) && (var27!=var47) && (var27!=var48) && (var28!=var29) && (var28!=var30) && (var28!=var31) && (var28!=var32) && (var28!=var33) && (var28!=var34) && (var28!=var35) && (var28!=var36) && (var28!=var37) && (var28!=var38) && (var28!=var39) && (var28!=var40) && (var28!=var41) && (var28!=var42) && (var28!=var43) && (var28!=var44) && (var28!=var45) && (var28!=var46) && (var28!=var47) && (var28!=var48) && (var29!=var30) && (var29!=var31) && (var29!=var32) && (var29!=var33) && (var29!=var34) && (var29!=var35) && (var29!=var36) && (var29!=var37) && (var29!=var38) && (var29!=var39) && (var29!=var40) && (var29!=var41) && (var29!=var42) && (var29!=var43) && (var29!=var44) && (var29!=var45) && (var29!=var46) && (var29!=var47) && (var29!=var48) && (var30!=var31) && (var30!=var32) && (var30!=var33) && (var30!=var34) && (var30!=var35) && (var30!=var36) && (var30!=var37) && (var30!=var38) && (var30!=var39) && (var30!=var40) && (var30!=var41) && (var30!=var42) && (var30!=var43) && (var30!=var44) && (var30!=var45) && (var30!=var46) && (var30!=var47) && (var30!=var48) && (var31!=var32) && (var31!=var33) && (var31!=var34) && (var31!=var35) && (var31!=var36) && (var31!=var37) && (var31!=var38) && (var31!=var39) && (var31!=var40) && (var31!=var41) && (var31!=var42) && (var31!=var43) && (var31!=var44) && (var31!=var45) && (var31!=var46) && (var31!=var47) && (var31!=var48) && (var32!=var33) && (var32!=var34) && (var32!=var35) && (var32!=var36) && (var32!=var37) && (var32!=var38) && (var32!=var39) && (var32!=var40) && (var32!=var41) && (var32!=var42) && (var32!=var43) && (var32!=var44) && (var32!=var45) && (var32!=var46) && (var32!=var47) && (var32!=var48) && (var33!=var34) && (var33!=var35) && (var33!=var36) && (var33!=var37) && (var33!=var38) && (var33!=var39) && (var33!=var40) && (var33!=var41) && (var33!=var42) && (var33!=var43) && (var33!=var44) && (var33!=var45) && (var33!=var46) && (var33!=var47) && (var33!=var48) && (var34!=var35) && (var34!=var36) && (var34!=var37) && (var34!=var38) && (var34!=var39) && (var34!=var40) && (var34!=var41) && (var34!=var42) && (var34!=var43) && (var34!=var44) && (var34!=var45) && (var34!=var46) && (var34!=var47) && (var34!=var48) && (var35!=var36) && (var35!=var37) && (var35!=var38) && (var35!=var39) && (var35!=var40) && (var35!=var41) && (var35!=var42) && (var35!=var43) && (var35!=var44) && (var35!=var45) && (var35!=var46) && (var35!=var47) && (var35!=var48) && (var36!=var37) && (var36!=var38) && (var36!=var39) && (var36!=var40) && (var36!=var41) && (var36!=var42) && (var36!=var43) && (var36!=var44) && (var36!=var45) && (var36!=var46) && (var36!=var47) && (var36!=var48) && (var37!=var38) && (var37!=var39) && (var37!=var40) && (var37!=var41) && (var37!=var42) && (var37!=var43) && (var37!=var44) && (var37!=var45) && (var37!=var46) && (var37!=var47) && (var37!=var48) && (var38!=var39) && (var38!=var40) && (var38!=var41) && (var38!=var42) && (var38!=var43) && (var38!=var44) && (var38!=var45) && (var38!=var46) && (var38!=var47) && (var38!=var48) && (var39!=var40) && (var39!=var41) && (var39!=var42) && (var39!=var43) && (var39!=var44) && (var39!=var45) && (var39!=var46) && (var39!=var47) && (var39!=var48) && (var40!=var41) && (var40!=var42) && (var40!=var43) && (var40!=var44) && (var40!=var45) && (var40!=var46) && (var40!=var47) && (var40!=var48) && (var41!=var42) && (var41!=var43) && (var41!=var44) && (var41!=var45) && (var41!=var46) && (var41!=var47) && (var41!=var48) && (var42!=var43) && (var42!=var44) && (var42!=var45) && (var42!=var46) && (var42!=var47) && (var42!=var48) && (var43!=var44) && (var43!=var45) && (var43!=var46) && (var43!=var47) && (var43!=var48) && (var44!=var45) && (var44!=var46) && (var44!=var47) && (var44!=var48) && (var45!=var46) && (var45!=var47) && (var45!=var48) && (var46!=var47) && (var46!=var48) && (var47!=var48) &&  1)) & (((var25 == dist(var0, var1)) && (var26 == dist(var1, var2)) && (var27 == dist(var2, var3)) && (var28 == dist(var3, var4)) && (var29 == dist(var4, var5)) && (var30 == dist(var5, var6)) && (var31 == dist(var6, var7)) && (var32 == dist(var7, var8)) && (var33 == dist(var8, var9)) && (var34 == dist(var9, var10)) && (var35 == dist(var10, var11)) && (var36 == dist(var11, var12)) && (var37 == dist(var12, var13)) && (var38 == dist(var13, var14)) && (var39 == dist(var14, var15)) && (var40 == dist(var15, var16)) && (var41 == dist(var16, var17)) && (var42 == dist(var17, var18)) && (var43 == dist(var18, var19)) && (var44 == dist(var19, var20)) && (var45 == dist(var20, var21)) && (var46 == dist(var21, var22)) && (var47 == dist(var22, var23)) && (var48 == dist(var23, var24)) &&  1)) & 1 );
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
25 y[0]
26 y[1]
27 y[2]
28 y[3]
29 y[4]
30 y[5]
31 y[6]
32 y[7]
33 y[8]
34 y[9]
35 y[10]
36 y[11]
37 y[12]
38 y[13]
39 y[14]
40 y[15]
41 y[16]
42 y[17]
43 y[18]
44 y[19]
45 y[20]
46 y[21]
47 y[22]
48 y[23]
 */}
