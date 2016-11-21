// DlgAbout.cpp : 实现文件
//

#include "stdafx.h"
#include "MouseClick.h"
#include "DlgAbout.h"
#include "afxdialogex.h"


// DlgAbout 对话框

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


// DlgAbout 消息处理程序
