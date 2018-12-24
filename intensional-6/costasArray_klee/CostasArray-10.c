#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
klee_assume( var0 >= 1 );
klee_assume( var0 <= 10 );
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
klee_assume( var1 >= 1 );
klee_assume( var1 <= 10 );
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
klee_assume( var2 >= 1 );
klee_assume( var2 <= 10 );
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
klee_assume( var3 >= 1 );
klee_assume( var3 <= 10 );
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
klee_assume( var4 >= 1 );
klee_assume( var4 <= 10 );
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
klee_assume( var5 >= 1 );
klee_assume( var5 <= 10 );
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
klee_assume( var6 >= 1 );
klee_assume( var6 <= 10 );
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
klee_assume( var7 >= 1 );
klee_assume( var7 <= 10 );
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
klee_assume( var8 >= 1 );
klee_assume( var8 <= 10 );
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
klee_assume( var9 >= 1 );
klee_assume( var9 <= 10 );
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
klee_assume(var10 >= -9);
klee_assume(var10 <= 9);
klee_assume(var10 != 0);
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
klee_assume(var11 >= -9);
klee_assume(var11 <= 9);
klee_assume(var11 != 0);
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
klee_assume(var12 >= -9);
klee_assume(var12 <= 9);
klee_assume(var12 != 0);
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
klee_assume(var13 >= -9);
klee_assume(var13 <= 9);
klee_assume(var13 != 0);
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
klee_assume(var14 >= -9);
klee_assume(var14 <= 9);
klee_assume(var14 != 0);
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
klee_assume(var15 >= -9);
klee_assume(var15 <= 9);
klee_assume(var15 != 0);
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
klee_assume(var16 >= -9);
klee_assume(var16 <= 9);
klee_assume(var16 != 0);
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
klee_assume(var17 >= -9);
klee_assume(var17 <= 9);
klee_assume(var17 != 0);
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
klee_assume(var18 >= -9);
klee_assume(var18 <= 9);
klee_assume(var18 != 0);
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
klee_assume(var19 >= -9);
klee_assume(var19 <= 9);
klee_assume(var19 != 0);
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
klee_assume(var20 >= -9);
klee_assume(var20 <= 9);
klee_assume(var20 != 0);
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
klee_assume(var21 >= -9);
klee_assume(var21 <= 9);
klee_assume(var21 != 0);
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
klee_assume(var22 >= -9);
klee_assume(var22 <= 9);
klee_assume(var22 != 0);
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
klee_assume(var23 >= -9);
klee_assume(var23 <= 9);
klee_assume(var23 != 0);
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
klee_assume(var24 >= -9);
klee_assume(var24 <= 9);
klee_assume(var24 != 0);
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
klee_assume(var25 >= -9);
klee_assume(var25 <= 9);
klee_assume(var25 != 0);
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
klee_assume(var26 >= -9);
klee_assume(var26 <= 9);
klee_assume(var26 != 0);
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
klee_assume(var27 >= -9);
klee_assume(var27 <= 9);
klee_assume(var27 != 0);
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
klee_assume(var28 >= -9);
klee_assume(var28 <= 9);
klee_assume(var28 != 0);
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
klee_assume(var29 >= -9);
klee_assume(var29 <= 9);
klee_assume(var29 != 0);
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
klee_assume(var30 >= -9);
klee_assume(var30 <= 9);
klee_assume(var30 != 0);
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
klee_assume(var31 >= -9);
klee_assume(var31 <= 9);
klee_assume(var31 != 0);
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
klee_assume(var32 >= -9);
klee_assume(var32 <= 9);
klee_assume(var32 != 0);
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
klee_assume(var33 >= -9);
klee_assume(var33 <= 9);
klee_assume(var33 != 0);
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
klee_assume(var34 >= -9);
klee_assume(var34 <= 9);
klee_assume(var34 != 0);
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
klee_assume(var35 >= -9);
klee_assume(var35 <= 9);
klee_assume(var35 != 0);
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
klee_assume(var36 >= -9);
klee_assume(var36 <= 9);
klee_assume(var36 != 0);
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
klee_assume(var37 >= -9);
klee_assume(var37 <= 9);
klee_assume(var37 != 0);
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
klee_assume(var38 >= -9);
klee_assume(var38 <= 9);
klee_assume(var38 != 0);
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
klee_assume(var39 >= -9);
klee_assume(var39 <= 9);
klee_assume(var39 != 0);
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
klee_assume(var40 >= -9);
klee_assume(var40 <= 9);
klee_assume(var40 != 0);
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
klee_assume(var41 >= -9);
klee_assume(var41 <= 9);
klee_assume(var41 != 0);
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
klee_assume(var42 >= -9);
klee_assume(var42 <= 9);
klee_assume(var42 != 0);
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
klee_assume(var43 >= -9);
klee_assume(var43 <= 9);
klee_assume(var43 != 0);
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
klee_assume(var44 >= -9);
klee_assume(var44 <= 9);
klee_assume(var44 != 0);
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
klee_assume(var45 >= -9);
klee_assume(var45 <= 9);
klee_assume(var45 != 0);
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
klee_assume(var46 >= -9);
klee_assume(var46 <= 9);
klee_assume(var46 != 0);
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
klee_assume(var47 >= -9);
klee_assume(var47 <= 9);
klee_assume(var47 != 0);
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
klee_assume(var48 >= -9);
klee_assume(var48 <= 9);
klee_assume(var48 != 0);
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
klee_assume(var49 >= -9);
klee_assume(var49 <= 9);
klee_assume(var49 != 0);
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
klee_assume(var50 >= -9);
klee_assume(var50 <= 9);
klee_assume(var50 != 0);
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
klee_assume(var51 >= -9);
klee_assume(var51 <= 9);
klee_assume(var51 != 0);
klee_assume(var0!=var1);
klee_assume(var0!=var2);
klee_assume(var0!=var3);
klee_assume(var0!=var4);
klee_assume(var0!=var5);
klee_assume(var0!=var6);
klee_assume(var0!=var7);
klee_assume(var0!=var8);
klee_assume(var0!=var9);
klee_assume(var1!=var2);
klee_assume(var1!=var3);
klee_assume(var1!=var4);
klee_assume(var1!=var5);
klee_assume(var1!=var6);
klee_assume(var1!=var7);
klee_assume(var1!=var8);
klee_assume(var1!=var9);
klee_assume(var2!=var3);
klee_assume(var2!=var4);
klee_assume(var2!=var5);
klee_assume(var2!=var6);
klee_assume(var2!=var7);
klee_assume(var2!=var8);
klee_assume(var2!=var9);
klee_assume(var3!=var4);
klee_assume(var3!=var5);
klee_assume(var3!=var6);
klee_assume(var3!=var7);
klee_assume(var3!=var8);
klee_assume(var3!=var9);
klee_assume(var4!=var5);
klee_assume(var4!=var6);
klee_assume(var4!=var7);
klee_assume(var4!=var8);
klee_assume(var4!=var9);
klee_assume(var5!=var6);
klee_assume(var5!=var7);
klee_assume(var5!=var8);
klee_assume(var5!=var9);
klee_assume(var6!=var7);
klee_assume(var6!=var8);
klee_assume(var6!=var9);
klee_assume(var7!=var8);
klee_assume(var7!=var9);
klee_assume(var8!=var9);
klee_assume(var10!=var11);
klee_assume(var10!=var12);
klee_assume(var10!=var13);
klee_assume(var10!=var14);
klee_assume(var10!=var15);
klee_assume(var10!=var16);
klee_assume(var10!=var17);
klee_assume(var10!=var18);
klee_assume(var11!=var12);
klee_assume(var11!=var13);
klee_assume(var11!=var14);
klee_assume(var11!=var15);
klee_assume(var11!=var16);
klee_assume(var11!=var17);
klee_assume(var11!=var18);
klee_assume(var12!=var13);
klee_assume(var12!=var14);
klee_assume(var12!=var15);
klee_assume(var12!=var16);
klee_assume(var12!=var17);
klee_assume(var12!=var18);
klee_assume(var13!=var14);
klee_assume(var13!=var15);
klee_assume(var13!=var16);
klee_assume(var13!=var17);
klee_assume(var13!=var18);
klee_assume(var14!=var15);
klee_assume(var14!=var16);
klee_assume(var14!=var17);
klee_assume(var14!=var18);
klee_assume(var15!=var16);
klee_assume(var15!=var17);
klee_assume(var15!=var18);
klee_assume(var16!=var17);
klee_assume(var16!=var18);
klee_assume(var17!=var18);
klee_assume(var19!=var20);
klee_assume(var19!=var21);
klee_assume(var19!=var22);
klee_assume(var19!=var23);
klee_assume(var19!=var24);
klee_assume(var19!=var25);
klee_assume(var19!=var26);
klee_assume(var20!=var21);
klee_assume(var20!=var22);
klee_assume(var20!=var23);
klee_assume(var20!=var24);
klee_assume(var20!=var25);
klee_assume(var20!=var26);
klee_assume(var21!=var22);
klee_assume(var21!=var23);
klee_assume(var21!=var24);
klee_assume(var21!=var25);
klee_assume(var21!=var26);
klee_assume(var22!=var23);
klee_assume(var22!=var24);
klee_assume(var22!=var25);
klee_assume(var22!=var26);
klee_assume(var23!=var24);
klee_assume(var23!=var25);
klee_assume(var23!=var26);
klee_assume(var24!=var25);
klee_assume(var24!=var26);
klee_assume(var25!=var26);
klee_assume(var27!=var28);
klee_assume(var27!=var29);
klee_assume(var27!=var30);
klee_assume(var27!=var31);
klee_assume(var27!=var32);
klee_assume(var27!=var33);
klee_assume(var28!=var29);
klee_assume(var28!=var30);
klee_assume(var28!=var31);
klee_assume(var28!=var32);
klee_assume(var28!=var33);
klee_assume(var29!=var30);
klee_assume(var29!=var31);
klee_assume(var29!=var32);
klee_assume(var29!=var33);
klee_assume(var30!=var31);
klee_assume(var30!=var32);
klee_assume(var30!=var33);
klee_assume(var31!=var32);
klee_assume(var31!=var33);
klee_assume(var32!=var33);
klee_assume(var34!=var35);
klee_assume(var34!=var36);
klee_assume(var34!=var37);
klee_assume(var34!=var38);
klee_assume(var34!=var39);
klee_assume(var35!=var36);
klee_assume(var35!=var37);
klee_assume(var35!=var38);
klee_assume(var35!=var39);
klee_assume(var36!=var37);
klee_assume(var36!=var38);
klee_assume(var36!=var39);
klee_assume(var37!=var38);
klee_assume(var37!=var39);
klee_assume(var38!=var39);
klee_assume(var40!=var41);
klee_assume(var40!=var42);
klee_assume(var40!=var43);
klee_assume(var40!=var44);
klee_assume(var41!=var42);
klee_assume(var41!=var43);
klee_assume(var41!=var44);
klee_assume(var42!=var43);
klee_assume(var42!=var44);
klee_assume(var43!=var44);
klee_assume(var45!=var46);
klee_assume(var45!=var47);
klee_assume(var45!=var48);
klee_assume(var46!=var47);
klee_assume(var46!=var48);
klee_assume(var47!=var48);
klee_assume(var49!=var50);
klee_assume(var49!=var51);
klee_assume(var50!=var51);
klee_assume(var0 - var1 == var10);
klee_assume(var1 - var2 == var11);
klee_assume(var2 - var3 == var12);
klee_assume(var3 - var4 == var13);
klee_assume(var4 - var5 == var14);
klee_assume(var5 - var6 == var15);
klee_assume(var6 - var7 == var16);
klee_assume(var7 - var8 == var17);
klee_assume(var8 - var9 == var18);
klee_assume(var0 - var2 == var19);
klee_assume(var1 - var3 == var20);
klee_assume(var2 - var4 == var21);
klee_assume(var3 - var5 == var22);
klee_assume(var4 - var6 == var23);
klee_assume(var5 - var7 == var24);
klee_assume(var6 - var8 == var25);
klee_assume(var7 - var9 == var26);
klee_assume(var0 - var3 == var27);
klee_assume(var1 - var4 == var28);
klee_assume(var2 - var5 == var29);
klee_assume(var3 - var6 == var30);
klee_assume(var4 - var7 == var31);
klee_assume(var5 - var8 == var32);
klee_assume(var6 - var9 == var33);
klee_assume(var0 - var4 == var34);
klee_assume(var1 - var5 == var35);
klee_assume(var2 - var6 == var36);
klee_assume(var3 - var7 == var37);
klee_assume(var4 - var8 == var38);
klee_assume(var5 - var9 == var39);
klee_assume(var0 - var5 == var40);
klee_assume(var1 - var6 == var41);
klee_assume(var2 - var7 == var42);
klee_assume(var3 - var8 == var43);
klee_assume(var4 - var9 == var44);
klee_assume(var0 - var6 == var45);
klee_assume(var1 - var7 == var46);
klee_assume(var2 - var8 == var47);
klee_assume(var3 - var9 == var48);
klee_assume(var0 - var7 == var49);
klee_assume(var1 - var8 == var50);
klee_assume(var2 - var9 == var51);
klee_assume((var0 - var8) != (var1 - var9));
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
