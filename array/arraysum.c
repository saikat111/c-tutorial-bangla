#include<stdio.h>
int main(){
	int num[4] = {5,10,15,20};
	int j ,sum =0;
	for( j = 0; j<=3; j++){
		sum = sum + num[j];
		}
	printf("%d", sum);
	
	return 0;
}
