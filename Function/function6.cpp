#include <iostream>	//iostream裡面包含了cout 
#include <string>
//#include <stdio.h>

using namespace std;

void print_string(const char * text);

int main()
{
	print_string("Gello from C++");
	
	return 0;
}


void print_string(const char * text)
{
	cout << text << endl;
}
