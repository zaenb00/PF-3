#include <iostream>
using namespace std;

main() {
	cout <<"Enter the name of the cricket team: ";
	string team;
	cin >> team;
	cout <<"Enter the number of wins: ";
	int wins;
	cin >> wins;
	int twins;
	twins= wins * 3;
	cout <<"Enter the number of draws: ";
	int draws;
	cin >> draws;
	int tdraws;
	tdraws=draws*1;
	cout <<"Enter the number of losses: ";
	int lose;
	cin >> lose;
	int tlose;
	tlose=lose*0;
	int total;
	total = twins + tdraws + tlose;
	cout <<team <<" has obtained "<< total <<" points in the Asia Cup tournament.";
}