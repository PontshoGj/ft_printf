#include "ft_printf.h"

void        padd(const char **str, va_list args)
{
    char *s;

    s = "";
    while (!(ft_strspn(&(*str[0]), "scdi")))
    {
        s = ft_strjoin(s,&(*str[0]));
        *str += 1;
    }
    prints(ft_atoi(s), (char *)(*str), args);    
}