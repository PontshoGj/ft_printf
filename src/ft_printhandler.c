#include "ft_printf.h"

static void paddhandler(const char **str, va_list args)
{
    if (*str[0] == 'f')
        outdoub(*str[0], args, va_arg(args, int), 0);
    else if (*str[0] == 's')
        outcharst(*str[0], args, va_arg(args, int));
    else if (*str[0] == '.')
    {
        *str += 2;
        if (*str[0] == 'f')
            outdoub(*str[0], args, va_arg(args, int), va_arg(args, int));
    }
}

void        printhandler(const char **str, va_list args)
{
    char *s;

    s = "";
    if (ft_strspn(&(*str[0]), "dicsoxXufFeEaAgG"))
		printstr((char)*str[0], args);
	else if (ft_strspn(*str, "#"))
	{
        *str += 1;
        if (ft_strspn(&(*str[0]), "oxX"))
            printxx((char *)(*str), args);
    }
    else if (ft_isdigit(*str[0]) || *str[0] == '-')
        padd(str, args);
    else if (*str[0] == '.')
    {
        *str += 1;
        paddfloat(str, args);
    }
    else if (*str[0] == '*')
    {
        *str += 1;
        if (ft_strspn(&(*str[0]), ".fsdicoxXufFeEaAgG"))
            paddhandler(str, args);
    }
}