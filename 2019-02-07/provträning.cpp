#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	cout << "J/N?" << endl;
	char x;
	cin >> x; 
	if ( x == 'j' || 'J') 
	{
		cout << "jipi" << endl;
	}
	else if (x=='n' || 'N') {
		
		cout << "NO :( " << endl;
	}
		else {
			
			cout << "dum?" << endl;
		}
		int power;
		sleep(2);
		
		cout <<"anyways lets try something diffrent" << endl;
		
		sleep(1);
		
		cout << "what is 4 to the power of 4" << endl;
		cin >> power;
		
		if(power == 256) {
			cout <<  "Congrats you passed" << endl; 
		}
		else {
			
			cout << "seems like that was pretty hard huh " << endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
