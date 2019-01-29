#include<iostream>

struct Person

{

    char ID[6];//??

    char Name[10];//姓名

};

 

int main()

{

    int len = 3;//?人?

    int structinfo[10];//存信息的??

    for (int i = 0;i<len;i++){
	

        Person *p = new Person;//???建?构?量

            structinfo[i] = p;//存入??

            cout << "??入第" << i+1 << "?人?的??\n";

            cin >> p->ID;

            cout << "??入第" << i+1 << "?人?的姓名\n";

            cin >> p->Name;

      }

      for ( i = 0; i<len; i++)

{

            Person *p = (Person *)structinfo[i];//取出?量

            cout << "第" << i+1 << "?人?的???：" << p->ID << "\n";

            cout << "第" << i+1 << "?人?的姓名?：" << p->Name << "\n";

            delete [] p;//?除?量

      }

      return 0;

}

