#pragma once

class vect
{
private:
	int compt_int = 0;	//Nombre maximum d'�l�ment
	int taille = 0;		//Taille du tableau
	int check = 0;		//Acceuil du nombre don la pr�sence doit �tre v�rifi�e
	int* adrTab;		//Adresse du tableau
public:

	vect(int d);

	float operator[](int n);

	~vect();

};