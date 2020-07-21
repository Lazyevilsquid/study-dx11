#include "DXUT.h"
#include "Director.h"

Director::Director()
{
	_currentScene = nullptr;
}

void Director::UpdateScene()
{
	_currentScene->Update();
}

void Director::ChangeScene(Scene* scene)
{
	if (_currentScene)
	{
		_currentScene->OnExit();
	}
	_currentScene = scene;
	_currentScene->Create();
}