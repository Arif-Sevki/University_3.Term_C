#include <stdio.h>
#include <time.h>

int main(){

    time_t time1 = time(NULL);//only returns the current time
    printf("Current time: %ld\n", time1);

    time_t time2;
    time(&time2);//returns the current time and stores it in time2
    printf("Current time: %ld\n", (long)time2);

    time_t time3;
    time_t time4 = time(&time3);//returns the current time and stores it in time3 and time4
    printf("Stored time: %ld\n", (long)time3);
    printf("Returned time: %ld\n", (long)time4);


    return 0;
}