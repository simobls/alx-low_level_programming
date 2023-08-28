#include "main.h"

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
