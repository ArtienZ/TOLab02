#pragma once
#include "Adaptee2D.h"
class Adaptee3D:public Adaptee2D
{
protected:
	double z;
public:
	Adaptee3D() {};
	Adaptee3D(double r, double teta, double phi);
	virtual double Polarabs();
	virtual double* PolargetAngles();
	virtual double* PolargetComponents();
	~Adaptee3D() {};
};

