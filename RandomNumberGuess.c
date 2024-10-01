#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess,number;
    srand(time(0));
    number = rand() %100 + 1;
    
    printf("Guess the number between 1 to 100\n");

    while(1){
        scanf("%d",&guess);

        if(guess > number){
            printf("Too high! Try again\n");
        }
        else if(guess < number){
            printf("Too low! Try again\n");
        }
        else{
            printf("Congratulations! You guessed the number\n");
            break;
        }
    } 
    return 0;
}