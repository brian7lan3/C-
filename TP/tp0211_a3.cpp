#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main(){
	auto_ptr<string> pointer (new string("Hello from C++"));
	
	cout << *pointer;
	
	
	return 0;
	
	
}
