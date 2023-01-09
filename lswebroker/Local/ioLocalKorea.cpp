#include "../stdafx.h"
#include ".\iolocalkorea.h"
#include "../resource.h"
#include "../util/HttpManager.h"
#include "../MainFrm.h"
#include <strsafe.h>
#include "../StringManager/Safesprintf.h"
//#include "stringmanager\iostringmanager.h"
#include "../StringManager\ioStringManager.h"

ioLocalKorea::ioLocalKorea(void)
{
}

ioLocalKorea::~ioLocalKorea(void)
{
}

ioLocalManager::LocalType ioLocalKorea::GetType()
{
	return ioLocalManager::LCT_KOREA;
}

const char * ioLocalKorea::GetTextListFileName()
{
	return "text.txt";
}

const char * ioLocalKorea::GetMemTextList()
{
	return "|EXE_CMainFrame::OnCreate_1|\r\n\r\n�ν�Ʈ�簡�� �̹� ���� �� �Դϴ�.\r\n\r\n     ��ø� ��ٷ� �ּ���.\r\n\r\n\r\n\r\n  ��ð� ������ �������������\r\n\r\n   �������� �ٽ� ������ �ּ���.|"
		   "|EXE_CMainFrame::OnCreate_2|�ν�Ʈ�簡 ������Ʈ ���Դϴ�. ��ø� ��ٷ� �ּ���.|"
		   "|EXE_CMainFrame::ParseCmdAndStart_1|���ڰ��� �߸��Ǿ����ϴ�.\r\n����� �ٽ� �̿��� �ּ���.(%1)\r\n(������ȣ:104)|"
		   "|EXE_CMainFrame::ParseCmdAndStart_2|���۵����Ͱ��� �߸��Ǿ����ϴ�.\r\n����� �ٽ� �̿��� �ּ���.(%1/%2)\r\n(������ȣ:106)|"
		   "|EXE_CMainFrame::SetupAndStart_1|���Ӱ� ������ �������� �߸��Ǿ����ϴ�.\r\n����� �ٽ� �̿��� �ּ���.(%1)\r\n(������ȣ:105)|"
		   "|EXE_CSetupAndStart::SetupAndStartGame_1|���ڰ��� ����Ǿ����ϴ�.\r\n����� �ٽ� �̿��� �ּ���.(%1)\r\n(������ȣ:101)|"
		   "|EXE_CSetupAndStart::SetupAndStartGame_2|�ڵ�������Ʈ ��ġ�� �����Ͽ����ϴ�.\r\n����� �ٽ� �̿��� �ּ���.(%1:%2)\r\n(������ȣ:102)|"
		   "|EXE_CSetupAndStart::SetupAndStartGame_3|��ġ�������� ��ġ�� �����Ͽ����ϴ�.\r\n����� �ٽ� �̿��� �ּ���.(%1:%2)\r\n(������ȣ:103)|"
		   "|EXE_CSetupAndStart::SetupAndStartGame_4|�������� ������ ���ų� ������ ȥ���մϴ�.\r\n����� �ٽ� �̿��� �ּ���.(%1)\r\n(������ȣ:107)|"
		   "|EXE_ioErrorDlg::ShowErrorDlg_2|--- �ý��� ��� ---\r\n%1\r\n\r\n--- ���� ���� ---\r\n%2|"
		   "|EXE_SetupFolderDlg::OnBnClickedChangeFolder_1|�ν�Ʈ�簡�� ��ġ�� ������ ������ �ּ���.|"
		   "|EXE_SetupFolderDlg::OnBnClickedChangeFolder_2|��ġ ��θ��� ��� �ֽ��ϴ�.\r\n\r\n     �ٽ� ������ �ּ���.|"
		   "|EXE_SetupFolderDlg::OnBnClickedChangeFolder_3|��ġ ��δ� 100�ڸ� ���� �� �����ϴ�.\r\n\r\n              �ٽ� ������ �ּ���.|"
		   "|EXE_SetupFolderDlg::OnBnClickedChangeFolder_4|������ ���� �� ���� ����Դϴ�.\r\n\r\n       �ٽ� ������ �ּ���.|"
		   "|EXE_SetupFolderDlg::OnBnClickedSetup_1|�ν�Ʈ�簡 ��ġ �غ����Դϴ�. ��ø� ��ٷ��ּ���.|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_1|�α��� ���� ������ �Դϴ�(-1).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_2|���̵� �Ǵ� �н����� ���� ���� �߽��ϴ�(-2).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_3|���̵� �Ǵ� �н����尡 Ʋ���ϴ�(-3).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_4|ä�θ� ȸ��(-4).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_5|�������� ���� ���� �ʿ��մϴ�(-5).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_6|�˴ٿ��� ��� ����(0�� ~ 6��) �Դϴ�(-6).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_7|������ �˴ٿ��� ��� �����Դϴ�(-7).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_8|���� ���� �� �Դϴ�(-8).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_9|���� ���·� ���� ���� �Ұ� �Դϴ�(-9).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_10|�������� ���Ӽ��� �����ϴ�(-10).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_11|Ǯ ���� ���·� ���� ���� �Ұ�(-11).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_12|���� ����(-12)|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_13|���� ����(-13)|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_14|�α��� ���̺� ���� ���� �����ϴ�(-14).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_15|���� ���� ���� zone Ÿ�� �Դϴ�(-15).|"
		   "|EXE_ioLocalKorea::GetLoginResultPostData_16|���̵� Ȥ�� ��й�ȣ�� ��ϴ� �ٽ� �Է����ּ���.|";
}

