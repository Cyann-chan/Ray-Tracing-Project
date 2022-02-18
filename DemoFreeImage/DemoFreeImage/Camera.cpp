#include "Camera.h"
#include <math.h>

Camera::Camera()
{
	position = MathVecteur::createVecteur(0, 0, 0);
	width = 460;
	height = 680;
	angle = 90;
	focale = width / 2 * tan(angle);
}


Camera::Camera(MathVecteur::Vecteur v, int w, int h, float f)
{
	position = v;
	width = w;
	height = h;
	angle = f;
	focale = width / 2 * tan(angle);
}

Rayon Camera::launchRay(int xPixel, int yPixel)
{
	MathVecteur::Vecteur positionPixel = MathVecteur::createVecteur(xPixel - width/2, yPixel - width / 2, -focale);
	MathVecteur::Vecteur direction = MathVecteur::directionFromPositions(positionPixel,position);
	return Rayon(position, direction);
}
