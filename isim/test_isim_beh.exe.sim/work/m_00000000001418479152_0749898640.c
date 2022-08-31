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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/szdl/kenijishuqi/kenijishuqi.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0};



static void Always_26_0(char *t0)
{
    char t13[8];
    char t22[8];
    char t35[8];
    char t42[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB15;

LAB14:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    memset(t22, 0, 8);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t12) != 0)
        goto LAB18;

LAB19:    t29 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB20;

LAB21:    memcpy(t42, t22, 8);

LAB22:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB32:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB14;

LAB16:    *((unsigned int *)t22) = 1;
    goto LAB19;

LAB18:    t28 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB20:    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t34 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) != 0)
        goto LAB25;

LAB26:    t43 = *((unsigned int *)t22);
    t44 = *((unsigned int *)t35);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t22 + 4);
    t47 = (t35 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB22;

LAB23:    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB25:    t41 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB26;

LAB27:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t22 + 4);
    t57 = (t35 + 4);
    t58 = *((unsigned int *)t22);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t35);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB29;

LAB30:    xsi_set_current_line(34, ng0);

LAB33:    xsi_set_current_line(35, ng0);
    t80 = (t0 + 1848U);
    t81 = *((char **)t80);
    t80 = (t0 + 2408);
    xsi_vlogvar_assign_value(t80, t81, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB32;

LAB34:    xsi_set_current_line(39, ng0);

LAB37:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t21 | t23);
    t25 = (~(t24));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB41;

LAB38:    if (t24 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t13) = 1;

LAB41:    t29 = (t13 + 4);
    t27 = *((unsigned int *)t29);
    t30 = (~(t27));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t36 = (t32 != 0);
    if (t36 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB65;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t13) = 1;

LAB65:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t23 = (~(t21));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB36;

LAB40:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(41, ng0);

LAB45:    xsi_set_current_line(42, ng0);
    t33 = (t0 + 2408);
    t34 = (t33 + 56U);
    t41 = *((char **)t34);
    t46 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t47 = (t41 + 4);
    t48 = (t46 + 4);
    t37 = *((unsigned int *)t41);
    t38 = *((unsigned int *)t46);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t47);
    t43 = *((unsigned int *)t48);
    t44 = (t40 ^ t43);
    t45 = (t39 | t44);
    t49 = *((unsigned int *)t47);
    t50 = *((unsigned int *)t48);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB49;

LAB46:    if (t51 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t22) = 1;

LAB49:    t57 = (t22 + 4);
    t54 = *((unsigned int *)t57);
    t55 = (~(t54));
    t58 = *((unsigned int *)t22);
    t59 = (t58 & t55);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(48, ng0);

LAB54:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    t29 = (t13 + 4);
    t21 = *((unsigned int *)t29);
    t23 = (~(t21));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB52:    goto LAB44;

LAB48:    t56 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(43, ng0);

LAB53:    xsi_set_current_line(44, ng0);
    t74 = ((char*)((ng1)));
    t80 = (t0 + 2408);
    xsi_vlogvar_assign_value(t80, t74, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB52;

LAB57:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(51, ng0);
    t33 = ((char*)((ng5)));
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    goto LAB61;

LAB64:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(55, ng0);

LAB69:    xsi_set_current_line(56, ng0);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    t34 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t41 = (t33 + 4);
    t46 = (t34 + 4);
    t27 = *((unsigned int *)t33);
    t30 = *((unsigned int *)t34);
    t31 = (t27 ^ t30);
    t32 = *((unsigned int *)t41);
    t36 = *((unsigned int *)t46);
    t37 = (t32 ^ t36);
    t38 = (t31 | t37);
    t39 = *((unsigned int *)t41);
    t40 = *((unsigned int *)t46);
    t43 = (t39 | t40);
    t44 = (~(t43));
    t45 = (t38 & t44);
    if (t45 != 0)
        goto LAB73;

LAB70:    if (t43 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t22) = 1;

LAB73:    t48 = (t22 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t22);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(62, ng0);

LAB78:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB82;

LAB79:    if (t18 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t13) = 1;

LAB82:    t29 = (t13 + 4);
    t21 = *((unsigned int *)t29);
    t23 = (~(t21));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB83;

LAB84:
LAB85:
LAB76:    goto LAB68;

LAB72:    t47 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(57, ng0);

LAB77:    xsi_set_current_line(58, ng0);
    t56 = ((char*)((ng3)));
    t57 = (t0 + 2408);
    xsi_vlogvar_assign_value(t57, t56, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB76;

LAB81:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(65, ng0);
    t33 = ((char*)((ng5)));
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    goto LAB85;

}


extern void work_m_00000000001418479152_0749898640_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000001418479152_0749898640", "isim/test_isim_beh.exe.sim/work/m_00000000001418479152_0749898640.didat");
	xsi_register_executes(pe);
}
