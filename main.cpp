#include "DXUT.h"
#include "Application.h"
#include "TestScene.h"

int main(void)
{
	Application app;
	app._isWindow = true;
	app._width = 1280;
	app._height = 720;
	app.Init(new TestScene());

	return app.Exit();
}