// CSonDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Testing.h"
#include "CSonDlg.h"
#include "afxdialogex.h"


// CSonDlg 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg, CDialogEx)

CSonDlg::CSonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CSonDlg::~CSonDlg()
{
}

void CSonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSonDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CSonDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CSonDlg 메시지 처리기

#include "TestingDlg.h"

void CSonDlg::OnBnClickedButton1()
{
	CTestingDlg* p = (CTestingDlg*)GetParent();
	CString msg;
	GetDlgItemText(IDC_EDIT1, msg);
	if (!msg.IsEmpty()) {
		p->m_List1.AddString(msg);
	}

}


void CSonDlg::OnBnClickedButton2()
{
	CString cha;
	GetDlgItemText(IDC_EDIT2, cha);
	SetWindowText(cha);
}
