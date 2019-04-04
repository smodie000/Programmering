#include <iostream>
using namespace std;
double area(double d);
int main()
{
	
	
	
	cout << "skriv in diamentern på din cirkel" << endl;
	double d;
	cin >> d;
	
	
	double a = area(d);
	cout << a;
	
	
	
	
	return 0;
}
double area(double d)
{
double a = ( 3.14 * d * d )/4;
return a;
}
