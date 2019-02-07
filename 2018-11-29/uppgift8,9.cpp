#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
    int resultat=1;
	cout << "skriv ut n " << endl;
	getline(cin,n); 
	
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
