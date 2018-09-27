#include <iostream>
using namespace std;
int main ()
{
	char a1[4];
	cout << "skriv fyra tal" << endl;
	cin >> a1[0] >> a1[1] >> a1[2] >> a1[3];
	cout << a1[0] << a1[1] << a1[2] << a1[3] << endl;
	int val;
	cout << "byt plats på valfrit värde" << endl;
	cin >> val;
	cout << "Det nya värdet" ;
	cin >> a1[val-1];
	cout << a1[0] << a1[1] << a1[2] << a1[3] << endl;
	
	
	
	
	return 0;
}
