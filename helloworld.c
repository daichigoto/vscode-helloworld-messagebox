/*
 * Reference:
 *    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-winmain
 */
#include <windows.h>

void
check_ret(int retCode)
{
  LPCTSTR lpText;
  switch(retCode) {
    case IDOK:
      lpText = "「OK」ボタンが押されました。";
      break;
    case IDCANCEL:
      lpText = "「Cancel」ボタンが押されました。";
      break;
    case IDABORT:
      lpText = "「Abort」ボタンが押されました。";
      break;
    case IDRETRY:
      lpText = "「Retry」ボタンが押されました。";
      break;
    case IDIGNORE:
      lpText = "「Ignore」ボタンが押されました。";
      break;
    case IDYES:
      lpText = "「Yes」ボタンが押されました。";
      break;
    case IDNO:
      lpText = "「No」ボタンが押されました。";
      break;
    case IDTRYAGAIN:
      lpText = "「Try Again」ボタンが押されました。";
      break;
    case IDCONTINUE:
      lpText = "「Continue」ボタンが押されました。";
      break;
  }

  MessageBox(NULL, lpText, "押されたボタン", MB_OK);
}

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
  LPCTSTR lpText = "新大陸へようこそ!";
  LPCTSTR lpCaption = "はじめてのウィンドウプログラミング";

  int ret;

  ret = MessageBox(NULL, lpText, lpCaption, MB_OK);
  check_ret(ret);

  ret = MessageBox(NULL, lpText, lpCaption, MB_OKCANCEL);
  check_ret(ret);

  ret = MessageBox(NULL, lpText, lpCaption, MB_ABORTRETRYIGNORE);
  check_ret(ret);

  ret = MessageBox(NULL, lpText, lpCaption, MB_YESNOCANCEL);
  check_ret(ret);

  ret = MessageBox(NULL, lpText, lpCaption, MB_YESNO);
  check_ret(ret);

  ret = MessageBox(NULL, lpText, lpCaption, MB_RETRYCANCEL);
  check_ret(ret);

  ret = MessageBox(NULL, lpText, lpCaption, MB_CANCELTRYCONTINUE);
  check_ret(ret);

  ret = MessageBox(NULL, lpText, lpCaption, MB_HELP);
  check_ret(ret);

  return 0;
}
