

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sat Jun 14 17:02:58 2014
 */
/* Compiler settings for Source.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Source_h_h__
#define __Source_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __cxInterface_FWD_DEFINED__
#define __cxInterface_FWD_DEFINED__
typedef interface cxInterface cxInterface;

#endif 	/* __cxInterface_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __cxInterface_INTERFACE_DEFINED__
#define __cxInterface_INTERFACE_DEFINED__

/* interface cxInterface */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_cxInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AFD0DA5D-DEEF-4005-A214-E1C0800C544C")
    cxInterface : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE cxPrint( 
            const unsigned char *msg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct cxInterfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            cxInterface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            cxInterface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            cxInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *cxPrint )( 
            cxInterface * This,
            const unsigned char *msg);
        
        END_INTERFACE
    } cxInterfaceVtbl;

    interface cxInterface
    {
        CONST_VTBL struct cxInterfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define cxInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define cxInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define cxInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define cxInterface_cxPrint(This,msg)	\
    ( (This)->lpVtbl -> cxPrint(This,msg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __cxInterface_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


