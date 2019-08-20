#include "ft_printf.h"

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
}