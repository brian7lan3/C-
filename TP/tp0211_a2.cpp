#include <iostream>
#include <string>>
using namespace std;

int main(){
	struct structure{
		int integer1;
		int integer2;
		struct structure *next;
	}structure1, structure2, structure3;
	
	structure1.next = &structure2;
	structure2.next = &structure3;
	
	structure2.integer1 = 5;
	
	cout << "integer1 in structure2 = " << structure1.next -> integer1 << endl;
	return 0;
	
	
}
