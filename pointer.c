#include<stdio.h>
main(){
	int a=10,*p;
	
	p = &a;
	
	printf("value is %d ",a);
	printf("\npointer is %d ",*p);
	
	*p=15;
	printf("value is %d ",a);
	printf("\npointer is %d ",*p);
	
	
}
