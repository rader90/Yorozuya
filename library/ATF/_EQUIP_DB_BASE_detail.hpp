// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_EQUIP_DB_BASE_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_EQUIP_DB_BASEInit2_ptr _EQUIP_DB_BASEInit2_next(nullptr);
        info::_EQUIP_DB_BASEInit2_clbk _EQUIP_DB_BASEInit2_user(nullptr);
        info::_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_ptr _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_next(nullptr);
        info::_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_clbk _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_user(nullptr);
        
        info::_EQUIP_DB_BASE___EMBELLISH_LISTInit2_ptr _EQUIP_DB_BASE___EMBELLISH_LISTInit2_next(nullptr);
        info::_EQUIP_DB_BASE___EMBELLISH_LISTInit2_clbk _EQUIP_DB_BASE___EMBELLISH_LISTInit2_user(nullptr);
        info::_EQUIP_DB_BASE___EMBELLISH_LISTRelease4_ptr _EQUIP_DB_BASE___EMBELLISH_LISTRelease4_next(nullptr);
        info::_EQUIP_DB_BASE___EMBELLISH_LISTRelease4_clbk _EQUIP_DB_BASE___EMBELLISH_LISTRelease4_user(nullptr);
        info::_EQUIP_DB_BASE___EMBELLISH_LISTSet6_ptr _EQUIP_DB_BASE___EMBELLISH_LISTSet6_next(nullptr);
        info::_EQUIP_DB_BASE___EMBELLISH_LISTSet6_clbk _EQUIP_DB_BASE___EMBELLISH_LISTSet6_user(nullptr);
        info::_EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_ptr _EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_next(nullptr);
        info::_EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_clbk _EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_user(nullptr);
        
        void _EQUIP_DB_BASEInit2_wrapper(struct _EQUIP_DB_BASE* _this)
        {
           _EQUIP_DB_BASEInit2_user(_this, _EQUIP_DB_BASEInit2_next);
        };
        void _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_wrapper(struct _EQUIP_DB_BASE* _this)
        {
           _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_user(_this, _EQUIP_DB_BASEctor__EQUIP_DB_BASE4_next);
        };
        
        void _EQUIP_DB_BASE___EMBELLISH_LISTInit2_wrapper(struct _EQUIP_DB_BASE::_EMBELLISH_LIST* _this)
        {
           _EQUIP_DB_BASE___EMBELLISH_LISTInit2_user(_this, _EQUIP_DB_BASE___EMBELLISH_LISTInit2_next);
        };
        bool _EQUIP_DB_BASE___EMBELLISH_LISTRelease4_wrapper(struct _EQUIP_DB_BASE::_EMBELLISH_LIST* _this)
        {
           return _EQUIP_DB_BASE___EMBELLISH_LISTRelease4_user(_this, _EQUIP_DB_BASE___EMBELLISH_LISTRelease4_next);
        };
        bool _EQUIP_DB_BASE___EMBELLISH_LISTSet6_wrapper(struct _EQUIP_DB_BASE::_EMBELLISH_LIST* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           return _EQUIP_DB_BASE___EMBELLISH_LISTSet6_user(_this, pItem, _EQUIP_DB_BASE___EMBELLISH_LISTSet6_next);
        };
        void _EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_wrapper(struct _EQUIP_DB_BASE::_EMBELLISH_LIST* _this)
        {
           _EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_user(_this, _EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_next);
        };
        
        hook_record _EQUIP_DB_BASE_functions[] = {
        {   (LPVOID)0x140075b90L,
            (LPVOID *)&_EQUIP_DB_BASEInit2_user,
            (LPVOID *)&_EQUIP_DB_BASEInit2_next,
            (LPVOID)cast_pointer_function(_EQUIP_DB_BASEInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_EQUIP_DB_BASE::*)())&_EQUIP_DB_BASE::Init) },
        {   (LPVOID)0x140075a10L,
            (LPVOID *)&_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_user,
            (LPVOID *)&_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_next,
            (LPVOID)cast_pointer_function(_EQUIP_DB_BASEctor__EQUIP_DB_BASE4_wrapper),
            (LPVOID)cast_pointer_function((void(_EQUIP_DB_BASE::*)())&_EQUIP_DB_BASE::ctor__EQUIP_DB_BASE) },
        
        {   (LPVOID)0x140075ad0L,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTInit2_user,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTInit2_next,
            (LPVOID)cast_pointer_function(_EQUIP_DB_BASE___EMBELLISH_LISTInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_EQUIP_DB_BASE::_EMBELLISH_LIST::*)())&_EQUIP_DB_BASE::_EMBELLISH_LIST::Init) },
        {   (LPVOID)0x140120730L,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTRelease4_user,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTRelease4_next,
            (LPVOID)cast_pointer_function(_EQUIP_DB_BASE___EMBELLISH_LISTRelease4_wrapper),
            (LPVOID)cast_pointer_function((bool(_EQUIP_DB_BASE::_EMBELLISH_LIST::*)())&_EQUIP_DB_BASE::_EMBELLISH_LIST::Release) },
        {   (LPVOID)0x140120020L,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTSet6_user,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTSet6_next,
            (LPVOID)cast_pointer_function(_EQUIP_DB_BASE___EMBELLISH_LISTSet6_wrapper),
            (LPVOID)cast_pointer_function((bool(_EQUIP_DB_BASE::_EMBELLISH_LIST::*)(struct _STORAGE_LIST::_db_con*))&_EQUIP_DB_BASE::_EMBELLISH_LIST::Set) },
        {   (LPVOID)0x140075a80L,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_user,
            (LPVOID *)&_EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_next,
            (LPVOID)cast_pointer_function(_EQUIP_DB_BASE___EMBELLISH_LISTctor__EMBELLISH_LIST8_wrapper),
            (LPVOID)cast_pointer_function((void(_EQUIP_DB_BASE::_EMBELLISH_LIST::*)())&_EQUIP_DB_BASE::_EMBELLISH_LIST::ctor__EMBELLISH_LIST) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE