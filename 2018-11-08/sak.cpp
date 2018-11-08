#include <iostream>
using namespace std;
int main ()
{
	int tal1;
	int tal2;
	
	cout << "skriv två tal " << endl;
	cout << "tal 1 "<< endl;
	cin >> tal1 ;
	cout << "tal 2 " << endl;
	cin >> tal2 ;
	
	if ( tal1 > tal2 ) 
	{
		cout << "tal 1 är större och = " <<  tal1 << endl;
	}
	else
	{
	cout << "tal 2 är större och = " << tal2 << endl;
    }    
	
	
	return 0;
}
