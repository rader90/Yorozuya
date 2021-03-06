#include <CandidateMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CandidateMgrAddScore2_ptr CandidateMgrAddScore2_next(nullptr);
        Info::CandidateMgrAddScore2_clbk CandidateMgrAddScore2_user(nullptr);
        
        Info::CandidateMgrApplyPatriarchGroup4_ptr CandidateMgrApplyPatriarchGroup4_next(nullptr);
        Info::CandidateMgrApplyPatriarchGroup4_clbk CandidateMgrApplyPatriarchGroup4_user(nullptr);
        
        Info::CandidateMgrAppointPatriarchGroup6_ptr CandidateMgrAppointPatriarchGroup6_next(nullptr);
        Info::CandidateMgrAppointPatriarchGroup6_clbk CandidateMgrAppointPatriarchGroup6_user(nullptr);
        
        
        Info::CandidateMgrctor_CandidateMgr8_ptr CandidateMgrctor_CandidateMgr8_next(nullptr);
        Info::CandidateMgrctor_CandidateMgr8_clbk CandidateMgrctor_CandidateMgr8_user(nullptr);
        
        Info::CandidateMgrChangeState_1to210_ptr CandidateMgrChangeState_1to210_next(nullptr);
        Info::CandidateMgrChangeState_1to210_clbk CandidateMgrChangeState_1to210_user(nullptr);
        
        Info::CandidateMgrCheckDBValidCharacter12_ptr CandidateMgrCheckDBValidCharacter12_next(nullptr);
        Info::CandidateMgrCheckDBValidCharacter12_clbk CandidateMgrCheckDBValidCharacter12_user(nullptr);
        
        Info::CandidateMgrCompleteInsertCandidate14_ptr CandidateMgrCompleteInsertCandidate14_next(nullptr);
        Info::CandidateMgrCompleteInsertCandidate14_clbk CandidateMgrCompleteInsertCandidate14_user(nullptr);
        
        Info::CandidateMgrDischargePatriarchGroup16_ptr CandidateMgrDischargePatriarchGroup16_next(nullptr);
        Info::CandidateMgrDischargePatriarchGroup16_clbk CandidateMgrDischargePatriarchGroup16_user(nullptr);
        
        Info::CandidateMgrFinalDecision18_ptr CandidateMgrFinalDecision18_next(nullptr);
        Info::CandidateMgrFinalDecision18_clbk CandidateMgrFinalDecision18_user(nullptr);
        
        Info::CandidateMgrGetCandidate20_ptr CandidateMgrGetCandidate20_next(nullptr);
        Info::CandidateMgrGetCandidate20_clbk CandidateMgrGetCandidate20_user(nullptr);
        
        Info::CandidateMgrGetCandidateBySerial22_ptr CandidateMgrGetCandidateBySerial22_next(nullptr);
        Info::CandidateMgrGetCandidateBySerial22_clbk CandidateMgrGetCandidateBySerial22_user(nullptr);
        
        Info::CandidateMgrGetCandidateCnt_1st24_ptr CandidateMgrGetCandidateCnt_1st24_next(nullptr);
        Info::CandidateMgrGetCandidateCnt_1st24_clbk CandidateMgrGetCandidateCnt_1st24_user(nullptr);
        
        Info::CandidateMgrGetCandidateCnt_2st26_ptr CandidateMgrGetCandidateCnt_2st26_next(nullptr);
        Info::CandidateMgrGetCandidateCnt_2st26_clbk CandidateMgrGetCandidateCnt_2st26_user(nullptr);
        
        Info::CandidateMgrGetCandidate_2st28_ptr CandidateMgrGetCandidate_2st28_next(nullptr);
        Info::CandidateMgrGetCandidate_2st28_clbk CandidateMgrGetCandidate_2st28_user(nullptr);
        
        Info::CandidateMgrGetEmpty30_ptr CandidateMgrGetEmpty30_next(nullptr);
        Info::CandidateMgrGetEmpty30_clbk CandidateMgrGetEmpty30_user(nullptr);
        
        Info::CandidateMgrGetEmptyPatriarchGroup32_ptr CandidateMgrGetEmptyPatriarchGroup32_next(nullptr);
        Info::CandidateMgrGetEmptyPatriarchGroup32_clbk CandidateMgrGetEmptyPatriarchGroup32_user(nullptr);
        
        Info::CandidateMgrGetLeader34_ptr CandidateMgrGetLeader34_next(nullptr);
        Info::CandidateMgrGetLeader34_clbk CandidateMgrGetLeader34_user(nullptr);
        
        Info::CandidateMgrGetMaxNum36_ptr CandidateMgrGetMaxNum36_next(nullptr);
        Info::CandidateMgrGetMaxNum36_clbk CandidateMgrGetMaxNum36_user(nullptr);
        
        Info::CandidateMgrGetPatriarchGroup38_ptr CandidateMgrGetPatriarchGroup38_next(nullptr);
        Info::CandidateMgrGetPatriarchGroup38_clbk CandidateMgrGetPatriarchGroup38_user(nullptr);
        
        Info::CandidateMgrGetPatriarchGroupBySerial40_ptr CandidateMgrGetPatriarchGroupBySerial40_next(nullptr);
        Info::CandidateMgrGetPatriarchGroupBySerial40_clbk CandidateMgrGetPatriarchGroupBySerial40_user(nullptr);
        
        Info::CandidateMgrGetWinCnt42_ptr CandidateMgrGetWinCnt42_next(nullptr);
        Info::CandidateMgrGetWinCnt42_clbk CandidateMgrGetWinCnt42_user(nullptr);
        
        Info::CandidateMgrInitCandidate44_ptr CandidateMgrInitCandidate44_next(nullptr);
        Info::CandidateMgrInitCandidate44_clbk CandidateMgrInitCandidate44_user(nullptr);
        
        Info::CandidateMgrInitialize46_ptr CandidateMgrInitialize46_next(nullptr);
        Info::CandidateMgrInitialize46_clbk CandidateMgrInitialize46_user(nullptr);
        
        Info::CandidateMgrInsert_Candidate48_ptr CandidateMgrInsert_Candidate48_next(nullptr);
        Info::CandidateMgrInsert_Candidate48_clbk CandidateMgrInsert_Candidate48_user(nullptr);
        
        Info::CandidateMgrInstance50_ptr CandidateMgrInstance50_next(nullptr);
        Info::CandidateMgrInstance50_clbk CandidateMgrInstance50_user(nullptr);
        
        Info::CandidateMgrIsRegistedAvator_152_ptr CandidateMgrIsRegistedAvator_152_next(nullptr);
        Info::CandidateMgrIsRegistedAvator_152_clbk CandidateMgrIsRegistedAvator_152_user(nullptr);
        
        Info::CandidateMgrIsRegistedAvator_254_ptr CandidateMgrIsRegistedAvator_254_next(nullptr);
        Info::CandidateMgrIsRegistedAvator_254_clbk CandidateMgrIsRegistedAvator_254_user(nullptr);
        
        Info::CandidateMgrIsRegistedAvator_256_ptr CandidateMgrIsRegistedAvator_256_next(nullptr);
        Info::CandidateMgrIsRegistedAvator_256_clbk CandidateMgrIsRegistedAvator_256_user(nullptr);
        
        Info::CandidateMgrLoadDatabase58_ptr CandidateMgrLoadDatabase58_next(nullptr);
        Info::CandidateMgrLoadDatabase58_clbk CandidateMgrLoadDatabase58_user(nullptr);
        
        Info::CandidateMgrLoadLeaderPreVersion60_ptr CandidateMgrLoadLeaderPreVersion60_next(nullptr);
        Info::CandidateMgrLoadLeaderPreVersion60_clbk CandidateMgrLoadLeaderPreVersion60_user(nullptr);
        
        Info::CandidateMgrLoadPatriarchGroup62_ptr CandidateMgrLoadPatriarchGroup62_next(nullptr);
        Info::CandidateMgrLoadPatriarchGroup62_clbk CandidateMgrLoadPatriarchGroup62_user(nullptr);
        
        Info::CandidateMgrRegist64_ptr CandidateMgrRegist64_next(nullptr);
        Info::CandidateMgrRegist64_clbk CandidateMgrRegist64_user(nullptr);
        
        Info::CandidateMgrRegist66_ptr CandidateMgrRegist66_next(nullptr);
        Info::CandidateMgrRegist66_clbk CandidateMgrRegist66_user(nullptr);
        
        Info::CandidateMgrRelease68_ptr CandidateMgrRelease68_next(nullptr);
        Info::CandidateMgrRelease68_clbk CandidateMgrRelease68_user(nullptr);
        
        Info::CandidateMgrUpdate_ClassType70_ptr CandidateMgrUpdate_ClassType70_next(nullptr);
        Info::CandidateMgrUpdate_ClassType70_clbk CandidateMgrUpdate_ClassType70_user(nullptr);
        
        Info::CandidateMgrUpdate_DischargePatriarch72_ptr CandidateMgrUpdate_DischargePatriarch72_next(nullptr);
        Info::CandidateMgrUpdate_DischargePatriarch72_clbk CandidateMgrUpdate_DischargePatriarch72_user(nullptr);
        
        Info::CandidateMgrUpdate_Refund74_ptr CandidateMgrUpdate_Refund74_next(nullptr);
        Info::CandidateMgrUpdate_Refund74_clbk CandidateMgrUpdate_Refund74_user(nullptr);
        
        Info::CandidateMgrUpdate_RegistCandidate_2st76_ptr CandidateMgrUpdate_RegistCandidate_2st76_next(nullptr);
        Info::CandidateMgrUpdate_RegistCandidate_2st76_clbk CandidateMgrUpdate_RegistCandidate_2st76_user(nullptr);
        
        Info::CandidateMgrUpdate_Score78_ptr CandidateMgrUpdate_Score78_next(nullptr);
        Info::CandidateMgrUpdate_Score78_clbk CandidateMgrUpdate_Score78_user(nullptr);
        
        Info::CandidateMgrUpdate_VoteTime80_ptr CandidateMgrUpdate_VoteTime80_next(nullptr);
        Info::CandidateMgrUpdate_VoteTime80_clbk CandidateMgrUpdate_VoteTime80_user(nullptr);
        
        Info::CandidateMgr__AddWinner82_ptr CandidateMgr__AddWinner82_next(nullptr);
        Info::CandidateMgr__AddWinner82_clbk CandidateMgr__AddWinner82_user(nullptr);
        
        Info::CandidateMgr__SortByPvpPoint84_ptr CandidateMgr__SortByPvpPoint84_next(nullptr);
        Info::CandidateMgr__SortByPvpPoint84_clbk CandidateMgr__SortByPvpPoint84_user(nullptr);
        
        Info::CandidateMgr__SortByRank86_ptr CandidateMgr__SortByRank86_next(nullptr);
        Info::CandidateMgr__SortByRank86_clbk CandidateMgr__SortByRank86_user(nullptr);
        
        Info::CandidateMgr__SortByScore88_ptr CandidateMgr__SortByScore88_next(nullptr);
        Info::CandidateMgr__SortByScore88_clbk CandidateMgr__SortByScore88_user(nullptr);
        
        
        Info::CandidateMgrdtor_CandidateMgr90_ptr CandidateMgrdtor_CandidateMgr90_next(nullptr);
        Info::CandidateMgrdtor_CandidateMgr90_clbk CandidateMgrdtor_CandidateMgr90_user(nullptr);
        
        void CandidateMgrAddScore2_wrapper(struct CandidateMgr* _this, char byRace, char* wszName, char byScore)
        {
           CandidateMgrAddScore2_user(_this, byRace, wszName, byScore, CandidateMgrAddScore2_next);
        };
        void CandidateMgrApplyPatriarchGroup4_wrapper(struct CandidateMgr* _this)
        {
           CandidateMgrApplyPatriarchGroup4_user(_this, CandidateMgrApplyPatriarchGroup4_next);
        };
        bool CandidateMgrAppointPatriarchGroup6_wrapper(struct CandidateMgr* _this, struct CPlayer* pOne, _candidate_info::ClassType eClassType)
        {
           return CandidateMgrAppointPatriarchGroup6_user(_this, pOne, eClassType, CandidateMgrAppointPatriarchGroup6_next);
        };
        
        void CandidateMgrctor_CandidateMgr8_wrapper(struct CandidateMgr* _this)
        {
           CandidateMgrctor_CandidateMgr8_user(_this, CandidateMgrctor_CandidateMgr8_next);
        };
        void CandidateMgrChangeState_1to210_wrapper(struct CandidateMgr* _this)
        {
           CandidateMgrChangeState_1to210_user(_this, CandidateMgrChangeState_1to210_next);
        };
        int CandidateMgrCheckDBValidCharacter12_wrapper(struct CandidateMgr* _this, char byProc)
        {
           return CandidateMgrCheckDBValidCharacter12_user(_this, byProc, CandidateMgrCheckDBValidCharacter12_next);
        };
        void CandidateMgrCompleteInsertCandidate14_wrapper(struct CandidateMgr* _this, char byRet, char* p)
        {
           CandidateMgrCompleteInsertCandidate14_user(_this, byRet, p, CandidateMgrCompleteInsertCandidate14_next);
        };
        bool CandidateMgrDischargePatriarchGroup16_wrapper(struct CandidateMgr* _this, char byRace, _candidate_info::ClassType eClassType)
        {
           return CandidateMgrDischargePatriarchGroup16_user(_this, byRace, eClassType, CandidateMgrDischargePatriarchGroup16_next);
        };
        void CandidateMgrFinalDecision18_wrapper(struct CandidateMgr* _this)
        {
           CandidateMgrFinalDecision18_user(_this, CandidateMgrFinalDecision18_next);
        };
        struct _candidate_info* CandidateMgrGetCandidate20_wrapper(struct CandidateMgr* _this, char byRace, unsigned int dwIdx)
        {
           return CandidateMgrGetCandidate20_user(_this, byRace, dwIdx, CandidateMgrGetCandidate20_next);
        };
        struct _candidate_info* CandidateMgrGetCandidateBySerial22_wrapper(struct CandidateMgr* _this, char byRace, unsigned int dwASerial)
        {
           return CandidateMgrGetCandidateBySerial22_user(_this, byRace, dwASerial, CandidateMgrGetCandidateBySerial22_next);
        };
        int CandidateMgrGetCandidateCnt_1st24_wrapper(struct CandidateMgr* _this, char byRace)
        {
           return CandidateMgrGetCandidateCnt_1st24_user(_this, byRace, CandidateMgrGetCandidateCnt_1st24_next);
        };
        int CandidateMgrGetCandidateCnt_2st26_wrapper(struct CandidateMgr* _this, char byRace)
        {
           return CandidateMgrGetCandidateCnt_2st26_user(_this, byRace, CandidateMgrGetCandidateCnt_2st26_next);
        };
        struct _candidate_info* CandidateMgrGetCandidate_2st28_wrapper(struct CandidateMgr* _this, char byRace, int nIdx)
        {
           return CandidateMgrGetCandidate_2st28_user(_this, byRace, nIdx, CandidateMgrGetCandidate_2st28_next);
        };
        struct _candidate_info* CandidateMgrGetEmpty30_wrapper(struct CandidateMgr* _this, char byRace)
        {
           return CandidateMgrGetEmpty30_user(_this, byRace, CandidateMgrGetEmpty30_next);
        };
        struct _candidate_info* CandidateMgrGetEmptyPatriarchGroup32_wrapper(struct CandidateMgr* _this, char byRace)
        {
           return CandidateMgrGetEmptyPatriarchGroup32_user(_this, byRace, CandidateMgrGetEmptyPatriarchGroup32_next);
        };
        struct _candidate_info* CandidateMgrGetLeader34_wrapper(struct CandidateMgr* _this, char byRace, int nIdx)
        {
           return CandidateMgrGetLeader34_user(_this, byRace, nIdx, CandidateMgrGetLeader34_next);
        };
        int CandidateMgrGetMaxNum36_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgrGetMaxNum36_user(_this, CandidateMgrGetMaxNum36_next);
        };
        struct _candidate_info* CandidateMgrGetPatriarchGroup38_wrapper(struct CandidateMgr* _this, char byRace, _candidate_info::ClassType eType)
        {
           return CandidateMgrGetPatriarchGroup38_user(_this, byRace, eType, CandidateMgrGetPatriarchGroup38_next);
        };
        struct _candidate_info* CandidateMgrGetPatriarchGroupBySerial40_wrapper(struct CandidateMgr* _this, char byRace, unsigned int dwASerial)
        {
           return CandidateMgrGetPatriarchGroupBySerial40_user(_this, byRace, dwASerial, CandidateMgrGetPatriarchGroupBySerial40_next);
        };
        unsigned int CandidateMgrGetWinCnt42_wrapper(struct CandidateMgr* _this, char byRace, unsigned int dwAvatorSerial)
        {
           return CandidateMgrGetWinCnt42_user(_this, byRace, dwAvatorSerial, CandidateMgrGetWinCnt42_next);
        };
        void CandidateMgrInitCandidate44_wrapper(struct CandidateMgr* _this)
        {
           CandidateMgrInitCandidate44_user(_this, CandidateMgrInitCandidate44_next);
        };
        bool CandidateMgrInitialize46_wrapper(struct CandidateMgr* _this, int nMaxNum)
        {
           return CandidateMgrInitialize46_user(_this, nMaxNum, CandidateMgrInitialize46_next);
        };
        int CandidateMgrInsert_Candidate48_wrapper(struct CandidateMgr* _this, char* p)
        {
           return CandidateMgrInsert_Candidate48_user(_this, p, CandidateMgrInsert_Candidate48_next);
        };
        struct CandidateMgr* CandidateMgrInstance50_wrapper()
        {
           return CandidateMgrInstance50_user(CandidateMgrInstance50_next);
        };
        bool CandidateMgrIsRegistedAvator_152_wrapper(struct CandidateMgr* _this, char byRace, unsigned int dwAvatorSerial)
        {
           return CandidateMgrIsRegistedAvator_152_user(_this, byRace, dwAvatorSerial, CandidateMgrIsRegistedAvator_152_next);
        };
        bool CandidateMgrIsRegistedAvator_254_wrapper(struct CandidateMgr* _this, char byRace, char* wszName)
        {
           return CandidateMgrIsRegistedAvator_254_user(_this, byRace, wszName, CandidateMgrIsRegistedAvator_254_next);
        };
        bool CandidateMgrIsRegistedAvator_256_wrapper(struct CandidateMgr* _this, char byRace, unsigned int dwAvatorSerial)
        {
           return CandidateMgrIsRegistedAvator_256_user(_this, byRace, dwAvatorSerial, CandidateMgrIsRegistedAvator_256_next);
        };
        bool CandidateMgrLoadDatabase58_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgrLoadDatabase58_user(_this, CandidateMgrLoadDatabase58_next);
        };
        bool CandidateMgrLoadLeaderPreVersion60_wrapper(struct CandidateMgr* _this, char byRace)
        {
           return CandidateMgrLoadLeaderPreVersion60_user(_this, byRace, CandidateMgrLoadLeaderPreVersion60_next);
        };
        bool CandidateMgrLoadPatriarchGroup62_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgrLoadPatriarchGroup62_user(_this, CandidateMgrLoadPatriarchGroup62_next);
        };
        bool CandidateMgrRegist64_wrapper(struct CandidateMgr* _this, struct CPlayer* pOne)
        {
           return CandidateMgrRegist64_user(_this, pOne, CandidateMgrRegist64_next);
        };
        bool CandidateMgrRegist66_wrapper(struct CandidateMgr* _this, char byRace, struct _PVP_RANK_DATA* pData)
        {
           return CandidateMgrRegist66_user(_this, byRace, pData, CandidateMgrRegist66_next);
        };
        void CandidateMgrRelease68_wrapper(struct CandidateMgr* _this)
        {
           CandidateMgrRelease68_user(_this, CandidateMgrRelease68_next);
        };
        int CandidateMgrUpdate_ClassType70_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgrUpdate_ClassType70_user(_this, CandidateMgrUpdate_ClassType70_next);
        };
        int CandidateMgrUpdate_DischargePatriarch72_wrapper(struct CandidateMgr* _this, char* p)
        {
           return CandidateMgrUpdate_DischargePatriarch72_user(_this, p, CandidateMgrUpdate_DischargePatriarch72_next);
        };
        int CandidateMgrUpdate_Refund74_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgrUpdate_Refund74_user(_this, CandidateMgrUpdate_Refund74_next);
        };
        int CandidateMgrUpdate_RegistCandidate_2st76_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgrUpdate_RegistCandidate_2st76_user(_this, CandidateMgrUpdate_RegistCandidate_2st76_next);
        };
        int CandidateMgrUpdate_Score78_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgrUpdate_Score78_user(_this, CandidateMgrUpdate_Score78_next);
        };
        int CandidateMgrUpdate_VoteTime80_wrapper(struct CandidateMgr* _this, unsigned int dwSerial)
        {
           return CandidateMgrUpdate_VoteTime80_user(_this, dwSerial, CandidateMgrUpdate_VoteTime80_next);
        };
        void CandidateMgr__AddWinner82_wrapper(struct CandidateMgr* _this, char byRace, char byNum)
        {
           CandidateMgr__AddWinner82_user(_this, byRace, byNum, CandidateMgr__AddWinner82_next);
        };
        int CandidateMgr__SortByPvpPoint84_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgr__SortByPvpPoint84_user(_this, CandidateMgr__SortByPvpPoint84_next);
        };
        int CandidateMgr__SortByRank86_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgr__SortByRank86_user(_this, CandidateMgr__SortByRank86_next);
        };
        int CandidateMgr__SortByScore88_wrapper(struct CandidateMgr* _this)
        {
           return CandidateMgr__SortByScore88_user(_this, CandidateMgr__SortByScore88_next);
        };
        
        void CandidateMgrdtor_CandidateMgr90_wrapper(struct CandidateMgr* _this)
        {
           CandidateMgrdtor_CandidateMgr90_user(_this, CandidateMgrdtor_CandidateMgr90_next);
        };
        
        ::std::array<hook_record, 45> CandidateMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b38a0L,
                (LPVOID *)&CandidateMgrAddScore2_user,
                (LPVOID *)&CandidateMgrAddScore2_next,
                (LPVOID)cast_pointer_function(CandidateMgrAddScore2_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)(char, char*, char))&CandidateMgr::AddScore)
            },
            _hook_record {
                (LPVOID)0x1402b4870L,
                (LPVOID *)&CandidateMgrApplyPatriarchGroup4_user,
                (LPVOID *)&CandidateMgrApplyPatriarchGroup4_next,
                (LPVOID)cast_pointer_function(CandidateMgrApplyPatriarchGroup4_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)())&CandidateMgr::ApplyPatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1402b4c20L,
                (LPVOID *)&CandidateMgrAppointPatriarchGroup6_user,
                (LPVOID *)&CandidateMgrAppointPatriarchGroup6_next,
                (LPVOID)cast_pointer_function(CandidateMgrAppointPatriarchGroup6_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(struct CPlayer*, _candidate_info::ClassType))&CandidateMgr::AppointPatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1402b1020L,
                (LPVOID *)&CandidateMgrctor_CandidateMgr8_user,
                (LPVOID *)&CandidateMgrctor_CandidateMgr8_next,
                (LPVOID)cast_pointer_function(CandidateMgrctor_CandidateMgr8_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)())&CandidateMgr::ctor_CandidateMgr)
            },
            _hook_record {
                (LPVOID)0x1402b2260L,
                (LPVOID *)&CandidateMgrChangeState_1to210_user,
                (LPVOID *)&CandidateMgrChangeState_1to210_next,
                (LPVOID)cast_pointer_function(CandidateMgrChangeState_1to210_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)())&CandidateMgr::ChangeState_1to2)
            },
            _hook_record {
                (LPVOID)0x1402b4fb0L,
                (LPVOID *)&CandidateMgrCheckDBValidCharacter12_user,
                (LPVOID *)&CandidateMgrCheckDBValidCharacter12_next,
                (LPVOID)cast_pointer_function(CandidateMgrCheckDBValidCharacter12_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)(char))&CandidateMgr::CheckDBValidCharacter)
            },
            _hook_record {
                (LPVOID)0x1402b4960L,
                (LPVOID *)&CandidateMgrCompleteInsertCandidate14_user,
                (LPVOID *)&CandidateMgrCompleteInsertCandidate14_next,
                (LPVOID)cast_pointer_function(CandidateMgrCompleteInsertCandidate14_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)(char, char*))&CandidateMgr::CompleteInsertCandidate)
            },
            _hook_record {
                (LPVOID)0x1402b4ea0L,
                (LPVOID *)&CandidateMgrDischargePatriarchGroup16_user,
                (LPVOID *)&CandidateMgrDischargePatriarchGroup16_next,
                (LPVOID)cast_pointer_function(CandidateMgrDischargePatriarchGroup16_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(char, _candidate_info::ClassType))&CandidateMgr::DischargePatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1402b2f90L,
                (LPVOID *)&CandidateMgrFinalDecision18_user,
                (LPVOID *)&CandidateMgrFinalDecision18_next,
                (LPVOID)cast_pointer_function(CandidateMgrFinalDecision18_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)())&CandidateMgr::FinalDecision)
            },
            _hook_record {
                (LPVOID)0x1402b7eb0L,
                (LPVOID *)&CandidateMgrGetCandidate20_user,
                (LPVOID *)&CandidateMgrGetCandidate20_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetCandidate20_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char, unsigned int))&CandidateMgr::GetCandidate)
            },
            _hook_record {
                (LPVOID)0x1402b34a0L,
                (LPVOID *)&CandidateMgrGetCandidateBySerial22_user,
                (LPVOID *)&CandidateMgrGetCandidateBySerial22_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetCandidateBySerial22_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char, unsigned int))&CandidateMgr::GetCandidateBySerial)
            },
            _hook_record {
                (LPVOID)0x1402b7e90L,
                (LPVOID *)&CandidateMgrGetCandidateCnt_1st24_user,
                (LPVOID *)&CandidateMgrGetCandidateCnt_1st24_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetCandidateCnt_1st24_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)(char))&CandidateMgr::GetCandidateCnt_1st)
            },
            _hook_record {
                (LPVOID)0x1402c0530L,
                (LPVOID *)&CandidateMgrGetCandidateCnt_2st26_user,
                (LPVOID *)&CandidateMgrGetCandidateCnt_2st26_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetCandidateCnt_2st26_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)(char))&CandidateMgr::GetCandidateCnt_2st)
            },
            _hook_record {
                (LPVOID)0x1402b6480L,
                (LPVOID *)&CandidateMgrGetCandidate_2st28_user,
                (LPVOID *)&CandidateMgrGetCandidate_2st28_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetCandidate_2st28_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char, int))&CandidateMgr::GetCandidate_2st)
            },
            _hook_record {
                (LPVOID)0x1402b20a0L,
                (LPVOID *)&CandidateMgrGetEmpty30_user,
                (LPVOID *)&CandidateMgrGetEmpty30_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetEmpty30_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char))&CandidateMgr::GetEmpty)
            },
            _hook_record {
                (LPVOID)0x1402b2130L,
                (LPVOID *)&CandidateMgrGetEmptyPatriarchGroup32_user,
                (LPVOID *)&CandidateMgrGetEmptyPatriarchGroup32_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetEmptyPatriarchGroup32_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char))&CandidateMgr::GetEmptyPatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1402b64f0L,
                (LPVOID *)&CandidateMgrGetLeader34_user,
                (LPVOID *)&CandidateMgrGetLeader34_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetLeader34_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char, int))&CandidateMgr::GetLeader)
            },
            _hook_record {
                (LPVOID)0x1402b7e70L,
                (LPVOID *)&CandidateMgrGetMaxNum36_user,
                (LPVOID *)&CandidateMgrGetMaxNum36_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetMaxNum36_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::GetMaxNum)
            },
            _hook_record {
                (LPVOID)0x1402b32f0L,
                (LPVOID *)&CandidateMgrGetPatriarchGroup38_user,
                (LPVOID *)&CandidateMgrGetPatriarchGroup38_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetPatriarchGroup38_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char, _candidate_info::ClassType))&CandidateMgr::GetPatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1402b33d0L,
                (LPVOID *)&CandidateMgrGetPatriarchGroupBySerial40_user,
                (LPVOID *)&CandidateMgrGetPatriarchGroupBySerial40_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetPatriarchGroupBySerial40_wrapper),
                (LPVOID)cast_pointer_function((struct _candidate_info*(CandidateMgr::*)(char, unsigned int))&CandidateMgr::GetPatriarchGroupBySerial)
            },
            _hook_record {
                (LPVOID)0x1402b21c0L,
                (LPVOID *)&CandidateMgrGetWinCnt42_user,
                (LPVOID *)&CandidateMgrGetWinCnt42_next,
                (LPVOID)cast_pointer_function(CandidateMgrGetWinCnt42_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CandidateMgr::*)(char, unsigned int))&CandidateMgr::GetWinCnt)
            },
            _hook_record {
                (LPVOID)0x1402b4700L,
                (LPVOID *)&CandidateMgrInitCandidate44_user,
                (LPVOID *)&CandidateMgrInitCandidate44_next,
                (LPVOID)cast_pointer_function(CandidateMgrInitCandidate44_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)())&CandidateMgr::InitCandidate)
            },
            _hook_record {
                (LPVOID)0x1402b1200L,
                (LPVOID *)&CandidateMgrInitialize46_user,
                (LPVOID *)&CandidateMgrInitialize46_next,
                (LPVOID)cast_pointer_function(CandidateMgrInitialize46_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(int))&CandidateMgr::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402b39a0L,
                (LPVOID *)&CandidateMgrInsert_Candidate48_user,
                (LPVOID *)&CandidateMgrInsert_Candidate48_next,
                (LPVOID)cast_pointer_function(CandidateMgrInsert_Candidate48_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)(char*))&CandidateMgr::Insert_Candidate)
            },
            _hook_record {
                (LPVOID)0x1402b1140L,
                (LPVOID *)&CandidateMgrInstance50_user,
                (LPVOID *)&CandidateMgrInstance50_next,
                (LPVOID)cast_pointer_function(CandidateMgrInstance50_wrapper),
                (LPVOID)cast_pointer_function((struct CandidateMgr*(*)())&CandidateMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x1402b35e0L,
                (LPVOID *)&CandidateMgrIsRegistedAvator_152_user,
                (LPVOID *)&CandidateMgrIsRegistedAvator_152_next,
                (LPVOID)cast_pointer_function(CandidateMgrIsRegistedAvator_152_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(char, unsigned int))&CandidateMgr::IsRegistedAvator_1)
            },
            _hook_record {
                (LPVOID)0x1402b37a0L,
                (LPVOID *)&CandidateMgrIsRegistedAvator_254_user,
                (LPVOID *)&CandidateMgrIsRegistedAvator_254_next,
                (LPVOID)cast_pointer_function(CandidateMgrIsRegistedAvator_254_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(char, char*))&CandidateMgr::IsRegistedAvator_2)
            },
            _hook_record {
                (LPVOID)0x1402b36c0L,
                (LPVOID *)&CandidateMgrIsRegistedAvator_256_user,
                (LPVOID *)&CandidateMgrIsRegistedAvator_256_next,
                (LPVOID)cast_pointer_function(CandidateMgrIsRegistedAvator_256_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(char, unsigned int))&CandidateMgr::IsRegistedAvator_2)
            },
            _hook_record {
                (LPVOID)0x1402b1730L,
                (LPVOID *)&CandidateMgrLoadDatabase58_user,
                (LPVOID *)&CandidateMgrLoadDatabase58_next,
                (LPVOID)cast_pointer_function(CandidateMgrLoadDatabase58_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)())&CandidateMgr::LoadDatabase)
            },
            _hook_record {
                (LPVOID)0x1402b4690L,
                (LPVOID *)&CandidateMgrLoadLeaderPreVersion60_user,
                (LPVOID *)&CandidateMgrLoadLeaderPreVersion60_next,
                (LPVOID)cast_pointer_function(CandidateMgrLoadLeaderPreVersion60_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(char))&CandidateMgr::LoadLeaderPreVersion)
            },
            _hook_record {
                (LPVOID)0x1402b1b00L,
                (LPVOID *)&CandidateMgrLoadPatriarchGroup62_user,
                (LPVOID *)&CandidateMgrLoadPatriarchGroup62_next,
                (LPVOID)cast_pointer_function(CandidateMgrLoadPatriarchGroup62_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)())&CandidateMgr::LoadPatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1402b1ba0L,
                (LPVOID *)&CandidateMgrRegist64_user,
                (LPVOID *)&CandidateMgrRegist64_next,
                (LPVOID)cast_pointer_function(CandidateMgrRegist64_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(struct CPlayer*))&CandidateMgr::Regist)
            },
            _hook_record {
                (LPVOID)0x1402b1e70L,
                (LPVOID *)&CandidateMgrRegist66_user,
                (LPVOID *)&CandidateMgrRegist66_next,
                (LPVOID)cast_pointer_function(CandidateMgrRegist66_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateMgr::*)(char, struct _PVP_RANK_DATA*))&CandidateMgr::Regist)
            },
            _hook_record {
                (LPVOID)0x1402b1640L,
                (LPVOID *)&CandidateMgrRelease68_user,
                (LPVOID *)&CandidateMgrRelease68_next,
                (LPVOID)cast_pointer_function(CandidateMgrRelease68_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)())&CandidateMgr::Release)
            },
            _hook_record {
                (LPVOID)0x1402b3f90L,
                (LPVOID *)&CandidateMgrUpdate_ClassType70_user,
                (LPVOID *)&CandidateMgrUpdate_ClassType70_next,
                (LPVOID)cast_pointer_function(CandidateMgrUpdate_ClassType70_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::Update_ClassType)
            },
            _hook_record {
                (LPVOID)0x1402b3e80L,
                (LPVOID *)&CandidateMgrUpdate_DischargePatriarch72_user,
                (LPVOID *)&CandidateMgrUpdate_DischargePatriarch72_next,
                (LPVOID)cast_pointer_function(CandidateMgrUpdate_DischargePatriarch72_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)(char*))&CandidateMgr::Update_DischargePatriarch)
            },
            _hook_record {
                (LPVOID)0x1402b4480L,
                (LPVOID *)&CandidateMgrUpdate_Refund74_user,
                (LPVOID *)&CandidateMgrUpdate_Refund74_next,
                (LPVOID)cast_pointer_function(CandidateMgrUpdate_Refund74_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::Update_Refund)
            },
            _hook_record {
                (LPVOID)0x1402b3c30L,
                (LPVOID *)&CandidateMgrUpdate_RegistCandidate_2st76_user,
                (LPVOID *)&CandidateMgrUpdate_RegistCandidate_2st76_next,
                (LPVOID)cast_pointer_function(CandidateMgrUpdate_RegistCandidate_2st76_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::Update_RegistCandidate_2st)
            },
            _hook_record {
                (LPVOID)0x1402b4140L,
                (LPVOID *)&CandidateMgrUpdate_Score78_user,
                (LPVOID *)&CandidateMgrUpdate_Score78_next,
                (LPVOID)cast_pointer_function(CandidateMgrUpdate_Score78_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::Update_Score)
            },
            _hook_record {
                (LPVOID)0x1402b4360L,
                (LPVOID *)&CandidateMgrUpdate_VoteTime80_user,
                (LPVOID *)&CandidateMgrUpdate_VoteTime80_next,
                (LPVOID)cast_pointer_function(CandidateMgrUpdate_VoteTime80_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)(unsigned int))&CandidateMgr::Update_VoteTime)
            },
            _hook_record {
                (LPVOID)0x1402b2490L,
                (LPVOID *)&CandidateMgr__AddWinner82_user,
                (LPVOID *)&CandidateMgr__AddWinner82_next,
                (LPVOID)cast_pointer_function(CandidateMgr__AddWinner82_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)(char, char))&CandidateMgr::__AddWinner)
            },
            _hook_record {
                (LPVOID)0x1402b2ce0L,
                (LPVOID *)&CandidateMgr__SortByPvpPoint84_user,
                (LPVOID *)&CandidateMgr__SortByPvpPoint84_next,
                (LPVOID)cast_pointer_function(CandidateMgr__SortByPvpPoint84_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::__SortByPvpPoint)
            },
            _hook_record {
                (LPVOID)0x1402b2a40L,
                (LPVOID *)&CandidateMgr__SortByRank86_user,
                (LPVOID *)&CandidateMgr__SortByRank86_next,
                (LPVOID)cast_pointer_function(CandidateMgr__SortByRank86_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::__SortByRank)
            },
            _hook_record {
                (LPVOID)0x1402b27a0L,
                (LPVOID *)&CandidateMgr__SortByScore88_user,
                (LPVOID *)&CandidateMgr__SortByScore88_next,
                (LPVOID)cast_pointer_function(CandidateMgr__SortByScore88_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateMgr::*)())&CandidateMgr::__SortByScore)
            },
            _hook_record {
                (LPVOID)0x1402b10b0L,
                (LPVOID *)&CandidateMgrdtor_CandidateMgr90_user,
                (LPVOID *)&CandidateMgrdtor_CandidateMgr90_next,
                (LPVOID)cast_pointer_function(CandidateMgrdtor_CandidateMgr90_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateMgr::*)())&CandidateMgr::dtor_CandidateMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
