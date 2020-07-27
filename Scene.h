#ifndef _SCENE_H_
#define _SCENE_H_

class Scene
{
public:
	virtual void Create();
	virtual void Update();
	virtual void OnExit();
};

#endif // !_SCENE_H_