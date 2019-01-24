#include <iostream>	//iostream裡面包含了cout 
#include <string>
//#include <stdio.h>

using namespace std;

const char* return_greeting(void);

int main()
{
	const char *pointer = return_greeting();
	
	cout << pointer << endl;
	
	delete [] pointer;
	
	return 0;
}


const char* return_greeting(void)
{
	char *pstring = new char[strlen("Hello from C++") + 1];
	
	strcpy (pstring, "Hello from C++");
	
	return pstring;
}
