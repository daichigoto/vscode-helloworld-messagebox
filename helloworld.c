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
  int ret;

  ret = MessageBox(NULL, "新大陸へようこそ!", "はじめてのウィンドウプログラミング", 0);
  check_ret(ret);

  return 0;
}
