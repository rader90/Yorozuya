// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_FILETIME.hpp"
#include "_GUID.hpp"


START_ATF_NAMESPACE
    struct tagSTATPROPSETSTG
    {
        _GUID fmtid;
        _GUID clsid;
        unsigned int grfFlags;
        _FILETIME mtime;
        _FILETIME ctime;
        _FILETIME atime;
        unsigned int dwOSVersion;
    };
END_ATF_NAMESPACE