#include <stdio.h>

int main() {
    int arr[7];
    
    printf("Please enter 7 numbers:\n");
    
    for (int i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort to sort the array in ascending order
    for (int i = 0; i < 7 - 1; ++i) {
        for (int j = 0; j < 7 - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array elements sorted in ascending order:\n");
   
     
    for (int i = 0; i < 7; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}






