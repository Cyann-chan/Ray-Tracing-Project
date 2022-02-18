#pragma once
class MathVecteur
{
public:
	typedef struct Vecteur
	{
		float x;
		float y;
		float z;
	} Vecteur;
	static float getNorme(Vecteur v);
	float produitScalaire(Vecteur u, Vecteur v);
	Vecteur produitVectoriel(Vecteur u, Vecteur v);
	static Vecteur createVecteur(float x, float y, float z);
	static Vecteur normalizeVecteur(Vecteur v);
	static Vecteur directionFromPositions(Vecteur position1, Vecteur position2);
};

