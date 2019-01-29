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
	
	pointer1 -> id = 93;
	pointer2 -> id = 91;
	pointer3 -> id = 97;
		
	int array[1000];
	int *ptr = &array[0];
	
	*ptr = pointer1 -> id;
	*(ptr + 1) = pointer2 -> id;
	*(ptr + 2) = pointer3 -> id;
	
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	
	cout << endl;
	
	//----------------------------------------
	int i, j, tmp;
	
	for(j = 0; j < 3; j++)
	{
		for(i = 0; i < 3 - j - 1; i++)
		{
			if(array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
	}

    for(i=0;i<3;i++)
        cout << array[i] << ",";


	
	return 0;
}


