#pragma once
#include "Scene.h"
#include "Sprite.h"
#include "Text.h"

class TestScene :public Scene
{
public:
	Sprite* testSprite;
	Text* testText;
	void Create() override;
	void Update() override;
	void OnExit() override;
};

