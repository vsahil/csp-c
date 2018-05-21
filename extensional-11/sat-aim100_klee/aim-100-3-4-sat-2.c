
int dist(int a, int b)
{ int dis = (a-b >= 0) ? a-b : b-a;
 return dis;
}
#include <klee/klee.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int* var0 = (int*)malloc(sizeof(int));
klee_make_symbolic(var0, sizeof(int), "*var0");
int myvar0 = 1;
if (*var0 == 0 || *var0 == 1) {myvar0= 1;}
else {exit(0);}
int* var1 = (int*)malloc(sizeof(int));
klee_make_symbolic(var1, sizeof(int), "*var1");
if (*var1 == 0 || *var1 == 1) {myvar0= 1;}
else {exit(0);}
int* var2 = (int*)malloc(sizeof(int));
klee_make_symbolic(var2, sizeof(int), "*var2");
if (*var2 == 0 || *var2 == 1) {myvar0= 1;}
else {exit(0);}
int* var3 = (int*)malloc(sizeof(int));
klee_make_symbolic(var3, sizeof(int), "*var3");
if (*var3 == 0 || *var3 == 1) {myvar0= 1;}
else {exit(0);}
int* var4 = (int*)malloc(sizeof(int));
klee_make_symbolic(var4, sizeof(int), "*var4");
if (*var4 == 0 || *var4 == 1) {myvar0= 1;}
else {exit(0);}
int* var5 = (int*)malloc(sizeof(int));
klee_make_symbolic(var5, sizeof(int), "*var5");
if (*var5 == 0 || *var5 == 1) {myvar0= 1;}
else {exit(0);}
int* var6 = (int*)malloc(sizeof(int));
klee_make_symbolic(var6, sizeof(int), "*var6");
if (*var6 == 0 || *var6 == 1) {myvar0= 1;}
else {exit(0);}
int* var7 = (int*)malloc(sizeof(int));
klee_make_symbolic(var7, sizeof(int), "*var7");
if (*var7 == 0 || *var7 == 1) {myvar0= 1;}
else {exit(0);}
int* var8 = (int*)malloc(sizeof(int));
klee_make_symbolic(var8, sizeof(int), "*var8");
if (*var8 == 0 || *var8 == 1) {myvar0= 1;}
else {exit(0);}
int* var9 = (int*)malloc(sizeof(int));
klee_make_symbolic(var9, sizeof(int), "*var9");
if (*var9 == 0 || *var9 == 1) {myvar0= 1;}
else {exit(0);}
int* var10 = (int*)malloc(sizeof(int));
klee_make_symbolic(var10, sizeof(int), "*var10");
if (*var10 == 0 || *var10 == 1) {myvar0= 1;}
else {exit(0);}
int* var11 = (int*)malloc(sizeof(int));
klee_make_symbolic(var11, sizeof(int), "*var11");
if (*var11 == 0 || *var11 == 1) {myvar0= 1;}
else {exit(0);}
int* var12 = (int*)malloc(sizeof(int));
klee_make_symbolic(var12, sizeof(int), "*var12");
if (*var12 == 0 || *var12 == 1) {myvar0= 1;}
else {exit(0);}
int* var13 = (int*)malloc(sizeof(int));
klee_make_symbolic(var13, sizeof(int), "*var13");
if (*var13 == 0 || *var13 == 1) {myvar0= 1;}
else {exit(0);}
int* var14 = (int*)malloc(sizeof(int));
klee_make_symbolic(var14, sizeof(int), "*var14");
if (*var14 == 0 || *var14 == 1) {myvar0= 1;}
else {exit(0);}
int* var15 = (int*)malloc(sizeof(int));
klee_make_symbolic(var15, sizeof(int), "*var15");
if (*var15 == 0 || *var15 == 1) {myvar0= 1;}
else {exit(0);}
int* var16 = (int*)malloc(sizeof(int));
klee_make_symbolic(var16, sizeof(int), "*var16");
if (*var16 == 0 || *var16 == 1) {myvar0= 1;}
else {exit(0);}
int* var17 = (int*)malloc(sizeof(int));
klee_make_symbolic(var17, sizeof(int), "*var17");
if (*var17 == 0 || *var17 == 1) {myvar0= 1;}
else {exit(0);}
int* var18 = (int*)malloc(sizeof(int));
klee_make_symbolic(var18, sizeof(int), "*var18");
if (*var18 == 0 || *var18 == 1) {myvar0= 1;}
else {exit(0);}
int* var19 = (int*)malloc(sizeof(int));
klee_make_symbolic(var19, sizeof(int), "*var19");
if (*var19 == 0 || *var19 == 1) {myvar0= 1;}
else {exit(0);}
int* var20 = (int*)malloc(sizeof(int));
klee_make_symbolic(var20, sizeof(int), "*var20");
if (*var20 == 0 || *var20 == 1) {myvar0= 1;}
else {exit(0);}
int* var21 = (int*)malloc(sizeof(int));
klee_make_symbolic(var21, sizeof(int), "*var21");
if (*var21 == 0 || *var21 == 1) {myvar0= 1;}
else {exit(0);}
int* var22 = (int*)malloc(sizeof(int));
klee_make_symbolic(var22, sizeof(int), "*var22");
if (*var22 == 0 || *var22 == 1) {myvar0= 1;}
else {exit(0);}
int* var23 = (int*)malloc(sizeof(int));
klee_make_symbolic(var23, sizeof(int), "*var23");
if (*var23 == 0 || *var23 == 1) {myvar0= 1;}
else {exit(0);}
int* var24 = (int*)malloc(sizeof(int));
klee_make_symbolic(var24, sizeof(int), "*var24");
if (*var24 == 0 || *var24 == 1) {myvar0= 1;}
else {exit(0);}
int* var25 = (int*)malloc(sizeof(int));
klee_make_symbolic(var25, sizeof(int), "*var25");
if (*var25 == 0 || *var25 == 1) {myvar0= 1;}
else {exit(0);}
int* var26 = (int*)malloc(sizeof(int));
klee_make_symbolic(var26, sizeof(int), "*var26");
if (*var26 == 0 || *var26 == 1) {myvar0= 1;}
else {exit(0);}
int* var27 = (int*)malloc(sizeof(int));
klee_make_symbolic(var27, sizeof(int), "*var27");
if (*var27 == 0 || *var27 == 1) {myvar0= 1;}
else {exit(0);}
int* var28 = (int*)malloc(sizeof(int));
klee_make_symbolic(var28, sizeof(int), "*var28");
if (*var28 == 0 || *var28 == 1) {myvar0= 1;}
else {exit(0);}
int* var29 = (int*)malloc(sizeof(int));
klee_make_symbolic(var29, sizeof(int), "*var29");
if (*var29 == 0 || *var29 == 1) {myvar0= 1;}
else {exit(0);}
int* var30 = (int*)malloc(sizeof(int));
klee_make_symbolic(var30, sizeof(int), "*var30");
if (*var30 == 0 || *var30 == 1) {myvar0= 1;}
else {exit(0);}
int* var31 = (int*)malloc(sizeof(int));
klee_make_symbolic(var31, sizeof(int), "*var31");
if (*var31 == 0 || *var31 == 1) {myvar0= 1;}
else {exit(0);}
int* var32 = (int*)malloc(sizeof(int));
klee_make_symbolic(var32, sizeof(int), "*var32");
if (*var32 == 0 || *var32 == 1) {myvar0= 1;}
else {exit(0);}
int* var33 = (int*)malloc(sizeof(int));
klee_make_symbolic(var33, sizeof(int), "*var33");
if (*var33 == 0 || *var33 == 1) {myvar0= 1;}
else {exit(0);}
int* var34 = (int*)malloc(sizeof(int));
klee_make_symbolic(var34, sizeof(int), "*var34");
if (*var34 == 0 || *var34 == 1) {myvar0= 1;}
else {exit(0);}
int* var35 = (int*)malloc(sizeof(int));
klee_make_symbolic(var35, sizeof(int), "*var35");
if (*var35 == 0 || *var35 == 1) {myvar0= 1;}
else {exit(0);}
int* var36 = (int*)malloc(sizeof(int));
klee_make_symbolic(var36, sizeof(int), "*var36");
if (*var36 == 0 || *var36 == 1) {myvar0= 1;}
else {exit(0);}
int* var37 = (int*)malloc(sizeof(int));
klee_make_symbolic(var37, sizeof(int), "*var37");
if (*var37 == 0 || *var37 == 1) {myvar0= 1;}
else {exit(0);}
int* var38 = (int*)malloc(sizeof(int));
klee_make_symbolic(var38, sizeof(int), "*var38");
if (*var38 == 0 || *var38 == 1) {myvar0= 1;}
else {exit(0);}
int* var39 = (int*)malloc(sizeof(int));
klee_make_symbolic(var39, sizeof(int), "*var39");
if (*var39 == 0 || *var39 == 1) {myvar0= 1;}
else {exit(0);}
int* var40 = (int*)malloc(sizeof(int));
klee_make_symbolic(var40, sizeof(int), "*var40");
if (*var40 == 0 || *var40 == 1) {myvar0= 1;}
else {exit(0);}
int* var41 = (int*)malloc(sizeof(int));
klee_make_symbolic(var41, sizeof(int), "*var41");
if (*var41 == 0 || *var41 == 1) {myvar0= 1;}
else {exit(0);}
int* var42 = (int*)malloc(sizeof(int));
klee_make_symbolic(var42, sizeof(int), "*var42");
if (*var42 == 0 || *var42 == 1) {myvar0= 1;}
else {exit(0);}
int* var43 = (int*)malloc(sizeof(int));
klee_make_symbolic(var43, sizeof(int), "*var43");
if (*var43 == 0 || *var43 == 1) {myvar0= 1;}
else {exit(0);}
int* var44 = (int*)malloc(sizeof(int));
klee_make_symbolic(var44, sizeof(int), "*var44");
if (*var44 == 0 || *var44 == 1) {myvar0= 1;}
else {exit(0);}
int* var45 = (int*)malloc(sizeof(int));
klee_make_symbolic(var45, sizeof(int), "*var45");
if (*var45 == 0 || *var45 == 1) {myvar0= 1;}
else {exit(0);}
int* var46 = (int*)malloc(sizeof(int));
klee_make_symbolic(var46, sizeof(int), "*var46");
if (*var46 == 0 || *var46 == 1) {myvar0= 1;}
else {exit(0);}
int* var47 = (int*)malloc(sizeof(int));
klee_make_symbolic(var47, sizeof(int), "*var47");
if (*var47 == 0 || *var47 == 1) {myvar0= 1;}
else {exit(0);}
int* var48 = (int*)malloc(sizeof(int));
klee_make_symbolic(var48, sizeof(int), "*var48");
if (*var48 == 0 || *var48 == 1) {myvar0= 1;}
else {exit(0);}
int* var49 = (int*)malloc(sizeof(int));
klee_make_symbolic(var49, sizeof(int), "*var49");
if (*var49 == 0 || *var49 == 1) {myvar0= 1;}
else {exit(0);}
int* var50 = (int*)malloc(sizeof(int));
klee_make_symbolic(var50, sizeof(int), "*var50");
if (*var50 == 0 || *var50 == 1) {myvar0= 1;}
else {exit(0);}
int* var51 = (int*)malloc(sizeof(int));
klee_make_symbolic(var51, sizeof(int), "*var51");
if (*var51 == 0 || *var51 == 1) {myvar0= 1;}
else {exit(0);}
int* var52 = (int*)malloc(sizeof(int));
klee_make_symbolic(var52, sizeof(int), "*var52");
if (*var52 == 0 || *var52 == 1) {myvar0= 1;}
else {exit(0);}
int* var53 = (int*)malloc(sizeof(int));
klee_make_symbolic(var53, sizeof(int), "*var53");
if (*var53 == 0 || *var53 == 1) {myvar0= 1;}
else {exit(0);}
int* var54 = (int*)malloc(sizeof(int));
klee_make_symbolic(var54, sizeof(int), "*var54");
if (*var54 == 0 || *var54 == 1) {myvar0= 1;}
else {exit(0);}
int* var55 = (int*)malloc(sizeof(int));
klee_make_symbolic(var55, sizeof(int), "*var55");
if (*var55 == 0 || *var55 == 1) {myvar0= 1;}
else {exit(0);}
int* var56 = (int*)malloc(sizeof(int));
klee_make_symbolic(var56, sizeof(int), "*var56");
if (*var56 == 0 || *var56 == 1) {myvar0= 1;}
else {exit(0);}
int* var57 = (int*)malloc(sizeof(int));
klee_make_symbolic(var57, sizeof(int), "*var57");
if (*var57 == 0 || *var57 == 1) {myvar0= 1;}
else {exit(0);}
int* var58 = (int*)malloc(sizeof(int));
klee_make_symbolic(var58, sizeof(int), "*var58");
if (*var58 == 0 || *var58 == 1) {myvar0= 1;}
else {exit(0);}
int* var59 = (int*)malloc(sizeof(int));
klee_make_symbolic(var59, sizeof(int), "*var59");
if (*var59 == 0 || *var59 == 1) {myvar0= 1;}
else {exit(0);}
int* var60 = (int*)malloc(sizeof(int));
klee_make_symbolic(var60, sizeof(int), "*var60");
if (*var60 == 0 || *var60 == 1) {myvar0= 1;}
else {exit(0);}
int* var61 = (int*)malloc(sizeof(int));
klee_make_symbolic(var61, sizeof(int), "*var61");
if (*var61 == 0 || *var61 == 1) {myvar0= 1;}
else {exit(0);}
int* var62 = (int*)malloc(sizeof(int));
klee_make_symbolic(var62, sizeof(int), "*var62");
if (*var62 == 0 || *var62 == 1) {myvar0= 1;}
else {exit(0);}
int* var63 = (int*)malloc(sizeof(int));
klee_make_symbolic(var63, sizeof(int), "*var63");
if (*var63 == 0 || *var63 == 1) {myvar0= 1;}
else {exit(0);}
int* var64 = (int*)malloc(sizeof(int));
klee_make_symbolic(var64, sizeof(int), "*var64");
if (*var64 == 0 || *var64 == 1) {myvar0= 1;}
else {exit(0);}
int* var65 = (int*)malloc(sizeof(int));
klee_make_symbolic(var65, sizeof(int), "*var65");
if (*var65 == 0 || *var65 == 1) {myvar0= 1;}
else {exit(0);}
int* var66 = (int*)malloc(sizeof(int));
klee_make_symbolic(var66, sizeof(int), "*var66");
if (*var66 == 0 || *var66 == 1) {myvar0= 1;}
else {exit(0);}
int* var67 = (int*)malloc(sizeof(int));
klee_make_symbolic(var67, sizeof(int), "*var67");
if (*var67 == 0 || *var67 == 1) {myvar0= 1;}
else {exit(0);}
int* var68 = (int*)malloc(sizeof(int));
klee_make_symbolic(var68, sizeof(int), "*var68");
if (*var68 == 0 || *var68 == 1) {myvar0= 1;}
else {exit(0);}
int* var69 = (int*)malloc(sizeof(int));
klee_make_symbolic(var69, sizeof(int), "*var69");
if (*var69 == 0 || *var69 == 1) {myvar0= 1;}
else {exit(0);}
int* var70 = (int*)malloc(sizeof(int));
klee_make_symbolic(var70, sizeof(int), "*var70");
if (*var70 == 0 || *var70 == 1) {myvar0= 1;}
else {exit(0);}
int* var71 = (int*)malloc(sizeof(int));
klee_make_symbolic(var71, sizeof(int), "*var71");
if (*var71 == 0 || *var71 == 1) {myvar0= 1;}
else {exit(0);}
int* var72 = (int*)malloc(sizeof(int));
klee_make_symbolic(var72, sizeof(int), "*var72");
if (*var72 == 0 || *var72 == 1) {myvar0= 1;}
else {exit(0);}
int* var73 = (int*)malloc(sizeof(int));
klee_make_symbolic(var73, sizeof(int), "*var73");
if (*var73 == 0 || *var73 == 1) {myvar0= 1;}
else {exit(0);}
int* var74 = (int*)malloc(sizeof(int));
klee_make_symbolic(var74, sizeof(int), "*var74");
if (*var74 == 0 || *var74 == 1) {myvar0= 1;}
else {exit(0);}
int* var75 = (int*)malloc(sizeof(int));
klee_make_symbolic(var75, sizeof(int), "*var75");
if (*var75 == 0 || *var75 == 1) {myvar0= 1;}
else {exit(0);}
int* var76 = (int*)malloc(sizeof(int));
klee_make_symbolic(var76, sizeof(int), "*var76");
if (*var76 == 0 || *var76 == 1) {myvar0= 1;}
else {exit(0);}
int* var77 = (int*)malloc(sizeof(int));
klee_make_symbolic(var77, sizeof(int), "*var77");
if (*var77 == 0 || *var77 == 1) {myvar0= 1;}
else {exit(0);}
int* var78 = (int*)malloc(sizeof(int));
klee_make_symbolic(var78, sizeof(int), "*var78");
if (*var78 == 0 || *var78 == 1) {myvar0= 1;}
else {exit(0);}
int* var79 = (int*)malloc(sizeof(int));
klee_make_symbolic(var79, sizeof(int), "*var79");
if (*var79 == 0 || *var79 == 1) {myvar0= 1;}
else {exit(0);}
int* var80 = (int*)malloc(sizeof(int));
klee_make_symbolic(var80, sizeof(int), "*var80");
if (*var80 == 0 || *var80 == 1) {myvar0= 1;}
else {exit(0);}
int* var81 = (int*)malloc(sizeof(int));
klee_make_symbolic(var81, sizeof(int), "*var81");
if (*var81 == 0 || *var81 == 1) {myvar0= 1;}
else {exit(0);}
int* var82 = (int*)malloc(sizeof(int));
klee_make_symbolic(var82, sizeof(int), "*var82");
if (*var82 == 0 || *var82 == 1) {myvar0= 1;}
else {exit(0);}
int* var83 = (int*)malloc(sizeof(int));
klee_make_symbolic(var83, sizeof(int), "*var83");
if (*var83 == 0 || *var83 == 1) {myvar0= 1;}
else {exit(0);}
int* var84 = (int*)malloc(sizeof(int));
klee_make_symbolic(var84, sizeof(int), "*var84");
if (*var84 == 0 || *var84 == 1) {myvar0= 1;}
else {exit(0);}
int* var85 = (int*)malloc(sizeof(int));
klee_make_symbolic(var85, sizeof(int), "*var85");
if (*var85 == 0 || *var85 == 1) {myvar0= 1;}
else {exit(0);}
int* var86 = (int*)malloc(sizeof(int));
klee_make_symbolic(var86, sizeof(int), "*var86");
if (*var86 == 0 || *var86 == 1) {myvar0= 1;}
else {exit(0);}
int* var87 = (int*)malloc(sizeof(int));
klee_make_symbolic(var87, sizeof(int), "*var87");
if (*var87 == 0 || *var87 == 1) {myvar0= 1;}
else {exit(0);}
int* var88 = (int*)malloc(sizeof(int));
klee_make_symbolic(var88, sizeof(int), "*var88");
if (*var88 == 0 || *var88 == 1) {myvar0= 1;}
else {exit(0);}
int* var89 = (int*)malloc(sizeof(int));
klee_make_symbolic(var89, sizeof(int), "*var89");
if (*var89 == 0 || *var89 == 1) {myvar0= 1;}
else {exit(0);}
int* var90 = (int*)malloc(sizeof(int));
klee_make_symbolic(var90, sizeof(int), "*var90");
if (*var90 == 0 || *var90 == 1) {myvar0= 1;}
else {exit(0);}
int* var91 = (int*)malloc(sizeof(int));
klee_make_symbolic(var91, sizeof(int), "*var91");
if (*var91 == 0 || *var91 == 1) {myvar0= 1;}
else {exit(0);}
int* var92 = (int*)malloc(sizeof(int));
klee_make_symbolic(var92, sizeof(int), "*var92");
if (*var92 == 0 || *var92 == 1) {myvar0= 1;}
else {exit(0);}
int* var93 = (int*)malloc(sizeof(int));
klee_make_symbolic(var93, sizeof(int), "*var93");
if (*var93 == 0 || *var93 == 1) {myvar0= 1;}
else {exit(0);}
int* var94 = (int*)malloc(sizeof(int));
klee_make_symbolic(var94, sizeof(int), "*var94");
if (*var94 == 0 || *var94 == 1) {myvar0= 1;}
else {exit(0);}
int* var95 = (int*)malloc(sizeof(int));
klee_make_symbolic(var95, sizeof(int), "*var95");
if (*var95 == 0 || *var95 == 1) {myvar0= 1;}
else {exit(0);}
int* var96 = (int*)malloc(sizeof(int));
klee_make_symbolic(var96, sizeof(int), "*var96");
if (*var96 == 0 || *var96 == 1) {myvar0= 1;}
else {exit(0);}
int* var97 = (int*)malloc(sizeof(int));
klee_make_symbolic(var97, sizeof(int), "*var97");
if (*var97 == 0 || *var97 == 1) {myvar0= 1;}
else {exit(0);}
int* var98 = (int*)malloc(sizeof(int));
klee_make_symbolic(var98, sizeof(int), "*var98");
if (*var98 == 0 || *var98 == 1) {myvar0= 1;}
else {exit(0);}
int* var99 = (int*)malloc(sizeof(int));
klee_make_symbolic(var99, sizeof(int), "*var99");
if (*var99 == 0 || *var99 == 1) {myvar0= 1;}
else {exit(0);}
if(( (*var10) == 0 && (*var20) == 0 && (*var91) == 0 ) || ( (*var10) == 0 && (*var20) == 0 && (*var89) == 0 ) || ( (*var19) == 0 && (*var27) == 0 && (*var56) == 0 ) || ( (*var12) == 0 && (*var66) == 0 && (*var75) == 0 ) || ( (*var73) == 0 && (*var74) == 0 && (*var89) == 0 ) || ( (*var32) == 0 && (*var70) == 0 && (*var71) == 0 ) || ( (*var14) == 0 && (*var32) == 0 && (*var71) == 0 ) || ( (*var40) == 0 && (*var82) == 0 && (*var88) == 0 ) || ( (*var56) == 0 && (*var76) == 0 && (*var82) == 0 ) || ( (*var64) == 0 && (*var72) == 0 && (*var78) == 0 ) || ( (*var10) == 0 && (*var56) == 0 && (*var67) == 0 ) || ( (*var23) == 0 && (*var37) == 0 && (*var50) == 0 ) || ( (*var36) == 0 && (*var37) == 0 && (*var47) == 0 ) || ( (*var29) == 0 && (*var75) == 0 && (*var80) == 0 ) || ( (*var9) == 0 && (*var49) == 0 && (*var57) == 0 ) || ( (*var24) == 0 && (*var31) == 0 && (*var91) == 0 ) || ( (*var47) == 0 && (*var61) == 0 && (*var70) == 0 ) || ( (*var38) == 0 && (*var77) == 0 && (*var98) == 0 ) || ( (*var33) == 0 && (*var40) == 0 && (*var65) == 0 ) || ( (*var33) == 0 && (*var34) == 0 && (*var42) == 0 ) || ( (*var33) == 0 && (*var42) == 0 && (*var47) == 0 ) || ( (*var4) == 0 && (*var27) == 0 && (*var80) == 0 ) || ( (*var31) == 0 && (*var39) == 0 && (*var66) == 0 ) || ( (*var3) == 0 && (*var4) == 0 && (*var74) == 0 ) || ( (*var9) == 0 && (*var44) == 0 && (*var84) == 0 ) || ( (*var5) == 0 && (*var73) == 0 && (*var81) == 0 ) || ( (*var11) == 0 && (*var35) == 0 && (*var95) == 0 ) || ( (*var0) == 0 && (*var84) == 0 && (*var93) == 0 ) || ( (*var61) == 0 && (*var63) == 0 && (*var74) == 0 ) || ( (*var37) == 0 && (*var58) == 0 && (*var94) == 0 ) || ( (*var25) == 0 && (*var53) == 0 && (*var58) == 0 ) || ( (*var16) == 0 && (*var54) == 0 && (*var69) == 0 ) || ( (*var69) == 0 && (*var71) == 0 && (*var79) == 0 ) || ( (*var15) == 0 && (*var17) == 0 && (*var87) == 0 ) || ( (*var18) == 0 && (*var25) == 0 && (*var34) == 0 ) ||  0) 
exit(0);
if(( (*var48) == 0 && (*var54) == 1 && (*var79) == 0 ) || ( (*var12) == 0 && (*var48) == 1 && (*var97) == 0 ) || ( (*var35) == 0 && (*var88) == 1 && (*var92) == 0 ) || ( (*var21) == 0 && (*var35) == 1 && (*var92) == 0 ) || ( (*var21) == 0 && (*var32) == 1 && (*var92) == 0 ) || ( (*var1) == 0 && (*var22) == 1 && (*var85) == 0 ) || ( (*var74) == 0 && (*var85) == 1 && (*var90) == 0 ) || ( (*var28) == 0 && (*var85) == 1 && (*var92) == 0 ) || ( (*var40) == 0 && (*var76) == 1 && (*var82) == 0 ) || ( (*var72) == 0 && (*var78) == 1 && (*var96) == 0 ) || ( (*var68) == 0 && (*var82) == 1 && (*var94) == 0 ) || ( (*var24) == 0 && (*var55) == 1 && (*var59) == 0 ) || ( (*var3) == 0 && (*var24) == 1 && (*var59) == 0 ) || ( (*var8) == 0 && (*var57) == 1 && (*var77) == 0 ) || ( (*var49) == 0 && (*var57) == 1 && (*var80) == 0 ) || ( (*var24) == 0 && (*var31) == 1 && (*var47) == 0 ) || ( (*var38) == 0 && (*var39) == 1 && (*var77) == 0 ) || ( (*var58) == 0 && (*var83) == 1 && (*var99) == 0 ) || ( (*var28) == 0 && (*var83) == 1 && (*var86) == 0 ) || ( (*var17) == 0 && (*var83) == 1 && (*var88) == 0 ) || ( (*var9) == 0 && (*var19) == 1 && (*var30) == 0 ) || ( (*var67) == 0 && (*var68) == 1 && (*var69) == 0 ) || ( (*var14) == 0 && (*var69) == 1 && (*var77) == 0 ) || ( (*var29) == 0 && (*var48) == 1 && (*var86) == 0 ) || ( (*var11) == 0 && (*var33) == 1 && (*var52) == 0 ) || ( (*var14) == 0 && (*var34) == 1 && (*var42) == 0 ) || ( (*var62) == 0 && (*var87) == 1 && (*var94) == 0 ) || ( (*var22) == 0 && (*var42) == 1 && (*var51) == 0 ) || ( (*var26) == 0 && (*var45) == 1 && (*var84) == 0 ) || ( (*var44) == 0 && (*var73) == 1 && (*var81) == 0 ) || ( (*var15) == 0 && (*var81) == 1 && (*var84) == 0 ) || ( (*var13) == 0 && (*var74) == 1 && (*var80) == 0 ) || ( (*var60) == 0 && (*var75) == 1 && (*var93) == 0 ) || ( (*var14) == 0 && (*var35) == 1 && (*var89) == 0 ) || ( (*var31) == 0 && (*var64) == 1 && (*var97) == 0 ) || ( (*var22) == 0 && (*var72) == 1 && (*var97) == 0 ) || ( (*var33) == 0 && (*var36) == 1 && (*var81) == 0 ) || ( (*var11) == 0 && (*var23) == 1 && (*var62) == 0 ) || ( (*var15) == 0 && (*var30) == 1 && (*var97) == 0 ) ||  0) 
exit(0);
if(( (*var28) == 0 && (*var66) == 1 && (*var92) == 1 ) || ( (*var28) == 1 && (*var66) == 1 && (*var92) == 1 ) ||  0) 
exit(0);
if(( (*var33) == 1 && (*var52) == 0 && (*var87) == 0 ) || ( (*var33) == 1 && (*var52) == 0 && (*var87) == 1 ) ||  0) 
exit(0);
if(( (*var10) == 1 && (*var20) == 0 && (*var64) == 0 ) || ( (*var19) == 1 && (*var27) == 0 && (*var66) == 0 ) || ( (*var46) == 1 && (*var57) == 0 && (*var92) == 0 ) || ( (*var28) == 1 && (*var74) == 0 && (*var85) == 0 ) || ( (*var1) == 1 && (*var6) == 0 && (*var76) == 0 ) || ( (*var40) == 1 && (*var82) == 0 && (*var96) == 0 ) || ( (*var1) == 1 && (*var64) == 0 && (*var72) == 0 ) || ( (*var64) == 1 && (*var72) == 0 && (*var96) == 0 ) || ( (*var11) == 1 && (*var72) == 0 && (*var96) == 0 ) || ( (*var17) == 1 && (*var78) == 0 && (*var87) == 0 ) || ( (*var5) == 1 && (*var78) == 0 && (*var96) == 0 ) || ( (*var23) == 1 && (*var30) == 0 && (*var50) == 0 ) || ( (*var39) == 1 && (*var55) == 0 && (*var99) == 0 ) || ( (*var55) == 1 && (*var56) == 0 && (*var62) == 0 ) || ( (*var24) == 1 && (*var91) == 0 && (*var99) == 0 ) || ( (*var24) == 1 && (*var57) == 0 && (*var91) == 0 ) || ( (*var7) == 1 && (*var9) == 0 && (*var19) == 0 ) || ( (*var40) == 1 && (*var52) == 0 && (*var94) == 0 ) || ( (*var9) == 1 && (*var43) == 0 && (*var73) == 0 ) || ( (*var9) == 1 && (*var24) == 0 && (*var43) == 0 ) || ( (*var5) == 1 && (*var43) == 0 && (*var45) == 0 ) || ( (*var11) == 1 && (*var44) == 0 && (*var95) == 0 ) || ( (*var61) == 1 && (*var63) == 0 && (*var75) == 0 ) || ( (*var13) == 1 && (*var37) == 0 && (*var93) == 0 ) || ( (*var15) == 1 && (*var63) == 0 && (*var71) == 0 ) || ( (*var27) == 1 && (*var39) == 0 && (*var65) == 0 ) || ( (*var14) == 1 && (*var64) == 0 && (*var89) == 0 ) || ( (*var25) == 1 && (*var26) == 0 && (*var53) == 0 ) || ( (*var14) == 1 && (*var81) == 0 && (*var83) == 0 ) || ( (*var36) == 1 && (*var79) == 0 && (*var97) == 0 ) || ( (*var25) == 1 && (*var42) == 0 && (*var83) == 0 ) || ( (*var23) == 1 && (*var86) == 0 && (*var90) == 0 ) || ( (*var39) == 1 && (*var73) == 0 && (*var83) == 0 ) || ( (*var18) == 1 && (*var28) == 0 && (*var97) == 0 ) ||  0) 
exit(0);
if(( (*var11) == 0 && (*var34) == 0 && (*var86) == 0 ) || ( (*var11) == 1 && (*var34) == 0 && (*var86) == 0 ) || ( (*var49) == 0 && (*var65) == 0 && (*var87) == 0 ) || ( (*var49) == 1 && (*var65) == 0 && (*var87) == 0 ) ||  0) 
exit(0);
if(( (*var10) == 0 && (*var22) == 0 && (*var91) == 1 ) || ( (*var10) == 0 && (*var22) == 1 && (*var91) == 1 ) || ( (*var48) == 0 && (*var59) == 0 && (*var79) == 1 ) || ( (*var48) == 0 && (*var59) == 1 && (*var79) == 1 ) || ( (*var36) == 0 && (*var67) == 0 && (*var86) == 1 ) || ( (*var36) == 0 && (*var67) == 1 && (*var86) == 1 ) || ( (*var0) == 0 && (*var40) == 0 && (*var84) == 1 ) || ( (*var0) == 0 && (*var40) == 1 && (*var84) == 1 ) ||  0) 
exit(0);
if(( (*var10) == 1 && (*var31) == 0 && (*var72) == 1 ) || ( (*var10) == 1 && (*var31) == 1 && (*var72) == 1 ) || ( (*var50) == 1 && (*var60) == 0 && (*var82) == 1 ) || ( (*var50) == 1 && (*var60) == 1 && (*var82) == 1 ) ||  0) 
exit(0);
if(( (*var23) == 0 && (*var41) == 0 && (*var76) == 0 ) || ( (*var23) == 0 && (*var41) == 0 && (*var76) == 1 ) ||  0) 
exit(0);
if(( (*var46) == 0 && (*var54) == 1 && (*var66) == 1 ) || ( (*var12) == 0 && (*var21) == 1 && (*var48) == 1 ) || ( (*var21) == 0 && (*var50) == 1 && (*var59) == 1 ) || ( (*var8) == 0 && (*var85) == 1 && (*var90) == 1 ) || ( (*var6) == 0 && (*var32) == 1 && (*var73) == 1 ) || ( (*var3) == 0 && (*var73) == 1 && (*var93) == 1 ) || ( (*var3) == 0 && (*var50) == 1 && (*var73) == 1 ) || ( (*var4) == 0 && (*var32) == 1 && (*var71) == 1 ) || ( (*var6) == 0 && (*var76) == 1 && (*var86) == 1 ) || ( (*var3) == 0 && (*var30) == 1 && (*var67) == 1 ) || ( (*var45) == 0 && (*var53) == 1 && (*var99) == 1 ) || ( (*var45) == 0 && (*var53) == 1 && (*var90) == 1 ) || ( (*var45) == 0 && (*var55) == 1 && (*var62) == 1 ) || ( (*var3) == 0 && (*var29) == 1 && (*var49) == 1 ) || ( (*var44) == 0 && (*var47) == 1 && (*var59) == 1 ) || ( (*var25) == 0 && (*var44) == 1 && (*var47) == 1 ) || ( (*var12) == 0 && (*var38) == 1 && (*var45) == 1 ) || ( (*var1) == 0 && (*var30) == 1 && (*var83) == 1 ) || ( (*var9) == 0 && (*var19) == 1 && (*var98) == 1 ) || ( (*var18) == 0 && (*var68) == 1 && (*var69) == 1 ) || ( (*var14) == 0 && (*var68) == 1 && (*var77) == 1 ) || ( (*var16) == 0 && (*var18) == 1 && (*var23) == 1 ) || ( (*var29) == 0 && (*var52) == 1 && (*var66) == 1 ) || ( (*var28) == 0 && (*var29) == 1 && (*var34) == 1 ) || ( (*var25) == 0 && (*var27) == 1 && (*var39) == 1 ) || ( (*var4) == 0 && (*var41) == 1 && (*var74) == 1 ) || ( (*var2) == 0 && (*var4) == 1 && (*var94) == 1 ) || ( (*var2) == 0 && (*var4) == 1 && (*var29) == 1 ) || ( (*var2) == 0 && (*var4) == 1 && (*var45) == 1 ) || ( (*var51) == 0 && (*var81) == 1 && (*var93) == 1 ) || ( (*var20) == 0 && (*var51) == 1 && (*var81) == 1 ) || ( (*var44) == 0 && (*var81) == 1 && (*var93) == 1 ) || ( (*var13) == 0 && (*var67) == 1 && (*var74) == 1 ) || ( (*var35) == 0 && (*var37) == 1 && (*var74) == 1 ) || ( (*var56) == 0 && (*var63) == 1 && (*var89) == 1 ) || ( (*var2) == 0 && (*var13) == 1 && (*var63) == 1 ) || ( (*var38) == 0 && (*var61) == 1 && (*var92) == 1 ) || ( (*var18) == 0 && (*var69) == 1 && (*var97) == 1 ) || ( (*var7) == 0 && (*var39) == 1 && (*var58) == 1 ) || ( (*var46) == 0 && (*var49) == 1 && (*var96) == 1 ) || ( (*var7) == 0 && (*var85) == 1 && (*var98) == 1 ) || ( (*var83) == 0 && (*var86) == 1 && (*var92) == 1 ) ||  0) 
exit(0);
if(( (*var17) == 0 && (*var54) == 0 && (*var87) == 0 ) || ( (*var17) == 0 && (*var54) == 1 && (*var87) == 0 ) || ( (*var55) == 0 && (*var70) == 0 && (*var99) == 0 ) || ( (*var55) == 0 && (*var70) == 1 && (*var99) == 0 ) || ( (*var0) == 0 && (*var5) == 0 && (*var50) == 0 ) || ( (*var0) == 0 && (*var5) == 1 && (*var50) == 0 ) || ( (*var7) == 0 && (*var23) == 0 && (*var58) == 0 ) || ( (*var7) == 0 && (*var23) == 1 && (*var58) == 0 ) || ( (*var27) == 0 && (*var38) == 0 && (*var95) == 0 ) || ( (*var27) == 0 && (*var38) == 1 && (*var95) == 0 ) ||  0) 
exit(0);
if(( (*var46) == 0 && (*var97) == 1 ) ||  0) 
exit(0);
if(( (*var9) == 1 && (*var46) == 0 && (*var79) == 0 ) || ( (*var9) == 1 && (*var46) == 1 && (*var79) == 0 ) || ( (*var27) == 1 && (*var31) == 0 && (*var39) == 0 ) || ( (*var27) == 1 && (*var31) == 1 && (*var39) == 0 ) ||  0) 
exit(0);
if(( (*var7) == 1 && (*var73) == 0 ) ||  0) 
exit(0);
if(( (*var13) == 1 && (*var20) == 1 && (*var54) == 0 ) || ( (*var48) == 1 && (*var56) == 1 && (*var77) == 0 ) || ( (*var8) == 1 && (*var12) == 1 && (*var66) == 0 ) || ( (*var12) == 1 && (*var21) == 1 && (*var85) == 0 ) || ( (*var1) == 1 && (*var21) == 1 && (*var85) == 0 ) || ( (*var21) == 1 && (*var41) == 1 && (*var85) == 0 ) || ( (*var8) == 1 && (*var76) == 1 && (*var89) == 0 ) || ( (*var6) == 1 && (*var8) == 1 && (*var16) == 0 ) || ( (*var50) == 1 && (*var68) == 1 && (*var93) == 0 ) || ( (*var34) == 1 && (*var53) == 1 && (*var59) == 0 ) || ( (*var45) == 1 && (*var55) == 1 && (*var59) == 0 ) || ( (*var57) == 1 && (*var77) == 1 && (*var80) == 0 ) || ( (*var25) == 1 && (*var44) == 1 && (*var95) == 0 ) || ( (*var45) == 1 && (*var80) == 1 && (*var90) == 0 ) || ( (*var40) == 1 && (*var60) == 1 && (*var98) == 0 ) || ( (*var12) == 1 && (*var38) == 1 && (*var78) == 0 ) || ( (*var83) == 1 && (*var86) == 1 && (*var88) == 0 ) || ( (*var1) == 1 && (*var30) == 1 && (*var88) == 0 ) || ( (*var4) == 1 && (*var7) == 1 && (*var19) == 0 ) || ( (*var19) == 1 && (*var30) == 1 && (*var98) == 0 ) || ( (*var9) == 1 && (*var68) == 1 && (*var69) == 0 ) || ( (*var16) == 1 && (*var25) == 1 && (*var90) == 0 ) || ( (*var2) == 1 && (*var18) == 1 && (*var26) == 0 ) || ( (*var21) == 1 && (*var49) == 1 && (*var65) == 0 ) || ( (*var42) == 1 && (*var43) == 1 && (*var47) == 0 ) || ( (*var26) == 1 && (*var44) == 1 && (*var84) == 0 ) || ( (*var15) == 1 && (*var62) == 1 && (*var63) == 0 ) || ( (*var32) == 1 && (*var58) == 1 && (*var94) == 0 ) || ( (*var15) == 1 && (*var71) == 1 && (*var82) == 0 ) || ( (*var35) == 1 && (*var75) == 1 && (*var93) == 0 ) || ( (*var26) == 1 && (*var43) == 1 && (*var53) == 0 ) || ( (*var31) == 1 && (*var37) == 1 && (*var90) == 0 ) || ( (*var31) == 1 && (*var49) == 1 && (*var90) == 0 ) ||  0) 
exit(0);
if(( (*var17) == 1 && (*var98) == 1 ) ||  0) 
exit(0);
if(( (*var42) == 0 && (*var76) == 0 && (*var78) == 1 ) || ( (*var42) == 1 && (*var76) == 0 && (*var78) == 1 ) ||  0) 
exit(0);
if(( (*var10) == 1 && (*var54) == 0 && (*var64) == 1 ) || ( (*var20) == 1 && (*var67) == 0 && (*var70) == 1 ) || ( (*var13) == 1 && (*var54) == 0 && (*var62) == 1 ) || ( (*var56) == 1 && (*var66) == 0 && (*var77) == 1 ) || ( (*var62) == 1 && (*var71) == 0 && (*var96) == 1 ) || ( (*var14) == 1 && (*var51) == 0 && (*var56) == 1 ) || ( (*var57) == 1 && (*var68) == 0 && (*var82) == 1 ) || ( (*var3) == 1 && (*var5) == 0 && (*var87) == 1 ) || ( (*var3) == 1 && (*var5) == 0 && (*var89) == 1 ) || ( (*var67) == 1 && (*var78) == 0 && (*var96) == 1 ) || ( (*var5) == 1 && (*var30) == 0 && (*var36) == 1 ) || ( (*var37) == 1 && (*var50) == 0 && (*var75) == 1 ) || ( (*var0) == 1 && (*var55) == 0 && (*var99) == 1 ) || ( (*var65) == 1 && (*var75) == 0 && (*var91) == 1 ) || ( (*var44) == 1 && (*var61) == 0 && (*var95) == 1 ) || ( (*var38) == 1 && (*var60) == 0 && (*var78) == 1 ) || ( (*var58) == 1 && (*var60) == 0 && (*var90) == 1 ) || ( (*var17) == 1 && (*var70) == 0 && (*var77) == 1 ) || ( (*var7) == 1 && (*var19) == 0 && (*var88) == 1 ) || ( (*var41) == 1 && (*var68) == 0 && (*var79) == 1 ) || ( (*var14) == 1 && (*var25) == 0 && (*var69) == 1 ) || ( (*var18) == 1 && (*var26) == 0 && (*var51) == 1 ) || ( (*var11) == 1 && (*var16) == 0 && (*var26) == 1 ) || ( (*var10) == 1 && (*var11) == 0 && (*var33) == 1 ) || ( (*var26) == 1 && (*var41) == 0 && (*var59) == 1 ) || ( (*var14) == 1 && (*var33) == 0 && (*var47) == 1 ) || ( (*var25) == 1 && (*var62) == 0 && (*var94) == 1 ) || ( (*var2) == 1 && (*var18) == 0 && (*var22) == 1 ) || ( (*var42) == 1 && (*var61) == 0 && (*var84) == 1 ) || ( (*var32) == 1 && (*var37) == 0 && (*var94) == 1 ) || ( (*var63) == 1 && (*var91) == 0 && (*var93) == 1 ) || ( (*var63) == 1 && (*var64) == 0 && (*var93) == 1 ) || ( (*var8) == 1 && (*var13) == 0 && (*var64) == 1 ) || ( (*var43) == 1 && (*var53) == 0 && (*var58) == 1 ) || ( (*var13) == 1 && (*var55) == 0 && (*var63) == 1 ) || ( (*var6) == 1 && (*var18) == 0 && (*var96) == 1 ) || ( (*var6) == 1 && (*var7) == 0 && (*var37) == 1 ) || ( (*var6) == 1 && (*var15) == 0 && (*var36) == 1 ) ||  0) 
exit(0);
if(( (*var8) == 1 && (*var48) == 1 && (*var75) == 1 ) || ( (*var66) == 1 && (*var80) == 1 && (*var92) == 1 ) || ( (*var12) == 1 && (*var46) == 1 && (*var74) == 1 ) || ( (*var28) == 1 && (*var85) == 1 && (*var89) == 1 ) || ( (*var3) == 1 && (*var28) == 1 && (*var89) == 1 ) || ( (*var6) == 1 && (*var16) == 1 && (*var28) == 1 ) || ( (*var4) == 1 && (*var62) == 1 && (*var71) == 1 ) || ( (*var20) == 1 && (*var78) == 1 && (*var82) == 1 ) || ( (*var0) == 1 && (*var95) == 1 && (*var99) == 1 ) || ( (*var0) == 1 && (*var33) == 1 && (*var95) == 1 ) || ( (*var3) == 1 && (*var55) == 1 && (*var56) == 1 ) || ( (*var29) == 1 && (*var37) == 1 && (*var61) == 1 ) || ( (*var41) == 1 && (*var65) == 1 && (*var91) == 1 ) || ( (*var61) == 1 && (*var80) == 1 && (*var95) == 1 ) || ( (*var24) == 1 && (*var45) == 1 && (*var98) == 1 ) || ( (*var12) == 1 && (*var19) == 1 && (*var38) == 1 ) || ( (*var17) == 1 && (*var77) == 1 && (*var99) == 1 ) || ( (*var36) == 1 && (*var53) == 1 && (*var79) == 1 ) || ( (*var16) == 1 && (*var69) == 1 && (*var90) == 1 ) || ( (*var29) == 1 && (*var34) == 1 && (*var52) == 1 ) || ( (*var11) == 1 && (*var16) == 1 && (*var34) == 1 ) || ( (*var16) == 1 && (*var22) == 1 && (*var26) == 1 ) || ( (*var40) == 1 && (*var41) == 1 && (*var52) == 1 ) || ( (*var3) == 1 && (*var41) == 1 && (*var87) == 1 ) || ( (*var43) == 1 && (*var47) == 1 && (*var94) == 1 ) || ( (*var2) == 1 && (*var18) == 1 && (*var84) == 1 ) || ( (*var2) == 1 && (*var61) == 1 && (*var84) == 1 ) || ( (*var5) == 1 && (*var9) == 1 && (*var24) == 1 ) || ( (*var2) == 1 && (*var22) == 1 && (*var44) == 1 ) || ( (*var15) == 1 && (*var35) == 1 && (*var71) == 1 ) || ( (*var15) == 1 && (*var46) == 1 && (*var65) == 1 ) || ( (*var35) == 1 && (*var56) == 1 && (*var89) == 1 ) || ( (*var0) == 1 && (*var64) == 1 && (*var97) == 1 ) || ( (*var0) == 1 && (*var43) == 1 && (*var53) == 1 ) || ( (*var10) == 1 && (*var72) == 1 && (*var88) == 1 ) || ( (*var27) == 1 && (*var72) == 1 && (*var98) == 1 ) ||  0) 
exit(0);
if(( (*var13) == 0 && (*var20) == 1 && (*var70) == 0 ) || ( (*var13) == 0 && (*var20) == 1 && (*var70) == 1 ) || ( (*var8) == 0 && (*var54) == 1 && (*var60) == 0 ) || ( (*var8) == 0 && (*var54) == 1 && (*var60) == 1 ) || ( (*var6) == 0 && (*var51) == 1 && (*var76) == 0 ) || ( (*var6) == 0 && (*var51) == 1 && (*var76) == 1 ) || ( (*var48) == 0 && (*var52) == 1 && (*var81) == 0 ) || ( (*var48) == 0 && (*var52) == 1 && (*var81) == 1 ) ||  0) 
exit(0);
if(( (*var12) == 0 && (*var41) == 0 && (*var46) == 1 ) || ( (*var12) == 0 && (*var21) == 0 && (*var97) == 1 ) || ( (*var21) == 0 && (*var32) == 0 && (*var46) == 1 ) || ( (*var1) == 0 && (*var62) == 0 && (*var73) == 1 ) || ( (*var1) == 0 && (*var32) == 0 && (*var71) == 1 ) || ( (*var51) == 0 && (*var67) == 0 && (*var70) == 1 ) || ( (*var20) == 0 && (*var51) == 0 && (*var67) == 1 ) || ( (*var68) == 0 && (*var88) == 0 && (*var94) == 1 ) || ( (*var57) == 0 && (*var68) == 0 && (*var88) == 1 ) || ( (*var30) == 0 && (*var36) == 0 && (*var47) == 1 ) || ( (*var29) == 0 && (*var58) == 0 && (*var80) == 1 ) || ( (*var29) == 0 && (*var30) == 0 && (*var58) == 1 ) || ( (*var34) == 0 && (*var50) == 0 && (*var99) == 1 ) || ( (*var49) == 0 && (*var75) == 0 && (*var91) == 1 ) || ( (*var49) == 0 && (*var57) == 0 && (*var59) == 1 ) || ( (*var45) == 0 && (*var61) == 0 && (*var70) == 1 ) || ( (*var19) == 0 && (*var40) == 0 && (*var57) == 1 ) || ( (*var38) == 0 && (*var83) == 0 && (*var90) == 1 ) || ( (*var17) == 0 && (*var53) == 0 && (*var88) == 1 ) || ( (*var36) == 0 && (*var41) == 0 && (*var79) == 1 ) || ( (*var2) == 0 && (*var16) == 0 && (*var18) == 1 ) || ( (*var23) == 0 && (*var52) == 0 && (*var65) == 1 ) || ( (*var4) == 0 && (*var27) == 0 && (*var87) == 1 ) || ( (*var22) == 0 && (*var26) == 0 && (*var42) == 1 ) || ( (*var22) == 0 && (*var43) == 0 && (*var51) == 1 ) || ( (*var5) == 0 && (*var84) == 0 && (*var95) == 1 ) || ( (*var32) == 0 && (*var35) == 0 && (*var80) == 1 ) || ( (*var35) == 0 && (*var63) == 0 && (*var75) == 1 ) || ( (*var39) == 0 && (*var46) == 0 && (*var65) == 1 ) || ( (*var8) == 0 && (*var43) == 0 && (*var64) == 1 ) || ( (*var24) == 0 && (*var69) == 0 && (*var96) == 1 ) || ( (*var15) == 0 && (*var73) == 0 && (*var92) == 1 ) ||  0) 
exit(0);
if(( (*var1) == 0 && (*var60) == 1 && (*var98) == 0 ) || ( (*var1) == 1 && (*var60) == 1 && (*var98) == 0 ) ||  0) 
exit(0);
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
30 x[30]
31 x[31]
32 x[32]
33 x[33]
34 x[34]
35 x[35]
36 x[36]
37 x[37]
38 x[38]
39 x[39]
40 x[40]
41 x[41]
42 x[42]
43 x[43]
44 x[44]
45 x[45]
46 x[46]
47 x[47]
48 x[48]
49 x[49]
50 x[50]
51 x[51]
52 x[52]
53 x[53]
54 x[54]
55 x[55]
56 x[56]
57 x[57]
58 x[58]
59 x[59]
60 x[60]
61 x[61]
62 x[62]
63 x[63]
64 x[64]
65 x[65]
66 x[66]
67 x[67]
68 x[68]
69 x[69]
70 x[70]
71 x[71]
72 x[72]
73 x[73]
74 x[74]
75 x[75]
76 x[76]
77 x[77]
78 x[78]
79 x[79]
80 x[80]
81 x[81]
82 x[82]
83 x[83]
84 x[84]
85 x[85]
86 x[86]
87 x[87]
88 x[88]
89 x[89]
90 x[90]
91 x[91]
92 x[92]
93 x[93]
94 x[94]
95 x[95]
96 x[96]
97 x[97]
98 x[98]
99 x[99]
 */}
