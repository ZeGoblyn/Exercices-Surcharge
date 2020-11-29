#pragma once

class vecteur_3d
{
private:
	float x, y, z;
public:
	vecteur_3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0)
	{
		x = c1;
		y = c2;
		z = c3;
	}

	vecteur_3d operator==(vecteur_3d v2);

	friend vecteur_3d operator!=(vecteur_3d v1, vecteur_3d v2);

	vecteur_3d operator+(vecteur_3d v2);

	friend vecteur_3d operator*(vecteur_3d v1, vecteur_3d v2);

	float getX();

	float getY();

	float getZ();

	void setX();

	void setY();

	void setZ();
};