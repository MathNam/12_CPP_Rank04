#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	//déterminant de la matrice formée par les différences entre les coordonnées des sommets
	float	denominator = (b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY());

	//calul des coordonnées barycentriques (combinaison des sommets)
	float alpha = (((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / denominator);
	float beta = (((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY()- c.getY())) / denominator);
	float gamma = 1.0f - alpha - beta;

	return alpha > 0.0f && beta > 0.0f && gamma > 0.0f;
}
