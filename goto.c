#include<stdio.h>
main(){
	int i=1,n=10;
	int a=i;
	disp_Num:
		printf("%d ",a);
	
	if(a<n){ //1<=10
		a++; //a=2
		goto disp_Num;
		
	}
	
}
