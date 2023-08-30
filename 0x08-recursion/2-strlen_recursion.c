#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