bool ioLocalKorea::GetNewCmdLine( IN const char *szCmd, OUT char *szNewCmd, IN int iNewCmdSize )
{
	StringCbCopy( szNewCmd, iNewCmdSize, szCmd );
	return true;
}

bool ioLocalKorea::IsRightGameServerID( const CString &rszGameServerID )
{
	return true;
}

const char * ioLocalKorea::GetRegKey()
{
	return "Software\\SP2Client\\";
}

DWORD ioLocalKorea::GetResourceIDBack()
{
	return IDB_BACK;
}

DWORD ioLocalKorea::GetResourceIDChange()
{
	return IDB_CHANGEBTN;
}

DWORD ioLocalKorea::GetResourceIDSetup()
{
	return IDB_SETUPBTN;
}

DWORD ioLocalKorea::GetResourceIDErrorBack()
{
	return IDB_ERROR_BACK;
}

DWORD ioLocalKorea::GetResourceIDErrorExit()
{
	return IDB_EXITBTN;
}

DWORD ioLocalKorea::GetResourceIDErrorSolution()
{
	return IDB_SOLUTIONBTN;
}

const char * ioLocalKorea::GetErrorSolutionURL()
{
	return "http://www.lostsaga.com/common/rgfaq.asp?errnumber=%d";
}

void ioLocalKorea::SetRegKey( const char *szReg )
{
	// ��
}

void ioLocalKorea::SetStartURL( const char *szURL )
{
	// ��
}

bool ioLocalKorea::IsLoginDlg()
{
#ifdef SRC_KOR
	return true;
#endif
	return false;
}

bool ioLocalKorea::GetLoginResultPostData( OUT char *szError, IN int iErrorSize, const char *szURL, const char *szID, const char *szPW )
{
	bool bResult = false;

	// ��
	char szData[MAX_PATH] = {0,};
	char szReturn[2048] = {0,}; 
	char szTemp[2048] = {0, };

	strcpy(szData, "userID=");
	strcat(szData, szID);
	strcat(szData, "&");
	strcat(szData, "userPWD=");
	strcat(szData, szPW);

	if(g_HttpMgr.GetResultPostData(szURL, szData, szReturn, 1024, true))
	{
		char pos[2048] =  {0, };
 		memcpy(pos, szReturn, sizeof(szReturn));
		//�α��� �α� ���� ��ũ��Ʈ ����
		strtok(pos, "?");
		int iSize = strlen(pos) - 1;
		int nResult = atoi(pos + iSize);
		if(nResult == 0)
		{
			SafeSprintf( szError, sizeof( char )*MAX_PATH, STR(16));
			bResult = false;
		}
		else if(nResult == 1)
		{
			strcpy_s(szError, sizeof(szReturn), szReturn + 2 + iSize);
			bResult = true;
		}
		else if(nResult < 16)
		{
			int index = abs(nResult);
			SafeSprintf( szError, sizeof( char )*MAX_PATH, STR(index));
			bResult = false;
		}
	}

	return bResult;
}

const char * ioLocalKorea::GetFontName()
{
	return "����";
}

