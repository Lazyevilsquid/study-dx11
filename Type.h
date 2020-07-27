/// <summary>
/// 기본 타입들 vector2, color, singleton, time
/// <\summary>
#ifndef _TYPE_H_
#define _TYPE_H_

#include "DXUT.h"
#include "Includes.h"
template <class T>

class Singleton
{
private:
	static T* _instance;

public:
	static T* getInstance()
	{
		if (_instance == nullptr)
			_instance = new T();

		return _instance;
	}
};

template <class T>T* Singleton<T>::_instance = nullptr;

class Color : public D3DXCOLOR
{
public:
	Color() = default;
	Color(float r, float g, float b);
	Color(float r, float g, float b, float a);

	static const Color White() { return Color(1.f, 1.f, 1.f, 1.f); }
	static const Color Black() { return Color(0.f, 0.f, 0.f, 1.f); }
	static const Color Red() { return Color(1.f, 0.f, 0.f, 1.f); }
	static const Color Green() { return Color(0.f, 1.f, 0.f, 1.f); }
	static const Color Blue() { return Color(0.f, 0.f, 1.f, 1.f); }

	inline const Color& operator = (const D3DXCOLOR& color)
	{
		r = color.r;
		g = color.g;
		b = color.b;
		a = color.a;
	}

	void Set(float r, float g, float b);
	void Set(float r, float g, float b, float a);
};

class Vector2 : public D3DXVECTOR2
{
public:
	Vector2() = default;
	Vector2(float x, float y);

	static const Vector2 Zero() { return Vector2(0.f, 0.f); }
	static const Vector2 Half() { return Vector2(0.5f, 0.5f); }
	static const Vector2 One() { return Vector2(1.f, 1.f); }

	static const Vector2 Up() { return Vector2(0.f, 1.f); }
	static const Vector2 Down() { return Vector2(0.f, -1.f); }
	static const Vector2 Right() { return Vector2(1.f, 0.f); }
	static const Vector2 Left() { return Vector2(-1.f, 0.f); }

	inline const Vector2& operator=(const D3DXVECTOR2& vector2)
	{
		x = vector2.x;
		y = vector2.y;
	}

	void Set(float x, float y);
	void Set(Vector2 vec);
};

class Time
{
public:
	Time() = default;
	virtual ~Time();

public:
	static const int _time;
};

#endif // !_TYPE_H_