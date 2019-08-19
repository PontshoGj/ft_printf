#include "ft_printf.h"

static void    printstr(char s, va_list args)
{
    (s == 'd' || s == 'i' || s == 'c') ? outint(s, args) : 0;
    (s == 's') ? outcharst(s, args) : 0;
    (s == 'o' || s == 'x' || s == 'X' || s == 'u') ? outuint(s, args, 0) : 0;
    (s == 'f' || s == 'F' || s == 'e' || s == 'E' || s == 'a' || s == 'A' \
    || s == 'g' || s == 'G') ? outdoub(s, args) : 0;
}

static void printxx(char *s, va_list args)
{
	(*s == 'o' || *s == 'x' || *s == 'X' || *s == 'u') ? outuint(*s, args, 'a') : 0;
}

static void printhandler( const char **str, va_list args)
{
	int i;

	if ((i = ft_strspn((*str), "dicsoxXufFeEaAgG")))
		printstr((char)*str[0], args);
	if ((i = ft_strspn(*str++, "#") || ft_strspn(*str, "oxX")))
		printxx((char *)(*str), args);
	*str += i;
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
	    printhandler(&str, args);
        }
        else
            ft_putchar(*str);
        str++;   
    }
    va_end(args);
	return (0);
}
