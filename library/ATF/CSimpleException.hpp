// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CException.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CSimpleException : CException
    {
        int m_bAutoDelete;
        int m_bInitialized;
        int m_bLoaded;
        char m_szMessage[128];
        unsigned int m_nResourceID;
        int m_bReadyForDelete;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
