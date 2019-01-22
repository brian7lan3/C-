#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_index, student_index, scores[3][5] = {
		{ 92 , 73 , 57 , 98 , 89},
		{ 88 , 76 , 23 , 95 , 72},
		{ 94 , 82 , 63 , 99 , 94},
	};
	
	float sum;
	
	for (test_index = 0; test_index < 3; test_index++) {
		for (student_index = 0, sum = 0; student_index < 5; student_index++)
			sum = sum + scores[test_index][student_index];
		cout << "Average for test " << test_index + 1 << " is " << sum / 5 << scores[1][2] << endl;
	}

	return 0;
}
