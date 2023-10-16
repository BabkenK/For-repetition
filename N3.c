#include <stdio.h>

int main() {
    
    int x = 2;

    while (x >= 1 && x <= 100 && x % 2 == 0) {
        
        printf("Even number : %d\n", x);
        x += 2; // Increment x by 2
    
        
    }
    return 0;
}