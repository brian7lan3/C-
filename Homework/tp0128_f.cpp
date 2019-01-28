#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	
	struct S{
		int id;
	}s[3];
	

	S *pointer1 = &s[0];
	S *pointer2 = &s[1];
	S *pointer3 = &s[2];
	
	int array[1000];
	
	//------------------------------------------
	
	pointer1 -> id = 93;
	pointer2 -> id = 91;
	pointer3 -> id = 97;
	
	cout << pointer1 -> id << endl;
	cout << pointer2 -> id << endl;
	cout << pointer3 -> id << endl;
	
	cout << endl;
	
	//------------------------------------------
	
	int *ptr = &array[0];
	
	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	
	cout << endl;
	
	//------------------------------------------
	
	*ptr = pointer1 -> id;
	*(ptr + 1) = pointer2 -> id;
	*(ptr + 2) = pointer3 -> id;
	
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	
	//------------------------------------------
	
	cout << endl;
	
	
	sort(array, array + 3);
	
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	
	
	reverse(array, array + 3);
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	
	

	
	return 0;
}
