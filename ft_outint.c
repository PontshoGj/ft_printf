#include "ft_printf.h"

void    outint(char s, va_list args, int space)
{
    if (space != 0)
    {
        while (space-- > 0)
            ft_putchar(' ');
    }
    if (s == 'c')
        ft_putchar(va_arg(args, int));
    else
        ft_putnbr(va_arg(args, int));
}