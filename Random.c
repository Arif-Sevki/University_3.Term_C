#include <stdio.h>

#define RAND_MAX 32767 //define the maximum value of the random number
static unsigned long int next = 1;//Seed, usualy sat by srand()

//Simple implementation of the rand() function
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % RAND_MAX;
}

//Seed the random number generator
void srand(unsigned int seed) {
    next = seed;
}

