#include <stdio.h>

int main() {
    
    int x = 1;
    while (x >= 1 && x <= 100) {
        printf("%d\n", x);
        x++; // Increment x by 1
    }

    printf("end\n");
    
    return 0;
}