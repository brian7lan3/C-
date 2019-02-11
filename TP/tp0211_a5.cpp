#include <iostream>
using namespace std;

int main(){
	int sum;
	int ten = 10;
	float pi = 3.14159;
	
	sum = static_cast <int> (pi) + ten;
	
	cout << "The integer sum = " << sum << endl;
	
	return 0;
	
	
}
