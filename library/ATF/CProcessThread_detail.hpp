// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CProcessThread_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CProcessThreadctor_CProcessThread2_ptr CProcessThreadctor_CProcessThread2_next(nullptr);
        info::CProcessThreadctor_CProcessThread2_clbk CProcessThreadctor_CProcessThread2_user(nullptr);
        info::CProcessThreadCompleteOnLoop4_ptr CProcessThreadCompleteOnLoop4_next(nullptr);
        info::CProcessThreadCompleteOnLoop4_clbk CProcessThreadCompleteOnLoop4_user(nullptr);
        info::CProcessThreadCompleteProcess6_ptr CProcessThreadCompleteProcess6_next(nullptr);
        info::CProcessThreadCompleteProcess6_clbk CProcessThreadCompleteProcess6_user(nullptr);
        info::CProcessThreadCrashThread8_ptr CProcessThreadCrashThread8_next(nullptr);
        info::CProcessThreadCrashThread8_clbk CProcessThreadCrashThread8_user(nullptr);
        info::CProcessThreadProcessOnThread10_ptr CProcessThreadProcessOnThread10_next(nullptr);
        info::CProcessThreadProcessOnThread10_clbk CProcessThreadProcessOnThread10_user(nullptr);
        info::CProcessThreadPushData12_ptr CProcessThreadPushData12_next(nullptr);
        info::CProcessThreadPushData12_clbk CProcessThreadPushData12_user(nullptr);
        info::CProcessThreadRegisterSyncData14_ptr CProcessThreadRegisterSyncData14_next(nullptr);
        info::CProcessThreadRegisterSyncData14_clbk CProcessThreadRegisterSyncData14_user(nullptr);
        info::CProcessThreadRunOnLoop16_ptr CProcessThreadRunOnLoop16_next(nullptr);
        info::CProcessThreadRunOnLoop16_clbk CProcessThreadRunOnLoop16_user(nullptr);
        info::CProcessThreadRunOnThread18_ptr CProcessThreadRunOnThread18_next(nullptr);
        info::CProcessThreadRunOnThread18_clbk CProcessThreadRunOnThread18_user(nullptr);
        info::CProcessThreadStartThread20_ptr CProcessThreadStartThread20_next(nullptr);
        info::CProcessThreadStartThread20_clbk CProcessThreadStartThread20_user(nullptr);
        info::CProcessThreadctor_Thread22_ptr CProcessThreadctor_Thread22_next(nullptr);
        info::CProcessThreadctor_Thread22_clbk CProcessThreadctor_Thread22_user(nullptr);
        info::CProcessThreadWorkProcess24_ptr CProcessThreadWorkProcess24_next(nullptr);
        info::CProcessThreadWorkProcess24_clbk CProcessThreadWorkProcess24_user(nullptr);
        info::CProcessThreaddtor_CProcessThread29_ptr CProcessThreaddtor_CProcessThread29_next(nullptr);
        info::CProcessThreaddtor_CProcessThread29_clbk CProcessThreaddtor_CProcessThread29_user(nullptr);
        
        void CProcessThreadctor_CProcessThread2_wrapper(struct CProcessThread* _this)
        {
           CProcessThreadctor_CProcessThread2_user(_this, CProcessThreadctor_CProcessThread2_next);
        };
        void CProcessThreadCompleteOnLoop4_wrapper(struct CProcessThread* _this)
        {
           CProcessThreadCompleteOnLoop4_user(_this, CProcessThreadCompleteOnLoop4_next);
        };
        void CProcessThreadCompleteProcess6_wrapper(struct CProcessThread* _this, struct _SYN_DATA* pData)
        {
           CProcessThreadCompleteProcess6_user(_this, pData, CProcessThreadCompleteProcess6_next);
        };
        void CProcessThreadCrashThread8_wrapper(struct CProcessThread* _this)
        {
           CProcessThreadCrashThread8_user(_this, CProcessThreadCrashThread8_next);
        };
        void CProcessThreadProcessOnThread10_wrapper(struct CProcessThread* _this)
        {
           CProcessThreadProcessOnThread10_user(_this, CProcessThreadProcessOnThread10_next);
        };
        struct _SYN_DATA* CProcessThreadPushData12_wrapper(struct CProcessThread* _this, struct _SYN_HEADER* pHeader, char* pQryData, int nQrySize)
        {
           return CProcessThreadPushData12_user(_this, pHeader, pQryData, nQrySize, CProcessThreadPushData12_next);
        };
        bool CProcessThreadRegisterSyncData14_wrapper(struct CProcessThread* _this, int nCaseCode, unsigned int dwDataSize)
        {
           return CProcessThreadRegisterSyncData14_user(_this, nCaseCode, dwDataSize, CProcessThreadRegisterSyncData14_next);
        };
        void CProcessThreadRunOnLoop16_wrapper(struct CProcessThread* _this)
        {
           CProcessThreadRunOnLoop16_user(_this, CProcessThreadRunOnLoop16_next);
        };
        void CProcessThreadRunOnThread18_wrapper(struct CProcessThread* _this)
        {
           CProcessThreadRunOnThread18_user(_this, CProcessThreadRunOnThread18_next);
        };
        bool CProcessThreadStartThread20_wrapper(struct CProcessThread* _this, struct _THREAD_CONFIG* pConfig, unsigned int dwSynDataNum)
        {
           return CProcessThreadStartThread20_user(_this, pConfig, dwSynDataNum, CProcessThreadStartThread20_next);
        };
        void CProcessThreadctor_Thread22_wrapper(void* pv)
        {
           CProcessThreadctor_Thread22_user(pv, CProcessThreadctor_Thread22_next);
        };
        char CProcessThreadWorkProcess24_wrapper(struct CProcessThread* _this, struct _SYN_DATA* pData)
        {
           return CProcessThreadWorkProcess24_user(_this, pData, CProcessThreadWorkProcess24_next);
        };
        void CProcessThreaddtor_CProcessThread29_wrapper(struct CProcessThread* _this)
        {
           CProcessThreaddtor_CProcessThread29_user(_this, CProcessThreaddtor_CProcessThread29_next);
        };
        
        hook_record CProcessThread_functions[] = {
        {   (LPVOID)0x14043dbb0L,
            (LPVOID *)&CProcessThreadctor_CProcessThread2_user,
            (LPVOID *)&CProcessThreadctor_CProcessThread2_next,
            (LPVOID)cast_pointer_function(CProcessThreadctor_CProcessThread2_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)())&CProcessThread::ctor_CProcessThread) },
        {   (LPVOID)0x14043e6e0L,
            (LPVOID *)&CProcessThreadCompleteOnLoop4_user,
            (LPVOID *)&CProcessThreadCompleteOnLoop4_next,
            (LPVOID)cast_pointer_function(CProcessThreadCompleteOnLoop4_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)())&CProcessThread::CompleteOnLoop) },
        {   (LPVOID)0x14043eb60L,
            (LPVOID *)&CProcessThreadCompleteProcess6_user,
            (LPVOID *)&CProcessThreadCompleteProcess6_next,
            (LPVOID)cast_pointer_function(CProcessThreadCompleteProcess6_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)(struct _SYN_DATA*))&CProcessThread::CompleteProcess) },
        {   (LPVOID)0x14043eb30L,
            (LPVOID *)&CProcessThreadCrashThread8_user,
            (LPVOID *)&CProcessThreadCrashThread8_next,
            (LPVOID)cast_pointer_function(CProcessThreadCrashThread8_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)())&CProcessThread::CrashThread) },
        {   (LPVOID)0x14043e5a0L,
            (LPVOID *)&CProcessThreadProcessOnThread10_user,
            (LPVOID *)&CProcessThreadProcessOnThread10_next,
            (LPVOID)cast_pointer_function(CProcessThreadProcessOnThread10_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)())&CProcessThread::ProcessOnThread) },
        {   (LPVOID)0x14043e2e0L,
            (LPVOID *)&CProcessThreadPushData12_user,
            (LPVOID *)&CProcessThreadPushData12_next,
            (LPVOID)cast_pointer_function(CProcessThreadPushData12_wrapper),
            (LPVOID)cast_pointer_function((struct _SYN_DATA*(CProcessThread::*)(struct _SYN_HEADER*, char*, int))&CProcessThread::PushData) },
        {   (LPVOID)0x14043dfb0L,
            (LPVOID *)&CProcessThreadRegisterSyncData14_user,
            (LPVOID *)&CProcessThreadRegisterSyncData14_next,
            (LPVOID)cast_pointer_function(CProcessThreadRegisterSyncData14_wrapper),
            (LPVOID)cast_pointer_function((bool(CProcessThread::*)(int, unsigned int))&CProcessThread::RegisterSyncData) },
        {   (LPVOID)0x14043e6a0L,
            (LPVOID *)&CProcessThreadRunOnLoop16_user,
            (LPVOID *)&CProcessThreadRunOnLoop16_next,
            (LPVOID)cast_pointer_function(CProcessThreadRunOnLoop16_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)())&CProcessThread::RunOnLoop) },
        {   (LPVOID)0x14043e510L,
            (LPVOID *)&CProcessThreadRunOnThread18_user,
            (LPVOID *)&CProcessThreadRunOnThread18_next,
            (LPVOID)cast_pointer_function(CProcessThreadRunOnThread18_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)())&CProcessThread::RunOnThread) },
        {   (LPVOID)0x14043e020L,
            (LPVOID *)&CProcessThreadStartThread20_user,
            (LPVOID *)&CProcessThreadStartThread20_next,
            (LPVOID)cast_pointer_function(CProcessThreadStartThread20_wrapper),
            (LPVOID)cast_pointer_function((bool(CProcessThread::*)(struct _THREAD_CONFIG*, unsigned int))&CProcessThread::StartThread) },
        {   (LPVOID)0x14043e480L,
            (LPVOID *)&CProcessThreadctor_Thread22_user,
            (LPVOID *)&CProcessThreadctor_Thread22_next,
            (LPVOID)cast_pointer_function(CProcessThreadctor_Thread22_wrapper),
            (LPVOID)cast_pointer_function((void(*)(void*))&CProcessThread::Thread) },
        {   (LPVOID)0x14043eb40L,
            (LPVOID *)&CProcessThreadWorkProcess24_user,
            (LPVOID *)&CProcessThreadWorkProcess24_next,
            (LPVOID)cast_pointer_function(CProcessThreadWorkProcess24_wrapper),
            (LPVOID)cast_pointer_function((char(CProcessThread::*)(struct _SYN_DATA*))&CProcessThread::WorkProcess) },
        {   (LPVOID)0x14043ddb0L,
            (LPVOID *)&CProcessThreaddtor_CProcessThread29_user,
            (LPVOID *)&CProcessThreaddtor_CProcessThread29_next,
            (LPVOID)cast_pointer_function(CProcessThreaddtor_CProcessThread29_wrapper),
            (LPVOID)cast_pointer_function((void(CProcessThread::*)())&CProcessThread::dtor_CProcessThread) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE