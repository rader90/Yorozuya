// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_character_create_setdata.hpp"
#include "_dummy_position.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  _stone_create_setdata : _character_create_setdata
    {
        _dummy_position *pDumPosition;
        char byMasterRace;
    public:
        _stone_create_setdata()
        {
            using org_ptr = void (WINAPIV*)(struct _stone_create_setdata*);
            (org_ptr(0x140284530L))(this);
        };
        void ctor__stone_create_setdata()
        {
            using org_ptr = void (WINAPIV*)(struct _stone_create_setdata*);
            (org_ptr(0x140284530L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE