#include<stdio.h>
int sum(int a, int b){
	if(a > b){
		return a;
	}
	else if(b> a){
		return b;
	}	
}

int main(){
	int a,b;
	a = 20;
	b =50;
	int m = sum(a,b);
	printf("The value is : %d", m);
	return 0;
}
