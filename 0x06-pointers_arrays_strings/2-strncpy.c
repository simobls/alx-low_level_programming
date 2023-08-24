#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count1 = 0;

	while (count1 < n && src[count1] != '\0')
	{
		dest[count1] = src[count1];
		count1++;
	}
	return (dest);
}
