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
	
	
	pointer -> name_id = 1;
	(pointer+1) -> name_id = 2;
	(pointer+2) -> name_id = 3;
	
	cout << pointer -> name_id << endl;
	cout << (pointer+1) -> name_id << endl;
	cout << (pointer+2) -> name_id << endl;
	

	return 0;
}

