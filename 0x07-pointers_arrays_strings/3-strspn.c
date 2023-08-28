#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char* a;
	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				i++;
				break;
			}
		a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (i);
}
