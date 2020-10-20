#include "Adaptee3D.h"

Adaptee3D::Adaptee3D(double r, double teta, double phi)
{
	this->x = r * sin(teta) * cos(phi);
	this->y = r * sin(teta) * sin(phi);
	this->z = r * cos(teta);
}

double Adaptee3D::Polarabs()
{
	return this->PolargetComponents()[0] * this->PolargetComponents()[0] + this->PolargetComponents()[1] * this->PolargetComponents()[1] + this->z * this->z;
}

double* Adaptee3D::PolargetAngles()
{
	double array[3];
	double res = this->x * this->x + this->y * this->y;
	array[0] = sqrt(res + this->z * this->z);
	array[1] = atan(sqrt(res) / z);
	array[2] = atan(this->y / this->x);
	return array;
}

double* Adaptee3D::PolargetComponents()
{
	double* array;
	array = new double[3];
	array[0] = this->x;
	array[1] = this->y;
	array[2] = this->z;
	return array;
}

