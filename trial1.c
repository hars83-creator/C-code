#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (isEven(i))
            printf("%d is even\n", i);
        else
            printf("%d is odd\n", i);
    }
    return 0;
}
