#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

     // Check triangle validity
    if((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid.\n");

        // Equilateral check
        if((a == b) && (b == c))
            printf("Equilateral triangle.\n");
        // Isosceles check
        else if(a == b || b == c || a == c)
            printf("Isosceles triangle.\n");
        // Right angle check
        else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
            printf("Right angled triangle.\n");
        // Scalene check
        else
            printf("Scalene triangle.\n");
    }
    
     else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
