#include <stdio.h>

int main () {
    int num1 , num2;
    char operator;

    printf("Enter an operator (+,-,*,/)");
    scanf("%c", &operator);

    printf("enter first and second number (num1 num2)");
    scanf("%d %d", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;

    case '/':
        if (num2 == 0){
            printf ("Divided by zero!!!!");
        }
        else{
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
        break;
    
    default:
        break;
    }



}