#include<stdio.h>
void main(){
	int a,b,sum,*p;
	a = 20;
	b = 10;
	sum = a + b;
	p = &a;
	printf(" A address  = %p\n", &a);
	printf(" A  = %d\n", a);
	printf(" P Address  = %p\n", p);
	printf(" P  = %d\n", *p);
	p = &b;
	printf(" B address  = %p\n", &b);
	printf(" B  = %d\n", b);
	printf(" P Address  = %p\n", p);
	printf(" P  = %d\n", *p);
	printf("*********************\n");
	printf(" Sum address  = %p\n", &sum);
	printf(" A + B  = %d\n", sum);
	p = &sum;
	printf(" P Address  = %p\n", p);
	printf(" P  = %d\n", *p);
	
	
	
	
}
