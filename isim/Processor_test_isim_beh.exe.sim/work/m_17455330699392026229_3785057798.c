/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/project/PDS_seminar/seminar/Processor.v";
static int ng1[] = {0, 0};
static int ng2[] = {15, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {2, 0};
static int ng9[] = {3, 0};



static void Always_39_0(char *t0)
{
    char t13[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;

LAB0:    t1 = (t0 + 5464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6528);
    *((int *)t2) = 1;
    t3 = (t0 + 5496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB10;

LAB9:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB11;

LAB12:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 9, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2632);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB10:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB14:    xsi_set_current_line(43, ng0);
    t16 = (t0 + 2632);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t18, 4, t19, 32);
    t21 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 4, 0LL);
    goto LAB16;

}

static void Always_48_1(char *t0)
{
    char t4[8];
    char t18[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 5712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6544);
    *((int *)t2) = 1;
    t3 = (t0 + 5744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 3592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 6);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 7U);

LAB6:    t16 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t16, 3);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 9, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(50, ng0);

LAB18:    xsi_set_current_line(51, ng0);
    t19 = (t0 + 3592);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 15U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 15U);
    t30 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t30, t18, 0, 0, 4, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 9, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(54, ng0);

LAB19:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 3592);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 15U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 15U);
    t9 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t9, t18, 0, 0, 4, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 9, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(58, ng0);

LAB20:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3592);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 15U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 15U);
    t9 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t9, t18, 0, 0, 4, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 9, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(62, ng0);

LAB21:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 3592);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 2);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 2);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 3U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 3U);

LAB22:    t9 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t18, 32, t9, 32);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t18, 32, t2, 32);
    if (t17 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t18, 32, t2, 32);
    if (t17 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t18, 32, t2, 32);
    if (t17 == 1)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 3U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 3U);

LAB32:    t8 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t32, 32, t8, 32);
    if (t17 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t17 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t17 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t17 == 1)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 9, 0LL);
    goto LAB17;

LAB23:    xsi_set_current_line(64, ng0);
    t16 = (t0 + 4072);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 4, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 4232);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 4392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 4552);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB31;

LAB33:    xsi_set_current_line(70, ng0);
    t9 = (t0 + 4072);
    t16 = (t9 + 56U);
    t19 = *((char **)t16);
    t20 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 4232);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 4392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB41;

LAB39:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 4552);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB41;

}

static void Always_82_2(char *t0)
{
    char t6[8];
    char t15[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 5960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 6560);
    *((int *)t2) = 1;
    t3 = (t0 + 5992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);

LAB5:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);
    t4 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 9, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 6);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 7U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 7U);
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(85, ng0);

LAB13:    xsi_set_current_line(86, ng0);
    t38 = (t0 + 3752);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t37, 0, 8);
    t41 = (t37 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 4);
    *((unsigned int *)t37) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 4);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t47 & 3U);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 3U);

LAB14:    t49 = ((char*)((ng1)));
    t50 = xsi_vlog_unsigned_case_compare(t37, 32, t49, 32);
    if (t50 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t50 = xsi_vlog_unsigned_case_compare(t37, 32, t2, 32);
    if (t50 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t50 = xsi_vlog_unsigned_case_compare(t37, 32, t2, 32);
    if (t50 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t50 = xsi_vlog_unsigned_case_compare(t37, 32, t2, 32);
    if (t50 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(87, ng0);
    t51 = (t0 + 4072);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 4, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 4232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 4, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 4392);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 4, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 4, 0LL);
    goto LAB23;

}

static void Always_97_3(char *t0)
{
    char t4[8];
    char t18[8];
    char t34[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 6208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6576);
    *((int *)t2) = 1;
    t3 = (t0 + 6240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t5 = (t0 + 3912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 6);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 7U);

LAB6:    t16 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t16, 3);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(132, ng0);

LAB52:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(99, ng0);

LAB18:    xsi_set_current_line(100, ng0);
    t19 = (t0 + 3912);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 4);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 4);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);

LAB19:    t30 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t18, 32, t30, 32);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t18, 32, t2, 32);
    if (t17 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t18, 32, t2, 32);
    if (t17 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t18, 32, t2, 32);
    if (t17 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB9:    xsi_set_current_line(107, ng0);

LAB29:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(116, ng0);

LAB30:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 3912);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t34, 0, 8);
    t7 = (t34 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 4);
    *((unsigned int *)t34) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 4);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t14 & 3U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 3U);

LAB31:    t9 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 32, t9, 32);
    if (t31 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t34, 32, t2, 32);
    if (t17 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t34, 32, t2, 32);
    if (t17 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t34, 32, t2, 32);
    if (t17 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB17;

LAB13:    xsi_set_current_line(124, ng0);

LAB41:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 3912);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t35, 0, 8);
    t7 = (t35 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 4);
    *((unsigned int *)t35) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 4);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t14 & 3U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 3U);

LAB42:    t9 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t35, 32, t9, 32);
    if (t31 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t17 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t17 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t35, 32, t2, 32);
    if (t17 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB17;

LAB20:    xsi_set_current_line(101, ng0);
    t32 = (t0 + 2072U);
    t33 = *((char **)t32);
    t32 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t32, t33, 0, 0, 4, 0LL);
    goto LAB28;

LAB22:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 4, 0LL);
    goto LAB28;

LAB24:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 4, 0LL);
    goto LAB28;

LAB26:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 4, 0LL);
    goto LAB28;

LAB32:    xsi_set_current_line(118, ng0);
    t16 = (t0 + 3272);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 4, 0LL);
    goto LAB40;

LAB34:    xsi_set_current_line(119, ng0);
    t3 = (t0 + 3272);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB40;

LAB36:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 3272);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB40;

LAB38:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 3272);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB40;

LAB43:    xsi_set_current_line(126, ng0);
    t16 = (t0 + 3272);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 4, 0LL);
    goto LAB51;

LAB45:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 3272);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB51;

LAB47:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 3272);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB51;

LAB49:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 3272);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB51;

}


extern void work_m_17455330699392026229_3785057798_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_48_1,(void *)Always_82_2,(void *)Always_97_3};
	xsi_register_didat("work_m_17455330699392026229_3785057798", "isim/Processor_test_isim_beh.exe.sim/work/m_17455330699392026229_3785057798.didat");
	xsi_register_executes(pe);
}
