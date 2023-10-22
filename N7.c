#include <stdio.h>

int main() {
    int arr[7];
    printf("Please enter 7 numbers:\n");

    int index = 0;
    int max = 0, min = 0;

    for (index = 0; index < 7; ++index) {
        scanf("%d", &arr[index]);
        if (index == 0) {
            max = min = arr[0];
        } else {
            if (arr[index] > max) {
                max = arr[index];
            }
            if (arr[index] < min) {
                min = arr[index];
            }
        }
    }

    printf("The max value in arr is %d\n", max);
    printf("The min value in arr is %d\n", min);

    return 0;
}