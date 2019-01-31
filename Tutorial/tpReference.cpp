#include <iostream>
using namespace std;

int main()
{
	int var = 10;
	
	int *ptr = &var;
	int &ref = var;
	
	cout << "var: " << var << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "&ref: " << ref << endl;
	
	ref = 20;
	
	cout << "var: " << var << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "&ref: " << ref << endl;
	
	
}
