#include "Primitive.h"

Primitive::Sphere Primitive::createSphere(float rayon, MathVecteur::Vecteur centre)
{
	Sphere sphere;
	sphere.centre = centre;
	sphere.rayon = rayon;
	return sphere;
}
