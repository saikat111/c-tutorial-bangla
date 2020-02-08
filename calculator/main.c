#include <stdio.h>
void main()
{
    float num1,num2,result;
    char op;
    printf("Select any operator:");
    scanf("%c", &op);
    printf("Enter number one:");
    scanf("%f", &num1);
    printf("Enter number two:");
    scanf("%f", &num2);


    switch(op){
    case '+':
        result = num1 + num2;
        printf(" The result is :%f", result);
        break;
    case '-':
        result = num1 - num2;
        printf(" The result is :%f", result);
        break;
    case '*':
        result = num1 * num2;
        printf(" The result is :%f", result);
        break;
    case '/':
        result = num1 / num2;
        printf(" The result is :%f", result);
        break;
    case '%':
        result = num1 * num2;
        printf(" The result is :%f", result);
        break;
    default:
        printf("the input is wrong");
    }
}
