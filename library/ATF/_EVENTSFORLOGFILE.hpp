// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_EVENTLOGRECORD.hpp>



START_ATF_NAMESPACE
    struct _EVENTSFORLOGFILE
    {
        unsigned int ulSize;
        wchar_t szLogicalLogFile[256];
        unsigned int ulNumRecords;
        _EVENTLOGRECORD pEventLogRecords[];
    };
END_ATF_NAMESPACE
