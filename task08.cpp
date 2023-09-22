#include <iostream>
using namespace std;

main() {
	cout <<"Enter voltage (in volts): ";
	float V;
	cin >> V;
	cout <<"Enter current (in amperes): ";
	float I;
	cin >> I;
	float P;
	P=V*I;
	cout <<"The power is "<< P <<" watts.";
}