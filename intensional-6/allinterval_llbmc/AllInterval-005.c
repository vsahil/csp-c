#include <llbmc.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int var0;
var0 = __llbmc_nondef_int();
__llbmc_assume( var0 >= 0 );
__llbmc_assume( var0 <= 4 );
int var1;
var1 = __llbmc_nondef_int();
__llbmc_assume( var1 >= 0 );
__llbmc_assume( var1 <= 4 );
int var2;
var2 = __llbmc_nondef_int();
__llbmc_assume( var2 >= 0 );
__llbmc_assume( var2 <= 4 );
int var3;
var3 = __llbmc_nondef_int();
__llbmc_assume( var3 >= 0 );
__llbmc_assume( var3 <= 4 );
int var4;
var4 = __llbmc_nondef_int();
__llbmc_assume( var4 >= 0 );
__llbmc_assume( var4 <= 4 );
int var5;
var5 = __llbmc_nondef_int();
__llbmc_assume( var5 >= 1 );
__llbmc_assume( var5 <= 4 );
int var6;
var6 = __llbmc_nondef_int();
__llbmc_assume( var6 >= 1 );
__llbmc_assume( var6 <= 4 );
int var7;
var7 = __llbmc_nondef_int();
__llbmc_assume( var7 >= 1 );
__llbmc_assume( var7 <= 4 );
int var8;
var8 = __llbmc_nondef_int();
__llbmc_assume( var8 >= 1 );
__llbmc_assume( var8 <= 4 );
__llbmc_assume(var0!=var1);
__llbmc_assume(var0!=var2);
__llbmc_assume(var0!=var3);
__llbmc_assume(var0!=var4);
__llbmc_assume(var1!=var2);
__llbmc_assume(var1!=var3);
__llbmc_assume(var1!=var4);
__llbmc_assume(var2!=var3);
__llbmc_assume(var2!=var4);
__llbmc_assume(var3!=var4);
__llbmc_assume(var5!=var6);
__llbmc_assume(var5!=var7);
__llbmc_assume(var5!=var8);
__llbmc_assume(var6!=var7);
__llbmc_assume(var6!=var8);
__llbmc_assume(var7!=var8);
int var_for_abs;
var_for_abs = var0 - var1;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
__llbmc_assume(var5 == var_for_abs );
var_for_abs = var1 - var2;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
__llbmc_assume(var6 == var_for_abs );
var_for_abs = var2 - var3;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
__llbmc_assume(var7 == var_for_abs );
var_for_abs = var3 - var4;
var_for_abs = (var_for_abs >= 0) ? var_for_abs : var_for_abs*(-1);
__llbmc_assume(var8 == var_for_abs );
int cntdis = 1;
int exten = 1;
if( cntdis == 1 && exten == 1)
__llbmc_assert(0);
else printf("UNSAT\n");
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
