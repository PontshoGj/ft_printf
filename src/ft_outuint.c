#include "ft_printf.h"

void	printx(char s, char hex)
{
	if (hex != 0 && s == 'x')
		ft_putstr("0x");
	else if (hex != 0 && s == 'X')
		ft_putstr("0X");
	else if (hex != 0 && s == 'o')

		ft_putstr("0");
}

void    outuint(char s, va_list args, char hex)
{
    char *str;
    unsigned int i;

    i = va_arg(args, unsigned int);
    str = 0;
    if (i != 0)
    	printx(s, hex);
    if (s == 'X' || s == 'x')
    {
        str = ft_itoa_base((int)i, 16, s);
        ft_putstr(str);
    }
    if (s == 'o')
    {
        str = ft_itoa_base((int)i, 8, s);
        ft_putstr(str);
    }
    (s == 'u') ? ft_putnbrlong(i) : 0;
}
