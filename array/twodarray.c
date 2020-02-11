#include<stdio.h>
int main(){
	int num[2][2];
	int i,j,k,m;
	for(i=0;i<=2;i++){
		for(j = 0;j<=2; j++){
			printf("Row = %d \ncolumn = %d \n", i,j);
			scanf("%d", &num[i][j]);
		}
		
	}
	for(k=0;k<=2;k++){
		for(m = 0;m<=2; m++){
			printf(" Row = %d \n column = %d \n ",k,m ,num[k][m]);
		}
		
	}
	
}
