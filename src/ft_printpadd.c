#include "ft_printf.h"

void    prints(int i, char *str, va_list args, char j)
{
    if (j == '0')
        (ft_strspn(&(*str), "dic")) ? outint(*str, args, i, j) : 0;
    else
        (ft_strspn(&(*str), "dic")) ? outint(*str, args, i, ' ') : 0;
    (*str == 's') ? outcharst(*str, args, i, 0) : 0;
}