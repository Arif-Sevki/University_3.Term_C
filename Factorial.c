#include <stdio.h>

//Function to calculate factorial
int factorial(int n){
    int factorial =1;
    if (n<0){
        factorial = -1;
    }
    else if(n==0){
        factorial = 0;
    }
    else{
        for(int i=1; i<=n; i++){
            factorial *= i;
        }
    }

     return factorial;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    if(result == -1){
        printf("Factorial of negative number is not defined\n");
    }
    else{
        printf("Factorial of %d is %d\n", num, result);
    }
    return 0;
}