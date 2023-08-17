#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 *
 * Return: void
 */


void print_square(int size)
{
	int i = 0, j = 0;

	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
