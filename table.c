#include <stdio.h>

int main() {
    int num, i;

    // Ask for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print multiplication table from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
