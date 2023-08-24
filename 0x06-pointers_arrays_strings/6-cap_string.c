#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *a)
{
	int count = 0, count2;
	int sep[] = {32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125, 9, 10};

	while (*(a + count) != '\0')
	{
		for (count2 = 0; count2 < 13; count2++)
		{
			if (*(a + count) == sep[count2])
			{
				if ((*(a + (count + 1)) >= 97) && (*(a + (count + 1)) <= 122))
					*(a + count + 1) = *(a + count + 1) - 32;
				break;
			}
		}
		count++;
	}
	return (a);
}
