
int dist(int a, int b)
{ int dis = (a-b >= 0) ? a-b : b-a;
 return dis;
}
#include <llbmc.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
var0 = __llbmc_nondef_int();
int myvar0 = 1;
if((var0 >= 0) & (var0 <= 4)) {myvar0= 1;}
else {exit(0);}
int var1;
var1 = __llbmc_nondef_int();
if((var1 >= 0) & (var1 <= 4)) {myvar0= 1;}
else {exit(0);}
int var2;
var2 = __llbmc_nondef_int();
if((var2 >= 0) & (var2 <= 4)) {myvar0= 1;}
else {exit(0);}
int var3;
var3 = __llbmc_nondef_int();
if((var3 >= 0) & (var3 <= 4)) {myvar0= 1;}
else {exit(0);}
int var4;
var4 = __llbmc_nondef_int();
if((var4 >= 0) & (var4 <= 4)) {myvar0= 1;}
else {exit(0);}
int var5;
var5 = __llbmc_nondef_int();
if((var5 >= 1) & (var5 <= 4)) {myvar0= 1;}
else {exit(0);}
int var6;
var6 = __llbmc_nondef_int();
if((var6 >= 1) & (var6 <= 4)) {myvar0= 1;}
else {exit(0);}
int var7;
var7 = __llbmc_nondef_int();
if((var7 >= 1) & (var7 <= 4)) {myvar0= 1;}
else {exit(0);}
int var8;
var8 = __llbmc_nondef_int();
if((var8 >= 1) & (var8 <= 4)) {myvar0= 1;}
else {exit(0);}
if(((var0!=var1) & (var0!=var2) & (var0!=var3) & (var0!=var4) & (var1!=var2) & (var1!=var3) & (var1!=var4) & (var2!=var3) & (var2!=var4) & (var3!=var4) &  1))
{myvar0= 1;}
else {exit(0);}
if(((var5!=var6) & (var5!=var7) & (var5!=var8) & (var6!=var7) & (var6!=var8) & (var7!=var8) &  1))
{myvar0= 1;}
else {exit(0);}
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var5 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var6 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var7 == var_for_abs){myvar0= 1;}
else {exit(0);}
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
if(var8 == var_for_abs){myvar0= 1;}
else {exit(0);}
assert(0);
return 0;
/* 
0 x[0]
1 x[1]
2 x[2]
3 x[3]
4 x[4]
5 y[0]
6 y[1]
7 y[2]
8 y[3]
 */}
