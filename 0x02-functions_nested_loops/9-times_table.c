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
int i = 0, j, n, tens, ones;
while (i < 10)
{
j = 0;
while (j < 10)
{
n = i * j;
tens = n / 10;
ones = n % 10;
if (n < 10)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
else if (n > 10)
{
_putchar(tens + '0');
_putchar(ones + '0');
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}
