#include<stdio.h>
main(){
	char str[50],str2[50],cpy_str[50];
	int i,status=0,len,len2;
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
	if(len == len2){
		for(i=0;i<strlen(str);i++){ //hello hEllE
			if(str[i] == str2[i]){
				status =1;
			} else {
				status = 0;
				break;
			}
			
		}
	
		if(status == 1){
			printf("\n strings are matched..");		
		} else {
			printf("\n strings are not matched..");		
		}
	} else {
		printf("\n Plz enter same length characters");
	}
	
	
}




