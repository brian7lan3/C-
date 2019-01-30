#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct S
{
	char data;
	S *next;
}w[10];

void new_Structure(int value){
	S *node = new S;
	w[value].next = node;
	node -> next = &w[value + 1];
}

int main(){
	
	new_Structure(1);
	
	return 0;
}
