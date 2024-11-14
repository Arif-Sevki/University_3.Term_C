#include <stdio.h>

int factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    printf("Enter a positive integer: ");
    unsigned int n;
    scanf("%u", &n);
    printf("Factorial of %u = %d\n", n, factorial(n));

    return 0;
}