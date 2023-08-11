#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 *        followed by a new line
 *        (excluding 'e' and 'q')
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        if (i != 'e' && i != 'q')
        {
            putchar(i);
        }
    }
    putchar('\n');
    return (0);
}
