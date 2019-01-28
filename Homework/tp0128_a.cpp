#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	
	struct S{
		int id;
	}S1, S2, S3;
	
	S *pointer1 = &S1;
	S *pointer2 = &S2;
	S *pointer3 = &S3;
	
	int array[1000];
	
	array[0] = (pointer1 -> id);
	array[1] = (pointer2 -> id);
	array[2] = (pointer3 -> id);
	
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;

	
	
}
