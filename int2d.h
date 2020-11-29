#pragma once

class int2d
{
private:
	int tailleLong = 0;		//Taille du tableau
	int tailleLarg = 0;
	int* adrTab;		//Adresse du tableau
public:

	int2d(int x, int y)
	{
		int tailleLong = x;		//Taille du tableau
		int tailleLarg = y;

		int tabl[this->tailleLong, this -> tailleLarg];
	}

	~int2d();

	void operator()(int a, int b);
};