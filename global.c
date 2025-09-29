#include <stdio.h>

int sum = 0; // declare global variable to store sum 

int calc_sum(int a, int b) {
    sum = a + b;     // Store result in global variable
    return sum;      // Also return the sum
}

int rndm_sum() {              // Function to return the global sum variable
    return sum;
}

int main() {
    int num1, num2, adding ;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    adding = calc_sum(num1, num2);   // Returns the sum and updates global variable

    printf("Sum calculated : %d\n", adding);                      // Print the sum returned by calc_sum
    printf("Sum stored in global variable: %d\n", rndm_sum());   // Print the sum stored in global variable

    return 0;
}