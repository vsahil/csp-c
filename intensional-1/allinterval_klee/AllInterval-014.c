
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
if((myvar0 == 1) && (var0 >= 0) && (var0 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((myvar0 == 1) && (var1 >= 0) && (var1 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((myvar0 == 1) && (var2 >= 0) && (var2 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((myvar0 == 1) && (var3 >= 0) && (var3 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((myvar0 == 1) && (var4 >= 0) && (var4 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((myvar0 == 1) && (var5 >= 0) && (var5 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((myvar0 == 1) && (var6 >= 0) && (var6 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((myvar0 == 1) && (var7 >= 0) && (var7 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((myvar0 == 1) && (var8 >= 0) && (var8 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((myvar0 == 1) && (var9 >= 0) && (var9 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((myvar0 == 1) && (var10 >= 0) && (var10 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((myvar0 == 1) && (var11 >= 0) && (var11 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((myvar0 == 1) && (var12 >= 0) && (var12 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((myvar0 == 1) && (var13 >= 0) && (var13 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((myvar0 == 1) && (var14 >= 1) && (var14 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((myvar0 == 1) && (var15 >= 1) && (var15 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((myvar0 == 1) && (var16 >= 1) && (var16 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((myvar0 == 1) && (var17 >= 1) && (var17 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((myvar0 == 1) && (var18 >= 1) && (var18 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((myvar0 == 1) && (var19 >= 1) && (var19 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((myvar0 == 1) && (var20 >= 1) && (var20 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((myvar0 == 1) && (var21 >= 1) && (var21 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((myvar0 == 1) && (var22 >= 1) && (var22 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var23;
klee_make_symbolic(&var23, sizeof(var23), "var23");
if((myvar0 == 1) && (var23 >= 1) && (var23 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var24;
klee_make_symbolic(&var24, sizeof(var24), "var24");
if((myvar0 == 1) && (var24 >= 1) && (var24 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var25;
klee_make_symbolic(&var25, sizeof(var25), "var25");
if((myvar0 == 1) && (var25 >= 1) && (var25 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
int var26;
klee_make_symbolic(&var26, sizeof(var26), "var26");
if((myvar0 == 1) && (var26 >= 1) && (var26 <= 13)) {myvar0= 1;}
else {myvar0= 0;exit(0);}
if(!( 1))
exit(0);
if(!( 1))
exit(0);
if((myvar0 == 1) && (var0!=var1) && (var0!=var2) && (var0!=var3) && (var0!=var4) && (var0!=var5) && (var0!=var6) && (var0!=var7) && (var0!=var8) && (var0!=var9) && (var0!=var10) && (var0!=var11) && (var0!=var12) && (var0!=var13) && (var1!=var2) && (var1!=var3) && (var1!=var4) && (var1!=var5) && (var1!=var6) && (var1!=var7) && (var1!=var8) && (var1!=var9) && (var1!=var10) && (var1!=var11) && (var1!=var12) && (var1!=var13) && (var2!=var3) && (var2!=var4) && (var2!=var5) && (var2!=var6) && (var2!=var7) && (var2!=var8) && (var2!=var9) && (var2!=var10) && (var2!=var11) && (var2!=var12) && (var2!=var13) && (var3!=var4) && (var3!=var5) && (var3!=var6) && (var3!=var7) && (var3!=var8) && (var3!=var9) && (var3!=var10) && (var3!=var11) && (var3!=var12) && (var3!=var13) && (var4!=var5) && (var4!=var6) && (var4!=var7) && (var4!=var8) && (var4!=var9) && (var4!=var10) && (var4!=var11) && (var4!=var12) && (var4!=var13) && (var5!=var6) && (var5!=var7) && (var5!=var8) && (var5!=var9) && (var5!=var10) && (var5!=var11) && (var5!=var12) && (var5!=var13) && (var6!=var7) && (var6!=var8) && (var6!=var9) && (var6!=var10) && (var6!=var11) && (var6!=var12) && (var6!=var13) && (var7!=var8) && (var7!=var9) && (var7!=var10) && (var7!=var11) && (var7!=var12) && (var7!=var13) && (var8!=var9) && (var8!=var10) && (var8!=var11) && (var8!=var12) && (var8!=var13) && (var9!=var10) && (var9!=var11) && (var9!=var12) && (var9!=var13) && (var10!=var11) && (var10!=var12) && (var10!=var13) && (var11!=var12) && (var11!=var13) && (var12!=var13) &&  1)
{myvar0= 1;}
else {myvar0= 0;exit(0);}
if((myvar0 == 1) && (var14!=var15) && (var14!=var16) && (var14!=var17) && (var14!=var18) && (var14!=var19) && (var14!=var20) && (var14!=var21) && (var14!=var22) && (var14!=var23) && (var14!=var24) && (var14!=var25) && (var14!=var26) && (var15!=var16) && (var15!=var17) && (var15!=var18) && (var15!=var19) && (var15!=var20) && (var15!=var21) && (var15!=var22) && (var15!=var23) && (var15!=var24) && (var15!=var25) && (var15!=var26) && (var16!=var17) && (var16!=var18) && (var16!=var19) && (var16!=var20) && (var16!=var21) && (var16!=var22) && (var16!=var23) && (var16!=var24) && (var16!=var25) && (var16!=var26) && (var17!=var18) && (var17!=var19) && (var17!=var20) && (var17!=var21) && (var17!=var22) && (var17!=var23) && (var17!=var24) && (var17!=var25) && (var17!=var26) && (var18!=var19) && (var18!=var20) && (var18!=var21) && (var18!=var22) && (var18!=var23) && (var18!=var24) && (var18!=var25) && (var18!=var26) && (var19!=var20) && (var19!=var21) && (var19!=var22) && (var19!=var23) && (var19!=var24) && (var19!=var25) && (var19!=var26) && (var20!=var21) && (var20!=var22) && (var20!=var23) && (var20!=var24) && (var20!=var25) && (var20!=var26) && (var21!=var22) && (var21!=var23) && (var21!=var24) && (var21!=var25) && (var21!=var26) && (var22!=var23) && (var22!=var24) && (var22!=var25) && (var22!=var26) && (var23!=var24) && (var23!=var25) && (var23!=var26) && (var24!=var25) && (var24!=var26) && (var25!=var26) &&  1)
{myvar0= 1;}
else {myvar0= 0;exit(0);}
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var14 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var15 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var16 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var17 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var18 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var19 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var20 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var21 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var22 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var23 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var24 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var11 - var12;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var25 == var_for_abs)){myvar0= 1;}
else {myvar0= 0;exit(0);}
var_for_abs = var12 - var13;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if((myvar0 == 1) && (var26 == var_for_abs)){myvar0= 1;}
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
14 y[0]
15 y[1]
16 y[2]
17 y[3]
18 y[4]
19 y[5]
20 y[6]
21 y[7]
22 y[8]
23 y[9]
24 y[10]
25 y[11]
26 y[12]
 */}
