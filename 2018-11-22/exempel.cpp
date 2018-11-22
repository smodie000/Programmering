#include <iostream>
using namespace std;
int main ()
{
	cout <<" räkna gånger" << endl;
	cout << "skriv \'j\' för att starta" << endl;
	char fortsatt;
	cin >> fortsatt;
	int tal1, tal2;
	while (fortsatt== 'j'){
		
		cout << "tal1: ";
		cin >> tal1;
		
		cout << "tal2:" ;
		cin >> tal2;
		
		cout << tal1 << '*' << tal2 << "=" << tal1*tal2 << endl;
	cout << "fortsatt? (j/n)";
	cin >> fortsatt;
}




	return 0;
}
