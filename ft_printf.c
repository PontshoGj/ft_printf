#include <stdio.h>
#include "ft_printf.h"
#include <stdarg.h>

void    outint(char s, int c)
{
    if (s == 'c')
        ft_putchar(c);
    else
        ft_putnbr(c);
}
void    outcharst(char s, char *str)
{
    ft_putstr(str);
}

void    outuint(char s, unsigned int i)
{

}
void    outdoub(char s, double i)
{

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
            (*str == 'd' || *str == 'i' || *str == 'c') ? outint(*str, va_arg(args, int)):0;
            (*str == 's') ? outcharst(*str, va_arg(args, char *)):0;
            (*str == 'o' || *str == 'x' || *str == 'X' || *str == 'u') ? outuint(*str, va_arg(args, unsigned int)) :0;
            (*str == 'f' || *str == 'F' || *str == 'e' || *str == 'E' || *str == 'a' || *str == 'A' || *str == 'g' || *str == 'G') ? outdoub(*str, va_arg(args, double)):0; 
        }
        else
            ft_putchar(*str);
        str++;   
    }
    va_end(args);
	return (0);
}
