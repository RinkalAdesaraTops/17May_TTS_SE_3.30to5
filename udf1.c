#include<stdio.h>
#define PI 3.14
//1)TNRN - take nothing return nothing
void add(){ //function declaration
	int a,b;
	printf("\nEnter a & b:");
	scanf("%d %d",&a,&b);
	printf("\n Addition is %d",a+b);
}
//2)TNRS - Take Nothing Return Something
int cube(){
	int a;
	printf("\nEnter a:");
	scanf("%d",&a);
	return a*a*a;
}
//3)TSRN 
void area(float r){
	printf("\n Area of circle is %.2f",PI*r*r);
}
//4)TSRS
float mult(int,float);
main(){
	int ans;
	float p;
	printf("Main function executed");
	add(); //function calling..
	//ans = cube();
	printf("\n Cube is %d",cube());
	printf("\n Enter radious:");
	scanf("%f",&p);
//	area(2.5);
	area(p);
	printf("\n Multiplication is %.2f",mult(20,1.5));
	printf("\nEnd Main function");	
}
float mult(int a,float b){
	float c = (float)a*b; //explicit
	return c;
}


