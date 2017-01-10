#if !defined(AFX_RLLANGUAGE_H__BAB71C23_8BAB_4648_AFC2_B993FF97EB19__INCLUDED_)
#define AFX_RLLANGUAGE_H__BAB71C23_8BAB_4648_AFC2_B993FF97EB19__INCLUDED_

enum { 
	D_CONNECT = 0,
	D_YOUR_ID,
	D_CLIENT,
	D_OPERATOR,
	D_CLIENT_ID_NOT_PROVIDED,
	D_CLIENT_ID,
	D_VIEW_ONLY,
	D_PCNotFound,
	D_REMOTEPC_CLOSE,
	D_WARN_DIFF_VERSIONS,
	D_ACCEPT,
	D_REJECT,
	D_ACCEPT_CONN_TEXT,
	D_REMEMBER_MY_ANSWER,
	D_VIEW_SCREEN,
	D_REMOTE_CONTROL,
	D_ENABLE_FS,
	D_AUDIO_CHAT,
	D_RDP_SESSION,
	D_ENABLE_INPUT,
	D_ACCESSREJECTED,
	D_WAITING_AUTHORIZATION,
	D_SESSION_INACTIVE,
	D_ACCESS_PERMISSIONS,
	D_SETTINGS,
	D_CONTACT_BOOK,
	D_EXIT,
	D_SERVICE,
	D_INSTALL,
	D_START,
	D_STOP,
	D_REMOVE,
	D_ADD,
	D_EDIT,
	D_SETTINGS_COMMON,
	D_SETTINGS_NETWORK,
	D_REQUEST_ROUTER,
	D_WARN_FULL_SCREEN,
	D_LOGGING_FOR_DEBUG,
	D_RUN_UNDER_SYSTEM,
	D_PROTECT_SETTINGS,
	D_OFF_DESKTOP_BACKGROUND,
	D_OFF_DESKTOP_COMPOSITION,
	D_OFF_DESKTOP_EFFECTS,
	D_SHOW_HINTS,
	D_LOCAL_CURSOR_SHAPES,
	D_REMOTE_CURSOR_SHAPES,
	D_ACCESS_FILES_CUR_USER,
	D_START_CLIENT,
	D_WAIT_FOR_SESSION,
	D_CREATE_SESSION,
	D_COMPUTER_BUSY,
	D_EXCEED_SESSIONS_VIEWER,
	D_BUY_LICENSE,
	D__COUNT
};


class RLLanguages  
{
public:
	RLLanguages();
	virtual ~RLLanguages();

	void Select(int lang);
	CStringW GetValue(int key);
	LPCSTR   GetValueA(int key);
	static LANGID GetLangByIndex(int index);
	static int GetLangIndex(LANGID langId);
	static LANGID GetUserDefaultUILanguage();
	static int GetCountLang();
	static LPCSTR GetLangName(int index);

	bool IsDefaultLang() { return (m_iLang==0); }
	void SetDlgItemsText(HWND hDlg, UINT* dlgIds, UINT* strIds);

private:
	static CStringW ConvToUTF16(LPCSTR src, int codepage);
	
	int m_iLang;

	CStringW m_valuesW[D__COUNT];
	LPCSTR   m_valuesA[D__COUNT];
};

extern RLLanguages rlLanguages;

#endif // !defined(AFX_RLLANGUAGE_H__BAB71C23_8BAB_4648_AFC2_B993FF97EB19__INCLUDED_)
