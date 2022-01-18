/*
 * Reference:
 *    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-winmain
 */
#include <windows.h>
#include <tchar.h>

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
  return MessageBox(NULL, _T("新大陸へようこそ!"), _T("はじめてのウィンドウプログラミング"), 0);
}
