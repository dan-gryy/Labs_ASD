#include <stdio.h>

int search(double row[], int n, double x)
{
    int L = 0, R = n - 1;
    while (L < R)
    {
        int M = (L + R) / 2;

        if (row[M] >= x)
        {
            R = M;
        }
        else
        {
            L = M + 1;
        }
    }
    if (row[L] == x)
        return L;
    else
        return -1;
}
int main()
{
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    double A[m][n];
    printf("Enter matrix elements (each row sorted in non-decreasing order):\n");
    for (int i = 0; i < m; i++)
    {
        printf("Row %d:\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }
    double x;
    printf("Enter value X to search for: ");
    scanf("%lf", &x);
    printf("Search results:\n");
    for (int i = 0; i < m; i++)
    {
        int col = search(A[i], n, x);

        if (col != -1)
            printf("Found X in row %d, column %d\n", i + 1, col + 1);
        else
            printf("X not found in row %d\n", i + 1);
    }
    return 0;
}