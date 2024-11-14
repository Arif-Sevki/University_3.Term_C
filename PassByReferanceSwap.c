#include <stdio.h>

//Pass by reference swap function
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int x=3, y=5;
    printf("Before swapping: x=%d, y=%d\n", x, y);
    swap(&x, &y);//pass by referance using pointers
    printf("After swapping: x=%d, y=%d\n", x, y);
    return 0;
}