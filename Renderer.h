
#ifndef _RENDERER_H_
#define _RENDERER_H_

#include "Type.h"
#include "Node.h"
class Renderer :
	public Singleton<Renderer>
{
private:
	list<Node*> rendertargets;
	static bool Comp(Node* a, Node* b);
public:
	void AddRenderTarget(Node* n);
	void RemoveRenderTarget(Node* n);
	void Render();
};

#endif // !_RENDERER_H_