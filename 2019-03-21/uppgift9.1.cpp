#include <iostream>
using namespace std;
double omkretscirkel(double radie);
int main()
{
	double radie;
	cout << "skriv in radien på din cirkel" << endl;
	cin >> radie;
	
	cout << "radien är " << endl;
	
	
	double cirkel = omkretscirkel(radie);
	cout << cirkel;
	
	
	
	
	
	
	
	
	return 0;
}
double omkretscirkel(double radie)
{
	double cirkel = 6.28 * radie;
	return cirkel;
}
