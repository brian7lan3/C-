#include <iostream>
#include <string>
using namespace std;

int main()
{
	enum day
	{
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};
	
	enum day today = Friday;		//�ŧi�C�|���ܼ�today��Friday 
	
	if (today == Friday) {
		cout << "Today is Friday" << endl;
	}
	
	return 0;
}
