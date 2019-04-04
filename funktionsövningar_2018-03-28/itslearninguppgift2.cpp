#include <iostream>
using namespace std;
int stortal(int falt[], int antal);
int main()
{
	int antalfalt = 0;
	cout << "hur många tal vill du ha (max 100)" << endl;
	cin >> antalfalt;
	int falt[100];
	for (int n=0; n < antalfalt; n++) 
		cin >> falt[n];
	
	
	cout << stortal(falt, antalfalt) << " är det störta talet " << endl;
	
	
	return 0;
}
int stortal(int falt[], int antal){
	int temp = falt[0];
	for (int i = 1; i < antal ; i++){
		
		if ( falt[i] > temp){
		temp = falt[i];
	}
	}
	return temp;
}
