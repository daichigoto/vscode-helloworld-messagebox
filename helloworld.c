#ifndef UNICODE
#define UNICODE
#endif 

/*
 * Reference:
 *    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-winmain
 */
#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
  return MessageBox(NULL, L"新大陸へようこそ!", L"はじめてのウィンドウプログラミング", MB_OK);
}
