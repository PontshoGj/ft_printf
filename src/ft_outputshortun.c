#include "ft_printf.h"

void    ft_outputshortun(va_list args, int space, char c)
{
    (void)space;
    (void)c;
    long long i;
    short j;

    if (c == 'h')
    {
         i = va_arg(args, int);
        j = (short)i;
        ft_putnbr(j);
        return ;
    }
    i = va_arg(args, unsigned  long long);
    j = (short)i;
    j = (char)j;
    ft_nbr(j, 2);
}