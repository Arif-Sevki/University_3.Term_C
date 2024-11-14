#include <stdio.h>

//Pass by value swap function
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}

//There is no change because swap is pass by value
int main(){
    int x=3, y=5;
    printf("Before swapping: x=%d, y=%d\n", x, y);
    swap(x, y);
    printf("After swapping: x=%d, y=%d\n", x, y);
    return 0;
}