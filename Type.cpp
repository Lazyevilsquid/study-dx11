#include "DXUT.h"
#include "Type.h"

Color::Color(float r, float g, float b)
{
	Set(r, g, b);
}
Color::Color(float r, float g, float b, float a)
{
	Set(r, g, b, a);
}

Vector2::Vector2(float x, float y)
{
	Set(x, y);
}

void Color::Set(float r, float g, float b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}

void Color::Set(float r, float g, float b, float a)
{
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

void Vector2::Set(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Vector2::Set(Vector2 vec)
{
	this->x = vec.x;
	this->y = vec.y;
}