#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    i = 48;
    j = 48;
    k = 48;

    while (i <= 57)
    {
        j = 48;
        while (j <= 57)
        {
            k = 48;
            while (k <= 57)
            {
                if (i != j && j != k && i < j && j < k)
                {
                    putchar(i);
                    putchar(j);
                    putchar(k);
                    if (i == 55 && j == 56 && k == 57)
                    {
                        break;
                    }
                    putchar(',');
                    putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return (0);
}
