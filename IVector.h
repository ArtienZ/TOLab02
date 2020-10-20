#pragma once

class IVector
{
public:
	IVector() {};
	virtual double abs()=0;
	virtual double * getComponents()=0;
	virtual double * getAngles()=0;
	virtual double cdot(IVector &)=0;
	virtual ~IVector() {};
};

