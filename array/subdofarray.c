#include<stdio.h>
int main(){
	int a[2][2], b[2][2], sum[2][2];
	int i,j,k,m,s,y,q,p;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Input for A:");
			scanf("%d", &a[i][j]);
		}
	}
	for(k=0;k<=2;k++){
		for(m=0;m<=2;m++){
			printf("Input for B:");
			scanf("%d", &b[k][m]);	
			}	
	}
	for(s=0;s<=2;s++){
		for(y=0;y<=2;y++){
			sum[s][y] = a[s][y] - b[s][y];
			}	
		}
	printf("\nSum Of Matrix:\n");
	for(q=0;q<=2;q++){
		for(p=0;p<=2;p++){
			printf("%d \t", sum[q][p]);
			if(p==1)
				printf("\n");
		}	
	}
}

