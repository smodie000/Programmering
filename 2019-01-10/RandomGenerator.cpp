#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;
int main ()
{
	
	
	
	cout << "A: med återläggning " << endl;


		srand((unsigned)time(0)); 
    int i;
    i = (rand()%18)+1; 
    cout << i << "\n"; 
    if (i < 10 ) {
		cout << "det blev en röd kula " << endl;
	}
	else if ( i > 10 ) {
		cout << "det blev en svart kula " << endl;
	}
		else {
			
		}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
