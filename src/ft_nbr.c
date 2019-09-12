#include "ft_printf.h"



void		ft_nbr(int n, int num)
{
    char *s;

    s = ft_itoa(n);
    if (n < 0)
        num++;
    while (*s && num-- > 0)
        ft_putchar(*s++);
}
