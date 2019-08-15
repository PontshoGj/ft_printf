#include "ft_printf.h"

void    outdoub(char s, va_list args)
{
    (void)s;
    ft_putnbrlong(va_arg(args, long));
}