#include "ft_printf.h"

void    ft_outputshortoct(va_list args, int space, char hex, char c)
{
    (void)space;
    int base;
    long long i;
    short j;

    j = 0;
    if (hex == 'x' || hex == 'X')
        base = 10;
    else
        base = 8;
    if (c == 'h')
    {   
        i = va_arg(args, int);
        j = (short)i;
        //printf("%d", ft_atoi(ft_longtoa_base(ft_atoi(ft_nbrstr(j, 100)), 8, hex)));
        if (space >= 0)
        {
            givespace(ft_intlen(i), space, ' ');
            ft_nbr2(ft_atoi(ft_longtoa_base(ft_atoi(ft_nbrstr(j, 10)), base, hex)), 3);
        }
        else
        {
            ft_nbr2(ft_atoi(ft_longtoa_base(ft_atoi(ft_nbrstr(j, 10)), base, hex)), 3);
            givespace(ft_intlen(i), space, ' ');
        }
        return;
    }
    i = va_arg(args, unsigned  long long);
    j = (short)i;
    if (space >= 0)
    {
        givespace(ft_intlen(i), space, ' ');
        ft_putstr(ft_longtoa_base(ft_atoi(ft_nbrstr(j, 100)), base, hex));
    }
    else
    {
        ft_putstr(ft_longtoa_base(ft_atoi(ft_nbrstr(j, 100)), base, hex));
        givespace(ft_intlen(i), space, ' ');
    }
}