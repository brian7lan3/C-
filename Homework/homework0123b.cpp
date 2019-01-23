#include <iostream>
#include <string>
#include <stdio.h>

#define MAX 5
using namespace std;





int main()
{
//	int i = 0;
//	int Array[MAX];
//	for (i = 0; i < MAX; i++) Array[i] = i;
//	
//	int *ptr = &Array[0];
	
	
	struct structure {
		int name_id;
	};
	
	structure people[3];
	
	structure *pointer = &people[3];
	
	pointer -> name_id = 2222;
	
	cout << pointer -> name_id << endl;
	
	for (pointer -> name_id = 0; (pointer -> name_id) < 3; (pointer -> name_id)++) {
		cout << pointer -> name_id << endl;
	}

	return 0;
}

