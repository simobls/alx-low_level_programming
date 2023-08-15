#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
int i = 0, j, n;
while (i < 10)
{
j = 0;
while (j < 10)
{
n = 'i * j';
_putchar(n);
_putchar(',');
_putchar(' ');
j++;
}
_putchar('\n');
i++;
}
}
