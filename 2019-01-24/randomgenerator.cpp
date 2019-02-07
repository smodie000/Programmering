#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#include <unistd.h>

using namespace std;

int main()
{
	int tal[4] = {1, 2, 3, 4};
	
	cout << tal[2]<< endl;
	
 while (true == true) {

    int i;
    i = (rand()%5)+1; 
    cout << i << endl;
    
    if (i == 5) {
		cout << "FEM!" << endl;
		sleep(1);
	}
	else {
		sleep(1);
	}
	
}
    
    
    return 0;
}
