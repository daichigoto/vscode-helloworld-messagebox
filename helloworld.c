/*
 * Reference:
 *    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-winmain
 */
#include <windows.h>
#include <stdio.h>

void
check_ret(int retCode)
{
  switch(retCode) {
    case IDOK:
      printf("「OK」ボタンが押されました。\n");
      break;
    case IDCANCEL:
      printf("「Cancel」ボタンが押されました。\n");
      break;
    case IDABORT:
      printf("「Abort」ボタンが押されました。\n");
      break;
    case IDRETRY:
      printf("「Retry」ボタンが押されました。\n");
      break;
    case IDIGNORE:
      printf("「Ignore」ボタンが押されました。\n");
      break;
    case IDYES:
      printf("「Yes」ボタンが押されました。\n");
      break;
    case IDNO:
      printf("「No」ボタンが押されました。\n");
      break;
    case IDTRYAGAIN:
      printf("「Try Again」ボタンが押されました。\n");
      break;
    case IDCONTINUE:
      printf("「Continue」ボタンが押されました。\n");
      break;
  }
}

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
  int ret;

  ret = MessageBox(NULL, "新大陸へようこそ!", "はじめてのウィンドウプログラミング", 0);
  check_ret(ret);

  return 0;
}
