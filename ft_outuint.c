#include "ft_printf.h"

void    outuint(char s, va_list args)
{
    char *str;
    unsigned int i;

    i = va_arg(args, unsigned int);
    str = 0;
    if (s == 'X')
    {
        str = ft_itoa_base((int)i, 16);
        ft_putstr(str);
    }
    (s == 'o' || s == 'u') ? ft_putnbrlong(i) : 0 ;
}