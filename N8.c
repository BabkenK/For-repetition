#include <stdio.h>

int main() {
    int arr[7];
    
    printf("Please enter 7 numbers:\n");
    
    for (int i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
        
    }
    
    printf("Array elements after multiplying by 2:\n");
     for (int i = 0; i < 7; ++i) {
        printf("%d ", arr[i]);
        arr[i] *= 2; // Multiply each element in the array by 2
    }

    return 0;
}






