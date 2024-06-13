#include<stdio.h>
main(){
	char str[50],str2[50],cpy_str[50];
	int i,j=0,len,total,len2;
	printf("Enter string:");
	gets(str);
	
	printf("\nString is:");
	puts(str);
	
	printf("Enter string2:");
	gets(str2);
	
	printf("\nString is2:");
	puts(str2);
	
	
	len = strlen(str);
	len2 = strlen(str2);

	total = len+len2;
	for(i=0;i<len;i++){
		cpy_str[i] = str[i];
	}
	
	for(i=len;i<total;i++){
		cpy_str[i] = str2[j];
		j++;
	}
	
	printf("\nCopy String is:");
	puts(cpy_str);
}
