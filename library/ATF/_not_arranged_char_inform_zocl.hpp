// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_NOT_ARRANGED_AVATOR_DB.hpp"


START_ATF_NAMESPACE
    struct _not_arranged_char_inform_zocl
    {
        char byCharNum;
        _NOT_ARRANGED_AVATOR_DB CharList[50];
    public:
        _not_arranged_char_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _not_arranged_char_inform_zocl*);
            (org_ptr(0x14011f750L))(this);
        };
        void ctor__not_arranged_char_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _not_arranged_char_inform_zocl*);
            (org_ptr(0x14011f750L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _not_arranged_char_inform_zocl*);
            return (org_ptr(0x14011f7c0L))(this);
        };
    };
END_ATF_NAMESPACE