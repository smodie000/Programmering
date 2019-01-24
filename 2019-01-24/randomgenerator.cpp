#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#include <unistd.h>
using namespace std;

int main()
{
	srand((unsigned)time(0)); 
	int a;
	a = 5;
 while (a == 5) {

    int i;
    i = (rand()%18)+1; 
    cout << i << endl;
    sleep(1);
}
    
    
    return 0;
}
