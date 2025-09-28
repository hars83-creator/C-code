#include <stdio.h>

int main() {
    int outer = 10; // Declared in the main block
    printf("Outside block: outer = %d\n", outer);

    {
        int inner = 20; // Declared in inner block
        printf("Inside block: outer = %d, inner = %d\n", outer, inner);
    }

    

    return 0;
}
