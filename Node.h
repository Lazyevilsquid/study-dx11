/// <summary>
/// 모든 객체의 기본이 되는 class
/// <\summary>

#ifndef _NODE_H_
#define _NODE_H_

#include "Type.h"

class Node
{
public:
	Node();
	virtual ~Node();

	Vector2 _position;
	Vector2 _scale;
	Vector2 _pivot;
	float _rotation;
	bool _isActive;
	bool _isUi;
	int _tag;
	int _layer;
	Color _color;

	// 법선벡터
	Vector2 _nv;

public:
	virtual void Update() { };
	virtual void Draw() { };

	// 객체의 위치 크기 각도를 담아 행렬로 변환
	D3DXMATRIX GetMatrix();	

	void setPosition(const float x, const float y) { _position.Set(x, y); }
	void setPosition(const Vector2 vec) { _position = vec; }
	void setPositionX(const float x) { _position.x = x; }
	void setPositionX(const Vector2 vec) { _position.x = vec.x; }
	void setPositionY(const float y) { _position.y = y; }
	void setPositionY(const Vector2 vec) { _position.y = vec.y; }
	const Vector2 getPosition() const { return _position; };

	void setScaleX(const float x) { _scale.x = x; }
	void setScaleX(const Vector2 vec) { _scale.x = vec.x; }
	void setScaleY(const float y) { _scale.y = y; }
	void setScaleY(const Vector2 vec) { _scale.y = vec.y; }
	const Vector2 getScale() const { return _scale; }

	void setActive(const bool active) { _isActive = active; }
	const bool IsActive() const { return _isActive; }
};

#endif // !_NODE_H_