#include <stdio.h>
#include <windows.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2 || (argv[1] == "--terminal") != 0)
    {
        system("start lab3.exe --terminal");
        return 0;
    }
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD posLeft, posRight;
    const int rows = 24;
    const int cols = 80;
    for (int col = 0; col < cols; col++)
    {
        for (int row = 0; row < rows; row++)
        {
            posLeft.X = col;
            posLeft.Y = (col % 2 == 0) ? rows - 1 - row : row;
            posRight.X = cols - 1 - col;
            posRight.Y = (col % 2 == 0) ? row : rows - 1 - row;
            if (posLeft.X >= posRight.X)
            {
                break;
            }
            SetConsoleCursorPosition(hout, posLeft);
            printf("*");
            SetConsoleCursorPosition(hout, posRight);
            printf("*");
            usleep(1000);
        }
    }
    COORD endPos = {0, rows};
    SetConsoleCursorPosition(hout, endPos);
    getchar();
    return 0;
}