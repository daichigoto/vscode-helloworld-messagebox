/*
 * Reference:
 *    https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-winmain
 *    https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
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
      lpText = "「キャンセル」ボタンが押されました。";
      break;
    case IDABORT:
      lpText = "「中止」ボタンが押されました。";
      break;
    case IDRETRY:
      lpText = "「再試行」ボタンが押されました。";
      break;
    case IDIGNORE:
      lpText = "「無視」ボタンが押されました。";
      break;
    case IDYES:
      lpText = "「はい」ボタンが押されました。";
      break;
    case IDNO:
      lpText = "「いいえ」ボタンが押されました。";
      break;
    case IDTRYAGAIN:
      lpText = "「再実行」ボタンが押されました。";
      break;
    case IDCONTINUE:
      lpText = "「続行」ボタンが押されました。";
      break;
  }

  MessageBox(NULL, lpText, "押されたボタン", MB_OK);
}

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
  LPCTSTR lpText = "新大陸へようこそ!";
  LPCTSTR lpCaption = "はじめてのウィンドウプログラミング";
  int ret;

  // 「OK」
  ret = MessageBox(NULL, lpText, lpCaption, MB_OK);
  check_ret(ret);

  // 「OK」「キャンセル」
  ret = MessageBox(NULL, lpText, lpCaption, MB_OKCANCEL);
  check_ret(ret);

  // 「中止」「再試行」「無視」
  ret = MessageBox(NULL, lpText, lpCaption, MB_ABORTRETRYIGNORE);
  check_ret(ret);

  // 「はい」「いいえ」「キャンセル」
  ret = MessageBox(NULL, lpText, lpCaption, MB_YESNOCANCEL);
  check_ret(ret);

  // 「はい」「いいえ」
  ret = MessageBox(NULL, lpText, lpCaption, MB_YESNO);
  check_ret(ret);

  // 「再試行」「キャンセル」
  ret = MessageBox(NULL, lpText, lpCaption, MB_RETRYCANCEL);
  check_ret(ret);

  // 「キャンセル」「再実行」「続行」
  ret = MessageBox(NULL, lpText, lpCaption, MB_CANCELTRYCONTINUE);
  check_ret(ret);

  // 「OK」「ヘルプ」
  ret = MessageBox(NULL, lpText, lpCaption, MB_HELP);
  check_ret(ret);

  // 注意アイコン
  ret = MessageBox(NULL, lpText, lpCaption, MB_OK | MB_ICONWARNING);

  // 情報アイコン
  ret = MessageBox(NULL, lpText, lpCaption, MB_OK | MB_ICONINFORMATION);

  // エラーアイコン
  ret = MessageBox(NULL, lpText, lpCaption, MB_OK | MB_ICONERROR);

  // クエスチョンアイコン
  ret = MessageBox(NULL, lpText, lpCaption, MB_OK | MB_ICONQUESTION);

  return 0;
}
