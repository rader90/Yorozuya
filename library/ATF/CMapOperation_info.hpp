// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMapOperation.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CMapOperationctor_CMapOperation2_ptr = void (WINAPIV*)(struct CMapOperation*);
        using CMapOperationctor_CMapOperation2_clbk = void (WINAPIV*)(struct CMapOperation*, CMapOperationctor_CMapOperation2_ptr);
        using CMapOperationCheckMapPortalLink4_ptr = void (WINAPIV*)(struct CMapOperation*);
        using CMapOperationCheckMapPortalLink4_clbk = void (WINAPIV*)(struct CMapOperation*, CMapOperationCheckMapPortalLink4_ptr);
        using CMapOperationGetMap6_ptr = int (WINAPIV*)(struct CMapOperation*, struct CMapData*);
        using CMapOperationGetMap6_clbk = int (WINAPIV*)(struct CMapOperation*, struct CMapData*, CMapOperationGetMap6_ptr);
        using CMapOperationGetMap8_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, char*);
        using CMapOperationGetMap8_clbk = struct CMapData* (WINAPIV*)(struct CMapOperation*, char*, CMapOperationGetMap8_ptr);
        using CMapOperationGetMap10_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, int);
        using CMapOperationGetMap10_clbk = struct CMapData* (WINAPIV*)(struct CMapOperation*, int, CMapOperationGetMap10_ptr);
        using CMapOperationGetPosStartMap12_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, char, bool, float*);
        using CMapOperationGetPosStartMap12_clbk = struct CMapData* (WINAPIV*)(struct CMapOperation*, char, bool, float*, CMapOperationGetPosStartMap12_ptr);
        using CMapOperationGetSettlementMapData14_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, int, int);
        using CMapOperationGetSettlementMapData14_clbk = struct CMapData* (WINAPIV*)(struct CMapOperation*, int, int, CMapOperationGetSettlementMapData14_ptr);
        using CMapOperationGetStartMap16_ptr = struct CMapData* (WINAPIV*)(struct CMapOperation*, char);
        using CMapOperationGetStartMap16_clbk = struct CMapData* (WINAPIV*)(struct CMapOperation*, char, CMapOperationGetStartMap16_ptr);
        using CMapOperationInit18_ptr = bool (WINAPIV*)(struct CMapOperation*);
        using CMapOperationInit18_clbk = bool (WINAPIV*)(struct CMapOperation*, CMapOperationInit18_ptr);
        using CMapOperationIsExistStdMapID20_ptr = bool (WINAPIV*)(struct CMapOperation*, int);
        using CMapOperationIsExistStdMapID20_clbk = bool (WINAPIV*)(struct CMapOperation*, int, CMapOperationIsExistStdMapID20_ptr);
        using CMapOperationIsInRegion22_ptr = bool (WINAPIV*)(struct CMapOperation*, char*, struct CGameObject*);
        using CMapOperationIsInRegion22_clbk = bool (WINAPIV*)(struct CMapOperation*, char*, struct CGameObject*, CMapOperationIsInRegion22_ptr);
        using CMapOperationLoadMaps24_ptr = bool (WINAPIV*)(struct CMapOperation*);
        using CMapOperationLoadMaps24_clbk = bool (WINAPIV*)(struct CMapOperation*, CMapOperationLoadMaps24_ptr);
        using CMapOperationLoadRegion26_ptr = bool (WINAPIV*)(struct CMapOperation*);
        using CMapOperationLoadRegion26_clbk = bool (WINAPIV*)(struct CMapOperation*, CMapOperationLoadRegion26_ptr);
        using CMapOperationOnLoop28_ptr = void (WINAPIV*)(struct CMapOperation*);
        using CMapOperationOnLoop28_clbk = void (WINAPIV*)(struct CMapOperation*, CMapOperationOnLoop28_ptr);
        using CMapOperationRespawnMonster30_ptr = void (WINAPIV*)(struct CMapOperation*);
        using CMapOperationRespawnMonster30_clbk = void (WINAPIV*)(struct CMapOperation*, CMapOperationRespawnMonster30_ptr);
        using CMapOperationdtor_CMapOperation35_ptr = void (WINAPIV*)(struct CMapOperation*);
        using CMapOperationdtor_CMapOperation35_clbk = void (WINAPIV*)(struct CMapOperation*, CMapOperationdtor_CMapOperation35_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE