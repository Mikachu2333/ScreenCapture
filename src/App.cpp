#include "App.h"
#include <Windows.h>
#include <shlobj.h>
#include "../res/res.h"
#include "include/core/SkFontStyle.h"
#include "include/core/SkData.h"
#include "WindowMain.h"
#include "Cursor.h"


SkFont* fontIcon{ nullptr };
SkFont* fontText{ nullptr };
WindowBase* win { nullptr };
WindowBase* winPin{ nullptr };
int exitCode{ -1 };//todo


App::~App()
{
}

void App::Init()
{
    initFontText();
    initFontIcon();
    win = new WindowMain();
    win->Show();
    Cursor::Cross();
}

void App::Dispose()
{
    delete fontIcon;
    delete fontText;
}

WindowBase* App::GetWin()
{
	return win;
}

SkFont* App::GetFontIcon()
{
	return fontIcon;
}

SkFont* App::GetFontText()
{
	return fontText;
}

void App::initFontIcon()
{
    HMODULE instance = GetModuleHandle(NULL);
    HRSRC resID = FindResource(instance, MAKEINTRESOURCE(IDR_ICON_FONT), L"ICON_FONT");
    if (resID == 0)
    {
        MessageBox(NULL, L"��������ͼ����Դʧ��", L"ϵͳ��ʾ", NULL);
        return;
    }
    size_t resSize = SizeofResource(instance, resID);
    HGLOBAL res = LoadResource(instance, resID);
    if (res == 0)
    {
        MessageBox(NULL, L"��������ͼ����Դʧ��", L"ϵͳ��ʾ", NULL);
        return;
    }
    LPVOID resData = LockResource(res);
    auto fontData = SkData::MakeWithoutCopy(resData, resSize);
    auto iconFace = SkTypeface::MakeFromData(fontData);
    fontIcon = new SkFont(iconFace);
}

void App::initFontText()
{
	auto fontFace = SkTypeface::MakeFromName("Microsoft YaHei", SkFontStyle::Normal());
	fontText = new SkFont(fontFace);
}