#include "DXUT.h"
#include "Sprite.h"
Sprite::Sprite()
{
	sprite = nullptr;
	texture = nullptr;
	D3DXCreateSprite(DXUTGetD3D9Device(), &sprite);
}

Sprite::~Sprite()
{
	Renderer::getInstance()->RemoveRenderTarget(this);
}

void Sprite::SetTexture(wstring filepath)
{
	texture = TextureMNG::getInstance()->LoadTexture(filepath);
	AddRenderTarget();
}

void Sprite::AddRenderTarget()
{
	Renderer::getInstance()->AddRenderTarget(this);
}

RECT Sprite::GetRect()
{
	RECT r = { 0,0,0,0 };
	r.right = _position.x + (texture->info.Width / 2 * _scale.x);
	r.left = _position.x - (texture->info.Width / 2 * _scale.x);
	r.top = _position.y - (texture->info.Height / 2 * _scale.y);
	r.bottom = _position.y + (texture->info.Height / 2 * _scale.y);
	return r;
}

void Sprite::Draw()
{
	if (!_isActive)
		return;
	if (texture == nullptr)
		return;

	_isUi ? sprite->Begin(D3DXSPRITE_ALPHABLEND) : sprite->Begin(D3DXSPRITE_ALPHABLEND | D3DXSPRITE_OBJECTSPACE);
	sprite->SetTransform(&GetMatrix());
	D3DXVECTOR3 center = { _pivot.x * texture->info.Width,_pivot.y * texture->info.Height,0 };
	sprite->Draw(texture->texture, nullptr, &center, nullptr, _color);
	sprite->End();
}