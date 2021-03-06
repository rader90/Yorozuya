#include <CActionPointSystemMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CActionPointSystemMgrctor_CActionPointSystemMgr2_ptr CActionPointSystemMgrctor_CActionPointSystemMgr2_next(nullptr);
        Info::CActionPointSystemMgrctor_CActionPointSystemMgr2_clbk CActionPointSystemMgrctor_CActionPointSystemMgr2_user(nullptr);
        
        Info::CActionPointSystemMgrCheck_Event_Status4_ptr CActionPointSystemMgrCheck_Event_Status4_next(nullptr);
        Info::CActionPointSystemMgrCheck_Event_Status4_clbk CActionPointSystemMgrCheck_Event_Status4_user(nullptr);
        
        Info::CActionPointSystemMgrCheck_Load_Event_Status6_ptr CActionPointSystemMgrCheck_Load_Event_Status6_next(nullptr);
        Info::CActionPointSystemMgrCheck_Load_Event_Status6_clbk CActionPointSystemMgrCheck_Load_Event_Status6_user(nullptr);
        
        Info::CActionPointSystemMgrCheck_Loop8_ptr CActionPointSystemMgrCheck_Loop8_next(nullptr);
        Info::CActionPointSystemMgrCheck_Loop8_clbk CActionPointSystemMgrCheck_Loop8_user(nullptr);
        
        Info::CActionPointSystemMgrGetEventStatus10_ptr CActionPointSystemMgrGetEventStatus10_next(nullptr);
        Info::CActionPointSystemMgrGetEventStatus10_clbk CActionPointSystemMgrGetEventStatus10_user(nullptr);
        
        Info::CActionPointSystemMgrInitialize12_ptr CActionPointSystemMgrInitialize12_next(nullptr);
        Info::CActionPointSystemMgrInitialize12_clbk CActionPointSystemMgrInitialize12_user(nullptr);
        
        Info::CActionPointSystemMgrInstance14_ptr CActionPointSystemMgrInstance14_next(nullptr);
        Info::CActionPointSystemMgrInstance14_clbk CActionPointSystemMgrInstance14_user(nullptr);
        
        Info::CActionPointSystemMgrIsPointReset16_ptr CActionPointSystemMgrIsPointReset16_next(nullptr);
        Info::CActionPointSystemMgrIsPointReset16_clbk CActionPointSystemMgrIsPointReset16_user(nullptr);
        
        Info::CActionPointSystemMgrIsSystemEnable18_ptr CActionPointSystemMgrIsSystemEnable18_next(nullptr);
        Info::CActionPointSystemMgrIsSystemEnable18_clbk CActionPointSystemMgrIsSystemEnable18_user(nullptr);
        
        Info::CActionPointSystemMgrLoad_Event_INI20_ptr CActionPointSystemMgrLoad_Event_INI20_next(nullptr);
        Info::CActionPointSystemMgrLoad_Event_INI20_clbk CActionPointSystemMgrLoad_Event_INI20_user(nullptr);
        
        Info::CActionPointSystemMgrSetEventStatus22_ptr CActionPointSystemMgrSetEventStatus22_next(nullptr);
        Info::CActionPointSystemMgrSetEventStatus22_clbk CActionPointSystemMgrSetEventStatus22_user(nullptr);
        
        
        Info::CActionPointSystemMgrdtor_CActionPointSystemMgr24_ptr CActionPointSystemMgrdtor_CActionPointSystemMgr24_next(nullptr);
        Info::CActionPointSystemMgrdtor_CActionPointSystemMgr24_clbk CActionPointSystemMgrdtor_CActionPointSystemMgr24_user(nullptr);
        
        
        void CActionPointSystemMgrctor_CActionPointSystemMgr2_wrapper(struct CActionPointSystemMgr* _this)
        {
           CActionPointSystemMgrctor_CActionPointSystemMgr2_user(_this, CActionPointSystemMgrctor_CActionPointSystemMgr2_next);
        };
        void CActionPointSystemMgrCheck_Event_Status4_wrapper(struct CActionPointSystemMgr* _this)
        {
           CActionPointSystemMgrCheck_Event_Status4_user(_this, CActionPointSystemMgrCheck_Event_Status4_next);
        };
        void CActionPointSystemMgrCheck_Load_Event_Status6_wrapper(struct CActionPointSystemMgr* _this, char byActionCode, struct _action_point_system_ini* pIni)
        {
           CActionPointSystemMgrCheck_Load_Event_Status6_user(_this, byActionCode, pIni, CActionPointSystemMgrCheck_Load_Event_Status6_next);
        };
        void CActionPointSystemMgrCheck_Loop8_wrapper(struct CActionPointSystemMgr* _this)
        {
           CActionPointSystemMgrCheck_Loop8_user(_this, CActionPointSystemMgrCheck_Loop8_next);
        };
        char CActionPointSystemMgrGetEventStatus10_wrapper(struct CActionPointSystemMgr* _this, char byActionCode)
        {
           return CActionPointSystemMgrGetEventStatus10_user(_this, byActionCode, CActionPointSystemMgrGetEventStatus10_next);
        };
        bool CActionPointSystemMgrInitialize12_wrapper(struct CActionPointSystemMgr* _this)
        {
           return CActionPointSystemMgrInitialize12_user(_this, CActionPointSystemMgrInitialize12_next);
        };
        struct CActionPointSystemMgr* CActionPointSystemMgrInstance14_wrapper()
        {
           return CActionPointSystemMgrInstance14_user(CActionPointSystemMgrInstance14_next);
        };
        bool CActionPointSystemMgrIsPointReset16_wrapper(struct CActionPointSystemMgr* _this, char byActionCode)
        {
           return CActionPointSystemMgrIsPointReset16_user(_this, byActionCode, CActionPointSystemMgrIsPointReset16_next);
        };
        bool CActionPointSystemMgrIsSystemEnable18_wrapper(struct CActionPointSystemMgr* _this, char byActionCode)
        {
           return CActionPointSystemMgrIsSystemEnable18_user(_this, byActionCode, CActionPointSystemMgrIsSystemEnable18_next);
        };
        void CActionPointSystemMgrLoad_Event_INI20_wrapper(struct CActionPointSystemMgr* _this, struct _action_point_system_ini* pIni, uint16_t wIndex)
        {
           CActionPointSystemMgrLoad_Event_INI20_user(_this, pIni, wIndex, CActionPointSystemMgrLoad_Event_INI20_next);
        };
        void CActionPointSystemMgrSetEventStatus22_wrapper(struct CActionPointSystemMgr* _this, char byActionCode, char byStatus)
        {
           CActionPointSystemMgrSetEventStatus22_user(_this, byActionCode, byStatus, CActionPointSystemMgrSetEventStatus22_next);
        };
        
        void CActionPointSystemMgrdtor_CActionPointSystemMgr24_wrapper(struct CActionPointSystemMgr* _this)
        {
           CActionPointSystemMgrdtor_CActionPointSystemMgr24_user(_this, CActionPointSystemMgrdtor_CActionPointSystemMgr24_next);
        };
        
        ::std::array<hook_record, 12> CActionPointSystemMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1404110f0L,
                (LPVOID *)&CActionPointSystemMgrctor_CActionPointSystemMgr2_user,
                (LPVOID *)&CActionPointSystemMgrctor_CActionPointSystemMgr2_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrctor_CActionPointSystemMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CActionPointSystemMgr::*)())&CActionPointSystemMgr::ctor_CActionPointSystemMgr)
            },
            _hook_record {
                (LPVOID)0x140411380L,
                (LPVOID *)&CActionPointSystemMgrCheck_Event_Status4_user,
                (LPVOID *)&CActionPointSystemMgrCheck_Event_Status4_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrCheck_Event_Status4_wrapper),
                (LPVOID)cast_pointer_function((void(CActionPointSystemMgr::*)())&CActionPointSystemMgr::Check_Event_Status)
            },
            _hook_record {
                (LPVOID)0x140411250L,
                (LPVOID *)&CActionPointSystemMgrCheck_Load_Event_Status6_user,
                (LPVOID *)&CActionPointSystemMgrCheck_Load_Event_Status6_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrCheck_Load_Event_Status6_wrapper),
                (LPVOID)cast_pointer_function((void(CActionPointSystemMgr::*)(char, struct _action_point_system_ini*))&CActionPointSystemMgr::Check_Load_Event_Status)
            },
            _hook_record {
                (LPVOID)0x1404114e0L,
                (LPVOID *)&CActionPointSystemMgrCheck_Loop8_user,
                (LPVOID *)&CActionPointSystemMgrCheck_Loop8_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrCheck_Loop8_wrapper),
                (LPVOID)cast_pointer_function((void(CActionPointSystemMgr::*)())&CActionPointSystemMgr::Check_Loop)
            },
            _hook_record {
                (LPVOID)0x14007b880L,
                (LPVOID *)&CActionPointSystemMgrGetEventStatus10_user,
                (LPVOID *)&CActionPointSystemMgrGetEventStatus10_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrGetEventStatus10_wrapper),
                (LPVOID)cast_pointer_function((char(CActionPointSystemMgr::*)(char))&CActionPointSystemMgr::GetEventStatus)
            },
            _hook_record {
                (LPVOID)0x140411150L,
                (LPVOID *)&CActionPointSystemMgrInitialize12_user,
                (LPVOID *)&CActionPointSystemMgrInitialize12_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrInitialize12_wrapper),
                (LPVOID)cast_pointer_function((bool(CActionPointSystemMgr::*)())&CActionPointSystemMgr::Initialize)
            },
            _hook_record {
                (LPVOID)0x14007b8b0L,
                (LPVOID *)&CActionPointSystemMgrInstance14_user,
                (LPVOID *)&CActionPointSystemMgrInstance14_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrInstance14_wrapper),
                (LPVOID)cast_pointer_function((struct CActionPointSystemMgr*(*)())&CActionPointSystemMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x14007c190L,
                (LPVOID *)&CActionPointSystemMgrIsPointReset16_user,
                (LPVOID *)&CActionPointSystemMgrIsPointReset16_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrIsPointReset16_wrapper),
                (LPVOID)cast_pointer_function((bool(CActionPointSystemMgr::*)(char))&CActionPointSystemMgr::IsPointReset)
            },
            _hook_record {
                (LPVOID)0x14007c1c0L,
                (LPVOID *)&CActionPointSystemMgrIsSystemEnable18_user,
                (LPVOID *)&CActionPointSystemMgrIsSystemEnable18_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrIsSystemEnable18_wrapper),
                (LPVOID)cast_pointer_function((bool(CActionPointSystemMgr::*)(char))&CActionPointSystemMgr::IsSystemEnable)
            },
            _hook_record {
                (LPVOID)0x140411520L,
                (LPVOID *)&CActionPointSystemMgrLoad_Event_INI20_user,
                (LPVOID *)&CActionPointSystemMgrLoad_Event_INI20_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrLoad_Event_INI20_wrapper),
                (LPVOID)cast_pointer_function((void(CActionPointSystemMgr::*)(struct _action_point_system_ini*, uint16_t))&CActionPointSystemMgr::Load_Event_INI)
            },
            _hook_record {
                (LPVOID)0x140411e30L,
                (LPVOID *)&CActionPointSystemMgrSetEventStatus22_user,
                (LPVOID *)&CActionPointSystemMgrSetEventStatus22_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrSetEventStatus22_wrapper),
                (LPVOID)cast_pointer_function((void(CActionPointSystemMgr::*)(char, char))&CActionPointSystemMgr::SetEventStatus)
            },
            _hook_record {
                (LPVOID)0x140411140L,
                (LPVOID *)&CActionPointSystemMgrdtor_CActionPointSystemMgr24_user,
                (LPVOID *)&CActionPointSystemMgrdtor_CActionPointSystemMgr24_next,
                (LPVOID)cast_pointer_function(CActionPointSystemMgrdtor_CActionPointSystemMgr24_wrapper),
                (LPVOID)cast_pointer_function((void(CActionPointSystemMgr::*)())&CActionPointSystemMgr::dtor_CActionPointSystemMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
