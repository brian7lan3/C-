#include <stdio.h>
#include <string.h>
int main() {
    struct Student_Perosnal_Data {
        char name[10];
        int age;
        char address[50];
        char interest[11];
    } stu;
    strcpy(stu.name,"�i�T");
    stu.age = 25;
    strcpy(stu.address, "�n�뿤�H����j�Ǹ��@��");
    strcpy(stu.interest, "basketball");
    printf("The student's name is: %s\n", stu.name);
    printf("The student's age is: %d\n", stu.age);
    printf("The student's address is: %s\n", stu.address);
    printf("The student's interest is: %s\n", stu.interest);
}
