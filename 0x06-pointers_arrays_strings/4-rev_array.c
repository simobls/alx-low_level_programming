#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, tmp, half;

	half = (n - 1) / 2;
	if ((n - 1) % 2 == 0)
	{
		half = half - 1;
	}
	for (i = 0; i <= half; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
