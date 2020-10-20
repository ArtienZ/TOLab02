#pragma once
#include "IVector.h"
#include "Adaptee2D.h"
#include "Adaptee3D.h"
class Adapter :
	public IVector
{
private:
	Adaptee2D * polarvect2d;
public:

	Adapter() {};
	Adapter(Adaptee2D* vect){
		polarvect2d = vect;
	};
	Adapter(Adaptee3D* vect) {
		polarvect2d = dynamic_cast<Adaptee3D*>(polarvect2d);
		polarvect2d = vect;
	};
	virtual double abs() {
		return polarvect2d->Polarabs();
	};
	virtual double* getComponents() {
		return polarvect2d->PolargetComponents();
	};
	virtual double* getAngles() {
		return polarvect2d->PolargetAngles();
	};
	virtual double cdot(IVector&) { return 0.0; };
	~Adapter() {};
};

