#include<iostream>
#include<Windows.h>
#include"Header.h"
using namespace std;

/*The IUnknown Methods*///////////////////////////////////////
STDMETHODIMP cxClass:: QueryInterface(REFIID riid, void** ppv)
{
	if(riid==IID_IUnknown)
	{
		cxPrint("Returning pointer to IUnknown..");
		*ppv= static_cast<cxInterface*>(this);
	}else if (riid==IID_cxInterface)
	{
		cxPrint("Returning pointer to cxInterface..");
		*ppv= static_cast<cxInterface*>(this);
	}
	else
	{
		cxPrint("Error interface not found..");
		*ppv= NULL;
		return E_NOINTERFACE;
	}
	reinterpret_cast<IUnknown*>(*ppv)->AddRef();
	return S_OK;
}

STDMETHODIMP_(DWORD) cxClass:: AddRef()
{
	cxPrint("Increasing Reference Count");
	return InterlockedIncrement(&m_cRef);
}
STDMETHODIMP_(DWORD) cxClass:: Release()
{
	cxPrint("Releasing the Pointer...");
	if(InterlockedDecrement(&m_cRef)==0)
	{
		delete this;
		return 0;
	}
	return m_cRef;
}

/*cxClass Methods*/////////////////////////////////
cxClass::cxClass()
{
	cxPrint("Creating the cxClass...");
	m_cRef=0;
}
cxClass::~cxClass()
{
	cxPrint("Destroying the cxClass...");
}
STDMETHODIMP cxClass::cxPrint(const char* msg)
{
	cxPrint((const unsigned char*)msg);
	return S_OK;
}
STDMETHODIMP cxClass::cxPrint(const unsigned char* msg)
{
	cout<<"------------------------------------\n";
	cout<<msg<<endl;
	cout<<"------------------------------------\n";
	return S_OK;
}
IUnknown* CreateInstance()
{
	IUnknown* pIUnknown = static_cast<cxInterface*>(new cxClass);
	return pIUnknown;
}

void main()
{
	IUnknown* pIUnknown = CreateInstance();
	cxClass* pcxClass = NULL;
	pIUnknown->QueryInterface(IID_cxInterface,(void**)&pcxClass);
	pcxClass->cxPrint("This should print...");
	pcxClass->Release();
	int a;
	cin>>a;
}