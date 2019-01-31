#include <iostream>
using namespace std;

int increament(int &n)
{
	n = n + 1;
	return n;
}

int main()
{
	int x = 10;
	
	cout << increament(x) << "\n";
	cout << x << "\n";
}
