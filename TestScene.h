#pragma once
#include "Scene.h"

class TestScene :public Scene
{
	void Create() override;
	void Update() override;
	void OnExit() override;
};

