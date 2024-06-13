#include<stdio.h>
main(){
	char str[50],rev_str[50];
	int i,j,len;
	printf("Enter string:");
	gets(str);
	
	printf("\nString is:");
	puts(str);
	len = strlen(str);
	for(i=len-1,j=0;i>=0;i--,j++){
		rev_str[j] = str[i];
		
	}
	printf("\nReverse String is:");
	puts(rev_str);
	
	//name = t=0e=1s=2t=3 
	//find len = 4
	//newstr == 0-t 1-s 2-e
	//abc + xyz === abcxyz
	
	
}
