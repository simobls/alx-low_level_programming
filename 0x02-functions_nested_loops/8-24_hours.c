#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
int htens, hones, mtens, mones, hmax, mmax;
while (htens < 3)
{
hmax = 9;
if (htens == 2)
{
hmax = 3;
}
while (hones <= hmax)
{
while (mtens < 6)
{
while (mones <= 9)
{
_putchar(htens);
_putchar(hones);
_putchar(':');
_putchar(mtens);
_putchar(mones);
_putchar('\n');
}}}
}
}
