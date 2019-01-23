#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	struct structure {
		int name_id;
	};
	
	structure people[3];
	
	structure *pointer = &people[3];
	
	
	pointer -> name_id = 111;
	(pointer+1) -> name_id = 222;
	(pointer+2) -> name_id = 333;
	
	cout << pointer -> name_id << endl;
	cout << (pointer+1)-> name_id << endl;
	cout << (pointer+2) -> name_id << endl;



	return 0;
}

