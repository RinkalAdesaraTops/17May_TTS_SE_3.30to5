#include<stdio.h>
main(){
	char name[10],name2[10];
	int ans;
	printf("Enter name:");
//	scanf("%s",name);
	gets(name);
	
//	printf("\n Your name is : %s",name);
	printf("\n Your name is :");
	puts(name);
	
	printf("\n Length is %d ",strlen(name));	
//	printf("\n Your name is : %s",strrev(name));
//	strcpy(name,"test");
//	printf("\n Copy name is : %s",name);	
//	strcat(name,"appendtext");
//	printf("\n After merge name is : %s",name);
//	printf("\n Your name(Uppercase) is : %s",strupr(name));
//	printf("\n Your name(Lowercase) is : %s",strlwr(name));


printf("Enter name2:");
gets(name2);

ans = strcmp(name,name2);
printf("\n Answer is : %d",ans);
/*
name="hello", str2="hello" - strcmp
//0 
//name>str2 hello>Hello = +1
name<str2 = -1
Nayan
*/
}
