#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter the order of matrix A (rows columns): ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of matrix B (rows columns): ");
    scanf("%d %d", &p, &q);

    if (n != p)
    {
        printf("Matrix multiplication not possible! Number of columns in A must equal number of rows in B.\n");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];

    // Read matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Read matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix C
    printf("\nProduct Matrix (A x B):\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
