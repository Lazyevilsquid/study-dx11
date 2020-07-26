#include "DXUT.h"
#include "Text.h"

void Text::TextInit(int top, int bottom, int right, int left)
{
    D3DXCreateFont(DXUTGetD3D9Device(), 20, 0, FW_NORMAL, 1, FALSE, DEFAULT_CHARSET,
        OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE,
        L"System", &_font);
    SetRect(&_rt, left, top, right, bottom);
}

void Text::TextDraw(TCHAR* string, RECT rt, Color color)
{
    _font->DrawText(NULL,string, -1, &_rt, DT_NOCLIP, color);
    std::cout << _string << endl;
}