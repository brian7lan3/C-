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

void create_Structure(){
	for(int i = 0; i < 10; i++){
		w[i].next = &w[i + 1];
	}
}

S* new_Structure(int value){
	create_Structure();
	
	S *node = new S;
	w[value].next = node;
	node -> next = &w[value + 1];
	return node;
}

int main(){
	
	new_Structure(1);
	
	node -> data = 'a';
	
	
	

	
	return 0;
}
