#include <stdio.h>
#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);

    while (*str != 0)
    {
        if (*str == '%')
        {
            str++;
            if (*str == 'd' || *str == 'i')
                ft_putnbr(va_arg(args,int));
            else if (*str == 's')
                ft_putstr(va_arg(args, char *));
            else if (*str == 'c')
                ft_putchar(va_arg(args, int));
        }
        else
            ft_putchar(*str);
        str++;   
    }
    va_end(args);
	return (0);
}
