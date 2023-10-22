#include <stdio.h>

int findLargestElement(int arr[], int size) {


    int largest = arr[0]; // Initialize the largest element as the first element

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int arr[] = {12, 45, 7, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int largest = findLargestElement(arr, size);

    if (largest != -1) {
        printf("The largest element in the array is: %d\n", largest);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}