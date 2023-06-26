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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_09502442752072841280_0886308060_init();
    work_m_04428738037525138342_0396624993_init();
    work_m_17127236323739022882_3370108073_init();
    work_m_17455330699392026229_3785057798_init();
    work_m_02199740068577276398_0026974985_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_02199740068577276398_0026974985");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
