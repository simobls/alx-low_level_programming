#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
int r;
r = n % 10;
if (r < 0)
{
    r = r * -1;
}

return (r);
}
