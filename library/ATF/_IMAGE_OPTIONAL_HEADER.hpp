// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_IMAGE_DATA_DIRECTORY.hpp"


START_ATF_NAMESPACE
    struct _IMAGE_OPTIONAL_HEADER
    {
        unsigned __int16 Magic;
        char MajorLinkerVersion;
        char MinorLinkerVersion;
        unsigned int SizeOfCode;
        unsigned int SizeOfInitializedData;
        unsigned int SizeOfUninitializedData;
        unsigned int AddressOfEntryPoint;
        unsigned int BaseOfCode;
        unsigned int BaseOfData;
        unsigned int ImageBase;
        unsigned int SectionAlignment;
        unsigned int FileAlignment;
        unsigned __int16 MajorOperatingSystemVersion;
        unsigned __int16 MinorOperatingSystemVersion;
        unsigned __int16 MajorImageVersion;
        unsigned __int16 MinorImageVersion;
        unsigned __int16 MajorSubsystemVersion;
        unsigned __int16 MinorSubsystemVersion;
        unsigned int Win32VersionValue;
        unsigned int SizeOfImage;
        unsigned int SizeOfHeaders;
        unsigned int CheckSum;
        unsigned __int16 Subsystem;
        unsigned __int16 DllCharacteristics;
        unsigned int SizeOfStackReserve;
        unsigned int SizeOfStackCommit;
        unsigned int SizeOfHeapReserve;
        unsigned int SizeOfHeapCommit;
        unsigned int LoaderFlags;
        unsigned int NumberOfRvaAndSizes;
        _IMAGE_DATA_DIRECTORY DataDirectory[16];
    };
END_ATF_NAMESPACE