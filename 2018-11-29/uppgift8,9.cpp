#include <iostream>
using namespace std;

int main()
{
	int n;
    int resultat=1;
	cout << "skriv ut n " << endl;
	cin >> n ;
	
	for ( int i = 1; i <= n; i++) {
		
		
		if (i != n) {
		cout << i << "*" ;
	}
		else {
			cout << i;
		}
		resultat = resultat * i;
	}
	
	cout << '=' << resultat;
	
	
	
	
	
	return 0;
}
