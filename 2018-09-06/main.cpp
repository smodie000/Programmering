#include <iostream>
using namespace std;
int main ()
{
	int tal1;
	
	
	tal1 = 8;
	cout <<tal1 << endl;
	tal1 = 4.9; 
	cout << tal1 << endl;
	float f1;
	f1 = 4.9;
	cout << f1 << endl;
	f1 = f1 + 4;
	cout << f1 << endl;
	f1 = f1 + tal1;
	cout << f1 << endl;
	tal1 = tal1 * f1;
	cout << tal1 << endl;
	cout << "tal1 = " << f1 << endl;
	cout << "" << endl;
	int a = 10;
	int b = 20-a;
	b = b-a;
	a=a*a;
	cout << "b = " << b << endl;
	cout << "a = " << a << endl;
	return 0;
}
