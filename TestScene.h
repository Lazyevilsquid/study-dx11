#pragma once
#include "Scene.h"
#include "Sprite.h"
#include "Text.h"

class TestScene :public Scene
{
public:
	Sprite* testSprite;
	Sprite* test1Sprite;
	Text* testText;
	void Create() override;
	void Update() override;
	void OnExit() override;
};

