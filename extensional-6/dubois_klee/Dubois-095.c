
int dist(int a, int b)
{ int dis = (a-b >= 0) ? a-b : b-a;
 return dis;
}
#include <klee/klee.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
int main () {
int cond0;
int dummy = 0;
int N;
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
int var52;
klee_make_symbolic(&var52, sizeof(var52), "var52");
int var53;
klee_make_symbolic(&var53, sizeof(var53), "var53");
int var54;
klee_make_symbolic(&var54, sizeof(var54), "var54");
int var55;
klee_make_symbolic(&var55, sizeof(var55), "var55");
int var56;
klee_make_symbolic(&var56, sizeof(var56), "var56");
int var57;
klee_make_symbolic(&var57, sizeof(var57), "var57");
int var58;
klee_make_symbolic(&var58, sizeof(var58), "var58");
int var59;
klee_make_symbolic(&var59, sizeof(var59), "var59");
int var60;
klee_make_symbolic(&var60, sizeof(var60), "var60");
int var61;
klee_make_symbolic(&var61, sizeof(var61), "var61");
int var62;
klee_make_symbolic(&var62, sizeof(var62), "var62");
int var63;
klee_make_symbolic(&var63, sizeof(var63), "var63");
int var64;
klee_make_symbolic(&var64, sizeof(var64), "var64");
int var65;
klee_make_symbolic(&var65, sizeof(var65), "var65");
int var66;
klee_make_symbolic(&var66, sizeof(var66), "var66");
int var67;
klee_make_symbolic(&var67, sizeof(var67), "var67");
int var68;
klee_make_symbolic(&var68, sizeof(var68), "var68");
int var69;
klee_make_symbolic(&var69, sizeof(var69), "var69");
int var70;
klee_make_symbolic(&var70, sizeof(var70), "var70");
int var71;
klee_make_symbolic(&var71, sizeof(var71), "var71");
int var72;
klee_make_symbolic(&var72, sizeof(var72), "var72");
int var73;
klee_make_symbolic(&var73, sizeof(var73), "var73");
int var74;
klee_make_symbolic(&var74, sizeof(var74), "var74");
int var75;
klee_make_symbolic(&var75, sizeof(var75), "var75");
int var76;
klee_make_symbolic(&var76, sizeof(var76), "var76");
int var77;
klee_make_symbolic(&var77, sizeof(var77), "var77");
int var78;
klee_make_symbolic(&var78, sizeof(var78), "var78");
int var79;
klee_make_symbolic(&var79, sizeof(var79), "var79");
int var80;
klee_make_symbolic(&var80, sizeof(var80), "var80");
int var81;
klee_make_symbolic(&var81, sizeof(var81), "var81");
int var82;
klee_make_symbolic(&var82, sizeof(var82), "var82");
int var83;
klee_make_symbolic(&var83, sizeof(var83), "var83");
int var84;
klee_make_symbolic(&var84, sizeof(var84), "var84");
int var85;
klee_make_symbolic(&var85, sizeof(var85), "var85");
int var86;
klee_make_symbolic(&var86, sizeof(var86), "var86");
int var87;
klee_make_symbolic(&var87, sizeof(var87), "var87");
int var88;
klee_make_symbolic(&var88, sizeof(var88), "var88");
int var89;
klee_make_symbolic(&var89, sizeof(var89), "var89");
int var90;
klee_make_symbolic(&var90, sizeof(var90), "var90");
int var91;
klee_make_symbolic(&var91, sizeof(var91), "var91");
int var92;
klee_make_symbolic(&var92, sizeof(var92), "var92");
int var93;
klee_make_symbolic(&var93, sizeof(var93), "var93");
int var94;
klee_make_symbolic(&var94, sizeof(var94), "var94");
int var95;
klee_make_symbolic(&var95, sizeof(var95), "var95");
int var96;
klee_make_symbolic(&var96, sizeof(var96), "var96");
int var97;
klee_make_symbolic(&var97, sizeof(var97), "var97");
int var98;
klee_make_symbolic(&var98, sizeof(var98), "var98");
int var99;
klee_make_symbolic(&var99, sizeof(var99), "var99");
int var100;
klee_make_symbolic(&var100, sizeof(var100), "var100");
int var101;
klee_make_symbolic(&var101, sizeof(var101), "var101");
int var102;
klee_make_symbolic(&var102, sizeof(var102), "var102");
int var103;
klee_make_symbolic(&var103, sizeof(var103), "var103");
int var104;
klee_make_symbolic(&var104, sizeof(var104), "var104");
int var105;
klee_make_symbolic(&var105, sizeof(var105), "var105");
int var106;
klee_make_symbolic(&var106, sizeof(var106), "var106");
int var107;
klee_make_symbolic(&var107, sizeof(var107), "var107");
int var108;
klee_make_symbolic(&var108, sizeof(var108), "var108");
int var109;
klee_make_symbolic(&var109, sizeof(var109), "var109");
int var110;
klee_make_symbolic(&var110, sizeof(var110), "var110");
int var111;
klee_make_symbolic(&var111, sizeof(var111), "var111");
int var112;
klee_make_symbolic(&var112, sizeof(var112), "var112");
int var113;
klee_make_symbolic(&var113, sizeof(var113), "var113");
int var114;
klee_make_symbolic(&var114, sizeof(var114), "var114");
int var115;
klee_make_symbolic(&var115, sizeof(var115), "var115");
int var116;
klee_make_symbolic(&var116, sizeof(var116), "var116");
int var117;
klee_make_symbolic(&var117, sizeof(var117), "var117");
int var118;
klee_make_symbolic(&var118, sizeof(var118), "var118");
int var119;
klee_make_symbolic(&var119, sizeof(var119), "var119");
int var120;
klee_make_symbolic(&var120, sizeof(var120), "var120");
int var121;
klee_make_symbolic(&var121, sizeof(var121), "var121");
int var122;
klee_make_symbolic(&var122, sizeof(var122), "var122");
int var123;
klee_make_symbolic(&var123, sizeof(var123), "var123");
int var124;
klee_make_symbolic(&var124, sizeof(var124), "var124");
int var125;
klee_make_symbolic(&var125, sizeof(var125), "var125");
int var126;
klee_make_symbolic(&var126, sizeof(var126), "var126");
int var127;
klee_make_symbolic(&var127, sizeof(var127), "var127");
int var128;
klee_make_symbolic(&var128, sizeof(var128), "var128");
int var129;
klee_make_symbolic(&var129, sizeof(var129), "var129");
int var130;
klee_make_symbolic(&var130, sizeof(var130), "var130");
int var131;
klee_make_symbolic(&var131, sizeof(var131), "var131");
int var132;
klee_make_symbolic(&var132, sizeof(var132), "var132");
int var133;
klee_make_symbolic(&var133, sizeof(var133), "var133");
int var134;
klee_make_symbolic(&var134, sizeof(var134), "var134");
int var135;
klee_make_symbolic(&var135, sizeof(var135), "var135");
int var136;
klee_make_symbolic(&var136, sizeof(var136), "var136");
int var137;
klee_make_symbolic(&var137, sizeof(var137), "var137");
int var138;
klee_make_symbolic(&var138, sizeof(var138), "var138");
int var139;
klee_make_symbolic(&var139, sizeof(var139), "var139");
int var140;
klee_make_symbolic(&var140, sizeof(var140), "var140");
int var141;
klee_make_symbolic(&var141, sizeof(var141), "var141");
int var142;
klee_make_symbolic(&var142, sizeof(var142), "var142");
int var143;
klee_make_symbolic(&var143, sizeof(var143), "var143");
int var144;
klee_make_symbolic(&var144, sizeof(var144), "var144");
int var145;
klee_make_symbolic(&var145, sizeof(var145), "var145");
int var146;
klee_make_symbolic(&var146, sizeof(var146), "var146");
int var147;
klee_make_symbolic(&var147, sizeof(var147), "var147");
int var148;
klee_make_symbolic(&var148, sizeof(var148), "var148");
int var149;
klee_make_symbolic(&var149, sizeof(var149), "var149");
int var150;
klee_make_symbolic(&var150, sizeof(var150), "var150");
int var151;
klee_make_symbolic(&var151, sizeof(var151), "var151");
int var152;
klee_make_symbolic(&var152, sizeof(var152), "var152");
int var153;
klee_make_symbolic(&var153, sizeof(var153), "var153");
int var154;
klee_make_symbolic(&var154, sizeof(var154), "var154");
int var155;
klee_make_symbolic(&var155, sizeof(var155), "var155");
int var156;
klee_make_symbolic(&var156, sizeof(var156), "var156");
int var157;
klee_make_symbolic(&var157, sizeof(var157), "var157");
int var158;
klee_make_symbolic(&var158, sizeof(var158), "var158");
int var159;
klee_make_symbolic(&var159, sizeof(var159), "var159");
int var160;
klee_make_symbolic(&var160, sizeof(var160), "var160");
int var161;
klee_make_symbolic(&var161, sizeof(var161), "var161");
int var162;
klee_make_symbolic(&var162, sizeof(var162), "var162");
int var163;
klee_make_symbolic(&var163, sizeof(var163), "var163");
int var164;
klee_make_symbolic(&var164, sizeof(var164), "var164");
int var165;
klee_make_symbolic(&var165, sizeof(var165), "var165");
int var166;
klee_make_symbolic(&var166, sizeof(var166), "var166");
int var167;
klee_make_symbolic(&var167, sizeof(var167), "var167");
int var168;
klee_make_symbolic(&var168, sizeof(var168), "var168");
int var169;
klee_make_symbolic(&var169, sizeof(var169), "var169");
int var170;
klee_make_symbolic(&var170, sizeof(var170), "var170");
int var171;
klee_make_symbolic(&var171, sizeof(var171), "var171");
int var172;
klee_make_symbolic(&var172, sizeof(var172), "var172");
int var173;
klee_make_symbolic(&var173, sizeof(var173), "var173");
int var174;
klee_make_symbolic(&var174, sizeof(var174), "var174");
int var175;
klee_make_symbolic(&var175, sizeof(var175), "var175");
int var176;
klee_make_symbolic(&var176, sizeof(var176), "var176");
int var177;
klee_make_symbolic(&var177, sizeof(var177), "var177");
int var178;
klee_make_symbolic(&var178, sizeof(var178), "var178");
int var179;
klee_make_symbolic(&var179, sizeof(var179), "var179");
int var180;
klee_make_symbolic(&var180, sizeof(var180), "var180");
int var181;
klee_make_symbolic(&var181, sizeof(var181), "var181");
int var182;
klee_make_symbolic(&var182, sizeof(var182), "var182");
int var183;
klee_make_symbolic(&var183, sizeof(var183), "var183");
int var184;
klee_make_symbolic(&var184, sizeof(var184), "var184");
int var185;
klee_make_symbolic(&var185, sizeof(var185), "var185");
int var186;
klee_make_symbolic(&var186, sizeof(var186), "var186");
int var187;
klee_make_symbolic(&var187, sizeof(var187), "var187");
int var188;
klee_make_symbolic(&var188, sizeof(var188), "var188");
int var189;
klee_make_symbolic(&var189, sizeof(var189), "var189");
int var190;
klee_make_symbolic(&var190, sizeof(var190), "var190");
int var191;
klee_make_symbolic(&var191, sizeof(var191), "var191");
int var192;
klee_make_symbolic(&var192, sizeof(var192), "var192");
int var193;
klee_make_symbolic(&var193, sizeof(var193), "var193");
int var194;
klee_make_symbolic(&var194, sizeof(var194), "var194");
int var195;
klee_make_symbolic(&var195, sizeof(var195), "var195");
int var196;
klee_make_symbolic(&var196, sizeof(var196), "var196");
int var197;
klee_make_symbolic(&var197, sizeof(var197), "var197");
int var198;
klee_make_symbolic(&var198, sizeof(var198), "var198");
int var199;
klee_make_symbolic(&var199, sizeof(var199), "var199");
int var200;
klee_make_symbolic(&var200, sizeof(var200), "var200");
int var201;
klee_make_symbolic(&var201, sizeof(var201), "var201");
int var202;
klee_make_symbolic(&var202, sizeof(var202), "var202");
int var203;
klee_make_symbolic(&var203, sizeof(var203), "var203");
int var204;
klee_make_symbolic(&var204, sizeof(var204), "var204");
int var205;
klee_make_symbolic(&var205, sizeof(var205), "var205");
int var206;
klee_make_symbolic(&var206, sizeof(var206), "var206");
int var207;
klee_make_symbolic(&var207, sizeof(var207), "var207");
int var208;
klee_make_symbolic(&var208, sizeof(var208), "var208");
int var209;
klee_make_symbolic(&var209, sizeof(var209), "var209");
int var210;
klee_make_symbolic(&var210, sizeof(var210), "var210");
int var211;
klee_make_symbolic(&var211, sizeof(var211), "var211");
int var212;
klee_make_symbolic(&var212, sizeof(var212), "var212");
int var213;
klee_make_symbolic(&var213, sizeof(var213), "var213");
int var214;
klee_make_symbolic(&var214, sizeof(var214), "var214");
int var215;
klee_make_symbolic(&var215, sizeof(var215), "var215");
int var216;
klee_make_symbolic(&var216, sizeof(var216), "var216");
int var217;
klee_make_symbolic(&var217, sizeof(var217), "var217");
int var218;
klee_make_symbolic(&var218, sizeof(var218), "var218");
int var219;
klee_make_symbolic(&var219, sizeof(var219), "var219");
int var220;
klee_make_symbolic(&var220, sizeof(var220), "var220");
int var221;
klee_make_symbolic(&var221, sizeof(var221), "var221");
int var222;
klee_make_symbolic(&var222, sizeof(var222), "var222");
int var223;
klee_make_symbolic(&var223, sizeof(var223), "var223");
int var224;
klee_make_symbolic(&var224, sizeof(var224), "var224");
int var225;
klee_make_symbolic(&var225, sizeof(var225), "var225");
int var226;
klee_make_symbolic(&var226, sizeof(var226), "var226");
int var227;
klee_make_symbolic(&var227, sizeof(var227), "var227");
int var228;
klee_make_symbolic(&var228, sizeof(var228), "var228");
int var229;
klee_make_symbolic(&var229, sizeof(var229), "var229");
int var230;
klee_make_symbolic(&var230, sizeof(var230), "var230");
int var231;
klee_make_symbolic(&var231, sizeof(var231), "var231");
int var232;
klee_make_symbolic(&var232, sizeof(var232), "var232");
int var233;
klee_make_symbolic(&var233, sizeof(var233), "var233");
int var234;
klee_make_symbolic(&var234, sizeof(var234), "var234");
int var235;
klee_make_symbolic(&var235, sizeof(var235), "var235");
int var236;
klee_make_symbolic(&var236, sizeof(var236), "var236");
int var237;
klee_make_symbolic(&var237, sizeof(var237), "var237");
int var238;
klee_make_symbolic(&var238, sizeof(var238), "var238");
int var239;
klee_make_symbolic(&var239, sizeof(var239), "var239");
int var240;
klee_make_symbolic(&var240, sizeof(var240), "var240");
int var241;
klee_make_symbolic(&var241, sizeof(var241), "var241");
int var242;
klee_make_symbolic(&var242, sizeof(var242), "var242");
int var243;
klee_make_symbolic(&var243, sizeof(var243), "var243");
int var244;
klee_make_symbolic(&var244, sizeof(var244), "var244");
int var245;
klee_make_symbolic(&var245, sizeof(var245), "var245");
int var246;
klee_make_symbolic(&var246, sizeof(var246), "var246");
int var247;
klee_make_symbolic(&var247, sizeof(var247), "var247");
int var248;
klee_make_symbolic(&var248, sizeof(var248), "var248");
int var249;
klee_make_symbolic(&var249, sizeof(var249), "var249");
int var250;
klee_make_symbolic(&var250, sizeof(var250), "var250");
int var251;
klee_make_symbolic(&var251, sizeof(var251), "var251");
int var252;
klee_make_symbolic(&var252, sizeof(var252), "var252");
int var253;
klee_make_symbolic(&var253, sizeof(var253), "var253");
int var254;
klee_make_symbolic(&var254, sizeof(var254), "var254");
int var255;
klee_make_symbolic(&var255, sizeof(var255), "var255");
int var256;
klee_make_symbolic(&var256, sizeof(var256), "var256");
int var257;
klee_make_symbolic(&var257, sizeof(var257), "var257");
int var258;
klee_make_symbolic(&var258, sizeof(var258), "var258");
int var259;
klee_make_symbolic(&var259, sizeof(var259), "var259");
int var260;
klee_make_symbolic(&var260, sizeof(var260), "var260");
int var261;
klee_make_symbolic(&var261, sizeof(var261), "var261");
int var262;
klee_make_symbolic(&var262, sizeof(var262), "var262");
int var263;
klee_make_symbolic(&var263, sizeof(var263), "var263");
int var264;
klee_make_symbolic(&var264, sizeof(var264), "var264");
int var265;
klee_make_symbolic(&var265, sizeof(var265), "var265");
int var266;
klee_make_symbolic(&var266, sizeof(var266), "var266");
int var267;
klee_make_symbolic(&var267, sizeof(var267), "var267");
int var268;
klee_make_symbolic(&var268, sizeof(var268), "var268");
int var269;
klee_make_symbolic(&var269, sizeof(var269), "var269");
int var270;
klee_make_symbolic(&var270, sizeof(var270), "var270");
int var271;
klee_make_symbolic(&var271, sizeof(var271), "var271");
int var272;
klee_make_symbolic(&var272, sizeof(var272), "var272");
int var273;
klee_make_symbolic(&var273, sizeof(var273), "var273");
int var274;
klee_make_symbolic(&var274, sizeof(var274), "var274");
int var275;
klee_make_symbolic(&var275, sizeof(var275), "var275");
int var276;
klee_make_symbolic(&var276, sizeof(var276), "var276");
int var277;
klee_make_symbolic(&var277, sizeof(var277), "var277");
int var278;
klee_make_symbolic(&var278, sizeof(var278), "var278");
int var279;
klee_make_symbolic(&var279, sizeof(var279), "var279");
int var280;
klee_make_symbolic(&var280, sizeof(var280), "var280");
int var281;
klee_make_symbolic(&var281, sizeof(var281), "var281");
int var282;
klee_make_symbolic(&var282, sizeof(var282), "var282");
int var283;
klee_make_symbolic(&var283, sizeof(var283), "var283");
int var284;
klee_make_symbolic(&var284, sizeof(var284), "var284");
int myvar0 = 1;
if((( 1)) & (((var0 >= 0 & var0 <= 1 &  1) & (var1 >= 0 & var1 <= 1 &  1) & (var2 >= 0 & var2 <= 1 &  1) & (var3 >= 0 & var3 <= 1 &  1) & (var4 >= 0 & var4 <= 1 &  1) & (var5 >= 0 & var5 <= 1 &  1) & (var6 >= 0 & var6 <= 1 &  1) & (var7 >= 0 & var7 <= 1 &  1) & (var8 >= 0 & var8 <= 1 &  1) & (var9 >= 0 & var9 <= 1 &  1) & (var10 >= 0 & var10 <= 1 &  1) & (var11 >= 0 & var11 <= 1 &  1) & (var12 >= 0 & var12 <= 1 &  1) & (var13 >= 0 & var13 <= 1 &  1) & (var14 >= 0 & var14 <= 1 &  1) & (var15 >= 0 & var15 <= 1 &  1) & (var16 >= 0 & var16 <= 1 &  1) & (var17 >= 0 & var17 <= 1 &  1) & (var18 >= 0 & var18 <= 1 &  1) & (var19 >= 0 & var19 <= 1 &  1) & (var20 >= 0 & var20 <= 1 &  1) & (var21 >= 0 & var21 <= 1 &  1) & (var22 >= 0 & var22 <= 1 &  1) & (var23 >= 0 & var23 <= 1 &  1) & (var24 >= 0 & var24 <= 1 &  1) & (var25 >= 0 & var25 <= 1 &  1) & (var26 >= 0 & var26 <= 1 &  1) & (var27 >= 0 & var27 <= 1 &  1) & (var28 >= 0 & var28 <= 1 &  1) & (var29 >= 0 & var29 <= 1 &  1) & (var30 >= 0 & var30 <= 1 &  1) & (var31 >= 0 & var31 <= 1 &  1) & (var32 >= 0 & var32 <= 1 &  1) & (var33 >= 0 & var33 <= 1 &  1) & (var34 >= 0 & var34 <= 1 &  1) & (var35 >= 0 & var35 <= 1 &  1) & (var36 >= 0 & var36 <= 1 &  1) & (var37 >= 0 & var37 <= 1 &  1) & (var38 >= 0 & var38 <= 1 &  1) & (var39 >= 0 & var39 <= 1 &  1) & (var40 >= 0 & var40 <= 1 &  1) & (var41 >= 0 & var41 <= 1 &  1) & (var42 >= 0 & var42 <= 1 &  1) & (var43 >= 0 & var43 <= 1 &  1) & (var44 >= 0 & var44 <= 1 &  1) & (var45 >= 0 & var45 <= 1 &  1) & (var46 >= 0 & var46 <= 1 &  1) & (var47 >= 0 & var47 <= 1 &  1) & (var48 >= 0 & var48 <= 1 &  1) & (var49 >= 0 & var49 <= 1 &  1) & (var50 >= 0 & var50 <= 1 &  1) & (var51 >= 0 & var51 <= 1 &  1) & (var52 >= 0 & var52 <= 1 &  1) & (var53 >= 0 & var53 <= 1 &  1) & (var54 >= 0 & var54 <= 1 &  1) & (var55 >= 0 & var55 <= 1 &  1) & (var56 >= 0 & var56 <= 1 &  1) & (var57 >= 0 & var57 <= 1 &  1) & (var58 >= 0 & var58 <= 1 &  1) & (var59 >= 0 & var59 <= 1 &  1) & (var60 >= 0 & var60 <= 1 &  1) & (var61 >= 0 & var61 <= 1 &  1) & (var62 >= 0 & var62 <= 1 &  1) & (var63 >= 0 & var63 <= 1 &  1) & (var64 >= 0 & var64 <= 1 &  1) & (var65 >= 0 & var65 <= 1 &  1) & (var66 >= 0 & var66 <= 1 &  1) & (var67 >= 0 & var67 <= 1 &  1) & (var68 >= 0 & var68 <= 1 &  1) & (var69 >= 0 & var69 <= 1 &  1) & (var70 >= 0 & var70 <= 1 &  1) & (var71 >= 0 & var71 <= 1 &  1) & (var72 >= 0 & var72 <= 1 &  1) & (var73 >= 0 & var73 <= 1 &  1) & (var74 >= 0 & var74 <= 1 &  1) & (var75 >= 0 & var75 <= 1 &  1) & (var76 >= 0 & var76 <= 1 &  1) & (var77 >= 0 & var77 <= 1 &  1) & (var78 >= 0 & var78 <= 1 &  1) & (var79 >= 0 & var79 <= 1 &  1) & (var80 >= 0 & var80 <= 1 &  1) & (var81 >= 0 & var81 <= 1 &  1) & (var82 >= 0 & var82 <= 1 &  1) & (var83 >= 0 & var83 <= 1 &  1) & (var84 >= 0 & var84 <= 1 &  1) & (var85 >= 0 & var85 <= 1 &  1) & (var86 >= 0 & var86 <= 1 &  1) & (var87 >= 0 & var87 <= 1 &  1) & (var88 >= 0 & var88 <= 1 &  1) & (var89 >= 0 & var89 <= 1 &  1) & (var90 >= 0 & var90 <= 1 &  1) & (var91 >= 0 & var91 <= 1 &  1) & (var92 >= 0 & var92 <= 1 &  1) & (var93 >= 0 & var93 <= 1 &  1) & (var94 >= 0 & var94 <= 1 &  1) & (var95 >= 0 & var95 <= 1 &  1) & (var96 >= 0 & var96 <= 1 &  1) & (var97 >= 0 & var97 <= 1 &  1) & (var98 >= 0 & var98 <= 1 &  1) & (var99 >= 0 & var99 <= 1 &  1) & (var100 >= 0 & var100 <= 1 &  1) & (var101 >= 0 & var101 <= 1 &  1) & (var102 >= 0 & var102 <= 1 &  1) & (var103 >= 0 & var103 <= 1 &  1) & (var104 >= 0 & var104 <= 1 &  1) & (var105 >= 0 & var105 <= 1 &  1) & (var106 >= 0 & var106 <= 1 &  1) & (var107 >= 0 & var107 <= 1 &  1) & (var108 >= 0 & var108 <= 1 &  1) & (var109 >= 0 & var109 <= 1 &  1) & (var110 >= 0 & var110 <= 1 &  1) & (var111 >= 0 & var111 <= 1 &  1) & (var112 >= 0 & var112 <= 1 &  1) & (var113 >= 0 & var113 <= 1 &  1) & (var114 >= 0 & var114 <= 1 &  1) & (var115 >= 0 & var115 <= 1 &  1) & (var116 >= 0 & var116 <= 1 &  1) & (var117 >= 0 & var117 <= 1 &  1) & (var118 >= 0 & var118 <= 1 &  1) & (var119 >= 0 & var119 <= 1 &  1) & (var120 >= 0 & var120 <= 1 &  1) & (var121 >= 0 & var121 <= 1 &  1) & (var122 >= 0 & var122 <= 1 &  1) & (var123 >= 0 & var123 <= 1 &  1) & (var124 >= 0 & var124 <= 1 &  1) & (var125 >= 0 & var125 <= 1 &  1) & (var126 >= 0 & var126 <= 1 &  1) & (var127 >= 0 & var127 <= 1 &  1) & (var128 >= 0 & var128 <= 1 &  1) & (var129 >= 0 & var129 <= 1 &  1) & (var130 >= 0 & var130 <= 1 &  1) & (var131 >= 0 & var131 <= 1 &  1) & (var132 >= 0 & var132 <= 1 &  1) & (var133 >= 0 & var133 <= 1 &  1) & (var134 >= 0 & var134 <= 1 &  1) & (var135 >= 0 & var135 <= 1 &  1) & (var136 >= 0 & var136 <= 1 &  1) & (var137 >= 0 & var137 <= 1 &  1) & (var138 >= 0 & var138 <= 1 &  1) & (var139 >= 0 & var139 <= 1 &  1) & (var140 >= 0 & var140 <= 1 &  1) & (var141 >= 0 & var141 <= 1 &  1) & (var142 >= 0 & var142 <= 1 &  1) & (var143 >= 0 & var143 <= 1 &  1) & (var144 >= 0 & var144 <= 1 &  1) & (var145 >= 0 & var145 <= 1 &  1) & (var146 >= 0 & var146 <= 1 &  1) & (var147 >= 0 & var147 <= 1 &  1) & (var148 >= 0 & var148 <= 1 &  1) & (var149 >= 0 & var149 <= 1 &  1) & (var150 >= 0 & var150 <= 1 &  1) & (var151 >= 0 & var151 <= 1 &  1) & (var152 >= 0 & var152 <= 1 &  1) & (var153 >= 0 & var153 <= 1 &  1) & (var154 >= 0 & var154 <= 1 &  1) & (var155 >= 0 & var155 <= 1 &  1) & (var156 >= 0 & var156 <= 1 &  1) & (var157 >= 0 & var157 <= 1 &  1) & (var158 >= 0 & var158 <= 1 &  1) & (var159 >= 0 & var159 <= 1 &  1) & (var160 >= 0 & var160 <= 1 &  1) & (var161 >= 0 & var161 <= 1 &  1) & (var162 >= 0 & var162 <= 1 &  1) & (var163 >= 0 & var163 <= 1 &  1) & (var164 >= 0 & var164 <= 1 &  1) & (var165 >= 0 & var165 <= 1 &  1) & (var166 >= 0 & var166 <= 1 &  1) & (var167 >= 0 & var167 <= 1 &  1) & (var168 >= 0 & var168 <= 1 &  1) & (var169 >= 0 & var169 <= 1 &  1) & (var170 >= 0 & var170 <= 1 &  1) & (var171 >= 0 & var171 <= 1 &  1) & (var172 >= 0 & var172 <= 1 &  1) & (var173 >= 0 & var173 <= 1 &  1) & (var174 >= 0 & var174 <= 1 &  1) & (var175 >= 0 & var175 <= 1 &  1) & (var176 >= 0 & var176 <= 1 &  1) & (var177 >= 0 & var177 <= 1 &  1) & (var178 >= 0 & var178 <= 1 &  1) & (var179 >= 0 & var179 <= 1 &  1) & (var180 >= 0 & var180 <= 1 &  1) & (var181 >= 0 & var181 <= 1 &  1) & (var182 >= 0 & var182 <= 1 &  1) & (var183 >= 0 & var183 <= 1 &  1) & (var184 >= 0 & var184 <= 1 &  1) & (var185 >= 0 & var185 <= 1 &  1) & (var186 >= 0 & var186 <= 1 &  1) & (var187 >= 0 & var187 <= 1 &  1) & (var188 >= 0 & var188 <= 1 &  1) & (var189 >= 0 & var189 <= 1 &  1) & (var190 >= 0 & var190 <= 1 &  1) & (var191 >= 0 & var191 <= 1 &  1) & (var192 >= 0 & var192 <= 1 &  1) & (var193 >= 0 & var193 <= 1 &  1) & (var194 >= 0 & var194 <= 1 &  1) & (var195 >= 0 & var195 <= 1 &  1) & (var196 >= 0 & var196 <= 1 &  1) & (var197 >= 0 & var197 <= 1 &  1) & (var198 >= 0 & var198 <= 1 &  1) & (var199 >= 0 & var199 <= 1 &  1) & (var200 >= 0 & var200 <= 1 &  1) & (var201 >= 0 & var201 <= 1 &  1) & (var202 >= 0 & var202 <= 1 &  1) & (var203 >= 0 & var203 <= 1 &  1) & (var204 >= 0 & var204 <= 1 &  1) & (var205 >= 0 & var205 <= 1 &  1) & (var206 >= 0 & var206 <= 1 &  1) & (var207 >= 0 & var207 <= 1 &  1) & (var208 >= 0 & var208 <= 1 &  1) & (var209 >= 0 & var209 <= 1 &  1) & (var210 >= 0 & var210 <= 1 &  1) & (var211 >= 0 & var211 <= 1 &  1) & (var212 >= 0 & var212 <= 1 &  1) & (var213 >= 0 & var213 <= 1 &  1) & (var214 >= 0 & var214 <= 1 &  1) & (var215 >= 0 & var215 <= 1 &  1) & (var216 >= 0 & var216 <= 1 &  1) & (var217 >= 0 & var217 <= 1 &  1) & (var218 >= 0 & var218 <= 1 &  1) & (var219 >= 0 & var219 <= 1 &  1) & (var220 >= 0 & var220 <= 1 &  1) & (var221 >= 0 & var221 <= 1 &  1) & (var222 >= 0 & var222 <= 1 &  1) & (var223 >= 0 & var223 <= 1 &  1) & (var224 >= 0 & var224 <= 1 &  1) & (var225 >= 0 & var225 <= 1 &  1) & (var226 >= 0 & var226 <= 1 &  1) & (var227 >= 0 & var227 <= 1 &  1) & (var228 >= 0 & var228 <= 1 &  1) & (var229 >= 0 & var229 <= 1 &  1) & (var230 >= 0 & var230 <= 1 &  1) & (var231 >= 0 & var231 <= 1 &  1) & (var232 >= 0 & var232 <= 1 &  1) & (var233 >= 0 & var233 <= 1 &  1) & (var234 >= 0 & var234 <= 1 &  1) & (var235 >= 0 & var235 <= 1 &  1) & (var236 >= 0 & var236 <= 1 &  1) & (var237 >= 0 & var237 <= 1 &  1) & (var238 >= 0 & var238 <= 1 &  1) & (var239 >= 0 & var239 <= 1 &  1) & (var240 >= 0 & var240 <= 1 &  1) & (var241 >= 0 & var241 <= 1 &  1) & (var242 >= 0 & var242 <= 1 &  1) & (var243 >= 0 & var243 <= 1 &  1) & (var244 >= 0 & var244 <= 1 &  1) & (var245 >= 0 & var245 <= 1 &  1) & (var246 >= 0 & var246 <= 1 &  1) & (var247 >= 0 & var247 <= 1 &  1) & (var248 >= 0 & var248 <= 1 &  1) & (var249 >= 0 & var249 <= 1 &  1) & (var250 >= 0 & var250 <= 1 &  1) & (var251 >= 0 & var251 <= 1 &  1) & (var252 >= 0 & var252 <= 1 &  1) & (var253 >= 0 & var253 <= 1 &  1) & (var254 >= 0 & var254 <= 1 &  1) & (var255 >= 0 & var255 <= 1 &  1) & (var256 >= 0 & var256 <= 1 &  1) & (var257 >= 0 & var257 <= 1 &  1) & (var258 >= 0 & var258 <= 1 &  1) & (var259 >= 0 & var259 <= 1 &  1) & (var260 >= 0 & var260 <= 1 &  1) & (var261 >= 0 & var261 <= 1 &  1) & (var262 >= 0 & var262 <= 1 &  1) & (var263 >= 0 & var263 <= 1 &  1) & (var264 >= 0 & var264 <= 1 &  1) & (var265 >= 0 & var265 <= 1 &  1) & (var266 >= 0 & var266 <= 1 &  1) & (var267 >= 0 & var267 <= 1 &  1) & (var268 >= 0 & var268 <= 1 &  1) & (var269 >= 0 & var269 <= 1 &  1) & (var270 >= 0 & var270 <= 1 &  1) & (var271 >= 0 & var271 <= 1 &  1) & (var272 >= 0 & var272 <= 1 &  1) & (var273 >= 0 & var273 <= 1 &  1) & (var274 >= 0 & var274 <= 1 &  1) & (var275 >= 0 & var275 <= 1 &  1) & (var276 >= 0 & var276 <= 1 &  1) & (var277 >= 0 & var277 <= 1 &  1) & (var278 >= 0 & var278 <= 1 &  1) & (var279 >= 0 & var279 <= 1 &  1) & (var280 >= 0 & var280 <= 1 &  1) & (var281 >= 0 & var281 <= 1 &  1) & (var282 >= 0 & var282 <= 1 &  1) & (var283 >= 0 & var283 <= 1 &  1) & (var284 >= 0 & var284 <= 1 &  1) &  1)) & (( var188 == 0 & var189 == 0 & var0 == 1 ) | ( var188 == 0 & var189 == 1 & var0 == 0 ) | ( var188 == 1 & var189 == 0 & var0 == 0 ) | ( var188 == 1 & var189 == 1 & var0 == 1 ) |  0)  & (( var0 == 0 & var190 == 0 & var1 == 1 ) | ( var0 == 0 & var190 == 1 & var1 == 0 ) | ( var0 == 1 & var190 == 0 & var1 == 0 ) | ( var0 == 1 & var190 == 1 & var1 == 1 ) | ( var1 == 0 & var191 == 0 & var2 == 1 ) | ( var1 == 0 & var191 == 1 & var2 == 0 ) | ( var1 == 1 & var191 == 0 & var2 == 0 ) | ( var1 == 1 & var191 == 1 & var2 == 1 ) | ( var2 == 0 & var192 == 0 & var3 == 1 ) | ( var2 == 0 & var192 == 1 & var3 == 0 ) | ( var2 == 1 & var192 == 0 & var3 == 0 ) | ( var2 == 1 & var192 == 1 & var3 == 1 ) | ( var3 == 0 & var193 == 0 & var4 == 1 ) | ( var3 == 0 & var193 == 1 & var4 == 0 ) | ( var3 == 1 & var193 == 0 & var4 == 0 ) | ( var3 == 1 & var193 == 1 & var4 == 1 ) | ( var4 == 0 & var194 == 0 & var5 == 1 ) | ( var4 == 0 & var194 == 1 & var5 == 0 ) | ( var4 == 1 & var194 == 0 & var5 == 0 ) | ( var4 == 1 & var194 == 1 & var5 == 1 ) | ( var5 == 0 & var195 == 0 & var6 == 1 ) | ( var5 == 0 & var195 == 1 & var6 == 0 ) | ( var5 == 1 & var195 == 0 & var6 == 0 ) | ( var5 == 1 & var195 == 1 & var6 == 1 ) | ( var6 == 0 & var196 == 0 & var7 == 1 ) | ( var6 == 0 & var196 == 1 & var7 == 0 ) | ( var6 == 1 & var196 == 0 & var7 == 0 ) | ( var6 == 1 & var196 == 1 & var7 == 1 ) | ( var7 == 0 & var197 == 0 & var8 == 1 ) | ( var7 == 0 & var197 == 1 & var8 == 0 ) | ( var7 == 1 & var197 == 0 & var8 == 0 ) | ( var7 == 1 & var197 == 1 & var8 == 1 ) | ( var8 == 0 & var198 == 0 & var9 == 1 ) | ( var8 == 0 & var198 == 1 & var9 == 0 ) | ( var8 == 1 & var198 == 0 & var9 == 0 ) | ( var8 == 1 & var198 == 1 & var9 == 1 ) | ( var9 == 0 & var199 == 0 & var10 == 1 ) | ( var9 == 0 & var199 == 1 & var10 == 0 ) | ( var9 == 1 & var199 == 0 & var10 == 0 ) | ( var9 == 1 & var199 == 1 & var10 == 1 ) | ( var10 == 0 & var200 == 0 & var11 == 1 ) | ( var10 == 0 & var200 == 1 & var11 == 0 ) | ( var10 == 1 & var200 == 0 & var11 == 0 ) | ( var10 == 1 & var200 == 1 & var11 == 1 ) | ( var11 == 0 & var201 == 0 & var12 == 1 ) | ( var11 == 0 & var201 == 1 & var12 == 0 ) | ( var11 == 1 & var201 == 0 & var12 == 0 ) | ( var11 == 1 & var201 == 1 & var12 == 1 ) | ( var12 == 0 & var202 == 0 & var13 == 1 ) | ( var12 == 0 & var202 == 1 & var13 == 0 ) | ( var12 == 1 & var202 == 0 & var13 == 0 ) | ( var12 == 1 & var202 == 1 & var13 == 1 ) | ( var13 == 0 & var203 == 0 & var14 == 1 ) | ( var13 == 0 & var203 == 1 & var14 == 0 ) | ( var13 == 1 & var203 == 0 & var14 == 0 ) | ( var13 == 1 & var203 == 1 & var14 == 1 ) | ( var14 == 0 & var204 == 0 & var15 == 1 ) | ( var14 == 0 & var204 == 1 & var15 == 0 ) | ( var14 == 1 & var204 == 0 & var15 == 0 ) | ( var14 == 1 & var204 == 1 & var15 == 1 ) | ( var15 == 0 & var205 == 0 & var16 == 1 ) | ( var15 == 0 & var205 == 1 & var16 == 0 ) | ( var15 == 1 & var205 == 0 & var16 == 0 ) | ( var15 == 1 & var205 == 1 & var16 == 1 ) | ( var16 == 0 & var206 == 0 & var17 == 1 ) | ( var16 == 0 & var206 == 1 & var17 == 0 ) | ( var16 == 1 & var206 == 0 & var17 == 0 ) | ( var16 == 1 & var206 == 1 & var17 == 1 ) | ( var17 == 0 & var207 == 0 & var18 == 1 ) | ( var17 == 0 & var207 == 1 & var18 == 0 ) | ( var17 == 1 & var207 == 0 & var18 == 0 ) | ( var17 == 1 & var207 == 1 & var18 == 1 ) | ( var18 == 0 & var208 == 0 & var19 == 1 ) | ( var18 == 0 & var208 == 1 & var19 == 0 ) | ( var18 == 1 & var208 == 0 & var19 == 0 ) | ( var18 == 1 & var208 == 1 & var19 == 1 ) | ( var19 == 0 & var209 == 0 & var20 == 1 ) | ( var19 == 0 & var209 == 1 & var20 == 0 ) | ( var19 == 1 & var209 == 0 & var20 == 0 ) | ( var19 == 1 & var209 == 1 & var20 == 1 ) | ( var20 == 0 & var210 == 0 & var21 == 1 ) | ( var20 == 0 & var210 == 1 & var21 == 0 ) | ( var20 == 1 & var210 == 0 & var21 == 0 ) | ( var20 == 1 & var210 == 1 & var21 == 1 ) | ( var21 == 0 & var211 == 0 & var22 == 1 ) | ( var21 == 0 & var211 == 1 & var22 == 0 ) | ( var21 == 1 & var211 == 0 & var22 == 0 ) | ( var21 == 1 & var211 == 1 & var22 == 1 ) | ( var22 == 0 & var212 == 0 & var23 == 1 ) | ( var22 == 0 & var212 == 1 & var23 == 0 ) | ( var22 == 1 & var212 == 0 & var23 == 0 ) | ( var22 == 1 & var212 == 1 & var23 == 1 ) | ( var23 == 0 & var213 == 0 & var24 == 1 ) | ( var23 == 0 & var213 == 1 & var24 == 0 ) | ( var23 == 1 & var213 == 0 & var24 == 0 ) | ( var23 == 1 & var213 == 1 & var24 == 1 ) | ( var24 == 0 & var214 == 0 & var25 == 1 ) | ( var24 == 0 & var214 == 1 & var25 == 0 ) | ( var24 == 1 & var214 == 0 & var25 == 0 ) | ( var24 == 1 & var214 == 1 & var25 == 1 ) | ( var25 == 0 & var215 == 0 & var26 == 1 ) | ( var25 == 0 & var215 == 1 & var26 == 0 ) | ( var25 == 1 & var215 == 0 & var26 == 0 ) | ( var25 == 1 & var215 == 1 & var26 == 1 ) | ( var26 == 0 & var216 == 0 & var27 == 1 ) | ( var26 == 0 & var216 == 1 & var27 == 0 ) | ( var26 == 1 & var216 == 0 & var27 == 0 ) | ( var26 == 1 & var216 == 1 & var27 == 1 ) | ( var27 == 0 & var217 == 0 & var28 == 1 ) | ( var27 == 0 & var217 == 1 & var28 == 0 ) | ( var27 == 1 & var217 == 0 & var28 == 0 ) | ( var27 == 1 & var217 == 1 & var28 == 1 ) | ( var28 == 0 & var218 == 0 & var29 == 1 ) | ( var28 == 0 & var218 == 1 & var29 == 0 ) | ( var28 == 1 & var218 == 0 & var29 == 0 ) | ( var28 == 1 & var218 == 1 & var29 == 1 ) | ( var29 == 0 & var219 == 0 & var30 == 1 ) | ( var29 == 0 & var219 == 1 & var30 == 0 ) | ( var29 == 1 & var219 == 0 & var30 == 0 ) | ( var29 == 1 & var219 == 1 & var30 == 1 ) | ( var30 == 0 & var220 == 0 & var31 == 1 ) | ( var30 == 0 & var220 == 1 & var31 == 0 ) | ( var30 == 1 & var220 == 0 & var31 == 0 ) | ( var30 == 1 & var220 == 1 & var31 == 1 ) | ( var31 == 0 & var221 == 0 & var32 == 1 ) | ( var31 == 0 & var221 == 1 & var32 == 0 ) | ( var31 == 1 & var221 == 0 & var32 == 0 ) | ( var31 == 1 & var221 == 1 & var32 == 1 ) | ( var32 == 0 & var222 == 0 & var33 == 1 ) | ( var32 == 0 & var222 == 1 & var33 == 0 ) | ( var32 == 1 & var222 == 0 & var33 == 0 ) | ( var32 == 1 & var222 == 1 & var33 == 1 ) | ( var33 == 0 & var223 == 0 & var34 == 1 ) | ( var33 == 0 & var223 == 1 & var34 == 0 ) | ( var33 == 1 & var223 == 0 & var34 == 0 ) | ( var33 == 1 & var223 == 1 & var34 == 1 ) | ( var34 == 0 & var224 == 0 & var35 == 1 ) | ( var34 == 0 & var224 == 1 & var35 == 0 ) | ( var34 == 1 & var224 == 0 & var35 == 0 ) | ( var34 == 1 & var224 == 1 & var35 == 1 ) | ( var35 == 0 & var225 == 0 & var36 == 1 ) | ( var35 == 0 & var225 == 1 & var36 == 0 ) | ( var35 == 1 & var225 == 0 & var36 == 0 ) | ( var35 == 1 & var225 == 1 & var36 == 1 ) | ( var36 == 0 & var226 == 0 & var37 == 1 ) | ( var36 == 0 & var226 == 1 & var37 == 0 ) | ( var36 == 1 & var226 == 0 & var37 == 0 ) | ( var36 == 1 & var226 == 1 & var37 == 1 ) | ( var37 == 0 & var227 == 0 & var38 == 1 ) | ( var37 == 0 & var227 == 1 & var38 == 0 ) | ( var37 == 1 & var227 == 0 & var38 == 0 ) | ( var37 == 1 & var227 == 1 & var38 == 1 ) | ( var38 == 0 & var228 == 0 & var39 == 1 ) | ( var38 == 0 & var228 == 1 & var39 == 0 ) | ( var38 == 1 & var228 == 0 & var39 == 0 ) | ( var38 == 1 & var228 == 1 & var39 == 1 ) | ( var39 == 0 & var229 == 0 & var40 == 1 ) | ( var39 == 0 & var229 == 1 & var40 == 0 ) | ( var39 == 1 & var229 == 0 & var40 == 0 ) | ( var39 == 1 & var229 == 1 & var40 == 1 ) | ( var40 == 0 & var230 == 0 & var41 == 1 ) | ( var40 == 0 & var230 == 1 & var41 == 0 ) | ( var40 == 1 & var230 == 0 & var41 == 0 ) | ( var40 == 1 & var230 == 1 & var41 == 1 ) | ( var41 == 0 & var231 == 0 & var42 == 1 ) | ( var41 == 0 & var231 == 1 & var42 == 0 ) | ( var41 == 1 & var231 == 0 & var42 == 0 ) | ( var41 == 1 & var231 == 1 & var42 == 1 ) | ( var42 == 0 & var232 == 0 & var43 == 1 ) | ( var42 == 0 & var232 == 1 & var43 == 0 ) | ( var42 == 1 & var232 == 0 & var43 == 0 ) | ( var42 == 1 & var232 == 1 & var43 == 1 ) | ( var43 == 0 & var233 == 0 & var44 == 1 ) | ( var43 == 0 & var233 == 1 & var44 == 0 ) | ( var43 == 1 & var233 == 0 & var44 == 0 ) | ( var43 == 1 & var233 == 1 & var44 == 1 ) | ( var44 == 0 & var234 == 0 & var45 == 1 ) | ( var44 == 0 & var234 == 1 & var45 == 0 ) | ( var44 == 1 & var234 == 0 & var45 == 0 ) | ( var44 == 1 & var234 == 1 & var45 == 1 ) | ( var45 == 0 & var235 == 0 & var46 == 1 ) | ( var45 == 0 & var235 == 1 & var46 == 0 ) | ( var45 == 1 & var235 == 0 & var46 == 0 ) | ( var45 == 1 & var235 == 1 & var46 == 1 ) | ( var46 == 0 & var236 == 0 & var47 == 1 ) | ( var46 == 0 & var236 == 1 & var47 == 0 ) | ( var46 == 1 & var236 == 0 & var47 == 0 ) | ( var46 == 1 & var236 == 1 & var47 == 1 ) | ( var47 == 0 & var237 == 0 & var48 == 1 ) | ( var47 == 0 & var237 == 1 & var48 == 0 ) | ( var47 == 1 & var237 == 0 & var48 == 0 ) | ( var47 == 1 & var237 == 1 & var48 == 1 ) | ( var48 == 0 & var238 == 0 & var49 == 1 ) | ( var48 == 0 & var238 == 1 & var49 == 0 ) | ( var48 == 1 & var238 == 0 & var49 == 0 ) | ( var48 == 1 & var238 == 1 & var49 == 1 ) | ( var49 == 0 & var239 == 0 & var50 == 1 ) | ( var49 == 0 & var239 == 1 & var50 == 0 ) | ( var49 == 1 & var239 == 0 & var50 == 0 ) | ( var49 == 1 & var239 == 1 & var50 == 1 ) | ( var50 == 0 & var240 == 0 & var51 == 1 ) | ( var50 == 0 & var240 == 1 & var51 == 0 ) | ( var50 == 1 & var240 == 0 & var51 == 0 ) | ( var50 == 1 & var240 == 1 & var51 == 1 ) | ( var51 == 0 & var241 == 0 & var52 == 1 ) | ( var51 == 0 & var241 == 1 & var52 == 0 ) | ( var51 == 1 & var241 == 0 & var52 == 0 ) | ( var51 == 1 & var241 == 1 & var52 == 1 ) | ( var52 == 0 & var242 == 0 & var53 == 1 ) | ( var52 == 0 & var242 == 1 & var53 == 0 ) | ( var52 == 1 & var242 == 0 & var53 == 0 ) | ( var52 == 1 & var242 == 1 & var53 == 1 ) | ( var53 == 0 & var243 == 0 & var54 == 1 ) | ( var53 == 0 & var243 == 1 & var54 == 0 ) | ( var53 == 1 & var243 == 0 & var54 == 0 ) | ( var53 == 1 & var243 == 1 & var54 == 1 ) | ( var54 == 0 & var244 == 0 & var55 == 1 ) | ( var54 == 0 & var244 == 1 & var55 == 0 ) | ( var54 == 1 & var244 == 0 & var55 == 0 ) | ( var54 == 1 & var244 == 1 & var55 == 1 ) | ( var55 == 0 & var245 == 0 & var56 == 1 ) | ( var55 == 0 & var245 == 1 & var56 == 0 ) | ( var55 == 1 & var245 == 0 & var56 == 0 ) | ( var55 == 1 & var245 == 1 & var56 == 1 ) | ( var56 == 0 & var246 == 0 & var57 == 1 ) | ( var56 == 0 & var246 == 1 & var57 == 0 ) | ( var56 == 1 & var246 == 0 & var57 == 0 ) | ( var56 == 1 & var246 == 1 & var57 == 1 ) | ( var57 == 0 & var247 == 0 & var58 == 1 ) | ( var57 == 0 & var247 == 1 & var58 == 0 ) | ( var57 == 1 & var247 == 0 & var58 == 0 ) | ( var57 == 1 & var247 == 1 & var58 == 1 ) | ( var58 == 0 & var248 == 0 & var59 == 1 ) | ( var58 == 0 & var248 == 1 & var59 == 0 ) | ( var58 == 1 & var248 == 0 & var59 == 0 ) | ( var58 == 1 & var248 == 1 & var59 == 1 ) | ( var59 == 0 & var249 == 0 & var60 == 1 ) | ( var59 == 0 & var249 == 1 & var60 == 0 ) | ( var59 == 1 & var249 == 0 & var60 == 0 ) | ( var59 == 1 & var249 == 1 & var60 == 1 ) | ( var60 == 0 & var250 == 0 & var61 == 1 ) | ( var60 == 0 & var250 == 1 & var61 == 0 ) | ( var60 == 1 & var250 == 0 & var61 == 0 ) | ( var60 == 1 & var250 == 1 & var61 == 1 ) | ( var61 == 0 & var251 == 0 & var62 == 1 ) | ( var61 == 0 & var251 == 1 & var62 == 0 ) | ( var61 == 1 & var251 == 0 & var62 == 0 ) | ( var61 == 1 & var251 == 1 & var62 == 1 ) | ( var62 == 0 & var252 == 0 & var63 == 1 ) | ( var62 == 0 & var252 == 1 & var63 == 0 ) | ( var62 == 1 & var252 == 0 & var63 == 0 ) | ( var62 == 1 & var252 == 1 & var63 == 1 ) | ( var63 == 0 & var253 == 0 & var64 == 1 ) | ( var63 == 0 & var253 == 1 & var64 == 0 ) | ( var63 == 1 & var253 == 0 & var64 == 0 ) | ( var63 == 1 & var253 == 1 & var64 == 1 ) | ( var64 == 0 & var254 == 0 & var65 == 1 ) | ( var64 == 0 & var254 == 1 & var65 == 0 ) | ( var64 == 1 & var254 == 0 & var65 == 0 ) | ( var64 == 1 & var254 == 1 & var65 == 1 ) | ( var65 == 0 & var255 == 0 & var66 == 1 ) | ( var65 == 0 & var255 == 1 & var66 == 0 ) | ( var65 == 1 & var255 == 0 & var66 == 0 ) | ( var65 == 1 & var255 == 1 & var66 == 1 ) | ( var66 == 0 & var256 == 0 & var67 == 1 ) | ( var66 == 0 & var256 == 1 & var67 == 0 ) | ( var66 == 1 & var256 == 0 & var67 == 0 ) | ( var66 == 1 & var256 == 1 & var67 == 1 ) | ( var67 == 0 & var257 == 0 & var68 == 1 ) | ( var67 == 0 & var257 == 1 & var68 == 0 ) | ( var67 == 1 & var257 == 0 & var68 == 0 ) | ( var67 == 1 & var257 == 1 & var68 == 1 ) | ( var68 == 0 & var258 == 0 & var69 == 1 ) | ( var68 == 0 & var258 == 1 & var69 == 0 ) | ( var68 == 1 & var258 == 0 & var69 == 0 ) | ( var68 == 1 & var258 == 1 & var69 == 1 ) | ( var69 == 0 & var259 == 0 & var70 == 1 ) | ( var69 == 0 & var259 == 1 & var70 == 0 ) | ( var69 == 1 & var259 == 0 & var70 == 0 ) | ( var69 == 1 & var259 == 1 & var70 == 1 ) | ( var70 == 0 & var260 == 0 & var71 == 1 ) | ( var70 == 0 & var260 == 1 & var71 == 0 ) | ( var70 == 1 & var260 == 0 & var71 == 0 ) | ( var70 == 1 & var260 == 1 & var71 == 1 ) | ( var71 == 0 & var261 == 0 & var72 == 1 ) | ( var71 == 0 & var261 == 1 & var72 == 0 ) | ( var71 == 1 & var261 == 0 & var72 == 0 ) | ( var71 == 1 & var261 == 1 & var72 == 1 ) | ( var72 == 0 & var262 == 0 & var73 == 1 ) | ( var72 == 0 & var262 == 1 & var73 == 0 ) | ( var72 == 1 & var262 == 0 & var73 == 0 ) | ( var72 == 1 & var262 == 1 & var73 == 1 ) | ( var73 == 0 & var263 == 0 & var74 == 1 ) | ( var73 == 0 & var263 == 1 & var74 == 0 ) | ( var73 == 1 & var263 == 0 & var74 == 0 ) | ( var73 == 1 & var263 == 1 & var74 == 1 ) | ( var74 == 0 & var264 == 0 & var75 == 1 ) | ( var74 == 0 & var264 == 1 & var75 == 0 ) | ( var74 == 1 & var264 == 0 & var75 == 0 ) | ( var74 == 1 & var264 == 1 & var75 == 1 ) | ( var75 == 0 & var265 == 0 & var76 == 1 ) | ( var75 == 0 & var265 == 1 & var76 == 0 ) | ( var75 == 1 & var265 == 0 & var76 == 0 ) | ( var75 == 1 & var265 == 1 & var76 == 1 ) | ( var76 == 0 & var266 == 0 & var77 == 1 ) | ( var76 == 0 & var266 == 1 & var77 == 0 ) | ( var76 == 1 & var266 == 0 & var77 == 0 ) | ( var76 == 1 & var266 == 1 & var77 == 1 ) | ( var77 == 0 & var267 == 0 & var78 == 1 ) | ( var77 == 0 & var267 == 1 & var78 == 0 ) | ( var77 == 1 & var267 == 0 & var78 == 0 ) | ( var77 == 1 & var267 == 1 & var78 == 1 ) | ( var78 == 0 & var268 == 0 & var79 == 1 ) | ( var78 == 0 & var268 == 1 & var79 == 0 ) | ( var78 == 1 & var268 == 0 & var79 == 0 ) | ( var78 == 1 & var268 == 1 & var79 == 1 ) | ( var79 == 0 & var269 == 0 & var80 == 1 ) | ( var79 == 0 & var269 == 1 & var80 == 0 ) | ( var79 == 1 & var269 == 0 & var80 == 0 ) | ( var79 == 1 & var269 == 1 & var80 == 1 ) | ( var80 == 0 & var270 == 0 & var81 == 1 ) | ( var80 == 0 & var270 == 1 & var81 == 0 ) | ( var80 == 1 & var270 == 0 & var81 == 0 ) | ( var80 == 1 & var270 == 1 & var81 == 1 ) | ( var81 == 0 & var271 == 0 & var82 == 1 ) | ( var81 == 0 & var271 == 1 & var82 == 0 ) | ( var81 == 1 & var271 == 0 & var82 == 0 ) | ( var81 == 1 & var271 == 1 & var82 == 1 ) | ( var82 == 0 & var272 == 0 & var83 == 1 ) | ( var82 == 0 & var272 == 1 & var83 == 0 ) | ( var82 == 1 & var272 == 0 & var83 == 0 ) | ( var82 == 1 & var272 == 1 & var83 == 1 ) | ( var83 == 0 & var273 == 0 & var84 == 1 ) | ( var83 == 0 & var273 == 1 & var84 == 0 ) | ( var83 == 1 & var273 == 0 & var84 == 0 ) | ( var83 == 1 & var273 == 1 & var84 == 1 ) | ( var84 == 0 & var274 == 0 & var85 == 1 ) | ( var84 == 0 & var274 == 1 & var85 == 0 ) | ( var84 == 1 & var274 == 0 & var85 == 0 ) | ( var84 == 1 & var274 == 1 & var85 == 1 ) | ( var85 == 0 & var275 == 0 & var86 == 1 ) | ( var85 == 0 & var275 == 1 & var86 == 0 ) | ( var85 == 1 & var275 == 0 & var86 == 0 ) | ( var85 == 1 & var275 == 1 & var86 == 1 ) | ( var86 == 0 & var276 == 0 & var87 == 1 ) | ( var86 == 0 & var276 == 1 & var87 == 0 ) | ( var86 == 1 & var276 == 0 & var87 == 0 ) | ( var86 == 1 & var276 == 1 & var87 == 1 ) | ( var87 == 0 & var277 == 0 & var88 == 1 ) | ( var87 == 0 & var277 == 1 & var88 == 0 ) | ( var87 == 1 & var277 == 0 & var88 == 0 ) | ( var87 == 1 & var277 == 1 & var88 == 1 ) | ( var88 == 0 & var278 == 0 & var89 == 1 ) | ( var88 == 0 & var278 == 1 & var89 == 0 ) | ( var88 == 1 & var278 == 0 & var89 == 0 ) | ( var88 == 1 & var278 == 1 & var89 == 1 ) | ( var89 == 0 & var279 == 0 & var90 == 1 ) | ( var89 == 0 & var279 == 1 & var90 == 0 ) | ( var89 == 1 & var279 == 0 & var90 == 0 ) | ( var89 == 1 & var279 == 1 & var90 == 1 ) | ( var90 == 0 & var280 == 0 & var91 == 1 ) | ( var90 == 0 & var280 == 1 & var91 == 0 ) | ( var90 == 1 & var280 == 0 & var91 == 0 ) | ( var90 == 1 & var280 == 1 & var91 == 1 ) | ( var91 == 0 & var281 == 0 & var92 == 1 ) | ( var91 == 0 & var281 == 1 & var92 == 0 ) | ( var91 == 1 & var281 == 0 & var92 == 0 ) | ( var91 == 1 & var281 == 1 & var92 == 1 ) | ( var92 == 0 & var282 == 0 & var93 == 1 ) | ( var92 == 0 & var282 == 1 & var93 == 0 ) | ( var92 == 1 & var282 == 0 & var93 == 0 ) | ( var92 == 1 & var282 == 1 & var93 == 1 ) |  0)  & (( var93 == 0 & var283 == 0 & var284 == 1 ) | ( var93 == 0 & var283 == 1 & var284 == 0 ) | ( var93 == 1 & var283 == 0 & var284 == 0 ) | ( var93 == 1 & var283 == 1 & var284 == 1 ) | ( var94 == 0 & var283 == 0 & var284 == 1 ) | ( var94 == 0 & var283 == 1 & var284 == 0 ) | ( var94 == 1 & var283 == 0 & var284 == 0 ) | ( var94 == 1 & var283 == 1 & var284 == 1 ) |  0)  & (( var95 == 0 & var282 == 0 & var94 == 1 ) | ( var95 == 0 & var282 == 1 & var94 == 0 ) | ( var95 == 1 & var282 == 0 & var94 == 0 ) | ( var95 == 1 & var282 == 1 & var94 == 1 ) | ( var96 == 0 & var281 == 0 & var95 == 1 ) | ( var96 == 0 & var281 == 1 & var95 == 0 ) | ( var96 == 1 & var281 == 0 & var95 == 0 ) | ( var96 == 1 & var281 == 1 & var95 == 1 ) | ( var97 == 0 & var280 == 0 & var96 == 1 ) | ( var97 == 0 & var280 == 1 & var96 == 0 ) | ( var97 == 1 & var280 == 0 & var96 == 0 ) | ( var97 == 1 & var280 == 1 & var96 == 1 ) | ( var98 == 0 & var279 == 0 & var97 == 1 ) | ( var98 == 0 & var279 == 1 & var97 == 0 ) | ( var98 == 1 & var279 == 0 & var97 == 0 ) | ( var98 == 1 & var279 == 1 & var97 == 1 ) | ( var99 == 0 & var278 == 0 & var98 == 1 ) | ( var99 == 0 & var278 == 1 & var98 == 0 ) | ( var99 == 1 & var278 == 0 & var98 == 0 ) | ( var99 == 1 & var278 == 1 & var98 == 1 ) | ( var100 == 0 & var277 == 0 & var99 == 1 ) | ( var100 == 0 & var277 == 1 & var99 == 0 ) | ( var100 == 1 & var277 == 0 & var99 == 0 ) | ( var100 == 1 & var277 == 1 & var99 == 1 ) | ( var101 == 0 & var276 == 0 & var100 == 1 ) | ( var101 == 0 & var276 == 1 & var100 == 0 ) | ( var101 == 1 & var276 == 0 & var100 == 0 ) | ( var101 == 1 & var276 == 1 & var100 == 1 ) | ( var102 == 0 & var275 == 0 & var101 == 1 ) | ( var102 == 0 & var275 == 1 & var101 == 0 ) | ( var102 == 1 & var275 == 0 & var101 == 0 ) | ( var102 == 1 & var275 == 1 & var101 == 1 ) | ( var103 == 0 & var274 == 0 & var102 == 1 ) | ( var103 == 0 & var274 == 1 & var102 == 0 ) | ( var103 == 1 & var274 == 0 & var102 == 0 ) | ( var103 == 1 & var274 == 1 & var102 == 1 ) | ( var104 == 0 & var273 == 0 & var103 == 1 ) | ( var104 == 0 & var273 == 1 & var103 == 0 ) | ( var104 == 1 & var273 == 0 & var103 == 0 ) | ( var104 == 1 & var273 == 1 & var103 == 1 ) | ( var105 == 0 & var272 == 0 & var104 == 1 ) | ( var105 == 0 & var272 == 1 & var104 == 0 ) | ( var105 == 1 & var272 == 0 & var104 == 0 ) | ( var105 == 1 & var272 == 1 & var104 == 1 ) | ( var106 == 0 & var271 == 0 & var105 == 1 ) | ( var106 == 0 & var271 == 1 & var105 == 0 ) | ( var106 == 1 & var271 == 0 & var105 == 0 ) | ( var106 == 1 & var271 == 1 & var105 == 1 ) | ( var107 == 0 & var270 == 0 & var106 == 1 ) | ( var107 == 0 & var270 == 1 & var106 == 0 ) | ( var107 == 1 & var270 == 0 & var106 == 0 ) | ( var107 == 1 & var270 == 1 & var106 == 1 ) | ( var108 == 0 & var269 == 0 & var107 == 1 ) | ( var108 == 0 & var269 == 1 & var107 == 0 ) | ( var108 == 1 & var269 == 0 & var107 == 0 ) | ( var108 == 1 & var269 == 1 & var107 == 1 ) | ( var109 == 0 & var268 == 0 & var108 == 1 ) | ( var109 == 0 & var268 == 1 & var108 == 0 ) | ( var109 == 1 & var268 == 0 & var108 == 0 ) | ( var109 == 1 & var268 == 1 & var108 == 1 ) | ( var110 == 0 & var267 == 0 & var109 == 1 ) | ( var110 == 0 & var267 == 1 & var109 == 0 ) | ( var110 == 1 & var267 == 0 & var109 == 0 ) | ( var110 == 1 & var267 == 1 & var109 == 1 ) | ( var111 == 0 & var266 == 0 & var110 == 1 ) | ( var111 == 0 & var266 == 1 & var110 == 0 ) | ( var111 == 1 & var266 == 0 & var110 == 0 ) | ( var111 == 1 & var266 == 1 & var110 == 1 ) | ( var112 == 0 & var265 == 0 & var111 == 1 ) | ( var112 == 0 & var265 == 1 & var111 == 0 ) | ( var112 == 1 & var265 == 0 & var111 == 0 ) | ( var112 == 1 & var265 == 1 & var111 == 1 ) | ( var113 == 0 & var264 == 0 & var112 == 1 ) | ( var113 == 0 & var264 == 1 & var112 == 0 ) | ( var113 == 1 & var264 == 0 & var112 == 0 ) | ( var113 == 1 & var264 == 1 & var112 == 1 ) | ( var114 == 0 & var263 == 0 & var113 == 1 ) | ( var114 == 0 & var263 == 1 & var113 == 0 ) | ( var114 == 1 & var263 == 0 & var113 == 0 ) | ( var114 == 1 & var263 == 1 & var113 == 1 ) | ( var115 == 0 & var262 == 0 & var114 == 1 ) | ( var115 == 0 & var262 == 1 & var114 == 0 ) | ( var115 == 1 & var262 == 0 & var114 == 0 ) | ( var115 == 1 & var262 == 1 & var114 == 1 ) | ( var116 == 0 & var261 == 0 & var115 == 1 ) | ( var116 == 0 & var261 == 1 & var115 == 0 ) | ( var116 == 1 & var261 == 0 & var115 == 0 ) | ( var116 == 1 & var261 == 1 & var115 == 1 ) | ( var117 == 0 & var260 == 0 & var116 == 1 ) | ( var117 == 0 & var260 == 1 & var116 == 0 ) | ( var117 == 1 & var260 == 0 & var116 == 0 ) | ( var117 == 1 & var260 == 1 & var116 == 1 ) | ( var118 == 0 & var259 == 0 & var117 == 1 ) | ( var118 == 0 & var259 == 1 & var117 == 0 ) | ( var118 == 1 & var259 == 0 & var117 == 0 ) | ( var118 == 1 & var259 == 1 & var117 == 1 ) | ( var119 == 0 & var258 == 0 & var118 == 1 ) | ( var119 == 0 & var258 == 1 & var118 == 0 ) | ( var119 == 1 & var258 == 0 & var118 == 0 ) | ( var119 == 1 & var258 == 1 & var118 == 1 ) | ( var120 == 0 & var257 == 0 & var119 == 1 ) | ( var120 == 0 & var257 == 1 & var119 == 0 ) | ( var120 == 1 & var257 == 0 & var119 == 0 ) | ( var120 == 1 & var257 == 1 & var119 == 1 ) | ( var121 == 0 & var256 == 0 & var120 == 1 ) | ( var121 == 0 & var256 == 1 & var120 == 0 ) | ( var121 == 1 & var256 == 0 & var120 == 0 ) | ( var121 == 1 & var256 == 1 & var120 == 1 ) | ( var122 == 0 & var255 == 0 & var121 == 1 ) | ( var122 == 0 & var255 == 1 & var121 == 0 ) | ( var122 == 1 & var255 == 0 & var121 == 0 ) | ( var122 == 1 & var255 == 1 & var121 == 1 ) | ( var123 == 0 & var254 == 0 & var122 == 1 ) | ( var123 == 0 & var254 == 1 & var122 == 0 ) | ( var123 == 1 & var254 == 0 & var122 == 0 ) | ( var123 == 1 & var254 == 1 & var122 == 1 ) | ( var124 == 0 & var253 == 0 & var123 == 1 ) | ( var124 == 0 & var253 == 1 & var123 == 0 ) | ( var124 == 1 & var253 == 0 & var123 == 0 ) | ( var124 == 1 & var253 == 1 & var123 == 1 ) | ( var125 == 0 & var252 == 0 & var124 == 1 ) | ( var125 == 0 & var252 == 1 & var124 == 0 ) | ( var125 == 1 & var252 == 0 & var124 == 0 ) | ( var125 == 1 & var252 == 1 & var124 == 1 ) | ( var126 == 0 & var251 == 0 & var125 == 1 ) | ( var126 == 0 & var251 == 1 & var125 == 0 ) | ( var126 == 1 & var251 == 0 & var125 == 0 ) | ( var126 == 1 & var251 == 1 & var125 == 1 ) | ( var127 == 0 & var250 == 0 & var126 == 1 ) | ( var127 == 0 & var250 == 1 & var126 == 0 ) | ( var127 == 1 & var250 == 0 & var126 == 0 ) | ( var127 == 1 & var250 == 1 & var126 == 1 ) | ( var128 == 0 & var249 == 0 & var127 == 1 ) | ( var128 == 0 & var249 == 1 & var127 == 0 ) | ( var128 == 1 & var249 == 0 & var127 == 0 ) | ( var128 == 1 & var249 == 1 & var127 == 1 ) | ( var129 == 0 & var248 == 0 & var128 == 1 ) | ( var129 == 0 & var248 == 1 & var128 == 0 ) | ( var129 == 1 & var248 == 0 & var128 == 0 ) | ( var129 == 1 & var248 == 1 & var128 == 1 ) | ( var130 == 0 & var247 == 0 & var129 == 1 ) | ( var130 == 0 & var247 == 1 & var129 == 0 ) | ( var130 == 1 & var247 == 0 & var129 == 0 ) | ( var130 == 1 & var247 == 1 & var129 == 1 ) | ( var131 == 0 & var246 == 0 & var130 == 1 ) | ( var131 == 0 & var246 == 1 & var130 == 0 ) | ( var131 == 1 & var246 == 0 & var130 == 0 ) | ( var131 == 1 & var246 == 1 & var130 == 1 ) | ( var132 == 0 & var245 == 0 & var131 == 1 ) | ( var132 == 0 & var245 == 1 & var131 == 0 ) | ( var132 == 1 & var245 == 0 & var131 == 0 ) | ( var132 == 1 & var245 == 1 & var131 == 1 ) | ( var133 == 0 & var244 == 0 & var132 == 1 ) | ( var133 == 0 & var244 == 1 & var132 == 0 ) | ( var133 == 1 & var244 == 0 & var132 == 0 ) | ( var133 == 1 & var244 == 1 & var132 == 1 ) | ( var134 == 0 & var243 == 0 & var133 == 1 ) | ( var134 == 0 & var243 == 1 & var133 == 0 ) | ( var134 == 1 & var243 == 0 & var133 == 0 ) | ( var134 == 1 & var243 == 1 & var133 == 1 ) | ( var135 == 0 & var242 == 0 & var134 == 1 ) | ( var135 == 0 & var242 == 1 & var134 == 0 ) | ( var135 == 1 & var242 == 0 & var134 == 0 ) | ( var135 == 1 & var242 == 1 & var134 == 1 ) | ( var136 == 0 & var241 == 0 & var135 == 1 ) | ( var136 == 0 & var241 == 1 & var135 == 0 ) | ( var136 == 1 & var241 == 0 & var135 == 0 ) | ( var136 == 1 & var241 == 1 & var135 == 1 ) | ( var137 == 0 & var240 == 0 & var136 == 1 ) | ( var137 == 0 & var240 == 1 & var136 == 0 ) | ( var137 == 1 & var240 == 0 & var136 == 0 ) | ( var137 == 1 & var240 == 1 & var136 == 1 ) | ( var138 == 0 & var239 == 0 & var137 == 1 ) | ( var138 == 0 & var239 == 1 & var137 == 0 ) | ( var138 == 1 & var239 == 0 & var137 == 0 ) | ( var138 == 1 & var239 == 1 & var137 == 1 ) | ( var139 == 0 & var238 == 0 & var138 == 1 ) | ( var139 == 0 & var238 == 1 & var138 == 0 ) | ( var139 == 1 & var238 == 0 & var138 == 0 ) | ( var139 == 1 & var238 == 1 & var138 == 1 ) | ( var140 == 0 & var237 == 0 & var139 == 1 ) | ( var140 == 0 & var237 == 1 & var139 == 0 ) | ( var140 == 1 & var237 == 0 & var139 == 0 ) | ( var140 == 1 & var237 == 1 & var139 == 1 ) | ( var141 == 0 & var236 == 0 & var140 == 1 ) | ( var141 == 0 & var236 == 1 & var140 == 0 ) | ( var141 == 1 & var236 == 0 & var140 == 0 ) | ( var141 == 1 & var236 == 1 & var140 == 1 ) | ( var142 == 0 & var235 == 0 & var141 == 1 ) | ( var142 == 0 & var235 == 1 & var141 == 0 ) | ( var142 == 1 & var235 == 0 & var141 == 0 ) | ( var142 == 1 & var235 == 1 & var141 == 1 ) | ( var143 == 0 & var234 == 0 & var142 == 1 ) | ( var143 == 0 & var234 == 1 & var142 == 0 ) | ( var143 == 1 & var234 == 0 & var142 == 0 ) | ( var143 == 1 & var234 == 1 & var142 == 1 ) | ( var144 == 0 & var233 == 0 & var143 == 1 ) | ( var144 == 0 & var233 == 1 & var143 == 0 ) | ( var144 == 1 & var233 == 0 & var143 == 0 ) | ( var144 == 1 & var233 == 1 & var143 == 1 ) | ( var145 == 0 & var232 == 0 & var144 == 1 ) | ( var145 == 0 & var232 == 1 & var144 == 0 ) | ( var145 == 1 & var232 == 0 & var144 == 0 ) | ( var145 == 1 & var232 == 1 & var144 == 1 ) | ( var146 == 0 & var231 == 0 & var145 == 1 ) | ( var146 == 0 & var231 == 1 & var145 == 0 ) | ( var146 == 1 & var231 == 0 & var145 == 0 ) | ( var146 == 1 & var231 == 1 & var145 == 1 ) | ( var147 == 0 & var230 == 0 & var146 == 1 ) | ( var147 == 0 & var230 == 1 & var146 == 0 ) | ( var147 == 1 & var230 == 0 & var146 == 0 ) | ( var147 == 1 & var230 == 1 & var146 == 1 ) | ( var148 == 0 & var229 == 0 & var147 == 1 ) | ( var148 == 0 & var229 == 1 & var147 == 0 ) | ( var148 == 1 & var229 == 0 & var147 == 0 ) | ( var148 == 1 & var229 == 1 & var147 == 1 ) | ( var149 == 0 & var228 == 0 & var148 == 1 ) | ( var149 == 0 & var228 == 1 & var148 == 0 ) | ( var149 == 1 & var228 == 0 & var148 == 0 ) | ( var149 == 1 & var228 == 1 & var148 == 1 ) | ( var150 == 0 & var227 == 0 & var149 == 1 ) | ( var150 == 0 & var227 == 1 & var149 == 0 ) | ( var150 == 1 & var227 == 0 & var149 == 0 ) | ( var150 == 1 & var227 == 1 & var149 == 1 ) | ( var151 == 0 & var226 == 0 & var150 == 1 ) | ( var151 == 0 & var226 == 1 & var150 == 0 ) | ( var151 == 1 & var226 == 0 & var150 == 0 ) | ( var151 == 1 & var226 == 1 & var150 == 1 ) | ( var152 == 0 & var225 == 0 & var151 == 1 ) | ( var152 == 0 & var225 == 1 & var151 == 0 ) | ( var152 == 1 & var225 == 0 & var151 == 0 ) | ( var152 == 1 & var225 == 1 & var151 == 1 ) | ( var153 == 0 & var224 == 0 & var152 == 1 ) | ( var153 == 0 & var224 == 1 & var152 == 0 ) | ( var153 == 1 & var224 == 0 & var152 == 0 ) | ( var153 == 1 & var224 == 1 & var152 == 1 ) | ( var154 == 0 & var223 == 0 & var153 == 1 ) | ( var154 == 0 & var223 == 1 & var153 == 0 ) | ( var154 == 1 & var223 == 0 & var153 == 0 ) | ( var154 == 1 & var223 == 1 & var153 == 1 ) | ( var155 == 0 & var222 == 0 & var154 == 1 ) | ( var155 == 0 & var222 == 1 & var154 == 0 ) | ( var155 == 1 & var222 == 0 & var154 == 0 ) | ( var155 == 1 & var222 == 1 & var154 == 1 ) | ( var156 == 0 & var221 == 0 & var155 == 1 ) | ( var156 == 0 & var221 == 1 & var155 == 0 ) | ( var156 == 1 & var221 == 0 & var155 == 0 ) | ( var156 == 1 & var221 == 1 & var155 == 1 ) | ( var157 == 0 & var220 == 0 & var156 == 1 ) | ( var157 == 0 & var220 == 1 & var156 == 0 ) | ( var157 == 1 & var220 == 0 & var156 == 0 ) | ( var157 == 1 & var220 == 1 & var156 == 1 ) | ( var158 == 0 & var219 == 0 & var157 == 1 ) | ( var158 == 0 & var219 == 1 & var157 == 0 ) | ( var158 == 1 & var219 == 0 & var157 == 0 ) | ( var158 == 1 & var219 == 1 & var157 == 1 ) | ( var159 == 0 & var218 == 0 & var158 == 1 ) | ( var159 == 0 & var218 == 1 & var158 == 0 ) | ( var159 == 1 & var218 == 0 & var158 == 0 ) | ( var159 == 1 & var218 == 1 & var158 == 1 ) | ( var160 == 0 & var217 == 0 & var159 == 1 ) | ( var160 == 0 & var217 == 1 & var159 == 0 ) | ( var160 == 1 & var217 == 0 & var159 == 0 ) | ( var160 == 1 & var217 == 1 & var159 == 1 ) | ( var161 == 0 & var216 == 0 & var160 == 1 ) | ( var161 == 0 & var216 == 1 & var160 == 0 ) | ( var161 == 1 & var216 == 0 & var160 == 0 ) | ( var161 == 1 & var216 == 1 & var160 == 1 ) | ( var162 == 0 & var215 == 0 & var161 == 1 ) | ( var162 == 0 & var215 == 1 & var161 == 0 ) | ( var162 == 1 & var215 == 0 & var161 == 0 ) | ( var162 == 1 & var215 == 1 & var161 == 1 ) | ( var163 == 0 & var214 == 0 & var162 == 1 ) | ( var163 == 0 & var214 == 1 & var162 == 0 ) | ( var163 == 1 & var214 == 0 & var162 == 0 ) | ( var163 == 1 & var214 == 1 & var162 == 1 ) | ( var164 == 0 & var213 == 0 & var163 == 1 ) | ( var164 == 0 & var213 == 1 & var163 == 0 ) | ( var164 == 1 & var213 == 0 & var163 == 0 ) | ( var164 == 1 & var213 == 1 & var163 == 1 ) | ( var165 == 0 & var212 == 0 & var164 == 1 ) | ( var165 == 0 & var212 == 1 & var164 == 0 ) | ( var165 == 1 & var212 == 0 & var164 == 0 ) | ( var165 == 1 & var212 == 1 & var164 == 1 ) | ( var166 == 0 & var211 == 0 & var165 == 1 ) | ( var166 == 0 & var211 == 1 & var165 == 0 ) | ( var166 == 1 & var211 == 0 & var165 == 0 ) | ( var166 == 1 & var211 == 1 & var165 == 1 ) | ( var167 == 0 & var210 == 0 & var166 == 1 ) | ( var167 == 0 & var210 == 1 & var166 == 0 ) | ( var167 == 1 & var210 == 0 & var166 == 0 ) | ( var167 == 1 & var210 == 1 & var166 == 1 ) | ( var168 == 0 & var209 == 0 & var167 == 1 ) | ( var168 == 0 & var209 == 1 & var167 == 0 ) | ( var168 == 1 & var209 == 0 & var167 == 0 ) | ( var168 == 1 & var209 == 1 & var167 == 1 ) | ( var169 == 0 & var208 == 0 & var168 == 1 ) | ( var169 == 0 & var208 == 1 & var168 == 0 ) | ( var169 == 1 & var208 == 0 & var168 == 0 ) | ( var169 == 1 & var208 == 1 & var168 == 1 ) | ( var170 == 0 & var207 == 0 & var169 == 1 ) | ( var170 == 0 & var207 == 1 & var169 == 0 ) | ( var170 == 1 & var207 == 0 & var169 == 0 ) | ( var170 == 1 & var207 == 1 & var169 == 1 ) | ( var171 == 0 & var206 == 0 & var170 == 1 ) | ( var171 == 0 & var206 == 1 & var170 == 0 ) | ( var171 == 1 & var206 == 0 & var170 == 0 ) | ( var171 == 1 & var206 == 1 & var170 == 1 ) | ( var172 == 0 & var205 == 0 & var171 == 1 ) | ( var172 == 0 & var205 == 1 & var171 == 0 ) | ( var172 == 1 & var205 == 0 & var171 == 0 ) | ( var172 == 1 & var205 == 1 & var171 == 1 ) | ( var173 == 0 & var204 == 0 & var172 == 1 ) | ( var173 == 0 & var204 == 1 & var172 == 0 ) | ( var173 == 1 & var204 == 0 & var172 == 0 ) | ( var173 == 1 & var204 == 1 & var172 == 1 ) | ( var174 == 0 & var203 == 0 & var173 == 1 ) | ( var174 == 0 & var203 == 1 & var173 == 0 ) | ( var174 == 1 & var203 == 0 & var173 == 0 ) | ( var174 == 1 & var203 == 1 & var173 == 1 ) | ( var175 == 0 & var202 == 0 & var174 == 1 ) | ( var175 == 0 & var202 == 1 & var174 == 0 ) | ( var175 == 1 & var202 == 0 & var174 == 0 ) | ( var175 == 1 & var202 == 1 & var174 == 1 ) | ( var176 == 0 & var201 == 0 & var175 == 1 ) | ( var176 == 0 & var201 == 1 & var175 == 0 ) | ( var176 == 1 & var201 == 0 & var175 == 0 ) | ( var176 == 1 & var201 == 1 & var175 == 1 ) | ( var177 == 0 & var200 == 0 & var176 == 1 ) | ( var177 == 0 & var200 == 1 & var176 == 0 ) | ( var177 == 1 & var200 == 0 & var176 == 0 ) | ( var177 == 1 & var200 == 1 & var176 == 1 ) | ( var178 == 0 & var199 == 0 & var177 == 1 ) | ( var178 == 0 & var199 == 1 & var177 == 0 ) | ( var178 == 1 & var199 == 0 & var177 == 0 ) | ( var178 == 1 & var199 == 1 & var177 == 1 ) | ( var179 == 0 & var198 == 0 & var178 == 1 ) | ( var179 == 0 & var198 == 1 & var178 == 0 ) | ( var179 == 1 & var198 == 0 & var178 == 0 ) | ( var179 == 1 & var198 == 1 & var178 == 1 ) | ( var180 == 0 & var197 == 0 & var179 == 1 ) | ( var180 == 0 & var197 == 1 & var179 == 0 ) | ( var180 == 1 & var197 == 0 & var179 == 0 ) | ( var180 == 1 & var197 == 1 & var179 == 1 ) | ( var181 == 0 & var196 == 0 & var180 == 1 ) | ( var181 == 0 & var196 == 1 & var180 == 0 ) | ( var181 == 1 & var196 == 0 & var180 == 0 ) | ( var181 == 1 & var196 == 1 & var180 == 1 ) | ( var182 == 0 & var195 == 0 & var181 == 1 ) | ( var182 == 0 & var195 == 1 & var181 == 0 ) | ( var182 == 1 & var195 == 0 & var181 == 0 ) | ( var182 == 1 & var195 == 1 & var181 == 1 ) | ( var183 == 0 & var194 == 0 & var182 == 1 ) | ( var183 == 0 & var194 == 1 & var182 == 0 ) | ( var183 == 1 & var194 == 0 & var182 == 0 ) | ( var183 == 1 & var194 == 1 & var182 == 1 ) | ( var184 == 0 & var193 == 0 & var183 == 1 ) | ( var184 == 0 & var193 == 1 & var183 == 0 ) | ( var184 == 1 & var193 == 0 & var183 == 0 ) | ( var184 == 1 & var193 == 1 & var183 == 1 ) | ( var185 == 0 & var192 == 0 & var184 == 1 ) | ( var185 == 0 & var192 == 1 & var184 == 0 ) | ( var185 == 1 & var192 == 0 & var184 == 0 ) | ( var185 == 1 & var192 == 1 & var184 == 1 ) | ( var186 == 0 & var191 == 0 & var185 == 1 ) | ( var186 == 0 & var191 == 1 & var185 == 0 ) | ( var186 == 1 & var191 == 0 & var185 == 0 ) | ( var186 == 1 & var191 == 1 & var185 == 1 ) | ( var187 == 0 & var190 == 0 & var186 == 1 ) | ( var187 == 0 & var190 == 1 & var186 == 0 ) | ( var187 == 1 & var190 == 0 & var186 == 0 ) | ( var187 == 1 & var190 == 1 & var186 == 1 ) |  0)  & (( var188 == 0 & var189 == 0 & var187 == 0 ) | ( var188 == 0 & var189 == 1 & var187 == 1 ) | ( var188 == 1 & var189 == 0 & var187 == 1 ) | ( var188 == 1 & var189 == 1 & var187 == 0 ) |  0)  & 1 )
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
100 x[100]
101 x[101]
102 x[102]
103 x[103]
104 x[104]
105 x[105]
106 x[106]
107 x[107]
108 x[108]
109 x[109]
110 x[110]
111 x[111]
112 x[112]
113 x[113]
114 x[114]
115 x[115]
116 x[116]
117 x[117]
118 x[118]
119 x[119]
120 x[120]
121 x[121]
122 x[122]
123 x[123]
124 x[124]
125 x[125]
126 x[126]
127 x[127]
128 x[128]
129 x[129]
130 x[130]
131 x[131]
132 x[132]
133 x[133]
134 x[134]
135 x[135]
136 x[136]
137 x[137]
138 x[138]
139 x[139]
140 x[140]
141 x[141]
142 x[142]
143 x[143]
144 x[144]
145 x[145]
146 x[146]
147 x[147]
148 x[148]
149 x[149]
150 x[150]
151 x[151]
152 x[152]
153 x[153]
154 x[154]
155 x[155]
156 x[156]
157 x[157]
158 x[158]
159 x[159]
160 x[160]
161 x[161]
162 x[162]
163 x[163]
164 x[164]
165 x[165]
166 x[166]
167 x[167]
168 x[168]
169 x[169]
170 x[170]
171 x[171]
172 x[172]
173 x[173]
174 x[174]
175 x[175]
176 x[176]
177 x[177]
178 x[178]
179 x[179]
180 x[180]
181 x[181]
182 x[182]
183 x[183]
184 x[184]
185 x[185]
186 x[186]
187 x[187]
188 x[188]
189 x[189]
190 x[190]
191 x[191]
192 x[192]
193 x[193]
194 x[194]
195 x[195]
196 x[196]
197 x[197]
198 x[198]
199 x[199]
200 x[200]
201 x[201]
202 x[202]
203 x[203]
204 x[204]
205 x[205]
206 x[206]
207 x[207]
208 x[208]
209 x[209]
210 x[210]
211 x[211]
212 x[212]
213 x[213]
214 x[214]
215 x[215]
216 x[216]
217 x[217]
218 x[218]
219 x[219]
220 x[220]
221 x[221]
222 x[222]
223 x[223]
224 x[224]
225 x[225]
226 x[226]
227 x[227]
228 x[228]
229 x[229]
230 x[230]
231 x[231]
232 x[232]
233 x[233]
234 x[234]
235 x[235]
236 x[236]
237 x[237]
238 x[238]
239 x[239]
240 x[240]
241 x[241]
242 x[242]
243 x[243]
244 x[244]
245 x[245]
246 x[246]
247 x[247]
248 x[248]
249 x[249]
250 x[250]
251 x[251]
252 x[252]
253 x[253]
254 x[254]
255 x[255]
256 x[256]
257 x[257]
258 x[258]
259 x[259]
260 x[260]
261 x[261]
262 x[262]
263 x[263]
264 x[264]
265 x[265]
266 x[266]
267 x[267]
268 x[268]
269 x[269]
270 x[270]
271 x[271]
272 x[272]
273 x[273]
274 x[274]
275 x[275]
276 x[276]
277 x[277]
278 x[278]
279 x[279]
280 x[280]
281 x[281]
282 x[282]
283 x[283]
284 x[284]
 */}
