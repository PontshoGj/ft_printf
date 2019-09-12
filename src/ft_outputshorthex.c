#include "ft_printf.h"

char		*ft_nbrstrhex(char *s1, int num)
{
    char *str;
    int i;
    int j;

    i = ft_strlen(s1) - num;
    j = 0;
    str = (char *)malloc(sizeof(char) * num + 1);
    while (s1[i] != 0 && num-- > 0)
        str[j++] = s1[i++];
    str[j] = 0;
    return (str);
}

void    ft_outputshorthex(va_list args, int space, char hex, char c)
{
    (void)space;
    (void)hex;
    long long i;
    if (c == 'h')
    {
        i = va_arg(args, long);
        if (space >= 0)
        {
            givespace(ft_intlen(i), space, ' ');
            ft_putstr(ft_nbrstrhex(ft_longtoa_base(i, 16, hex), 2));
        }
        else
        {
            ft_putstr(ft_nbrstrhex(ft_longtoa_base(i, 16, hex), 2));
            givespace(ft_intlen(i), space, ' ');
        }
        return ;
    }
    i = va_arg(args, long long);
    if (space >= 0)
    {
        givespace(ft_intlen(i), space, ' ');
        ft_putstr(ft_longtoa_base(i, 16, hex));
    }
    else
    {
        ft_putstr(ft_longtoa_base(i, 16, hex));
        givespace(ft_intlen(i), space, ' ');
    }
}