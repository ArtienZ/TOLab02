#include "Vector3D.h"
#include <math.h>
#include <tgmath.h>
#include <typeinfo>
#include <iostream>
using namespace std;

Vector3D::Vector3D(double x,double y,double z)
{
	//Vector2D(x, y);
	this->x = x;
	this->y = y;
	this->z = z;
}


double Vector3D::abs()
{
	return this->getComponents()[0] * this->getComponents()[0] + this->getComponents()[1] * this->getComponents()[1] + this->z * this->z;
}

double* Vector3D::getAngles()
{
	double array[3];
	double res = this->x * this->x + this->y * this->y;
	array[0] = sqrt(res + this->z * this->z);
	array[1] = atan(sqrt(res)/z);
	array[2] = atan(this->y / this->x);
	return array;
}

double* Vector3D::getComponents()
{
	double * array;
	array = new double[3];
	array[0] = this->x;
	array[1] = this->y;
	array[2] = this->z;
	return array;
}

double Vector3D::cdot(IVector & vect)
{
	Vector3D * vect3d=new Vector3D();
	if (dynamic_cast<Vector3D*>(&vect)==nullptr) vect3d->z = 0.0;
	return this->getComponents()[0] * vect.getComponents()[0] + this->getComponents()[1] * vect.getComponents()[1] + this->getComponents()[2] * vect.getComponents()[2];
}

double* Vector3D::crossdot(Vector3D vect2)
{
	double cross[3];
	cross[0] = this->getComponents()[1] *  vect2.getComponents()[2] - this->getComponents()[2] * vect2.getComponents()[1];
	cross[1] = this->getComponents()[2] * vect2.getComponents()[0] - this->getComponents()[0] * vect2.getComponents()[2];
	cross[2] = this->getComponents()[0] * vect2.getComponents()[1] - this->getComponents()[1] * vect2.getComponents()[0];
	return cross;
}

double* Vector3D::crossdot(Vector2D & vect2)
{
	double* cross;
	cross = new double(3);
	cross[0] = 0.0;
	cross[1] = 0.0;
	cross[2] = this->getComponents()[0] * vect2.getComponents()[1] - this->getComponents()[1] * vect2.getComponents()[0];
	return cross;
}
