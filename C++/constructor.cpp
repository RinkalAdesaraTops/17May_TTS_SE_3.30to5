#include<iostream>
using namespace std;
//constructor means - special member function
//it is automatically called when object is created
//class name & function name are same
//It is always declared in public section
class student{
	int height,width,ans;
	public:
		student(){ //default constructor
			cout<<"Constructor is called...";
		}
		student(int a,int b){ //parameterized constructor
			height = a;
			width =b;
		}
		student(int p,int q,int r){
			ans = p*q*r;
		}
		void calculate(){
			cout<<"Multiplication is "<<height*width<<endl;
		}
		//tilde
		~student(){
			cout<<"Destructor is called.."<<endl;
		}
	
};
main(){
	student s1; //reference object
	student s2(20,10);
	s1.calculate(); //0
	s2.calculate(); //200
	student s3(5,4,3);
}
