// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    namespace US
    {
        struct AbstractThreadPoolVtbl
        {
            void *(WINAPIV *__vecDelDtor)(struct AbstractThreadPool *_this, unsigned int);
            void (WINAPIV *NotifyTerminate)(struct AbstractThreadPool *_this, struct AbstractThread *);
        };
    }; // end namespace US
END_ATF_NAMESPACE
