// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAsyncLogBufferList.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CAsyncLogBufferListctor_CAsyncLogBufferList2_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        using CAsyncLogBufferListctor_CAsyncLogBufferList2_clbk = void (WINAPIV*)(struct CAsyncLogBufferList*, CAsyncLogBufferListctor_CAsyncLogBufferList2_ptr);
        using CAsyncLogBufferListGetBufferSize4_ptr = unsigned int (WINAPIV*)(struct CAsyncLogBufferList*);
        using CAsyncLogBufferListGetBufferSize4_clbk = unsigned int (WINAPIV*)(struct CAsyncLogBufferList*, CAsyncLogBufferListGetBufferSize4_ptr);
        using CAsyncLogBufferListGetEmptySize6_ptr = int (WINAPIV*)(struct CAsyncLogBufferList*);
        using CAsyncLogBufferListGetEmptySize6_clbk = int (WINAPIV*)(struct CAsyncLogBufferList*, CAsyncLogBufferListGetEmptySize6_ptr);
        using CAsyncLogBufferListGetProcCount8_ptr = int (WINAPIV*)(struct CAsyncLogBufferList*);
        using CAsyncLogBufferListGetProcCount8_clbk = int (WINAPIV*)(struct CAsyncLogBufferList*, CAsyncLogBufferListGetProcCount8_ptr);
        using CAsyncLogBufferListInit10_ptr = bool (WINAPIV*)(struct CAsyncLogBufferList*, unsigned int, unsigned int, struct CLogFile*);
        using CAsyncLogBufferListInit10_clbk = bool (WINAPIV*)(struct CAsyncLogBufferList*, unsigned int, unsigned int, struct CLogFile*, CAsyncLogBufferListInit10_ptr);
        using CAsyncLogBufferListLog12_ptr = bool (WINAPIV*)(struct CAsyncLogBufferList*, char*, char*, int);
        using CAsyncLogBufferListLog12_clbk = bool (WINAPIV*)(struct CAsyncLogBufferList*, char*, char*, int, CAsyncLogBufferListLog12_ptr);
        using CAsyncLogBufferListProcWrite14_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        using CAsyncLogBufferListProcWrite14_clbk = void (WINAPIV*)(struct CAsyncLogBufferList*, CAsyncLogBufferListProcWrite14_ptr);
        using CAsyncLogBufferListWriteFile16_ptr = void (WINAPIV*)(char*, int, char*);
        using CAsyncLogBufferListWriteFile16_clbk = void (WINAPIV*)(char*, int, char*, CAsyncLogBufferListWriteFile16_ptr);
        using CAsyncLogBufferListdtor_CAsyncLogBufferList20_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        using CAsyncLogBufferListdtor_CAsyncLogBufferList20_clbk = void (WINAPIV*)(struct CAsyncLogBufferList*, CAsyncLogBufferListdtor_CAsyncLogBufferList20_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE