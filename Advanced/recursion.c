
#include <stdio.h>

int factorial(int n);

int main() {
    /* testing code */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
    
    return 0;
}

/* Function definition */
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // 0! and 1! are both 1
    } else {
        return n * factorial(n - 1);  // n! = n * (n-1)!
    }
}
