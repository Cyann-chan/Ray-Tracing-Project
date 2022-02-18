#pragma once
#include "MathVecteur.h"
#include "Rayon.h"
class Camera
{
public:
	MathVecteur::Vecteur position;
	int width;
	int height;
	float angle;
	float focale;

	Camera();

	Camera(MathVecteur::Vecteur v, int w, int h, float angle);

	Rayon launchRay(int pixelX, int pixelY);
};

