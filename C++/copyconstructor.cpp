#include<iostream>
using namespace std;
class emp{
	string name;
	int emp_id,age;
	public:
		emp(){
			cout<<"Default constructor called.."<<endl;
		}
		emp(string n,int i,int a){
			name = n;
			emp_id = i;
			age = a;
		}
		void display(){
			cout<<"Name is "<<name<<endl;
			cout<<"Age is "<<age<<endl;
			cout<<"Emp Id is "<<emp_id<<endl;
		}
		emp(const emp &e1){
			cout<<"Copy COnstructor is called..."<<endl;
			name = e1.name;
			age = e1.age;
			emp_id = e1.emp_id;
			
		}
};
main(){
	emp e1;
	emp e2("Testemp",101,25);
	e2.display();
	emp e3(e2);
	//emp e3 = e2;
	e3.display();
}
