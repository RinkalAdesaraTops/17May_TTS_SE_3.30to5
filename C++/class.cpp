#include<iostream>
using namespace std;
class abc{
	public:
		int a,b; //member variables
	public:
		void putData(); //member functions
		void getData(){
			cout<<"A is "<<a<<endl;
			cout<<"B is "<<b<<endl;
		}
};
//abc :: a =10;
void abc :: putData() {
	cout<<"ENter a&b:";
	cin>>a>>b;
}
main(){
	abc a1;
	a1.putData();
	a1.getData();
}
