#include <iostream>
using namespace std;
int main()
{
int size = 0;
cout << "�п�J�}�C���סG";
cin >> size;
int *arr = new int[size];
cout << "���w�����ȡG" << endl;
for(int i = 0; i < size; i++)
{
cout << "arr[" << i << "] = ";
cin >> *(arr+i);
}
cout << "��ܤ����ȡG" << endl;
for(int i = 0; i < size; i++)
{
cout << "arr[" << i << "] = " << *(arr+i) << endl;
}
delete [] arr;
return 0;
}

