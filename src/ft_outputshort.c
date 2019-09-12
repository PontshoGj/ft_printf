#include "ft_printf.h"

void    ft_outputshort(va_list args, int space, char c)
{
    (void)space;
    long long i;

    if (c == 'l')
        i = va_arg(args, int);
    else    
        i = va_arg(args, long long);
    ft_putnbrlong(i);
}
