#include <stdio.h>

int g = 10; // global variable

void func1() {
    printf("In func1(), g = %d\n", g);
    g += 5; // modifying global variable
}

void func2() {
    printf("In func2(), g = %d\n", g);
    g *= 2; // modifying global variable
}

int main() {
    printf("In main(), g = %d\n", g);
    func1();
    printf("After func1(), g = %d\n", g);
    func2();
    printf("After func2(), g = %d\n", g);
    return 0;
}
