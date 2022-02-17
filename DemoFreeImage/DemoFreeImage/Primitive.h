#pragma once
#include "MathVecteur.h"
class Primitive
{

	typedef struct Sphere
	{
		float rayon;
		MathVecteur::Vecteur centre;
	} Sphere;

	Sphere createSphere(float rayon, MathVecteur::Vecteur centre);
};

