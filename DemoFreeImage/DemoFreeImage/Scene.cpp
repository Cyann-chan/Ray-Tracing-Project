#include "Scene.h"

Scene::Scene()
{
	camera = Camera();
	objects = std::vector<Primitive>();
}

Scene::Scene(Camera c)
{
	camera = c;
	objects = std::vector<Primitive>();
}

void Scene::addObject(Primitive obj)
{
	objects.push_back(obj);
}
