#include <iostream>
#include <string>
#include <stdio.h>

#define MAX 5
using namespace std;





int main()
{
	int i = 0;
	int Array[MAX];
	for (i = 0; i < MAX; i++) Array[i] = i;
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("Array[%d] = %d\n", i , Array[i]);
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("*(Array+%d) = %d\n", i , *(Array+i));
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("&Array[%d] = %0X\n", i , &Array[i]);
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("(Array+%d) = %0X\n", i , (Array+i));
	
	
	
	printf("\n\n");
	int *ptr1 = &Array[0];
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("ptr1[%d] = %d\n", i , ptr1[i]);
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("*(ptr1+%d) = %d\n", i , *(ptr1+i));
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("&ptr1[%d] = %0X\n", i , &ptr1[i]);
	
	printf("======================================== \n");
	for (i = 0; i< MAX; i++) printf("(ptr1+%d) = %0X\n", i , (ptr1+i));

	

	return 0;
}

