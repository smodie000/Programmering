#include <iostream> 
using namespace std;
int main ()
{
	//int tal;
	
	//cout <<sizeof (int) << endl;
	//tal = 1;
	//cout << tal << endl;
	
	//char tecken = 66;
	//tecken = 65; 
	//char tecken1 = 'B';
	//cout << tecken << endl; 
	//cout << tecken1 << endl;
	//const float PI = 3.141593; 
	//cout << PI << endl;
	
	//cout << "storlek på float " << sizeof(float) << endl;
	//cout << "storlek på double " << sizeof(double) << endl;
	//cout << "storlek på long double " << sizeof(long double) << endl;
	//cout << "storlek på bool " << sizeof(bool) << endl; 
	//float tal1;
	//tal1 = 4.96;
	//cout << tal1 << endl;
	
	
	
	
	//int a = 4;
	//int b = 3;
	//int heltalskvot = a/b;
	//cout << "heltalskvot" << heltalskvot <<  endl;
	//float flyttalskvot = a/(float)b;
	//cout << "flyttalskvot " <<flyttalskvot << endl;
	
	int metod;
    int g1;
    int g2;
    int g3;
    int g4;
    
    
	cout << "välj vilken du vill" << endl;
	cout << "1:addition" << endl;
	cout << "2:subtration" << endl; 
	cout << "3:multiplikaiton" << endl;
	cout << "4:division" << endl;
	
	cin >> metod;
	if (metod == 1); 
{
	cout << "skriv ett tal" << endl;
	cin >> g1 ;
    cout << "skriv in ett tal att addera med" << endl;
    cin >> g2 ; 
    cout << "resultat:" << endl;
    cout << g2+g1 ;
    
}

	if (metod == 3);
{
	cout << "skriv ett tal" << endl;
	cin >> g3;
	cout << "skriv ett tal att multiplicera med" << endl; 
	cin >> g4;
	cout << "resultatet av multiplikationen ";
	cout << g3*g4;
}
	
	
	return 0;
	
	
}
