// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _DropItemGroupInfo
    {
        struct _drop_create_info
        {
            char byTableCode;
            struct _base_fld *pFld;
            unsigned int dwDur;
            char byCreateCode;
            struct CMapData *pMap;
            unsigned __int16 wLayerIndex;
            float fDropPos[3];
            int nDropRange;
        };
        _drop_create_info m_DropItem;
        unsigned int m_dwDropCount;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
