#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
}

int main() {
    int x = 0;
    int y = 0;

    printf("Enter the first number for the range: ");
    scanf("%d", &x);

    printf("Enter the second number for the range: ");
    scanf("%d", &y);

    printf("Prime numbers in the range [%d, %d]:\n", x, y);

    for (int num = x; num <= y; num++) {
        if (isPrime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}