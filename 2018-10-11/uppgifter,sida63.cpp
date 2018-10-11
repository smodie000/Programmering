#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	//int tal1;
	//int tal2;
	//int tal3;
	//cout << " skriv en täljare och en nämnare " << endl;
	//cin >> tal1 >> tal2;
	//tal3 = tal1%tal2;
	//cout << tal1/tal2 << " " << tal3 << " / " << tal2; 
	int tal1;

	cin >> tal1;
	int tal2 = tal1;
	tal1++;
	tal1 *= 2;
	tal1-= 6;
	tal1/=2;
	tal1 +=3;
	tal1 -= tal2;
	cout << tal1 << endl;
	
	
	
	return 0;
}
