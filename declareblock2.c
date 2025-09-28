#include <stdio.h>

int main() {
    int num = 1;
    {
        int num = 2; // Shadows outer 'num'
        printf("%d\n", num); // Prints 2
    }
    printf("%d\n", num); // Prints 1
    return 0;
}
