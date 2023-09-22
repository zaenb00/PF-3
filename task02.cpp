#include <iostream>
using namespace std;

int main() {
cout << "Enter weight in pounds: ";
float weight_lbs;
cin >> weight_lbs;
float weight_kg;
weight_kg = weight_lbs * 0.45;
cout << weight_lbs << " pounds is equal to " << weight_kg << " kilograms.";
}