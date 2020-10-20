#include "Vector2D.h"
#include <math.h>
#include <tgmath.h>


Vector2D::Vector2D(double x,double y)
{
	this->x = x;
	this->y = y;
}

double Vector2D::abs()
{
	return sqrt(this->x * this->x + this->y*this->y);
}

double* Vector2D::getAngles()
{
	double array[2];
	array[0] = this->abs();
	double sign = 0;
	if (this->y < 0)sign = -1;
	else if (this->y == 0)sign = 0;
	else sign = 1;
	array[1] = acos(this->x / array[0]) * sign;
	return array;
}

double Vector2D::cdot(IVector& vect)
{
	return this->getComponents()[0] * vect.getComponents()[0] + this->getComponents()[1] * vect.getComponents()[1];
}

double* Vector2D::getComponents()
{
	double *  array;
	array = new double[2];
	array[0] = this->x;
	array[1] = this->y;
	return array;
}


