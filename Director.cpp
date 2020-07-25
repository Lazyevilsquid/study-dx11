#include "DXUT.h"
#include "Director.h"


void Director::DirectorInit()
{
	_currentScene = nullptr;
}


void Director::SetScene(Scene* scene)
{
	if (_currentScene != nullptr)
		_currentScene->OnExit();
	_currentScene = scene;
	_currentScene->Create();
}

void Director::UpdateScene()
{
	if (_currentScene != nullptr)
	{
		_currentScene->Update();
		Renderer::getInstance()->Render();
	}
}