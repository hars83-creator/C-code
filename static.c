#include<stdio.h>

int func_add(int x, int y)
{
    static int num = 4;
    num = num + x +y;
    return num;
}

int func_minus(int x,int y)
{
    static int num = 4;
   num = num - x - y;
    return num;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nResult of 1st add call\n%d", func_add(num1, num2));

    printf("\nResult of 1st minus call\n%d", func_minus(num1, num2));

    printf("\nResult of 2nd add call\n%d", func_add(num1, num2));

    printf("\nResult of 2nd minus call\n%d", func_minus(num1, num2));

    return 0;
}