#include "headers.h"
using namespace std;
int main() {
	Vector2D vect1(1, 2);
	Vector2D vect2(3, -5);
	Vector3D vect3dnr1(12,10,20);
	Vector3D vect3dnr2(1,2,4);
	//cout << vect1.abs() << endl;
	//cout << vect1.getAngles()[0] << " " << vect1.getAngles()[1] << endl;
	/*cout << vect1.getComponents()[0]<<" "<<vect1.getComponents()[1] << endl;
	cout << vect3dnr1.getComponents()[0] << " " << vect3dnr1.getComponents()[1] <<" "<< vect3dnr1.getComponents()[2] << endl;
	cout << vect3dnr1.getAngles()[0] << " " << vect3dnr1.getAngles()[1] << " " << vect3dnr1.getAngles()[1] << endl;
	cout << vect1.cdot(vect2) << endl;
	cout << vect3dnr1.cdot(vect2) << endl;*/
	Vector3D vect3Dnr3(2, 5, -1);
	Vector3D vect3Dnr4(-2, 4, -6);
	//cout << vect3Dnr3.crossdot(vect3Dnr4)[0] << " " << vect3Dnr3.crossdot(vect3Dnr4)[1] << " " << vect3Dnr3.crossdot(vect3Dnr4)[2] << " " << endl;
	Adaptee2D* vect2d = new Adaptee2D(vect1.getAngles()[0], vect1.getAngles()[1]);
	Adapter* adapt = new Adapter(vect2d);
	cout << adapt->getComponents()[0] <<" "<< adapt->getComponents()[1] << endl;
	Adaptee3D* vect3d = new Adaptee3D(vect3dnr1.getAngles()[0], vect3dnr1.getAngles()[1], vect3dnr1.getAngles()[2]);
	Adapter* adapt2 = new Adapter(vect3d);
	cout<< adapt2->getComponents()[0] << " " << adapt2->getComponents()[1] << " " << adapt2->getComponents()[2] << endl;


	exit(0);
}