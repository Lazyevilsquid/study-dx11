#include "DXUT.h"
#include "Text.h"

void Text::TextInit()
{
    D3DXCreateFont(DXUTGetD3D9Device(), 20, 0, FW_NORMAL, 1, FALSE, DEFAULT_CHARSET,
        OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE,
        L"System", &_font);
}

void Text::TextDraw(TCHAR* string, int top, int bottom, int right, int left, Color color)
{
     SetRect(&_rt, left, top, right, bottom);
    _font->DrawText(NULL,string, -1, &_rt, DT_NOCLIP, color);
}

void Text::Release()
{
    delete this;
}