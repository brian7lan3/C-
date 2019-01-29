#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;


void add_one_ptrs(long * n);	//first

void add_one_refs(long & n);

int main(){
	
	long salary = 250000;
	
	cout << "Current salary: $" << salary << endl;
	
	add_one_ptrs(&salary);	//first
	
	cout << "After the first raise: $" << salary << endl;
	
	add_one_refs(salary);
	
	cout << "After the second raise: $" << salary << endl;
	
	return 0;
}


void add_one_ptrs(long * n)	//first
{
	(*n)++;
}

void add_one_refs(long & n)
{
	n++;
}

