#include<Windows.h>
#include"Source_h.h"

class cxClass : public cxInterface
{
public:
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv);
	STDMETHOD_(DWORD,AddRef)();
	STDMETHOD_(DWORD,Release)();
	STDMETHOD(cxPrint)(const unsigned char* msg);
	STDMETHOD(cxPrint)(const char* msg);
	cxClass();
	~cxClass();
private:
	long m_cRef;
};