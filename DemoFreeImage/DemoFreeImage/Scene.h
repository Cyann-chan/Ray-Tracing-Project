#pragma once
#include <vector>
#include "Primitive.h"
#include "Camera.h"
class Scene
{
public:
	std::vector<Primitive> objects;
	Camera camera;

	Scene();
	Scene(Camera c);

	void addObject(Primitive obj);
};

