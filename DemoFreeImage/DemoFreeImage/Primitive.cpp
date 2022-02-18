#include "Primitive.h"
#include <math.h>


bool Sphere::isIntersection(Rayon r)
{
	float t2 = pow(r.direction.x, 2) + pow(r.direction.y, 2) + pow(r.direction.z, 2);
	float X0 = r.origine.x - centre.x;
	float Y0 = r.origine.y - centre.y;
	float Z0 = r.origine.z - centre.z;
	float t1 = 2 * (X0 * r.direction.x + Y0 * r.direction.y + Z0 * r.direction.z);
	float t0 = (pow(X0, 2) + pow(Y0, 2) + pow(Z0, 2)) - pow(rayon, 2);

	float discriminant = pow(t1,2) - 4*t2*t0;

	if (discriminant > 0) {
		//on intersecte !!!
		return true;
	}
	return false;
}

Sphere::Sphere(float r, MathVecteur::Vecteur v) {
	rayon = r;
	centre = v;
}
