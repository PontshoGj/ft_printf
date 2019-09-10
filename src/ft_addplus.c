#include "ft_printf.h"

void    ft_addplus(char **s, va_list args)
{
    (ft_strspn(&s , "dic")) ? outint(s, args, 0) : 0;
}