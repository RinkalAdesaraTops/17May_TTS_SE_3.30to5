#include<iostream>
using namespace std;
class emp{
	char name[50];
	int emp_id,age;
	public:
		void getData(){
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter emp id & age:";
			cin>>emp_id>>age;
		}
		void putData(){
			cout<<"Name is "<<name<<endl;
			cout<<"Age is "<<age<<endl;
			cout<<"Id is "<<emp_id<<endl;
		}
};
main(){
	emp e1;
	e1.getData();
	e1.putData();	
}
