#include <stdio.h>
int main(int argc, char const *argv[])
{
    int restart;
    do
    {
        int n;
        int s;
        char arr[3][3];
        arr[0][0] = '-';
        arr[0][1] = '-';
        arr[0][2] = '-';
        arr[1][0] = '-';
        arr[1][1] = '-';
        arr[1][2] = '-';
        arr[2][0] = '-';
        arr[2][1] = '-';
        arr[2][2] = '-';

        printf("         ~~INSTRUCTIONS~~        \n        R1C1 | R1C2 | R1C3\n        R2C1 | R2C2 | R2C3\n        R3C1 | R3C2 | R3C3\n");
        for (int i = 0; i < 9; i++)
        {
            if (i == 0 || i == 2 || i == 4 || i == 6 || i == 8)
            {
                printf("        <<<player 'X' your turn>>>\n");
                int R, C;
            a:
                printf("Entrr the row and column to enter your sign\nCHOSE ROW:\n");
                scanf("%d", &n);
                printf("ENTER COLM\n");
                scanf("%d", &s);

                R = n - 1;
                C = s - 1;

                if (R < 3 && R >= 0 && C < 3 && C >= 0 && arr[R][C]=='-')
                {
                    arr[R][C] = 'X';
                }
                else
                {
                    printf("INVALIED POSITION OR MAY BE THE POSITION IS ALREADY FILLED...\nSelect Position again\n \n");
                    goto a;
                }

                printf("%c|%c|%c\n______\n%c|%c|%c\n______\n%c|%c|%c\n", arr[0][0], arr[0][1], arr[0][2], arr[1][0], arr[1][1], arr[1][2], arr[2][0], arr[2][1], arr[2][2]);
            }
            if (i == 1 || i == 3 || i == 5 || i == 7)
            {
                printf("        <<<player 'O' your turn>>>\n");
                int R, C;
            b:
                printf("Entrr the row and column to enter your sign\nCHOSE ROW:\n");
                scanf("%d", &n);
                printf("ENTER COLM\n");
                scanf("%d", &s);
                R = n - 1;
                C = s - 1;
                if (R < 3 && R >= 0 && C < 3 && C >= 0  && arr[R][C]=='-')
                {
                    arr[R][C] = 'O';
                    printf("%c|%c|%c\n______\n%c|%c|%c\n______\n%c|%c|%c\n", arr[0][0], arr[0][1], arr[0][2], arr[1][0], arr[1][1], arr[1][2], arr[2][0], arr[2][1], arr[2][2]);
                }
                else
                {
                    printf("INVALIED POSITION OR MAY BE THE POSITION IS ALREADY FILLED...\nSelect Position again\n \n");
                    goto b;
                }
            }

            if (arr[0][0] == 'X' &&
                arr[0][1] == 'X' &&
                arr[0][2] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }

            if (arr[0][0] == 'O' &&
                arr[0][1] == 'O' &&
                arr[0][2] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }

            if (arr[1][0] == 'X' &&
                arr[1][1] == 'X' &&
                arr[1][2] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }
            if (arr[1][0] == 'O' &&
                arr[1][1] == 'O' &&
                arr[1][2] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }
            if (arr[2][0] == 'X' &&
                arr[2][1] == 'X' &&
                arr[2][2] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }
            if (arr[2][0] == 'O' &&
                arr[2][1] == 'O' &&
                arr[2][2] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }
            if (arr[0][0] == 'X' &&
                arr[1][0] == 'X' &&
                arr[2][0] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }
            if (arr[0][0] == 'O' &&
                arr[1][0] == 'O' &&
                arr[2][0] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }
            if (arr[0][1] == 'X' &&
                arr[1][1] == 'X' &&
                arr[2][1] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }
            if (arr[0][1] == 'O' &&
                arr[1][1] == 'O' &&
                arr[2][1] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }

            if (arr[0][2] == 'X' &&
                arr[1][2] == 'X' &&
                arr[2][2] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }

            if (arr[0][2] == 'O' &&
                arr[1][2] == 'O' &&
                arr[2][2] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }

            if (arr[0][0] == 'X' &&
                arr[1][1] == 'X' &&
                arr[2][2] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }
            if (arr[0][0] == 'O' &&
                arr[1][1] == 'O' &&
                arr[2][2] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }

            if (arr[0][2] == 'X' &&
                arr[1][1] == 'X' &&
                arr[2][0] == 'X')
            {
                printf("     ~~PLAYER 'X' WON~~     \n");
                goto end;
            }
            if (arr[0][2] == 'O' &&
                arr[1][1] == 'O' &&
                arr[2][0] == 'O')
            {
                printf("     ~~PLAYER 'O' WON~~     \n");
                goto end;
            }
        }
        printf("   ~~DRAW~~   \n");

    end:
        printf("Want to play again?\n if yes enter '1'\n if no enter '0'\n");
        scanf("%d", &restart);
    } while (restart == 1);
    return 0;
}
