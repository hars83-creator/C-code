#include <stdio.h>
int main()
{
    int n, num, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    printf("Frequency of %d is %d\n", num, count);
    return 0;
}
