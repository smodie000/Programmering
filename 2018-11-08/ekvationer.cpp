#include <iostream>
using namespace std;
int main ()
{
	
	int choose;
	float b;
	float a;
	float c;
	float d;
	float e;
	cout << " välj hur ekvationen ser ut" << endl;
	cout << "1 : ?x + ? = ?" << endl;
	cout << " 2 : x*x + ?x + ? = 0" << endl;
	cin >> choose;
	if ( choose == 1 ) {
	cout << "skriv in x värdet " << endl;
	cin >> a ;
	cout << "skriv in additions värdet " << endl;
	cin >> b;
	cout << "skriv in det höger om likamed-tecknet" << endl;
	cin >> c;

	  if ( a > 0 ) {
		  
		  d = c-b;
		   e = d/a;
		   cout << "x = " << e << endl;
		  }
	  
	  else {
	  
		  d = c-b;
		  
		  
		  cout << "x = " << d << endl;
		  
	  }
  }
	  else {
		  
	  }
	
	
	
	
	return 0;
}
