#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct node
{
	int data;
	node *next;
	friend struct LinkedList;
};

struct LinkedList{
	node * head;
	node * tail;
	
	public:
		LinkedList();
		node *gernode();
		void freenode(node *ptr);   
        void insert(int value);   
        void insert_node(node *ptr, int value);   
        void remove_node(node *ptr);   
        void remove(int value);   
        void find(int num);   
        void print();   
};

LinkedList::LinkedList() { 
           head = NULL;   
           tail = NULL;   
}   

void LinkedList::print()
{
	node *q = head;
	while (q != NULL)
	{
		cout << q -> data << " ";
		q = q -> next;
	}
	cout << endl;
}

node *LinkedList::getnode()
{
	node -p;
	p = new node;
	if( p == NULL)
	{
		cout << "°O¾ÐÅé¤£¨¬" <<endl;
		exit(1);
	}
	return(p);
}

void LinkedList::freenode(node *p)
{
	delete p;
}

void LinkedList::insert_node(Node *ptr, int value){
	Node *new_node = getnode();
	new_node -> data = value;
	new_node -> next = NULL;
	
	if(ptr == NULL){
		new_node -> next = head;
		head = new_node;
	}
	else if(ptr == tail){
		ptr -> next = new_node;
		tail =tail -> next;	
	}
	else{
		new_node -> next = ptr -> next;
		ptr next = new_node;
	}
}

void LinkedList::insert(int value)
{
	if(head == NULL)
	{
		head = getnode();
		head -> data = value;
		head -> next = NULL;
		tail = head;
	}
	else
	{
		insert+node(tial, value);
	}
	cout << "Insert Successful!" << endl;
}

void LinkedList::remove_node(Node *ptr){
	if(ptr == head){
		head = head -> next;
	}
	else{
		node *prev = head;
		while(prev -> next != ptr){
			prev = prev -> Next;
		}
		
		if(ptr == tail){
			prev -> next = NULL;
			tail = prev;
		}
		else{
			prev -> next = ptr -> next;
		}
	}
	freenode(ptr);
}

int main(){

	node c;
	node *head;
	c.next = NULL;
	head = NULL;
	
	head = new node;
	head->next = NULL;	
}
