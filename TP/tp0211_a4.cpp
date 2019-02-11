#include <iostream>
using namespace std;

int main(){
	int integer1 = 5;
	const int * const pointer1 = &integer1;
	
	cout << *pointer1;
	
	
	return 0;
	
	
}
