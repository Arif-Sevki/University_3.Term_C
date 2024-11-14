#include <stdio.h> 

// Define the maximum number of functions that can be registered for execution at exit
#define MAX_ATEXIT_FUNCS 32

// Define a function pointer type for functions that take no arguments and return void
typedef void (*atexit_func_t)(void);

// Array to hold pointers to functions registered for exit
// Static so it can only be accessed within this file
static atexit_func_t atexit_funcs[MAX_ATEXIT_FUNCS];

// Variable to keep track of the number of registered functions
static int num_funcs = 0;

/**
 * Registers a function to be called at program exit.
 * 
 * @param func Pointer to a function that takes no arguments and returns void
 * @return 0 if registration is successful, -1 if the maximum number of functions is reached
 */
int atexit(atexit_func_t func) {
    // Check if the number of registered functions has reached the maximum allowed
    if (num_funcs >= MAX_ATEXIT_FUNCS) {
        return -1;  // Return -1 to indicate failure
    }
    
    // Store the function pointer in the array and increment the count
    atexit_funcs[num_funcs++] = func;
    return 0;  // Return 0 to indicate success
}

/**
 * Calls all registered functions in reverse order of registration (Last In, First Out).
 * This function is typically called automatically at program exit.
 */
void call_atexit_funcs(void) {
    // Loop over the array of registered functions in reverse order
    for (int i = num_funcs - 1; i >= 0; i--) {
        // If the function pointer at index i is not NULL, call the function
        if (atexit_funcs[i]) {
            (*atexit_funcs[i])();  // Call the function
        }
    }
}
