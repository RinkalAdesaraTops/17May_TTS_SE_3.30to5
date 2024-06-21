//Recursion Function - func call itself
#include<stdio.h>
void disp(int j){
	if(j<=5){ 
		printf("%d\n",j);
		disp(++j);
	}	
}
int sum(int j){
	if(j<=5){
		return j+sum(j+1); 
	} else {
		return 0;
	}
}
main(){
	int i=1;
	disp(i);
	printf("\n Sum is %d",sum(i));
}
