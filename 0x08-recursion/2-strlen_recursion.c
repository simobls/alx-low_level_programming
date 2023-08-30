#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	int *len = 0;

	if (*s != '\0')
	{
		*len++;
		_strlen_recursion(++s);
	}
	return (len);
}
