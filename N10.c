#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements and their counts:\n");

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Check if the element is counted already
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    // Mark the duplicate element to avoid counting it again
                    arr[j] = -1;
                }
            }

            // Output the duplicate element and its count
            if (count > 1) {
                printf("%d is repeated %d times.\n", arr[i], count);
            }
        }
    }

    return 0;
}