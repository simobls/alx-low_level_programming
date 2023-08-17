#include <stdio.h>

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			while (i > 0)
			{
				putchar(' ');
				i--;
			}
			putchar(92);
		}
	}
	putchar('\n');
}

void main()
{
	print_diagonal(4);
}