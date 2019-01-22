#include <iostream>
#include <string>
using namespace std;

int main()
{
	char string1[] = "bat";
	char string2[] = "cat";
	
	int result = strcat(string1, string2);
	
	if (result > 0) {
		cout << "string1 > string2" << endl;
	}else if (result == 0) {
		cout << "string1 = string2" << endl;
	}else {
		cout << "string1 = string2" << endl;	
	}


	return 0;
}
