#pragma once


// DlgAbout �Ի���

class DlgAbout : public CDialog
{
	DECLARE_DYNAMIC(DlgAbout)

public:
	DlgAbout(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgAbout();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
