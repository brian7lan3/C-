#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;


long adder(int operand1, int operand2 = 1);

int main(){
	
	int data = 6;
	 cout << data << " squared = " << sq(data) << endl;

	return 0;
}

long adder(int operand1, int operand2 = 1){
	return operand1 + operand2;
}
