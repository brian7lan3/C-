#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

	node *w0 = new node;
	node *w1 = new node;
	node *w2 = new node;
	node *w3 = new node;
	node *w4 = new node;
	node *w5 = new node;
	node *w6 = new node;
	node *w7 = new node;
	node *w8 = new node;
	node *w9 = new node;

//	w0 -> next = w1;
//	w1 -> next = w2;
//	w2 -> next = w3;
//	w3 -> next = w4;
//	w4 -> next = w5;
//	w5 -> next = w6;
//	w6 -> next = w7;
//	w7 -> next = w8;
//	w8 -> next = w9;

void insert_node(node *ptr, int c);

void remove_node(node *ptr, node *del);

int main(){
	
//	node *w0 = new node;
//	node *w1 = new node;
//	node *w2 = new node;
//	node *w3 = new node;
//	node *w4 = new node;
//	node *w5 = new node;
//	node *w6 = new node;
//	node *w7 = new node;
//	node *w8 = new node;
//	node *w9 = new node;
//
	w0 -> next = w1;
	w1 -> next = w2;
	w2 -> next = w3;
	w3 -> next = w4;
	w4 -> next = w5;
	w5 -> next = w6;
	w6 -> next = w7;
	w7 -> next = w8;
	w8 -> next = w9;


	insert_node(w0, 1);
	
	
	
	remove_node(w0, w2);

}

void insert_node(node *ptr, int c){
	
	node *new_node = new node;
	
	for(int i = 0; i <= c; i++){
		ptr = ptr -> next;
	}
	
	new_node -> next = ptr -> next;
	ptr -> next = new_node;
}


void remove_node(node *ptr, node *del)
{
	
	while(ptr -> next != del){
		ptr = ptr -> next;
	}
//	ptr -> next = NULL;
	
	ptr -> next = del -> next;
	
	delete[] del;
}