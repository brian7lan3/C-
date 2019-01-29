#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int sort_array(int array[], int first, int last);

int main(){
	
	struct S{
		int id;
	}s[3];
	
	S *pointer1 = &s[0];
	S *pointer2 = &s[1];
	S *pointer3 = &s[2];
	
	pointer1 -> id = 97;
	pointer2 -> id = 93;
	pointer3 -> id = 91;
		
	int array[1000];
	int *ptr = &array[0];
	
	*ptr = pointer1 -> id;
	*(ptr + 1) = pointer2 -> id;
	*(ptr + 2) = pointer3 -> id;
	
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	
	cout << endl;

	sort_array(array, 0, 3);
	
	for(int i = 0; i < 3; i++)
    	cout << array[i] << ",";

	return 0;
}

int sort_array(int array[], int first_elements, int last_elements)
{
	int i, j, tmp;
	
	for(j = first_elements; j < last_elements; j++)
	{
		for(i = first_elements; i < last_elements - j - 1; i++)
		{
			for(int i = first_elements; i < last_elements; i++)
    			cout << array[i] << ",";
    		cout << endl;
    		
			if(array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
	}
}


