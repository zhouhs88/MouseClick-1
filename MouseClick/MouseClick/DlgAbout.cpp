// DlgAbout.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MouseClick.h"
#include "DlgAbout.h"
#include "afxdialogex.h"


// DlgAbout �Ի���

IMPLEMENT_DYNAMIC(DlgAbout, CDialog)

DlgAbout::DlgAbout(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_ABOUTBOX, pParent)
{

}

DlgAbout::~DlgAbout()
{
}

void DlgAbout::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DlgAbout, CDialog)
END_MESSAGE_MAP()


// DlgAbout ��Ϣ�������
