#include<iostream>

struct Person

{

    char ID[6];//??

    char Name[10];//�m�W

};

 

int main()

{

    int len = 3;//?�H?

    int structinfo[10];//�s�H����??

    for (int i = 0;i<len;i++){
	

        Person *p = new Person;//???��?��?�q

            structinfo[i] = p;//�s�J??

            cout << "??�J��" << i+1 << "?�H?��??\n";

            cin >> p->ID;

            cout << "??�J��" << i+1 << "?�H?���m�W\n";

            cin >> p->Name;

      }

      for ( i = 0; i<len; i++)

{

            Person *p = (Person *)structinfo[i];//���X?�q

            cout << "��" << i+1 << "?�H?��???�G" << p->ID << "\n";

            cout << "��" << i+1 << "?�H?���m�W?�G" << p->Name << "\n";

            delete [] p;//?��?�q

      }

      return 0;

}

