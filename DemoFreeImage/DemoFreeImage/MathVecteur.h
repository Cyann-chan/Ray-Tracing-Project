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
	float getNorme(Vecteur v);
	float produitScalaire(Vecteur u, Vecteur v);
	Vecteur produitVectoriel(Vecteur u, Vecteur v);
	Vecteur createVecteur(float x, float y, float z);
	Vecteur normalizeVecteur(Vecteur v);
};

