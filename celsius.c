#include <stdio.h>
int main()
    {
         float celsius,fahrenheit;//declare variables
         
            printf("enter the celsius :");//ask user to enter celsius
            scanf("%f", &celsius);

         fahrenheit = (celsius*9/5)+32;  //also use 1.8 instead of 9/5

         printf("farenheit is :%.2f\n",fahrenheit);//print the result
         return 0;
    }