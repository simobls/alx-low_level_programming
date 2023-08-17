#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, n = 0;

	for (i = 0; i < 10; i++)
	{
			while (n < 15)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + 48);
			}
			_putchar(n % 10);
			n++;
			_putchar('\n');
		}
	}
}
