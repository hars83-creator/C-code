#include<stdio.h>

void myFunction() {
    int x = 5;
}
int main() {
    myFunction();
    printf("%d", x); // Error x is not accessible here
    return 0;
}
