#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */

void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	_putchar('\n');
}