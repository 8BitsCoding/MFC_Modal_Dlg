#pragma once


// newDlg 대화 상자

class newDlg : public CDialogEx
{
	DECLARE_DYNAMIC(newDlg)

public:
	newDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~newDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEW_DLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

private:
	int m_num;

public:
	void SetNum(int a_num) {
		m_num = a_num;
	}
	int GetNum() {
		return m_num;
	}
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedExitBtn();
};
