#pragma once
#include "Vector2D.h"
class Vector3D:public Vector2D
{
private:
	double z;
public:
	Vector3D() {};
	Vector3D(double x, double y, double z);
	virtual double abs();
	virtual double* getAngles();
	virtual double* getComponents();
	virtual double cdot(IVector & vect);
	double *crossdot(Vector3D vect2);
	double *crossdot(Vector2D &vect2);
	~Vector3D() {};
};

