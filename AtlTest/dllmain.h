// dllmain.h : 模块类的声明。

class CAtlTestModule : public ATL::CAtlDllModuleT< CAtlTestModule >
{
public :
	DECLARE_LIBID(LIBID_AtlTestLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLTEST, "{0200188E-85CF-4718-B2E0-FBBFCACE848C}")
};

extern class CAtlTestModule _AtlModule;
