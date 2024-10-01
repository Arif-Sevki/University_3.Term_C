#include <stdio.h>

int main(){
    int num,t;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        t = num*i;
        printf("%d x %d = %d\n",num,i,t);
    }
    return 0;   
}