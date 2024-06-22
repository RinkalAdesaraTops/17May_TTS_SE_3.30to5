#include<stdio.h>
main(){
	int a=20,*p,**q,***r;
	p=&a;
	q=&p;
	r=&q;
	printf("\n a is %d",a);
	printf("\n P is %d",*p);
	printf("\n Q is %d",**q);
	printf("\n R is %d",***r);
	**q = 25;
	printf("\n a is %d",a);
	printf("\n P is %d",*p);
	printf("\n Q is %d",**q);
	printf("\n R is %d",***r);
}
