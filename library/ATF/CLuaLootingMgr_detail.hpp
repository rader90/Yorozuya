// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLuaLootingMgr_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CLuaLootingMgrAddNovusItem2_ptr CLuaLootingMgrAddNovusItem2_next(nullptr);
        info::CLuaLootingMgrAddNovusItem2_clbk CLuaLootingMgrAddNovusItem2_user(nullptr);
        info::CLuaLootingMgrctor_CLuaLootingMgr4_ptr CLuaLootingMgrctor_CLuaLootingMgr4_next(nullptr);
        info::CLuaLootingMgrctor_CLuaLootingMgr4_clbk CLuaLootingMgrctor_CLuaLootingMgr4_user(nullptr);
        info::CLuaLootingMgrDestroy6_ptr CLuaLootingMgrDestroy6_next(nullptr);
        info::CLuaLootingMgrDestroy6_clbk CLuaLootingMgrDestroy6_user(nullptr);
        info::CLuaLootingMgrInitSDM8_ptr CLuaLootingMgrInitSDM8_next(nullptr);
        info::CLuaLootingMgrInitSDM8_clbk CLuaLootingMgrInitSDM8_user(nullptr);
        info::CLuaLootingMgrInstance10_ptr CLuaLootingMgrInstance10_next(nullptr);
        info::CLuaLootingMgrInstance10_clbk CLuaLootingMgrInstance10_user(nullptr);
        info::CLuaLootingMgrLoop12_ptr CLuaLootingMgrLoop12_next(nullptr);
        info::CLuaLootingMgrLoop12_clbk CLuaLootingMgrLoop12_user(nullptr);
        info::CLuaLootingMgrdtor_CLuaLootingMgr16_ptr CLuaLootingMgrdtor_CLuaLootingMgr16_next(nullptr);
        info::CLuaLootingMgrdtor_CLuaLootingMgr16_clbk CLuaLootingMgrdtor_CLuaLootingMgr16_user(nullptr);
        
        bool CLuaLootingMgrAddNovusItem2_wrapper(struct CLuaLootingMgr* _this, char* strItemCode, struct CMapData* pMap, uint16_t wLayerIndex, float* fPos, uint16_t wLootRange, unsigned int dwOverlapCnt, unsigned int dwItemNum, char byCreateType)
        {
           return CLuaLootingMgrAddNovusItem2_user(_this, strItemCode, pMap, wLayerIndex, fPos, wLootRange, dwOverlapCnt, dwItemNum, byCreateType, CLuaLootingMgrAddNovusItem2_next);
        };
        void CLuaLootingMgrctor_CLuaLootingMgr4_wrapper(struct CLuaLootingMgr* _this)
        {
           CLuaLootingMgrctor_CLuaLootingMgr4_user(_this, CLuaLootingMgrctor_CLuaLootingMgr4_next);
        };
        void CLuaLootingMgrDestroy6_wrapper()
        {
           CLuaLootingMgrDestroy6_user(CLuaLootingMgrDestroy6_next);
        };
        bool CLuaLootingMgrInitSDM8_wrapper(struct CLuaLootingMgr* _this, unsigned int dwLoopLootingCount, unsigned int dwLoopLootingTerm)
        {
           return CLuaLootingMgrInitSDM8_user(_this, dwLoopLootingCount, dwLoopLootingTerm, CLuaLootingMgrInitSDM8_next);
        };
        struct CLuaLootingMgr* CLuaLootingMgrInstance10_wrapper()
        {
           return CLuaLootingMgrInstance10_user(CLuaLootingMgrInstance10_next);
        };
        void CLuaLootingMgrLoop12_wrapper(struct CLuaLootingMgr* _this)
        {
           CLuaLootingMgrLoop12_user(_this, CLuaLootingMgrLoop12_next);
        };
        void CLuaLootingMgrdtor_CLuaLootingMgr16_wrapper(struct CLuaLootingMgr* _this)
        {
           CLuaLootingMgrdtor_CLuaLootingMgr16_user(_this, CLuaLootingMgrdtor_CLuaLootingMgr16_next);
        };
        
        hook_record CLuaLootingMgr_functions[] = {
        {   (LPVOID)0x140404ee0L,
            (LPVOID *)&CLuaLootingMgrAddNovusItem2_user,
            (LPVOID *)&CLuaLootingMgrAddNovusItem2_next,
            (LPVOID)cast_pointer_function(CLuaLootingMgrAddNovusItem2_wrapper),
            (LPVOID)cast_pointer_function((bool(CLuaLootingMgr::*)(char*, struct CMapData*, uint16_t, float*, uint16_t, unsigned int, unsigned int, char))&CLuaLootingMgr::AddNovusItem) },
        {   (LPVOID)0x140404dd0L,
            (LPVOID *)&CLuaLootingMgrctor_CLuaLootingMgr4_user,
            (LPVOID *)&CLuaLootingMgrctor_CLuaLootingMgr4_next,
            (LPVOID)cast_pointer_function(CLuaLootingMgrctor_CLuaLootingMgr4_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaLootingMgr::*)())&CLuaLootingMgr::ctor_CLuaLootingMgr) },
        {   (LPVOID)0x1402035e0L,
            (LPVOID *)&CLuaLootingMgrDestroy6_user,
            (LPVOID *)&CLuaLootingMgrDestroy6_next,
            (LPVOID)cast_pointer_function(CLuaLootingMgrDestroy6_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CLuaLootingMgr::Destroy) },
        {   (LPVOID)0x140404ea0L,
            (LPVOID *)&CLuaLootingMgrInitSDM8_user,
            (LPVOID *)&CLuaLootingMgrInitSDM8_next,
            (LPVOID)cast_pointer_function(CLuaLootingMgrInitSDM8_wrapper),
            (LPVOID)cast_pointer_function((bool(CLuaLootingMgr::*)(unsigned int, unsigned int))&CLuaLootingMgr::InitSDM) },
        {   (LPVOID)0x1404010f0L,
            (LPVOID *)&CLuaLootingMgrInstance10_user,
            (LPVOID *)&CLuaLootingMgrInstance10_next,
            (LPVOID)cast_pointer_function(CLuaLootingMgrInstance10_wrapper),
            (LPVOID)cast_pointer_function((struct CLuaLootingMgr*(*)())&CLuaLootingMgr::Instance) },
        {   (LPVOID)0x140405180L,
            (LPVOID *)&CLuaLootingMgrLoop12_user,
            (LPVOID *)&CLuaLootingMgrLoop12_next,
            (LPVOID)cast_pointer_function(CLuaLootingMgrLoop12_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaLootingMgr::*)())&CLuaLootingMgr::Loop) },
        {   (LPVOID)0x140404e60L,
            (LPVOID *)&CLuaLootingMgrdtor_CLuaLootingMgr16_user,
            (LPVOID *)&CLuaLootingMgrdtor_CLuaLootingMgr16_next,
            (LPVOID)cast_pointer_function(CLuaLootingMgrdtor_CLuaLootingMgr16_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaLootingMgr::*)())&CLuaLootingMgr::dtor_CLuaLootingMgr) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE