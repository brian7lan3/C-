#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
}w[10];

void insert_node(node *ptr, int c);

void remove_node(node *ptr, int c);

int main(){
	
	for(int i = 0; i < 10 - 1; i++){
		w[i].next = &w[i + 1];
	}

	
	insert_node(&w[0], 1);
	
	remove_node(&w[0], 2);
	
	
	
}

void insert_node(node *ptr, int c){
	
	node *new_node = new node;
	
	for(int i = 0; i <= c; i++){
		ptr = ptr -> next;
	}
	
	new_node -> next = ptr -> next;
	ptr -> next = new_node;
}


void remove_node(node *ptr, int c)
{
	node *prev = new node;
	
	for(int i = 0; i <= c - 1; i++){
		ptr = ptr -> next;
	}
	prev = ptr -> next -> next;
	
	ptr -> next = NULL;
	
	delete &w[2];
	
	
	
	
}
