// FistClass.cpp : CFistClass 的实现

#include "stdafx.h"
#include "FistClass.h"


// CFistClass



STDMETHODIMP CFistClass::Add(LONG para1, LONG* result)
{
	// TODO: 在此添加实现代码
	*result = para1*2;
	return S_OK;
}
