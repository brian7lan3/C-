#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;


inline int sq(int value){
	return value * value;
}

int main(){
	
	int data = 6;
	 cout << data << " squared = " << sq(data) << endl;

	return 0;
}
