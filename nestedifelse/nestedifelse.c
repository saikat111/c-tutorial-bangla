#include<stdio.h>

int main(){
	int num,num2;
	printf("Enter the number \n");
	scanf("%d", &num);
	printf("Enter the number 2 \n");
	scanf("%d", &num2);
	if(num > 10){
		printf("The number is =%d\n", num);
		if(num2>20 ){
			printf("The number is =%d\n", num2);
			if(num > 30){
				printf("The number is =%d\n", num);
			}
			else if(num < 30){
				printf("The number is =%d\n", num);
			}			
		}
		else if(num2 <20 ){
			printf("The number is =%d\n", num2);			
		}		
	}
	else if(num < 5){
		printf("The number is =%d\n", num);
		
	}
	
	
	return 0;
}
