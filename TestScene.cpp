#include "DXUT.h"
#include "TestScene.h"

void TestScene::Create()
{
	std::cout << "Test Scene Create" << endl;
}

void TestScene::Update()
{
	if (DXUTIsMouseButtonDown('0'))
	{
		std::cout << "mouse click" << endl;
	}
}

void TestScene::OnExit()
{
	std::cout << "Test Scene Exit" << endl;
}