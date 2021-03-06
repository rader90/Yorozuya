// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <GUILD_BATTLE__CGuildBattleStateList.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleStateRoundProcess.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPos.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleStateRoundStart.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct  CNormalGuildBattleStateRoundList : CGuildBattleStateList
        {
            enum NGBR_STATE
            {
                NGBR_START = 0x0,
                NGBR_PROC = 0x1,
                NGBR_ROUND_END = 0x2,
                NGBR_MAX = 0x3,
            };
            CNormalGuildBattleStateRoundStart START;
            CNormalGuildBattleStateRoundProcess PROCESS;
            CNormalGuildBattleStateRoundReturnStartPos ROUND_END;
            struct CNormalGuildBattleStateRound *m_pStateList[3];
        public:
            CNormalGuildBattleStateRoundList();
            void ctor_CNormalGuildBattleStateRoundList();
            bool IsInBattleRegenState();
            void SetNextState();
            ~CNormalGuildBattleStateRoundList();
            void dtor_CNormalGuildBattleStateRoundList();
        };    
        static_assert(ATF::checkSize<GUILD_BATTLE::CNormalGuildBattleStateRoundList, 128>(), "GUILD_BATTLE::CNormalGuildBattleStateRoundList");
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
