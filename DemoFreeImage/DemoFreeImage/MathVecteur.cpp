#include "MathVecteur.h"
#include "math.h"

MathVecteur::Vecteur MathVecteur::createVecteur(float x, float y, float z)
{
	MathVecteur::Vecteur newVecteur;
	newVecteur.x = x;
	newVecteur.y = y;
	newVecteur.z = z;

	return newVecteur;
}

float MathVecteur::getNorme(Vecteur v)
{
	return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
}

float MathVecteur::produitScalaire(Vecteur u, Vecteur v)
{
	return u.x * v.x + u.y * v.y + u.z * v.z;
}

MathVecteur::Vecteur MathVecteur::produitVectoriel(Vecteur u, Vecteur v)
{
	Vecteur produit;
	produit.x = u.y * v.z - u.z * v.y;
	produit.y = u.z * v.x - u.x * v.z;
	produit.z = u.x * v.y - u.y * v.x;
	return produit;
}

MathVecteur::Vecteur MathVecteur::normalizeVecteur(Vecteur v)
{
	Vecteur vecteur = v;
	float norme = getNorme(v);
	vecteur.x = v.x / norme;
	vecteur.y = v.y / norme;
	vecteur.z = v.z / norme;
	return vecteur;
}


