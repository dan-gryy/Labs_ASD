#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0;
    printf("Type n: ");
    scanf("%d", &n);

    double P = 1.0;
    double b = 0.0;

    for (int i = 1; i <= n; i++)
    {
        double a = i * sqrt(i);
        count += 2;
        double b = 0.0;

        for (int j = 1; j <= i; j++)
        {
            b += j * sin(j) + j;
            count += 4;
        }
        {
            P *= a / b;
            count += 3;
        }
    }

    printf("Result P = %.7lf\n", P);
    printf("Number of operation: %d\n", count);
    return 0;
}
