#include <stdio.h>

int main(){
    int num, i , isPrime;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num<=1){
        isPrime=0;
    }
    else {
        for (i=2;i<=num/2;i++){
            if(num%i==0){
                isPrime=0;
                break;
            }
            else{
                isPrime=1;
            }
        }
    }
    if(isPrime==1){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    return 0;
}