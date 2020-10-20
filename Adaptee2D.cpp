#include "Adaptee2D.h"

Adaptee2D::Adaptee2D(double r, double phi)
{
	this->x = r*cos(phi);
	this->y = r*sin(phi);
}

double Adaptee2D::Polarabs()
{
	return sqrt(this->x * this->x + this->y * this->y);
}

double* Adaptee2D::PolargetAngles()
{
	double array[2];
	array[0] = this->Polarabs();
	double sign = 0;
	if (this->y < 0)sign = -1;
	else if (this->y == 0)sign = 0;
	else sign = 1;
	array[1] = acos(this->x / array[0]) * sign;
	return array;
}

double* Adaptee2D::PolargetComponents()
{
	double* array;
	array = new double[2];
	array[0] = this->x;
	array[1] = this->y;
	return array;
}
