// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_GUID.hpp"


START_ATF_NAMESPACE
    struct CControlCreationInfo
    {
        enum HandleKind
        {
            ReflectionType = 0x0,
            ControlInstance = 0x1,
            NullHandle = 0x2,
        };
        HandleKind m_hk;
        __int64 m_nHandle;
        _GUID m_clsid;
    };
END_ATF_NAMESPACE