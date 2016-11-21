
// MouseClickDlg.h : 头文件
//
#include "DlgAbout.h"
#pragma once


// CMouseClickDlg 对话框
class CMouseClickDlg : public CDialogEx
{
// 构造
public:
	CMouseClickDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOUSECLICK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
