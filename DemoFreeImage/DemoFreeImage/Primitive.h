#pragma once
#include "MathVecteur.h"
#include "Rayon.h"
class Primitive
{
public:
	virtual bool isIntersection(Rayon r);
};

class Sphere: public Primitive
{
public:
	float rayon;
	MathVecteur::Vecteur centre;
	
	bool isIntersection(Rayon r);

	Sphere(float r, MathVecteur::Vecteur v);
};