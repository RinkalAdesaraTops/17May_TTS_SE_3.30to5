#include<stdio.h>
main(){
	char str[50];
	int len = 0,i;
	printf("Enter string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	//name = "testy"
	//name2 = "t
	printf("\n Entered string : %s",str);
	printf("\n Length is : %d",len);
}

