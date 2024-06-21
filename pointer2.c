#include<stdio.h>
main(){
	int i,a[5]= {10,20,30,40,50},*p;
	
	p = &a;
	
	for(i=0;i<5;i++){
		printf("%d \n",*p);
		p++;
	}
	
	
	
}
