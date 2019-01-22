#include <iostream>
#include <string>
using namespace std;

int main()
{
	int scores[5] = {92 , 73 , 57 , 98 , 89 };
	
	cout << sizeof(scores) << endl;		//sizeof將以位元組來表示陣列占用的總位元數 
	
	cout << sizeof(int) << endl;		
	
	cout << sizeof(scores) / sizeof(int) << endl;		//The array has 5 elements 

	return 0;
}
