
// MouseClick.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "DlgAbout.h"


// CMouseClickApp: 
// �йش����ʵ�֣������ MouseClick.cpp
//

class CMouseClickApp : public CWinApp
{
public:
	CMouseClickApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMouseClickApp theApp;