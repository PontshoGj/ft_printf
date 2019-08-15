#include "ft_printf.h"


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
