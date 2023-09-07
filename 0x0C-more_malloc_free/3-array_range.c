#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, size = max - min + 1;

	if (max - min < 0)
		return (NULL);
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
