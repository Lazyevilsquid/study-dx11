#pragma once
#include "DXUT.h"
#include "Includes.h"
#include "Type.h"
class Text
{
public:
	RECT _rt;
	TCHAR _string[256];
	LPD3DXFONT _font;

public:
	void TextInit();
	void TextDraw(TCHAR* string, int top, int bottom, int right, int left,Color color );
	void Release();

};

