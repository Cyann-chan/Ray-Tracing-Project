#include <iostream>
#include "FreeImage.h"
#include "Scene.h"
#include "Primitive.cpp"
using namespace std;

int main(int argc, char** argv)
{
	//Création de scène
	Camera camera = Camera();
	Scene scene = Scene(camera);
	Sphere sphere = Sphere(2, MathVecteur::createVecteur(0, 0, -5));
	scene.addObject(sphere);

	RGBQUAD black, white;
	FIBITMAP* image;
	image = FreeImage_Allocate(256, 256, 32);

	black.rgbBlue = black.rgbGreen = black.rgbRed = 0;
	white.rgbBlue = white.rgbGreen = white.rgbRed = 255;

	for (size_t i = 0; i < 640; i++)
	{
		for (size_t j = 0; j < 480; j++)
		{
			Rayon ray = scene.camera.launchRay(i, j);
			for (int k = 0; k < scene.objects.size(); k++) {
				Primitive curObj = scene.objects.at(k);
				if (curObj.isIntersection(ray)) {
					FreeImage_SetPixelColor(image, i, j, &white);
				}
				else {
					FreeImage_SetPixelColor(image, i, j, &black);
				}
			}
		}
	}

	FreeImage_Save(FIF_BMP, image, "out.bmp");

	return EXIT_SUCCESS;
}