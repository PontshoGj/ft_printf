#include "ft_printf.h"

static void    printstr(char s, va_list args)
{
    (ft_strspn(&s , "dic")) ? outint(s, args, 0) : 0;
    (s == 's') ? outcharst(s, args, 0) : 0;
    (ft_strspn(&s , "oxXu")) ? outuint(s, args, 0) : 0;
    (ft_strspn(&s, "fFeEaAgG")) ? outdoub(s, args) : 0;
}

static void printxx(char *s, va_list args)
{
	(ft_strspn(&*s, "oxXu")) ? outuint(*s, args, 'a') : 0;
}

static void prints(int i, char *str, va_list args)
{
    (ft_strspn(&(*str), "dic")) ? outint(*str, args, i) : 0;
    (*str == 's') ? outcharst(*str, args, i) : 0;
}
static void printhandler( const char **str, va_list args)
{
    char *s;

    s = "";
    if (ft_strspn(&(*str[0]), "dicsoxXufFeEaAgG"))
		printstr((char)*str[0], args);
	if (ft_strspn(*str, "#"))
	{
        *str += 1;
        if (ft_strspn(&(*str[0]), "oxX"))
            printxx((char *)(*str), args);
    }
    if (ft_isdigit(*str[0]) || *str[0] == '-')
    {
        while (!(ft_strspn(&(*str[0]), "scdi")))
        {
            s = ft_strjoin(s,&(*str[0]));
            *str += 1;
        }
        prints(ft_atoi(s), (char *)(*str), args);
    }
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
