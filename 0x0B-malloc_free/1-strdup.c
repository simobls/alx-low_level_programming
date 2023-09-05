#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strout;
	int len;

	len = strlen(str);
	strout = (char *)malloc((len + 1) * sizeof(char));
	if (strout == NULL)
	{
		return (NULL);
	}
	strcpy(strout, str);
	return (strout);
}
