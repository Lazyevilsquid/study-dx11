#pragma once
#include "DXUT.h"

enum KeyCode
{
	Backspace = VK_BACK,
	Tab = VK_TAB,
	Enter = VK_RETURN,
	Shift = VK_SHIFT,
	Control = VK_CONTROL,
	Alt = VK_MENU,
	Pause = VK_PAUSE,
	CapsLock = VK_CAPITAL,
	Hangul  = VK_HANGUL,
	HANJA = VK_HANJA,
	Esc = VK_ESCAPE,
	Space = VK_SPACE,
	PageUp = VK_PRIOR,
	PageDown = VK_NEXT,
	End = VK_END,
	Home = VK_HOME,
	Left = VK_LEFT,
	Up = VK_UP,
	Right = VK_RIGHT,
	Down = VK_DOWN,
	Select = VK_SELECT,
	Print = VK_PRINT,
	Execute = VK_EXECUTE,
	PrintScreen = VK_SNAPSHOT,
	Insert = VK_INSERT,
	Delete = VK_DELETE,
	Help = VK_HELP,
	A = 0x41,
	B = 0x42,
	C = 0x43,
	D = 0x44,
	E = 0x45,
	F = 0x46,
	G = 0x47,
	H = 0x48,
	I = 0x49,
	J = 0x4A,
	K = 0x4B,
	L = 0x4C,
	M = 0x4D,
	N = 0x4E,
	O = 0x4F,
	P = 0x50,
	Q = 0x51,
	R =	0x52,
	S = 0x53,
	T = 0x54,
	U = 0x55,
	V = 0x56,
	W = 0x57,
	X = 0x58,
	Y = 0x59,
	Z = 0x5A,
	F1 = VK_F1,
	F2 = VK_F2,
	F3 = VK_F3,
	F4 = VK_F4,
	F5 = VK_F5,
	F6 = VK_F6,
	F7 = VK_F7,
	F8 = VK_F8,
	F9 = VK_F9,
	F10 = VK_F10,
	F11 = VK_F11,
	F12 = VK_F12,
};

class Input
{
public:
	static bool MouseButtonDown (int value) 
	{
		if (value == 0)
		{
			return DXUTIsMouseButtonDown(VK_LBUTTON);
		}
		else if (value == 1)
		{
			return DXUTIsMouseButtonDown(VK_RBUTTON);
		}
		else if (value == 2)
		{
			return DXUTIsMouseButtonDown(VK_MBUTTON);
		}
	}
	static bool GetKey(BYTE byte)
	{
		return DXUTIsKeyDown(byte);
	}
	static bool GetkeyDown(BYTE byte)
	{
		return DXUTWasKeyPressed(byte);
	}
};