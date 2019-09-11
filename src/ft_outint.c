#include "ft_printf.h"

void    outint(char s, va_list args, int space, char zeros)
{
    int i;
    
    i = va_arg(args, int);
    if (s == '+' && i > 0)
        ft_putchar('+');
    if (space >= 0)
    {
        if (s == 'c')
        {
            givespace(1, space, zeros);
            ft_putchar(i);
        }
        else
        {
            givespace((int)ft_intlen(i), space, zeros);
            ft_putnbr(i);
        }
    }
    if (space < 0)
    {
        if (s == 'c')
        {
            ft_putchar(i);
            givespace(1, space, zeros);
        }
        else
        {
            ft_putnbr(i);
            givespace((int)ft_intlen(i), space, zeros);
        }
    }    
}