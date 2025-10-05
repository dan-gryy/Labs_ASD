#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Type n: ");
    scanf("%d", &n);
    double P = 1.0;
    double S = 0.0;
    int function = 0;

    for (int i = 1; i <= n; i++)
    {
        S += i * sin(i) + i;
        function += 3;
        P *= i * sqrt(i) / S;
        function += 3;
    }

    printf("%.7lf\n", P);
    printf("Number of functions: %d\n", function);
    return 0;
}
