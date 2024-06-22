//File Write

#include<stdio.h>
main(){
	FILE *p;
	char str[50];
	p = fopen("abc.txt","w");
	printf("\n Enter name:");
	gets(str);
	if(p == NULL){
		printf("\n File is not exist");
	} else {
		printf("\n File is created");
		fprintf(p,"%s",str);
	}
	fclose(p);
}
