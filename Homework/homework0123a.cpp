#include <iostream>
#include <string>
using namespace std;





int main()
{
	struct person {
		string first_name;
		string second_name;
		string name_id;
	};
	
	person people[2];
	
	people[0].name_id = "aaaa";

	cout << people[0].name_id << endl;
	cout << people[1].name_id << endl;
	

	return 0;
}

