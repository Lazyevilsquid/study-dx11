/// <summary>
/// Scene �������ִ� Ŭ����
/// <\summary>

#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

#include "Type.h"
#include "Scene.h"
#include "Renderer.h"
class Director : public Singleton<Director>
{
private:
	Scene* _currentScene;		// ���� ��

public:
	void DirectorInit();
	void UpdateScene();
	void SetScene(Scene* scene);
};

#endif // !_DIRECTOR_H_