// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_RTL_CRITICAL_SECTION.hpp"


START_ATF_NAMESPACE
    struct CNetCriticalSection
    {
        _RTL_CRITICAL_SECTION m_cs;
    public:
        CNetCriticalSection()
        {
            using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
            (org_ptr(0x140073230L))(this);
        };
        void ctor_CNetCriticalSection()
        {
            using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
            (org_ptr(0x140073230L))(this);
        };
        void Lock()
        {
            using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
            (org_ptr(0x140073900L))(this);
        };
        void Unlock()
        {
            using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
            (org_ptr(0x140073950L))(this);
        };
        ~CNetCriticalSection()
        {
            using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
            (org_ptr(0x140073340L))(this);
        };
        void dtor_CNetCriticalSection()
        {
            using org_ptr = void (WINAPIV*)(struct CNetCriticalSection*);
            (org_ptr(0x140073340L))(this);
        };
    };
END_ATF_NAMESPACE