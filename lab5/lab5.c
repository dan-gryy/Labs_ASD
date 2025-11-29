#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter matrix size m x n: ");
    scanf("%d%d", &m, &n);
    int A[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    for (int col = 0; col < n; col++)
    {
        int left = 0, right = m - 1;
        while (left < right)
        {
            for (int i = left; i < right; i++)
                if (A[i][col] > A[i + 1][col])
                {
                    int t = A[i][col];
                    A[i][col] = A[i + 1][col];
                    A[i + 1][col] = t;
                }
            right--;
            for (int i = right; i > left; i--)
                if (A[i][col] < A[i - 1][col])
                {
                    int t = A[i][col];
                    A[i][col] = A[i - 1][col];
                    A[i - 1][col] = t;
                }
            left++;
        }
    }
    printf("Matrix after sorting:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}