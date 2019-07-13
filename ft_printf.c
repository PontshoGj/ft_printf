#include "ft_printf.h"

void	ft_ch(char c, ...)
{
    va_list args;
    va_start(args, c);
    if (c == 'd' || c == 'i')
        //ft_putnbr()
    va_end(args);
}


int ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);

    while (*str != 0)
    {
        if (*str == '%')
        {
            str++;
            ft_ch(*str, va_arg(args, `));
        }
        else
            ft_putchar(*str);
        str++;   
    }
    va_end(args);
    return (0);
}
