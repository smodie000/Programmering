#include <iostream>
using namespace std;
int main ()
{
float a;
float b;
cout << "hur långt hoppade du?" << endl;
cin >> a;
cout <<" hur hög var vindstyrkan?" << endl;
cin >> b;
if (a > 7.92 && b <= 2.0) {
	cout << "DU SLOG REKORD" << endl;
}
else {
	
	cout << "du slog inte rekordet" << endl;
}
	
	
	return 0;
}
