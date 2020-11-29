#include"iostream"
#include "vecteur_3d.h"

vecteur_3d vecteur_3d::operator==(vecteur_3d v2)
{
	bool test=false;

	if ((this->x == v2.getX()) && (this->y == v2.getY()) && (this->z == v2.getZ()))
	{
		test = true;
		std::cout << "Les vecteurs sont egaux" << "\n";
	}
	else
	{
		std::cout << "Les vecteurs sont inegaux" << "\n";
	}

	return test;
}

vecteur_3d vecteur_3d::operator+(vecteur_3d v2)
{
	float stock_x, stock_y, stock_z;
	stock_x = this->x + v2.getX();
	stock_y = this->y + v2.getY();
	stock_z = this->z + v2.getZ();

	vecteur_3d V(stock_x, stock_y, stock_z);

	return V;
}

float vecteur_3d::getX()
{
	return this->x;
}

float vecteur_3d::getY()
{
	return this->y;
}

float vecteur_3d::getZ()
{
	return this->z;
}

void vecteur_3d::setX()
{
	this->x = x;
}

void vecteur_3d::setY()
{
	this->y = y;
}

void vecteur_3d::setZ()
{
	this->z = z;
}