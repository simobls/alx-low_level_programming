#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	char digit = '0';
	int isupper = 0;

	for (; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
