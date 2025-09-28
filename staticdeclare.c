#include <stdio.h>

void upes() {
    static int x = 0; // static local variable
    x++;
    printf("%d\n", x);
}
int main() {
    upes(); // prints 1
    upes(); // prints 2
    upes(); // prints 3
    upes(); // prints 4
    upes(); // prints 5
    return 0;
}
