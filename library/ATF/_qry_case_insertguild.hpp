// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_insertguild
    {
        unsigned int in_guildindex;
        char in_w_guildName[17];
        char in_guildRace;
        char in_membernum;
        unsigned int in_memberindex[8];
        unsigned int in_memberserial[8];
        char tmp_w_membername[8][17];
        char tmp_lv[8];
        char tmp_grade[8];
        unsigned int tmp_pvp[8];
        unsigned int out_guildserial;
        unsigned int tmp_Esterindex;
        unsigned int tmp_Esterserial;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_insertguild*);
            return (org_ptr(0x1400ad0c0L))(this);
        };
    };
END_ATF_NAMESPACE