// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_SID_IDENTIFIER_AUTHORITY.hpp>


START_ATF_NAMESPACE
    struct _SID
    {
        char Revision;
        char SubAuthorityCount;
        _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
        unsigned int SubAuthority[1];
    };
END_ATF_NAMESPACE
