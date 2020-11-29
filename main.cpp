#include<stdio.h>
#include"iostream""
#include"vecteur_3d.h"
#include"vecteur3d.h"
#include"vect.h"
#include"int2d.h"

int main()
{
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//Exercice84
	std::cout << "\n";
	std::cout << "Exercice 84\n";
	std::cout << "\n";
	
	vecteur_3d v1(1, 3, 6);
	vecteur_3d v2(1, 3, 6);

	v1.operator==(v2);

	vecteur_3d v3(1, 7.5, 6);
	vecteur_3d v4(2, 3, 4);

	//v3.operator!=(v4);

	v3 != v4;

//-------------------------------------------------------------------------------------------------------------------------------------------------------
//Exercice85
	std::cout << "\n";
	std::cout << "Exercice 85\n";
	std::cout << "\n";

	vecteur_3d v5(7.2, 12, 2);
	vecteur_3d v6(4.3, 6.6, 3);

	v3.operator+(v4);

	vecteur_3d v7 = v5 + v6;

	std::cout << "Les coordonees du vecteur 3 sont" << v3.getX() << "," << v3.getY() << "," << v3.getZ() << "\n";

	vecteur_3d v8 = v5 * v6;

	std::cout << "Les coordonees du vecteur 4 sont" << v4.getX() << "," << v4.getY() << "," << v4.getZ() << "\n";

//-------------------------------------------------------------------------------------------------------------------------------------------------------
//Exercice86
	std::cout << "\n";
	std::cout << "Exercice 86\n";
	std::cout << "\n";

	int n =0;
	float x=0;

	vecteur3d v9(2, 3, 4);

	std::cout << "Veuillez donner la position de la cordonee a recuperer (1, 2 ou 3)\n";
	std::cin >> n;

	//v9[n];

	x = v9[n];							//Méthode de récupération d'une coordonée de vecteur

	std::cout << x << "\n";

	v9[n] = 69.69;						//Méthode de réafectation d'une valeure de vecteur

	std::cout << v9[n] << "\n";

//-------------------------------------------------------------------------------------------------------------------------------------------------------
//Exercice90
	std::cout << "\n";
	std::cout << "Exercice 90\n";
	std::cout << "\n";

	int d;
	
	std::cout << "Donnez la taille de votre vecteur \n";
	std::cin >> d;
	
	vect v10(d);

	std::cout << "Donnez la coordonnee de vecteur a verifier \n";
	std::cin >> n;

	v10[n];


//-------------------------------------------------------------------------------------------------------------------------------------------------------
//Exercice91
	std::cout << "\n";
	std::cout << "Exercice 91\n";
	std::cout << "\n";



	return 0;
}

