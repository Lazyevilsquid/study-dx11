#pragma once
#include "DXUT.h"
#include <tchar.h>
#include "Type.h"
class Text : public Singleton<Text>
{
public:
	RECT _rt;
	TCHAR _string[256];
	LPD3DXFONT _font;

public:
	void TextInit(int top, int bottom, int right, int left);
	void TextDraw(TCHAR* string, RECT rt,Color color );
};

