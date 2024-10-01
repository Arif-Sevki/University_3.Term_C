#include <stdio.h>

int main(){
    int num, sum=0;
    printf("Enter a number; ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("Sum of even numbers from 1 to %d is %d",num,sum);
    return 0;


}