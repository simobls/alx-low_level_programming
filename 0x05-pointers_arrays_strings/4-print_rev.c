#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */


void print_rev(char *s)
{
	int i, j = 0, len;
	char *rev;

	len = _strlen(*s);
	for (i = len - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	_puts(*rev);
}
