#include <iostream>
using namespace std;

main() {
	cout << "Enter the charge (Q) in Coulombs: ";
        float charge;
        cin >> charge;
	cout << "Enter the time (t) in seconds: ";
	int time;
	cin >> time;
	float current;
	current = charge/time;
	cout << "The current (I) is: " << current << " Amperes";
}