// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_SEC_WINNT_AUTH_IDENTITY_A.hpp>


START_ATF_NAMESPACE
    struct _RPC_HTTP_TRANSPORT_CREDENTIALS_A
    {
        _SEC_WINNT_AUTH_IDENTITY_A *TransportCredentials;
        unsigned int Flags;
        unsigned int AuthenticationTarget;
        unsigned int NumberOfAuthnSchemes;
        unsigned int *AuthnSchemes;
        char *ServerCertificateSubject;
    };
END_ATF_NAMESPACE
