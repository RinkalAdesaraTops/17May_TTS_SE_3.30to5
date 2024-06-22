//File Write

#include<stdio.h>
main(){
	FILE *p;
	int a;
	char str[50],str2[50];
	p = fopen("abc.txt","r");
	
	if(p == NULL){
		printf("\n File is not exist");
	} else {
		printf("\n File is created");
		fscanf(p,"%s %s %d",str,str2,&a);	
		printf("\n Name is %s %s %d",str,str2,a);
	}
	fclose(p);
}
