#include<stdio.h>
#include"iostream"
#include"vect.h"

vect::vect(int d)
{
	int i, val = 0;

	this->compt_int = 0;
	this->taille = d;
	this->adrTab = new int[this->taille];

	for (i = 0; i < taille; i++)
	{
		this->adrTab[i] = 0;
	}

			for (i = 0; i < taille; i++)		//Boucle qui parcours le tableau jusqu'a trouver un espace non utilisé
			{
				std::cout << "Donnez un nouvel entier a rentrer\n";
				std::cin >> val;
				
				this->adrTab[i] = val;
				this->compt_int++;
			
			}
			std::cout << "Fin du remplissage\n";
}

float vect::operator[](int n)
{
	if (n > this->taille || n < this->taille)
	{
		std::cout << "Vous sortez du tableau\n";
		exit(1);
	}
	else
	{
		n = n - 1;
	}

	std::cout << this->adrTab[n] << "\n";

	return this->adrTab[n];
}

vect::~vect()
{
}
