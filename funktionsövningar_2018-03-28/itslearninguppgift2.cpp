#include <iostream>
using namespace std;

int main()
{
	int antalfalt;
	cin >> antalfalt;
	int falt[100];
	for (int n=0; n < antalfalt; n++) 
		cin >> falt[n];
	for (int m=0; m < antalfalt; m++)
	cout << falt[m];
	
	return 0;
}
