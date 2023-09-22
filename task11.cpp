#include <iostream>
using namespace std;

main() {
	cout << "Enter the current world population: ";
	float ppltn;
	cin >> ppltn; 
	cout << "Enter the monthly birth rate (number of births per month): ";
	float mon;
	cin >> mon;
	float tppltn;
	tppltn= ppltn +(mon * 30 * 12);
	cout << "The population in three decades will be: "<< tppltn;
}