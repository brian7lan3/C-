#include <iostream>
#include <string>
using namespace std;

//�Ѽ�argc�O�R�O�C�Ѽƪ��ƥ�,�]�A�{���W
//�ĤG�ӰѼ�argv�O���Vchar�}�C������ 
int main(int argc, char * argv[])
{
	for (int loop_index = 0; loop_index < argc; loop_index++) {
		cout << argv[loop_index] << endl;
	}
	
	return 0;
}
