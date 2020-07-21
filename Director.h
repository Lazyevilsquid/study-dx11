#pragma once

#include "Type.h"
#include "Scene.h"
class Director : public Singleton<Director>
{
private:
	Scene* _currentScene;		// ���� ��

public:
	Director();

	void UpdateScene();
	void ChangeScene(Scene* scene);

};

