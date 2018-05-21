
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
if((var0 >= 0) & (var0 <= 11)) {myvar0= 1;}
else {exit(0);}
int var1;
klee_make_symbolic(&var1, sizeof(var1), "var1");
if((var1 >= 0) & (var1 <= 11)) {myvar0= 1;}
else {exit(0);}
int var2;
klee_make_symbolic(&var2, sizeof(var2), "var2");
if((var2 >= 0) & (var2 <= 11)) {myvar0= 1;}
else {exit(0);}
int var3;
klee_make_symbolic(&var3, sizeof(var3), "var3");
if((var3 >= 0) & (var3 <= 11)) {myvar0= 1;}
else {exit(0);}
int var4;
klee_make_symbolic(&var4, sizeof(var4), "var4");
if((var4 >= 0) & (var4 <= 11)) {myvar0= 1;}
else {exit(0);}
int var5;
klee_make_symbolic(&var5, sizeof(var5), "var5");
if((var5 >= 0) & (var5 <= 11)) {myvar0= 1;}
else {exit(0);}
int var6;
klee_make_symbolic(&var6, sizeof(var6), "var6");
if((var6 >= 0) & (var6 <= 11)) {myvar0= 1;}
else {exit(0);}
int var7;
klee_make_symbolic(&var7, sizeof(var7), "var7");
if((var7 >= 0) & (var7 <= 11)) {myvar0= 1;}
else {exit(0);}
int var8;
klee_make_symbolic(&var8, sizeof(var8), "var8");
if((var8 >= 0) & (var8 <= 11)) {myvar0= 1;}
else {exit(0);}
int var9;
klee_make_symbolic(&var9, sizeof(var9), "var9");
if((var9 >= 0) & (var9 <= 11)) {myvar0= 1;}
else {exit(0);}
int var10;
klee_make_symbolic(&var10, sizeof(var10), "var10");
if((var10 >= 0) & (var10 <= 11)) {myvar0= 1;}
else {exit(0);}
int var11;
klee_make_symbolic(&var11, sizeof(var11), "var11");
if((var11 >= 0) & (var11 <= 11)) {myvar0= 1;}
else {exit(0);}
int var12;
klee_make_symbolic(&var12, sizeof(var12), "var12");
if((var12 >= 1) & (var12 <= 11)) {myvar0= 1;}
else {exit(0);}
int var13;
klee_make_symbolic(&var13, sizeof(var13), "var13");
if((var13 >= 1) & (var13 <= 11)) {myvar0= 1;}
else {exit(0);}
int var14;
klee_make_symbolic(&var14, sizeof(var14), "var14");
if((var14 >= 1) & (var14 <= 11)) {myvar0= 1;}
else {exit(0);}
int var15;
klee_make_symbolic(&var15, sizeof(var15), "var15");
if((var15 >= 1) & (var15 <= 11)) {myvar0= 1;}
else {exit(0);}
int var16;
klee_make_symbolic(&var16, sizeof(var16), "var16");
if((var16 >= 1) & (var16 <= 11)) {myvar0= 1;}
else {exit(0);}
int var17;
klee_make_symbolic(&var17, sizeof(var17), "var17");
if((var17 >= 1) & (var17 <= 11)) {myvar0= 1;}
else {exit(0);}
int var18;
klee_make_symbolic(&var18, sizeof(var18), "var18");
if((var18 >= 1) & (var18 <= 11)) {myvar0= 1;}
else {exit(0);}
int var19;
klee_make_symbolic(&var19, sizeof(var19), "var19");
if((var19 >= 1) & (var19 <= 11)) {myvar0= 1;}
else {exit(0);}
int var20;
klee_make_symbolic(&var20, sizeof(var20), "var20");
if((var20 >= 1) & (var20 <= 11)) {myvar0= 1;}
else {exit(0);}
int var21;
klee_make_symbolic(&var21, sizeof(var21), "var21");
if((var21 >= 1) & (var21 <= 11)) {myvar0= 1;}
else {exit(0);}
int var22;
klee_make_symbolic(&var22, sizeof(var22), "var22");
if((var22 >= 1) & (var22 <= 11)) {myvar0= 1;}
else {exit(0);}
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var0!=var5) & (var0!=var6) & (var0!=var7) & (var0!=var8) & (var0!=var9) & (var0!=var10) & (var0!=var11) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var1!=var5) & (var1!=var6) & (var1!=var7) & (var1!=var8) & (var1!=var9) & (var1!=var10) & (var1!=var11) & (var2!=var3) & (var2!=var4) & (var2!=var5) & (var2!=var6) & (var2!=var7) & (var2!=var8) & (var2!=var9) & (var2!=var10) & (var2!=var11) & (var3!=var4) & (var3!=var5) & (var3!=var6) & (var3!=var7) & (var3!=var8) & (var3!=var9) & (var3!=var10) & (var3!=var11) & (var4!=var5) & (var4!=var6) & (var4!=var7) & (var4!=var8) & (var4!=var9) & (var4!=var10) & (var4!=var11) & (var5!=var6) & (var5!=var7) & (var5!=var8) & (var5!=var9) & (var5!=var10) & (var5!=var11) & (var6!=var7) & (var6!=var8) & (var6!=var9) & (var6!=var10) & (var6!=var11) & (var7!=var8) & (var7!=var9) & (var7!=var10) & (var7!=var11) & (var8!=var9) & (var8!=var10) & (var8!=var11) & (var9!=var10) & (var9!=var11) & (var10!=var11) &  1))
{myvar0= 1;}
else {exit(0);}
if(((var12!=var13) & (var12!=var14) & (var12!=var15) & (var12!=var16) & (var12!=var17) & (var12!=var18) & (var12!=var19) & (var12!=var20) & (var12!=var21) & (var12!=var22) & (var13!=var14) & (var13!=var15) & (var13!=var16) & (var13!=var17) & (var13!=var18) & (var13!=var19) & (var13!=var20) & (var13!=var21) & (var13!=var22) & (var14!=var15) & (var14!=var16) & (var14!=var17) & (var14!=var18) & (var14!=var19) & (var14!=var20) & (var14!=var21) & (var14!=var22) & (var15!=var16) & (var15!=var17) & (var15!=var18) & (var15!=var19) & (var15!=var20) & (var15!=var21) & (var15!=var22) & (var16!=var17) & (var16!=var18) & (var16!=var19) & (var16!=var20) & (var16!=var21) & (var16!=var22) & (var17!=var18) & (var17!=var19) & (var17!=var20) & (var17!=var21) & (var17!=var22) & (var18!=var19) & (var18!=var20) & (var18!=var21) & (var18!=var22) & (var19!=var20) & (var19!=var21) & (var19!=var22) & (var20!=var21) & (var20!=var22) & (var21!=var22) &  1))
{myvar0= 1;}
else {exit(0);}
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var12 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var13 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var14 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var15 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var4 - var5;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var16 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var5 - var6;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var17 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var6 - var7;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var18 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var7 - var8;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var19 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var8 - var9;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var20 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var9 - var10;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var21 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var10 - var11;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var22 == var_for_abs){myvar0= 1;}
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
12 y[0]
13 y[1]
14 y[2]
15 y[3]
16 y[4]
17 y[5]
18 y[6]
19 y[7]
20 y[8]
21 y[9]
22 y[10]
 */}
