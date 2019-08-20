#include "ft_printf.h"

void        printhandler(const char **str, va_list args)
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
        padd(str, args);
    if (*str[0] == '.')
    {
        *str += 1;
        paddfloat(str, args);
    }
}