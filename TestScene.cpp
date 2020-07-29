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
	testText = new Text();
	testText->TextInit();

	test1Sprite = new Sprite();	// 동적할당
	test1Sprite->SetTexture(L"rem.png");	// 텍스쳐 설정
	test1Sprite->_position = Vector2(680, 300);
	test1Sprite->_isUi = true; // 일단 카메라를 설정해주지 않았으니 ui 상태로 만들기
	test1Sprite->AddRenderTarget();// 렌더 시작
}

void TestScene::Update()
{

	testText->TextDraw(L"asdfasdfasdfasfd", 100, 30, 0, 0, Color::White());
	if (DXUTIsMouseButtonDown('0'))
	{
		std::cout << "mouse click" << endl;
	}
}

void TestScene::OnExit()
{
	delete test1Sprite;
	delete testSprite;
	delete testText;
	std::cout << "Test Scene Exit" << endl;
}