
#include "ft_printf.h"

void    outcharst(char s, va_list args)
{
    (void)s;
    ft_putstr(va_arg(args, char *));
}