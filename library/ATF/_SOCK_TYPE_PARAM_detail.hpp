// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_SOCK_TYPE_PARAM_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_ptr _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_next(nullptr);
        info::_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_clbk _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_user(nullptr);
        
        void _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_wrapper(struct _SOCK_TYPE_PARAM* _this)
        {
           _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_user(_this, _SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_next);
        };
        
        hook_record _SOCK_TYPE_PARAM_functions[] = {
        {   (LPVOID)0x140204d40L,
            (LPVOID *)&_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_user,
            (LPVOID *)&_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_next,
            (LPVOID)cast_pointer_function(_SOCK_TYPE_PARAMctor__SOCK_TYPE_PARAM2_wrapper),
            (LPVOID)cast_pointer_function((void(_SOCK_TYPE_PARAM::*)())&_SOCK_TYPE_PARAM::ctor__SOCK_TYPE_PARAM) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE