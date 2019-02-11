#include <iostream>
#include <string>>
using namespace std;

int main(){
	struct structure{
		string text;
		int numbers[100];
	}structure1;
	
	structure *pointer = &structure1;
	pointer -> numbers[5] = 5;
	pointer -> text = "Hello from the arrow operator.";
	
	cout << pointer -> text <<endl;
	
	cout << "Here's the value: " << pointer -> numbers[5] << endl;
	return 0;
	
	
}
