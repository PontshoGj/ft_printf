#include "ft_printf.h"

void    outuint(char s, va_list args)
{
    char *str;
    unsigned int i;

    i = va_arg(args, unsigned int);
    str = 0;
    if (s == 'X' || s == 'x')
    {
        str = ft_itoa_base((int)i, 16, s);
        ft_putstr(str);
    }
    if (s == 'o')
    {
        str = ft_itoa_base((int)i, 8, s);
        ft_putstr(str);
    }
    (s == 'u') ? ft_putnbrlong(i) : 0;
}