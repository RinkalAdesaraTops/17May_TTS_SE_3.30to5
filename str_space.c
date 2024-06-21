#include<stdio.h> 
#include<string.h> 
int main(){ 
	char str[50]; 
	int len,i,spaces=0; 
	printf("Enter the String\n"); 
	gets(str); 
	len=strlen(str); 
	for(i=0;i<len;i++){ 
		if(str[i]==' ') 
			spaces++; 
	} 
	printf("Total spaces are : %d\n",spaces); 
} 
