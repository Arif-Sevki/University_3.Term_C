#include <stdio.h>

void hello(){
    printf("Hello\n");
}

void helloCaller(void (*f)()){
    f();
}

int main(){
    
    void (*fptr)() = hello;
    fptr();
    return 0;
}