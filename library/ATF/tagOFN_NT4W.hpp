// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HINSTANCE__.hpp"
#include "HWND__.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    struct tagOFN_NT4W
    {
        unsigned int lStructSize;
        HWND__ *hwndOwner;
        HINSTANCE__ *hInstance;
        const wchar_t *lpstrFilter;
        wchar_t *lpstrCustomFilter;
        unsigned int nMaxCustFilter;
        unsigned int nFilterIndex;
        wchar_t *lpstrFile;
        unsigned int nMaxFile;
        wchar_t *lpstrFileTitle;
        unsigned int nMaxFileTitle;
        const wchar_t *lpstrInitialDir;
        const wchar_t *lpstrTitle;
        unsigned int Flags;
        unsigned __int16 nFileOffset;
        unsigned __int16 nFileExtension;
        const wchar_t *lpstrDefExt;
        __int64 lCustData;
        unsigned __int64 (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        const wchar_t *lpTemplateName;
    };
END_ATF_NAMESPACE