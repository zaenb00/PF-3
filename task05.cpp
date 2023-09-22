#include <iostream>
using namespace std;

main() {
	cout <<"Enter the student's name: ";
	string name;
	cin >> name;
	cout <<"Enter matriculation marks (out of 1100): ";
	float matric;
	cin >> matric;
	float tmat;
	tmat = (matric * 0.1/1100);
	cout <<"Enter intermediate marks (out of 550): ";
	float inter;
	cin >> inter;
	float tint;
	tint = (inter * 0.4/550);
	cout <<"Enter Ecat marks (out of 400): ";
	float ecat;
	cin >> ecat;
	float tecat;
	tecat = (ecat * 0.5/400);
	float agg;
	agg = (tmat + tint + tecat) * 100;
	cout << "Aggregate score for " << name << " in UET is: "<< agg << "%";
}