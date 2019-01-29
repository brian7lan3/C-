#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;


void print_this(char the_char){
	cout << the_char;
}
void print_this(char* the_C_string){
	cout << the_C_string;
}
void print_this(int ASC_code){
	cout << static_cast<char> (ASC_code);
}
void print_this(string the_string){
	cout << the_string;
}

int main(){
	
	print_this(97);	//ASCII
	print_this('b');	//Char
	print_this("c");	//C-style String
	print_this(string("d"));	//C++-style String

	return 0;
}
