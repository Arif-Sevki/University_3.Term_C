#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

//Signal handler function for SIGSEGV
void handle_sigsegve(int signal) {
    printf("Cought segmantation faulth (signal %d). Exiting gracefully...", signal);
    exit(EXIT_FAILURE);
}

int main() {
    // Register signal handler
    signal(SIGSEGV, handle_sigsegve);

    // Dereference a null pointer
    int *ptr = NULL;
    *ptr = 42;

    printf("This line will not be executed");

    return 0;
}

