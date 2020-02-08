#include <stdio.h>
void main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    if(a > 100){
        printf(" greater than 100");
    }
    else if(a < 100){
         printf(" Less than 100");
    }
    else if ( a == 5){

        printf("Five");
    }

        else if ( a >= 5){

        printf("a >= 5");
    }

    else{
        printf("Wrong");
    }
}
