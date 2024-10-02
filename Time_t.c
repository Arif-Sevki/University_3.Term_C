#include <stdio.h>
#include <time.h>

int main(){
    
    //time_t is long long
    printf("Size of the time_t is: %zu bytes\n", sizeof(time_t));
    printf("Size of the int is: %zu bytes\n", sizeof(int));
    printf("Size of the long is: %zu bytes\n", sizeof(long));
    printf("Size of the long long is: %zu bytes\n", sizeof(long long));


    //time_t can be signed or unsigned
    time_t t = (time_t)-1;

    if (t<0){
        printf("time_t is signed\n");
    }else{
        printf("time_t is unsigned\n");
    }

    unsigned int x=-1;
    if(x<0){
        printf("unsigned int is signed\n");
    }else{  
        printf("unsigned int is unsigned\n");
    }


    return 0;
}