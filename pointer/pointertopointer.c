#include<stdio.h>
void main(){
	int number, *p, **pp;
	number  = 10;
	p = &number;
	pp = &p;
	printf(" PP = %d", **pp);
}
