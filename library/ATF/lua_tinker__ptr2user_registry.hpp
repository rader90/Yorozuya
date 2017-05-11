// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "lua_tinker__ptr2user_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::ptr2user<CMonster>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::ptr2user<CMonster>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__ptr2user_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::ptr2user<CLuaSignalReActor>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::ptr2user<CLuaSignalReActor>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__ptr2user_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::ptr2user<CLuaEventNode>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::ptr2user<CLuaEventNode>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__ptr2user_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::ptr2user<CLuaEventMgr>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::ptr2user<CLuaEventMgr>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "lua_tinker__ptr2user_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class lua_tinker::ptr2user<CLuaScript>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : lua_tinker::detaillua_tinker::ptr2user<CLuaScript>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE