#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	strout = malloc(sizeof(char) * (len1 + len2 + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	strcpy(strout, s1);
	strcat(strout, s2);
	return (strout);
}
