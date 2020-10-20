#pragma once
#include "IVector.h"
class Vector2D:public IVector
{
protected:
	double x,y;
public:
	Vector2D() {};
	Vector2D(double x, double y);
	virtual double abs();
	virtual double* getAngles();
	virtual double* getComponents();
	virtual double cdot(IVector & vect);
	
	~Vector2D() {};
};

