// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  IMAGE_AUX_SYMBOL_TOKEN_DEF
    {
        char bAuxType;
        char bReserved;
        unsigned int SymbolTableIndex;
        char rgbReserved[12];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE