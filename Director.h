#pragma once

#include "Type.h"
#include "Scene.h"
#include "Renderer.h"
class Director : public Singleton<Director>
{
private:
	Scene* _currentScene;		// ÇöÀç ¾À

public:
	void DirectorInit();
	void UpdateScene();
	void SetScene(Scene* scene);
};