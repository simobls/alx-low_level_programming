#include "main.h"

void jack_bauer(void)
{
    int htens, hones, mtens, mones, hmax;
    while (htens < 3)
    {
        hmax = 9;
        if (htens = 2)
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
                }
                mones++;
            }
            mtens++;
        }
        hones++;
    }
    htens++;
}