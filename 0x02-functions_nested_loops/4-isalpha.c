#include "main.h"

/**
 * _islower - checks for alphabet
 * @c: c is an ascii character
 *
 * Return: 1 if alphabetic
 */

int _islower(int c)
{
if ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) )
{
return (1);
}
else
{
return (0);
}
}
