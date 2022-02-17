#pragma once
#include <vector>
#include "Primitive.h"
#include "Camera.h"
class Scene
{
	std::vector<Primitive>* objects;
	Camera* camera;

	Scene()
	{
		camera = new Camera();
		objects = new std::vector<Primitive>();
	}
};

