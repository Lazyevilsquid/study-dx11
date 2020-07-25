#pragma once
#include "DXUT.h"
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

