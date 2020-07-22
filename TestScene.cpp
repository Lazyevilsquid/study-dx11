#include "DXUT.h"
#include "TestScene.h"

void TestScene::Create()
{
	std::cout << "Test Scene Create" << endl;
	testSprite = new Sprite();	// 동적할당
	testSprite->SetTexture(L"rem.png");	// 텍스쳐 설정
	testSprite->_position = Vector2(1280 / 2, 720 / 2);
	testSprite->_isUi = true; // 일단 카메라를 설정해주지 않았으니 ui 상태로 만들기
	testSprite->AddRenderTarget();// 렌더 시작
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