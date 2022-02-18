#pragma once
#include "MathVecteur.h"
class Rayon
{
public:
	MathVecteur::Vecteur origine;
	MathVecteur::Vecteur direction;
	Rayon(MathVecteur::Vecteur o, MathVecteur::Vecteur d);
};

