#include "DXUT.h"
#include "TestScene.h"

void TestScene::Create()
{
	std::cout << "Test Scene Create" << endl;
	testSprite = new Sprite();	// �����Ҵ�
	testSprite->SetTexture(L"rem.png");	// �ؽ��� ����
	testSprite->_position = Vector2(1280 / 2, 720 / 2);
	testSprite->_isUi = true; // �ϴ� ī�޶� ���������� �ʾ����� ui ���·� �����
	testSprite->AddRenderTarget();// ���� ����
	testText = new Text();
	testText->TextInit();

	test1Sprite = new Sprite();	// �����Ҵ�
	test1Sprite->SetTexture(L"rem.png");	// �ؽ��� ����
	test1Sprite->_position = Vector2(680, 300);
	test1Sprite->_isUi = true; // �ϴ� ī�޶� ���������� �ʾ����� ui ���·� �����
	test1Sprite->AddRenderTarget();// ���� ����
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