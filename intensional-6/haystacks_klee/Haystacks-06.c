#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
klee_assume( var0 >= 0 );
klee_assume( var0 <= 5 );
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
klee_assume( var1 >= 0 );
klee_assume( var1 <= 5 );
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
klee_assume( var2 >= 0 );
klee_assume( var2 <= 5 );
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
klee_assume( var3 >= 0 );
klee_assume( var3 <= 5 );
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
klee_assume( var4 >= 0 );
klee_assume( var4 <= 5 );
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
klee_assume( var5 >= 0 );
klee_assume( var5 <= 5 );
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
klee_assume( var6 >= 0 );
klee_assume( var6 <= 5 );
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
klee_assume( var7 >= 0 );
klee_assume( var7 <= 5 );
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
klee_assume( var8 >= 0 );
klee_assume( var8 <= 5 );
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
klee_assume( var9 >= 0 );
klee_assume( var9 <= 5 );
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
klee_assume( var10 >= 0 );
klee_assume( var10 <= 5 );
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
klee_assume( var11 >= 0 );
klee_assume( var11 <= 5 );
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
klee_assume( var12 >= 0 );
klee_assume( var12 <= 5 );
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
klee_assume( var13 >= 0 );
klee_assume( var13 <= 5 );
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
klee_assume( var14 >= 0 );
klee_assume( var14 <= 5 );
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
klee_assume( var15 >= 0 );
klee_assume( var15 <= 5 );
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
klee_assume( var16 >= 0 );
klee_assume( var16 <= 5 );
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
klee_assume( var17 >= 0 );
klee_assume( var17 <= 5 );
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
klee_assume( var18 >= 0 );
klee_assume( var18 <= 5 );
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
klee_assume( var19 >= 0 );
klee_assume( var19 <= 5 );
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
klee_assume( var20 >= 0 );
klee_assume( var20 <= 5 );
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
klee_assume( var21 >= 0 );
klee_assume( var21 <= 5 );
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
klee_assume( var22 >= 0 );
klee_assume( var22 <= 5 );
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
klee_assume( var23 >= 0 );
klee_assume( var23 <= 5 );
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
klee_assume( var24 >= 0 );
klee_assume( var24 <= 5 );
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
klee_assume( var25 >= 0 );
klee_assume( var25 <= 5 );
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
klee_assume( var26 >= 0 );
klee_assume( var26 <= 5 );
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
klee_assume( var27 >= 0 );
klee_assume( var27 <= 5 );
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
klee_assume( var28 >= 0 );
klee_assume( var28 <= 5 );
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
klee_assume( var29 >= 0 );
klee_assume( var29 <= 5 );
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
klee_assume( var30 >= 0 );
klee_assume( var30 <= 5 );
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
klee_assume( var31 >= 0 );
klee_assume( var31 <= 5 );
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
klee_assume( var32 >= 0 );
klee_assume( var32 <= 5 );
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
klee_assume( var33 >= 0 );
klee_assume( var33 <= 5 );
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
klee_assume( var34 >= 0 );
klee_assume( var34 <= 5 );
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
klee_assume( var35 >= 0 );
klee_assume( var35 <= 5 );
klee_assume(var10 != var13 );
klee_assume(var10 + var13 >= 2);
klee_assume(var10 != var14 );
klee_assume(var10 + var14 >= 2);
klee_assume(var10 != var21 );
klee_assume(var10 + var21 >= 2);
klee_assume(var10 != var31 );
klee_assume(var10 + var31 >= 2);
klee_assume(var10 != var34 );
klee_assume(var10 + var34 >= 2);
klee_assume(var26 != var0 );
klee_assume(var26 + var0 >= 2);
klee_assume(var26 != var11 );
klee_assume(var26 + var11 >= 2);
klee_assume(var26 != var16 );
klee_assume(var26 + var16 >= 2);
klee_assume(var26 != var25 );
klee_assume(var26 + var25 >= 2);
klee_assume(var26 != var28 );
klee_assume(var26 + var28 >= 2);
klee_assume(var32 != var22 );
klee_assume(var32 + var22 >= 2);
klee_assume(var32 != var29 );
klee_assume(var32 + var29 >= 2);
klee_assume(var32 != var33 );
klee_assume(var32 + var33 >= 2);
klee_assume(var32 != var35 );
klee_assume(var32 + var35 >= 2);
klee_assume(var32 != var8 );
klee_assume(var32 + var8 >= 2);
klee_assume(var4 != var20 );
klee_assume(var4 + var20 >= 2);
klee_assume(var4 != var24 );
klee_assume(var4 + var24 >= 2);
klee_assume(var4 != var27 );
klee_assume(var4 + var27 >= 2);
klee_assume(var4 != var3 );
klee_assume(var4 + var3 >= 2);
klee_assume(var4 != var30 );
klee_assume(var4 + var30 >= 2);
klee_assume(var6 != var12 );
klee_assume(var6 + var12 >= 2);
klee_assume(var6 != var15 );
klee_assume(var6 + var15 >= 2);
klee_assume(var6 != var17 );
klee_assume(var6 + var17 >= 2);
klee_assume(var6 != var18 );
klee_assume(var6 + var18 >= 2);
klee_assume(var6 != var23 );
klee_assume(var6 + var23 >= 2);
klee_assume(0 > (var11 - var0)*(var0 - var11));
klee_assume(0 > (var12 - var17)*(var17 - var12));
klee_assume(0 > (var13 - var31)*(var31 - var13));
klee_assume(0 > (var13 - var34)*(var34 - var13));
klee_assume(0 > (var16 - var0)*(var0 - var16));
klee_assume(0 > (var16 - var11)*(var11 - var16));
klee_assume(0 > (var16 - var28)*(var28 - var16));
klee_assume(0 > (var19 - var1)*(var1 - var19));
klee_assume(0 > (var19 - var7)*(var7 - var19));
klee_assume(0 > (var21 - var31)*(var31 - var21));
klee_assume(0 > (var21 - var34)*(var34 - var21));
klee_assume(0 > (var22 - var8)*(var8 - var22));
klee_assume(0 > (var23 - var15)*(var15 - var23));
klee_assume(0 > (var23 - var18)*(var18 - var23));
klee_assume(0 > (var24 - var20)*(var20 - var24));
klee_assume(0 > (var24 - var27)*(var27 - var24));
klee_assume(0 > (var24 - var3)*(var3 - var24));
klee_assume(0 > (var24 - var30)*(var30 - var24));
klee_assume(0 > (var25 - var11)*(var11 - var25));
klee_assume(0 > (var25 - var28)*(var28 - var25));
klee_assume(0 > (var27 - var20)*(var20 - var27));
klee_assume(0 > (var27 - var30)*(var30 - var27));
klee_assume(0 > (var29 - var22)*(var22 - var29));
klee_assume(0 > (var29 - var35)*(var35 - var29));
klee_assume(0 > (var3 - var20)*(var20 - var3));
klee_assume(0 > (var3 - var30)*(var30 - var3));
klee_assume(0 > (var33 - var22)*(var22 - var33));
klee_assume(0 > (var34 - var14)*(var14 - var34));
klee_assume(0 > (var34 - var31)*(var31 - var34));
klee_assume(0 > (var35 - var33)*(var33 - var35));
klee_assume(0 > (var35 - var8)*(var8 - var35));
klee_assume(0 > (var5 - var1)*(var1 - var5));
klee_assume(0 > (var7 - var5)*(var5 - var7));
klee_assume(0 > (var9 - var1)*(var1 - var9));
klee_assume(0 > (var9 - var7)*(var7 - var9));
klee_assume(var11 != var28);
klee_assume(var12 != var15);
klee_assume(var12 != var18);
klee_assume(var12 != var23);
klee_assume(var13 != var14);
klee_assume(var13 != var21);
klee_assume(var14 != var31);
klee_assume(var15 != var17);
klee_assume(var15 != var18);
klee_assume(var16 != var25);
klee_assume(var17 != var18);
klee_assume(var19 != var2);
klee_assume(var19 != var5);
klee_assume(var19 != var9);
klee_assume(var2 != var1);
klee_assume(var2 != var5);
klee_assume(var2 != var7);
klee_assume(var2 != var9);
klee_assume(var21 != var14);
klee_assume(var23 != var17);
klee_assume(var25 != var0);
klee_assume(var27 != var3);
klee_assume(var28 != var0);
klee_assume(var29 != var33);
klee_assume(var29 != var8);
klee_assume(var30 != var20);
klee_assume(var33 != var8);
klee_assume(var35 != var22);
klee_assume(var7 != var1);
klee_assume(var9 != var5);
klee_assume(var19 == var10);
klee_assume(var2 == var6);
klee_assume(var5 == var4);
klee_assume(var7 == var26);
klee_assume(var9 == var32);
int cntdis = 1;
int exten = 1;
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
 */}
