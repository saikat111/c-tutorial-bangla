#include<stdio.h>
void fun(int x){
		 x = 30;
		 printf("fun x = %d \n", x);
		
}

int main(){
	int x = 15;
	printf(" main x = %d \n", x);
	fun(x);
	
	return 0;
}

