#ifndef _APPLICATION_H
#define _APPLICATION_H

#include "DXUT.h"
#include "Includes.h"
#include "Scene.h"

class Application
{
public:
	bool _isWindow;
	int _width;
	int _height;
	std::wstring _title;

public:
	Application();
	~Application();

	void Init(Scene* scene);
	int Exit();
};

#endif // !_APPLICATION_H