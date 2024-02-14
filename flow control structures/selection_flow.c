#include <stdio.h>

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num = 5; // Example number
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
