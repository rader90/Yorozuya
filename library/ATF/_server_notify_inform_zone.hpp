// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  _server_notify_inform_zone
    {
        unsigned __int16 wMsgCode;
        unsigned int dwPushIP;
    public:
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_server_notify_inform_zone, 6>(), "_server_notify_inform_zone");
END_ATF_NAMESPACE
