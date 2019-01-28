#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	struct S{
		int id;
	}s[3];
	

	S *pointer1 = &s[0];
	S *pointer2 = &s[1];
	S *pointer3 = &s[2];
	
	int array[1000];
	
	array[0] = (pointer1 -> id);
	array[1] = (pointer2 -> id);
	array[2] = (pointer3 -> id);
	
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;
	
	cout << endl;
	
	//------------------------------------------
	
	pointer1 -> id = 1000;
	pointer2 -> id = 1001;
	pointer3 -> id = 1002;
	
	cout << pointer1 -> id << endl;
	cout << pointer2 -> id << endl;
	cout << pointer3 -> id << endl;
	
	//------------------------------------------
	
	
	

	
	return 0;
}
