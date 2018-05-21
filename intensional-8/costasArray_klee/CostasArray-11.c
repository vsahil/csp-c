#include <klee/klee.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
klee_make_symbolic(&var0, sizeof(var0), "var0");
klee_assume( var0 >= 1 );
klee_assume( var0 <= 11 );
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
klee_assume( var1 >= 1 );
klee_assume( var1 <= 11 );
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
klee_assume( var2 >= 1 );
klee_assume( var2 <= 11 );
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
klee_assume( var3 >= 1 );
klee_assume( var3 <= 11 );
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
klee_assume( var4 >= 1 );
klee_assume( var4 <= 11 );
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
klee_assume( var5 >= 1 );
klee_assume( var5 <= 11 );
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
klee_assume( var6 >= 1 );
klee_assume( var6 <= 11 );
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
klee_assume( var7 >= 1 );
klee_assume( var7 <= 11 );
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
klee_assume( var8 >= 1 );
klee_assume( var8 <= 11 );
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
klee_assume( var9 >= 1 );
klee_assume( var9 <= 11 );
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
klee_assume( var10 >= 1 );
klee_assume( var10 <= 11 );
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
klee_assume(var11 >= -10);
klee_assume(var11 <= 10);
klee_assume(var11 != 0);
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
klee_assume(var12 >= -10);
klee_assume(var12 <= 10);
klee_assume(var12 != 0);
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
klee_assume(var13 >= -10);
klee_assume(var13 <= 10);
klee_assume(var13 != 0);
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
klee_assume(var14 >= -10);
klee_assume(var14 <= 10);
klee_assume(var14 != 0);
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
klee_assume(var15 >= -10);
klee_assume(var15 <= 10);
klee_assume(var15 != 0);
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
klee_assume(var16 >= -10);
klee_assume(var16 <= 10);
klee_assume(var16 != 0);
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
klee_assume(var17 >= -10);
klee_assume(var17 <= 10);
klee_assume(var17 != 0);
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
klee_assume(var18 >= -10);
klee_assume(var18 <= 10);
klee_assume(var18 != 0);
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
klee_assume(var19 >= -10);
klee_assume(var19 <= 10);
klee_assume(var19 != 0);
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
klee_assume(var20 >= -10);
klee_assume(var20 <= 10);
klee_assume(var20 != 0);
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
klee_assume(var21 >= -10);
klee_assume(var21 <= 10);
klee_assume(var21 != 0);
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
klee_assume(var22 >= -10);
klee_assume(var22 <= 10);
klee_assume(var22 != 0);
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
klee_assume(var23 >= -10);
klee_assume(var23 <= 10);
klee_assume(var23 != 0);
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
klee_assume(var24 >= -10);
klee_assume(var24 <= 10);
klee_assume(var24 != 0);
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
klee_assume(var25 >= -10);
klee_assume(var25 <= 10);
klee_assume(var25 != 0);
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
klee_assume(var26 >= -10);
klee_assume(var26 <= 10);
klee_assume(var26 != 0);
int var27;
klee_make_symbolic(&var27, sizeof(var27), "var27");
klee_assume(var27 >= -10);
klee_assume(var27 <= 10);
klee_assume(var27 != 0);
int var28;
klee_make_symbolic(&var28, sizeof(var28), "var28");
klee_assume(var28 >= -10);
klee_assume(var28 <= 10);
klee_assume(var28 != 0);
int var29;
klee_make_symbolic(&var29, sizeof(var29), "var29");
klee_assume(var29 >= -10);
klee_assume(var29 <= 10);
klee_assume(var29 != 0);
int var30;
klee_make_symbolic(&var30, sizeof(var30), "var30");
klee_assume(var30 >= -10);
klee_assume(var30 <= 10);
klee_assume(var30 != 0);
int var31;
klee_make_symbolic(&var31, sizeof(var31), "var31");
klee_assume(var31 >= -10);
klee_assume(var31 <= 10);
klee_assume(var31 != 0);
int var32;
klee_make_symbolic(&var32, sizeof(var32), "var32");
klee_assume(var32 >= -10);
klee_assume(var32 <= 10);
klee_assume(var32 != 0);
int var33;
klee_make_symbolic(&var33, sizeof(var33), "var33");
klee_assume(var33 >= -10);
klee_assume(var33 <= 10);
klee_assume(var33 != 0);
int var34;
klee_make_symbolic(&var34, sizeof(var34), "var34");
klee_assume(var34 >= -10);
klee_assume(var34 <= 10);
klee_assume(var34 != 0);
int var35;
klee_make_symbolic(&var35, sizeof(var35), "var35");
klee_assume(var35 >= -10);
klee_assume(var35 <= 10);
klee_assume(var35 != 0);
int var36;
klee_make_symbolic(&var36, sizeof(var36), "var36");
klee_assume(var36 >= -10);
klee_assume(var36 <= 10);
klee_assume(var36 != 0);
int var37;
klee_make_symbolic(&var37, sizeof(var37), "var37");
klee_assume(var37 >= -10);
klee_assume(var37 <= 10);
klee_assume(var37 != 0);
int var38;
klee_make_symbolic(&var38, sizeof(var38), "var38");
klee_assume(var38 >= -10);
klee_assume(var38 <= 10);
klee_assume(var38 != 0);
int var39;
klee_make_symbolic(&var39, sizeof(var39), "var39");
klee_assume(var39 >= -10);
klee_assume(var39 <= 10);
klee_assume(var39 != 0);
int var40;
klee_make_symbolic(&var40, sizeof(var40), "var40");
klee_assume(var40 >= -10);
klee_assume(var40 <= 10);
klee_assume(var40 != 0);
int var41;
klee_make_symbolic(&var41, sizeof(var41), "var41");
klee_assume(var41 >= -10);
klee_assume(var41 <= 10);
klee_assume(var41 != 0);
int var42;
klee_make_symbolic(&var42, sizeof(var42), "var42");
klee_assume(var42 >= -10);
klee_assume(var42 <= 10);
klee_assume(var42 != 0);
int var43;
klee_make_symbolic(&var43, sizeof(var43), "var43");
klee_assume(var43 >= -10);
klee_assume(var43 <= 10);
klee_assume(var43 != 0);
int var44;
klee_make_symbolic(&var44, sizeof(var44), "var44");
klee_assume(var44 >= -10);
klee_assume(var44 <= 10);
klee_assume(var44 != 0);
int var45;
klee_make_symbolic(&var45, sizeof(var45), "var45");
klee_assume(var45 >= -10);
klee_assume(var45 <= 10);
klee_assume(var45 != 0);
int var46;
klee_make_symbolic(&var46, sizeof(var46), "var46");
klee_assume(var46 >= -10);
klee_assume(var46 <= 10);
klee_assume(var46 != 0);
int var47;
klee_make_symbolic(&var47, sizeof(var47), "var47");
klee_assume(var47 >= -10);
klee_assume(var47 <= 10);
klee_assume(var47 != 0);
int var48;
klee_make_symbolic(&var48, sizeof(var48), "var48");
klee_assume(var48 >= -10);
klee_assume(var48 <= 10);
klee_assume(var48 != 0);
int var49;
klee_make_symbolic(&var49, sizeof(var49), "var49");
klee_assume(var49 >= -10);
klee_assume(var49 <= 10);
klee_assume(var49 != 0);
int var50;
klee_make_symbolic(&var50, sizeof(var50), "var50");
klee_assume(var50 >= -10);
klee_assume(var50 <= 10);
klee_assume(var50 != 0);
int var51;
klee_make_symbolic(&var51, sizeof(var51), "var51");
klee_assume(var51 >= -10);
klee_assume(var51 <= 10);
klee_assume(var51 != 0);
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
klee_assume(var52 >= -10);
klee_assume(var52 <= 10);
klee_assume(var52 != 0);
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
klee_assume(var53 >= -10);
klee_assume(var53 <= 10);
klee_assume(var53 != 0);
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
klee_assume(var54 >= -10);
klee_assume(var54 <= 10);
klee_assume(var54 != 0);
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
klee_assume(var55 >= -10);
klee_assume(var55 <= 10);
klee_assume(var55 != 0);
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
klee_assume(var56 >= -10);
klee_assume(var56 <= 10);
klee_assume(var56 != 0);
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
klee_assume(var57 >= -10);
klee_assume(var57 <= 10);
klee_assume(var57 != 0);
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
klee_assume(var58 >= -10);
klee_assume(var58 <= 10);
klee_assume(var58 != 0);
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
klee_assume(var59 >= -10);
klee_assume(var59 <= 10);
klee_assume(var59 != 0);
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
klee_assume(var60 >= -10);
klee_assume(var60 <= 10);
klee_assume(var60 != 0);
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
klee_assume(var61 >= -10);
klee_assume(var61 <= 10);
klee_assume(var61 != 0);
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
klee_assume(var62 >= -10);
klee_assume(var62 <= 10);
klee_assume(var62 != 0);
klee_assume(var0!=var1);
klee_assume(var0!=var2);
klee_assume(var0!=var3);
klee_assume(var0!=var4);
klee_assume(var0!=var5);
klee_assume(var0!=var6);
klee_assume(var0!=var7);
klee_assume(var0!=var8);
klee_assume(var0!=var9);
klee_assume(var0!=var10);
klee_assume(var1!=var2);
klee_assume(var1!=var3);
klee_assume(var1!=var4);
klee_assume(var1!=var5);
klee_assume(var1!=var6);
klee_assume(var1!=var7);
klee_assume(var1!=var8);
klee_assume(var1!=var9);
klee_assume(var1!=var10);
klee_assume(var2!=var3);
klee_assume(var2!=var4);
klee_assume(var2!=var5);
klee_assume(var2!=var6);
klee_assume(var2!=var7);
klee_assume(var2!=var8);
klee_assume(var2!=var9);
klee_assume(var2!=var10);
klee_assume(var3!=var4);
klee_assume(var3!=var5);
klee_assume(var3!=var6);
klee_assume(var3!=var7);
klee_assume(var3!=var8);
klee_assume(var3!=var9);
klee_assume(var3!=var10);
klee_assume(var4!=var5);
klee_assume(var4!=var6);
klee_assume(var4!=var7);
klee_assume(var4!=var8);
klee_assume(var4!=var9);
klee_assume(var4!=var10);
klee_assume(var5!=var6);
klee_assume(var5!=var7);
klee_assume(var5!=var8);
klee_assume(var5!=var9);
klee_assume(var5!=var10);
klee_assume(var6!=var7);
klee_assume(var6!=var8);
klee_assume(var6!=var9);
klee_assume(var6!=var10);
klee_assume(var7!=var8);
klee_assume(var7!=var9);
klee_assume(var7!=var10);
klee_assume(var8!=var9);
klee_assume(var8!=var10);
klee_assume(var9!=var10);
klee_assume(var11!=var12);
klee_assume(var11!=var13);
klee_assume(var11!=var14);
klee_assume(var11!=var15);
klee_assume(var11!=var16);
klee_assume(var11!=var17);
klee_assume(var11!=var18);
klee_assume(var11!=var19);
klee_assume(var11!=var20);
klee_assume(var12!=var13);
klee_assume(var12!=var14);
klee_assume(var12!=var15);
klee_assume(var12!=var16);
klee_assume(var12!=var17);
klee_assume(var12!=var18);
klee_assume(var12!=var19);
klee_assume(var12!=var20);
klee_assume(var13!=var14);
klee_assume(var13!=var15);
klee_assume(var13!=var16);
klee_assume(var13!=var17);
klee_assume(var13!=var18);
klee_assume(var13!=var19);
klee_assume(var13!=var20);
klee_assume(var14!=var15);
klee_assume(var14!=var16);
klee_assume(var14!=var17);
klee_assume(var14!=var18);
klee_assume(var14!=var19);
klee_assume(var14!=var20);
klee_assume(var15!=var16);
klee_assume(var15!=var17);
klee_assume(var15!=var18);
klee_assume(var15!=var19);
klee_assume(var15!=var20);
klee_assume(var16!=var17);
klee_assume(var16!=var18);
klee_assume(var16!=var19);
klee_assume(var16!=var20);
klee_assume(var17!=var18);
klee_assume(var17!=var19);
klee_assume(var17!=var20);
klee_assume(var18!=var19);
klee_assume(var18!=var20);
klee_assume(var19!=var20);
klee_assume(var21!=var22);
klee_assume(var21!=var23);
klee_assume(var21!=var24);
klee_assume(var21!=var25);
klee_assume(var21!=var26);
klee_assume(var21!=var27);
klee_assume(var21!=var28);
klee_assume(var21!=var29);
klee_assume(var22!=var23);
klee_assume(var22!=var24);
klee_assume(var22!=var25);
klee_assume(var22!=var26);
klee_assume(var22!=var27);
klee_assume(var22!=var28);
klee_assume(var22!=var29);
klee_assume(var23!=var24);
klee_assume(var23!=var25);
klee_assume(var23!=var26);
klee_assume(var23!=var27);
klee_assume(var23!=var28);
klee_assume(var23!=var29);
klee_assume(var24!=var25);
klee_assume(var24!=var26);
klee_assume(var24!=var27);
klee_assume(var24!=var28);
klee_assume(var24!=var29);
klee_assume(var25!=var26);
klee_assume(var25!=var27);
klee_assume(var25!=var28);
klee_assume(var25!=var29);
klee_assume(var26!=var27);
klee_assume(var26!=var28);
klee_assume(var26!=var29);
klee_assume(var27!=var28);
klee_assume(var27!=var29);
klee_assume(var28!=var29);
klee_assume(var30!=var31);
klee_assume(var30!=var32);
klee_assume(var30!=var33);
klee_assume(var30!=var34);
klee_assume(var30!=var35);
klee_assume(var30!=var36);
klee_assume(var30!=var37);
klee_assume(var31!=var32);
klee_assume(var31!=var33);
klee_assume(var31!=var34);
klee_assume(var31!=var35);
klee_assume(var31!=var36);
klee_assume(var31!=var37);
klee_assume(var32!=var33);
klee_assume(var32!=var34);
klee_assume(var32!=var35);
klee_assume(var32!=var36);
klee_assume(var32!=var37);
klee_assume(var33!=var34);
klee_assume(var33!=var35);
klee_assume(var33!=var36);
klee_assume(var33!=var37);
klee_assume(var34!=var35);
klee_assume(var34!=var36);
klee_assume(var34!=var37);
klee_assume(var35!=var36);
klee_assume(var35!=var37);
klee_assume(var36!=var37);
klee_assume(var38!=var39);
klee_assume(var38!=var40);
klee_assume(var38!=var41);
klee_assume(var38!=var42);
klee_assume(var38!=var43);
klee_assume(var38!=var44);
klee_assume(var39!=var40);
klee_assume(var39!=var41);
klee_assume(var39!=var42);
klee_assume(var39!=var43);
klee_assume(var39!=var44);
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
klee_assume(var45!=var49);
klee_assume(var45!=var50);
klee_assume(var46!=var47);
klee_assume(var46!=var48);
klee_assume(var46!=var49);
klee_assume(var46!=var50);
klee_assume(var47!=var48);
klee_assume(var47!=var49);
klee_assume(var47!=var50);
klee_assume(var48!=var49);
klee_assume(var48!=var50);
klee_assume(var49!=var50);
klee_assume(var51!=var52);
klee_assume(var51!=var53);
klee_assume(var51!=var54);
klee_assume(var51!=var55);
klee_assume(var52!=var53);
klee_assume(var52!=var54);
klee_assume(var52!=var55);
klee_assume(var53!=var54);
klee_assume(var53!=var55);
klee_assume(var54!=var55);
klee_assume(var56!=var57);
klee_assume(var56!=var58);
klee_assume(var56!=var59);
klee_assume(var57!=var58);
klee_assume(var57!=var59);
klee_assume(var58!=var59);
klee_assume(var60!=var61);
klee_assume(var60!=var62);
klee_assume(var61!=var62);
klee_assume(var0 - var1 == var11);
klee_assume(var1 - var2 == var12);
klee_assume(var2 - var3 == var13);
klee_assume(var3 - var4 == var14);
klee_assume(var4 - var5 == var15);
klee_assume(var5 - var6 == var16);
klee_assume(var6 - var7 == var17);
klee_assume(var7 - var8 == var18);
klee_assume(var8 - var9 == var19);
klee_assume(var9 - var10 == var20);
klee_assume(var0 - var2 == var21);
klee_assume(var1 - var3 == var22);
klee_assume(var2 - var4 == var23);
klee_assume(var3 - var5 == var24);
klee_assume(var4 - var6 == var25);
klee_assume(var5 - var7 == var26);
klee_assume(var6 - var8 == var27);
klee_assume(var7 - var9 == var28);
klee_assume(var8 - var10 == var29);
klee_assume(var0 - var3 == var30);
klee_assume(var1 - var4 == var31);
klee_assume(var2 - var5 == var32);
klee_assume(var3 - var6 == var33);
klee_assume(var4 - var7 == var34);
klee_assume(var5 - var8 == var35);
klee_assume(var6 - var9 == var36);
klee_assume(var7 - var10 == var37);
klee_assume(var0 - var4 == var38);
klee_assume(var1 - var5 == var39);
klee_assume(var2 - var6 == var40);
klee_assume(var3 - var7 == var41);
klee_assume(var4 - var8 == var42);
klee_assume(var5 - var9 == var43);
klee_assume(var6 - var10 == var44);
klee_assume(var0 - var5 == var45);
klee_assume(var1 - var6 == var46);
klee_assume(var2 - var7 == var47);
klee_assume(var3 - var8 == var48);
klee_assume(var4 - var9 == var49);
klee_assume(var5 - var10 == var50);
klee_assume(var0 - var6 == var51);
klee_assume(var1 - var7 == var52);
klee_assume(var2 - var8 == var53);
klee_assume(var3 - var9 == var54);
klee_assume(var4 - var10 == var55);
klee_assume(var0 - var7 == var56);
klee_assume(var1 - var8 == var57);
klee_assume(var2 - var9 == var58);
klee_assume(var3 - var10 == var59);
klee_assume(var0 - var8 == var60);
klee_assume(var1 - var9 == var61);
klee_assume(var2 - var10 == var62);
klee_assume((var0 - var9) != (var1 - var10));
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
11 y[0]
12 y[1]
13 y[2]
14 y[3]
15 y[4]
16 y[5]
17 y[6]
18 y[7]
19 y[8]
20 y[9]
21 y[10]
22 y[11]
23 y[12]
24 y[13]
25 y[14]
26 y[15]
27 y[16]
28 y[17]
29 y[18]
30 y[19]
31 y[20]
32 y[21]
33 y[22]
34 y[23]
35 y[24]
36 y[25]
37 y[26]
38 y[27]
39 y[28]
40 y[29]
41 y[30]
42 y[31]
43 y[32]
44 y[33]
45 y[34]
46 y[35]
47 y[36]
48 y[37]
49 y[38]
50 y[39]
51 y[40]
52 y[41]
53 y[42]
54 y[43]
55 y[44]
56 y[45]
57 y[46]
58 y[47]
59 y[48]
60 y[49]
61 y[50]
62 y[51]
 */}
