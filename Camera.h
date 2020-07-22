#pragma once
#include "Type.h"
class Camera :
	public Singleton<Camera>
{
private:
	D3DXMATRIX OM;
	D3DXMATRIX IM;
	D3DXMATRIX VM;
	Vector2 campos;
	float camerasize;
public:
	void CameraInit();
	void Update();
	void SetPos(Vector2 v) { campos.x = v.x; campos.y = v.y; };
	Vector2 GetPos() { return campos; };
	void SetSize(float f) { camerasize = f; };
	float GetSize() { return camerasize; };
};