#include "ft_printf.h"

void    ft_outputunsignedlong(va_list args, int space, char c)
{
    (void)space;
    long long i;

    if (c == 'l')
        i = va_arg(args, long);
    else    
        i = va_arg(args, unsigned long long);
    ft_putnbrlong(i);
}

void    ft_outputunsignedlonghex(va_list args, int space, char hex, char c)
{
    (void)space;
    (void)hex;
    long long i;
    if (c == 'l')
        i = va_arg(args, unsigned long);
    else    
        i = va_arg(args, unsigned long long);
    ft_putstr(ft_longtoa_base(i, 8, hex));
}