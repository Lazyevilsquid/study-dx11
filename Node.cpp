#include "DXUT.h"
#include "Node.h"

Node::Node()
{
	_position = Vector2::Zero();
	_scale = { 1,1 };
	_pivot = { 0.5f,0.5f };
	_rotation = 0.f;
	_isActive = true;
	_isUi = false;
	_tag = 0;
	_color = Color::White();
	_nv = Vector2::Zero();
}

Node::~Node()
{

}

D3DXMATRIX Node::GetMatrix()
{
	D3DXMATRIX m;
	D3DXMatrixIdentity(&m);		// 단위행렬로 변환
	D3DXMatrixTransformation2D(&m, nullptr, 0.f, &_scale, nullptr, 0.f, &_position);
	return m;
}