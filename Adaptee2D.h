#pragma once
#include <math.h>
class Adaptee2D
{
protected:
	double x, y;
public:
	Adaptee2D() {};
	Adaptee2D(double r, double phi);
	virtual double Polarabs();
	virtual double* PolargetAngles();
	virtual double* PolargetComponents();
	~Adaptee2D() {};
};

