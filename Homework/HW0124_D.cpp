#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int elements = 1;

int main()
{
	struct structure{
		int student_id;
		struct structure *next;
	}structure1, structure2, structure3;
	
	structure1.next = &structure2;
	structure2.next = &structure3;
	
	
	int array[3];
	
	
	structure1.student_id = 1111;
	array[0] = structure1.student_id;
	
	structure1.next -> student_id = 2222;
	array[1] = structure1.next -> student_id;
	
	structure1.next -> next -> student_id = 3333;
	array[2] = structure1.next -> next -> student_id;
	
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;
	

	return 0;
}
