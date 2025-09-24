#include <stdio.h>

int main(void)
{
    int x;
    printf("Type x: ");
    scanf("%i", &x);
    int y1 = -6 * x * x + 8;
    int y2 = -x * x * x / 7 + 10;

    if (x >= 0 && x < 7)
    {
        printf("y = %i\n", y1);
    }
    else if (x < -10 || x >= 11)
    {
        printf("y = %i\n", y2);
    }
    else
    {
        printf("Function is not defined for this x\n");
    }
}