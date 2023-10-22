#include <stdio.h>

int main() {
    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;
    float The_arithmetic_average = 0.0;
    
    printf("Enter the number 1: ");
    scanf("%f", &num1);
    
    printf("Enter the number 2: ");
    scanf("%f", &num2);
    
    printf("Enter the number 3: ");
    scanf("%f", &num3);
    
    The_arithmetic_average = (num1 + num2 + num3) / 3.0;
    
    printf("The arithmetic average is %.6f\n", The_arithmetic_average);

    return 0;
}