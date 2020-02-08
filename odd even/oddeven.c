#include<stdio.h>
void main(){
	int number;
	printf("Enter the number:");
	scanf("%d", &number);
	if(number % 2 == 0){
		printf("Even number");
			
	}
	else if(number % 2 != 0){
		printf("odd number");			
	}
		
}
