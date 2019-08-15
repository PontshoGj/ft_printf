#include "ft_printf.h"

void    outuint(char s, va_list args)
{
    (void)s;
    ft_putnbrlong(va_arg(args, unsigned int));
}