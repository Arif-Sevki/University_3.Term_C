#include <stdio.h> 

int globalVar=10;//global variable

void scopeDemo(){
    int localVar=20;//local variable
    printf("Inside Function Local Variable: %d\n",localVar);
    printf("Inside Function Global Variable: %d\n",globalVar);

    globalVar=65;
}


int main(){
    printf("Global Variable: %d\n",globalVar);
    scopeDemo();
    printf("Global Variable: %d\n",globalVar);
    
    //localVar is not visible here
    //printf("Local Variable: %d\n",localVar);
    //error: 'localVar' undeclared (first use in this function)
    return 0;
    
}