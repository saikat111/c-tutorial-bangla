#include<stdio.h>
int main(){
	FILE *fw;
	char name[20];
	fw =fopen("p.txt", "w");
	if(fw == NULL){
		printf("Error");
	}
	printf("Enter your name:");
	scanf("%s" ,&name);
	fprintf(fw , "%s", name);
	printf("Done");
	fclose(fw);
	
	return 0;
}
