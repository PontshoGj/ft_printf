#include "ft_printf.h"



void		ft_nbr2(int n, int num)
{
    char *s;
    int i;

    s = ft_itoa(n);
    if (n < 0)
        num++;
    i = ft_intlen(n) - 3;
    while (s[i] > 0 && num-- > 0)
        ft_putchar(s[i++]);
}
