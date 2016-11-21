
// MouseClickDlg.h : ͷ�ļ�
//
#include "DlgAbout.h"
#pragma once


// CMouseClickDlg �Ի���
class CMouseClickDlg : public CDialogEx
{
// ����
public:
	CMouseClickDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOUSECLICK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int m_time;
	afx_msg void OnClickedButtonStart();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	void LeftClick();
//	CString m_cnt;
	int m_cnt;
//	afx_msg void OnEnKillfocusEditTime();
//	afx_msg void OnEnChangeEditTime();
	afx_msg void OnKillfocusEditTime();
	afx_msg void OnAbout();
};
