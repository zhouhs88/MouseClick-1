#pragma once


// DlgAbout 对话框

class DlgAbout : public CDialog
{
	DECLARE_DYNAMIC(DlgAbout)

public:
	DlgAbout(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DlgAbout();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
