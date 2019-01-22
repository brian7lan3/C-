#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct person {
		string first_name;
		string second_name;
		int age;
	};
	
	person ralph;
	person alice;
	
	ralph.first_name = "Ralph";
	ralph.second_name = "Kramden";
	ralph.age = 40;
	
	person also_ralph = ralph;
	
	cout << ralph.first_name << " " << ralph.second_name << ", " << ralph.age << endl;
	
	cout << also_ralph.first_name << " " << also_ralph.second_name << ", " << also_ralph.age << endl;
	return 0;
}
