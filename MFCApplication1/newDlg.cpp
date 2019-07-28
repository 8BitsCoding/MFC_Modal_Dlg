// newDlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "newDlg.h"
#include "afxdialogex.h"


// newDlg 대화 상자

IMPLEMENT_DYNAMIC(newDlg, CDialogEx)

newDlg::newDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NEW_DLG, pParent)
{

}

newDlg::~newDlg()
{
}

void newDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(newDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &newDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_EXIT_BTN, &newDlg::OnBnClickedExitBtn)
END_MESSAGE_MAP()


// newDlg 메시지 처리기


BOOL newDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	SetDlgItemInt(IDC_CH_NUM_EDIT, m_num);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void newDlg::OnBnClickedOk()
{
	m_num = GetDlgItemInt(IDC_CH_NUM_EDIT);

	CDialogEx::OnOK();
}


void newDlg::OnBnClickedExitBtn()
{
	EndDialog(20);
}
