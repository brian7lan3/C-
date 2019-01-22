#include <iostream>
#include <string>
using namespace std;

int main()
{
	int integer1 = 5;
	const int *pointer1;
	
	pointer1 = &integer1;
	
	cout << *pointer1 << endl;
	
	return 0;
}
