// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "TimeLimitJadeMng.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using TimeLimitJadeMngDeleteList2_ptr = bool (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, struct _STORAGE_LIST::_db_con*);
        using TimeLimitJadeMngDeleteList2_clbk = bool (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, struct _STORAGE_LIST::_db_con*, TimeLimitJadeMngDeleteList2_ptr);
        using TimeLimitJadeMngGetSheet4_ptr = struct TimeLimitJade* (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t);
        using TimeLimitJadeMngGetSheet4_clbk = struct TimeLimitJade* (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, TimeLimitJadeMngGetSheet4_ptr);
        using TimeLimitJadeMngInit6_ptr = bool (WINAPIV*)(struct TimeLimitJadeMng*);
        using TimeLimitJadeMngInit6_clbk = bool (WINAPIV*)(struct TimeLimitJadeMng*, TimeLimitJadeMngInit6_ptr);
        using TimeLimitJadeMngInsertList8_ptr = bool (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, struct _STORAGE_LIST::_db_con*);
        using TimeLimitJadeMngInsertList8_clbk = bool (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, struct _STORAGE_LIST::_db_con*, TimeLimitJadeMngInsertList8_ptr);
        using TimeLimitJadeMngInstance10_ptr = struct TimeLimitJadeMng* (WINAPIV*)();
        using TimeLimitJadeMngInstance10_clbk = struct TimeLimitJadeMng* (WINAPIV*)(TimeLimitJadeMngInstance10_ptr);
        using TimeLimitJadeMngRelease12_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t);
        using TimeLimitJadeMngRelease12_clbk = void (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, TimeLimitJadeMngRelease12_ptr);
        using TimeLimitJadeMngReleaseAll14_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        using TimeLimitJadeMngReleaseAll14_clbk = void (WINAPIV*)(struct TimeLimitJadeMng*, TimeLimitJadeMngReleaseAll14_ptr);
        using TimeLimitJadeMngctor_TimeLimitJadeMng16_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        using TimeLimitJadeMngctor_TimeLimitJadeMng16_clbk = void (WINAPIV*)(struct TimeLimitJadeMng*, TimeLimitJadeMngctor_TimeLimitJadeMng16_ptr);
        using TimeLimitJadeMngdtor_TimeLimitJadeMng20_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        using TimeLimitJadeMngdtor_TimeLimitJadeMng20_clbk = void (WINAPIV*)(struct TimeLimitJadeMng*, TimeLimitJadeMngdtor_TimeLimitJadeMng20_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE