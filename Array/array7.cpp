#include <iostream>
#include <string>
using namespace std;

int main()
{
	int scores[][5] = {
		{ 92 , 73 , 57 , 98 , 89},
		{ 88 , 76 , 23 , 95 , 72},
		{ 94 , 82 , 63 , 99 , 94},
	};
	
	cout << scores[1][2] << endl;
	cout << scores[2][1] << endl;
	cout << scores[3][1] << endl;

	return 0;
}
