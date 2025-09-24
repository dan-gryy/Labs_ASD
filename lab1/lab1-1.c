#include <stdio.h>
int main() 
{
    int x;
    int y;

    printf("Type x: ");
    scanf("%i", &x);

    if (x >= 0)
        if (x < 7)
            y = -6 * x * x + 8;
        else
            printf("First function is not defined for this x\n");
    else if (x < -10)
        y = -x * x * x / 7 + 10;
    else if (x >= 11)
        y = -x * x * x / 7 + 10;
    else
        printf("Second function is not defined for this x\n");
        printf("y = %i\n", y);
}