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