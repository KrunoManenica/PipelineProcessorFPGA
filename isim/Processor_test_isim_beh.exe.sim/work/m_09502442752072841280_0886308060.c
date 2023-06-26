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
static const char *ng0 = "/home/ise/project/PDS_seminar/seminar/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {1U, 0U};



static void Always_31_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3952);
    *((int *)t2) = 1;
    t3 = (t0 + 3416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2472);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB19;

LAB9:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    goto LAB19;

LAB11:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    goto LAB19;

LAB13:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    goto LAB19;

LAB15:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = (t0 + 1752U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 4, t4, 4, t7, 4);
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 4);
    goto LAB19;

}

static void Cont_42_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 3968);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_09502442752072841280_0886308060_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Cont_42_1};
	xsi_register_didat("work_m_09502442752072841280_0886308060", "isim/Processor_test_isim_beh.exe.sim/work/m_09502442752072841280_0886308060.didat");
	xsi_register_executes(pe);
}
