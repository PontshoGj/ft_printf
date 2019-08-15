#include <stdio.h>
#include "ft_printf.h"
#include <stdarg.h>

void    outint(char s, va_list args)
{
    if (s == 'c')
        ft_putchar(va_arg(args, int));
    else
        ft_putnbr(va_arg(args, int));
}
void    outcharst(char s, va_list args)
{
    ft_putstr(va_arg(args, char *));
}

void    outuint(char s, va_list args)
{
    ft_putnbrlong(va_arg(args, unsigned int));
}
void    outdoub(char s, va_list args)
{
    ft_putnbrlong(va_arg(args, long));
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
            (*str == 'd' || *str == 'i' || *str == 'c') ? outint(*str, args):0;
            (*str == 's') ? outcharst(*str, args):0;
            (*str == 'o' || *str == 'x' || *str == 'X' || *str == 'u') ? outuint(*str, args) :0;
            (*str == 'f' || *str == 'F' || *str == 'e' || *str == 'E' || *str == 'a' || *str == 'A' || *str == 'g' || *str == 'G') ? outdoub(*str, args):0; 
        }
        else
            ft_putchar(*str);
        str++;   
    }
    va_end(args);
	return (0);
}
