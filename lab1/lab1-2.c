#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Введіть значення x: ");
    scanf("%i", &x);

    if (x >= 0 && x < 7) 
        y = -6 * x * x + 8;
    else if (x < -10 || x >= 11)
        y = -x * x * x / 7 + 10;
    else
        printf("Функція не визначена для цього x\n");

    if ((x >= 0 && x < 7) || (x < -10) || (x >= 11))
        printf("y = %i\n", y);
}