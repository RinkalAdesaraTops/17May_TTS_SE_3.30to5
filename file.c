//File handling
//File Create
//File Open
//File Write
//File Read
//File close
#include<stdio.h>
main(){
	FILE *p;
	p = fopen("abc.txt","w");
	if(p == NULL){
		printf("\n File is not exist");
	} else {
		printf("\n File is created");
	}
}
