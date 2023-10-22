#include <stdio.h>

int addTwoIntegers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 0;
    int num2 = 0;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int sum = addTwoIntegers(num1, num2);
    
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}