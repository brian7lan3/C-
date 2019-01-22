#include <iostream>
#include <string>
using namespace std;

//把计argc琌㏑把计计ヘ,珹祘Α
//材把计argv琌char皚夹 
int main(int argc, char * argv[])
{
	for (int loop_index = 0; loop_index < argc; loop_index++) {
		cout << argv[loop_index] << endl;
	}
	
	return 0;
}
