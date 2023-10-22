#include <stdio.h>

int main() {
    int arr[7];
    printf("Please enter 7 numbers:\n");

    int index;
    int sum = 0;

    for (index = 0; index < 7; ++index) {
        scanf("%d", &arr[index]);
        sum += arr[index];
    }

    printf("Sum of the entered numbers is: %d\n", sum);
    return 0;
}