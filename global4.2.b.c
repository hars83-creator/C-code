#include<stdio.h>
int x = 5; // global

void myFunction() {
    printf("%d\n", x); // print global x 
    x = 10; //  modifies global x 
}


int main() {

    myFunction();

    printf("%d\n", x); // prints modified x 
    return 0;
}

