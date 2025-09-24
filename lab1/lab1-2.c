#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Type x: ");
    scanf("%i", &x);

    if (x >= 0 && x < 7) 
        y = -6 * x * x + 8;
    else if (x < -10 || x >= 11)
        y = -x * x * x / 7 + 10;
    else
        printf("Function is not defined for this x\n");
        printf("y = %i\n", y);
}