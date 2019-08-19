#include "ft_printf.h"

static void        padd(const char **str, va_list args)
{
    char *s;

    s = "";
    while (!(ft_strspn(&(*str[0]), "scdi")))
    {
        s = ft_strjoin(s,&(*str[0]));
        *str += 1;
    }
    prints(ft_atoi(s), (char *)(*str), args);    
}
static void floatpre(const char **str, va_list args, int i)
{
    char c;

    c = (char)(*str[0]);
    outdoub(c, args, i);

}

static void paddfloat(const char **str, va_list args)
{
    char *s;

    s = "";
    if (*str[0] == '*')
    {
        *str += 1;
        floatpre(str, args, va_arg(args, int));
    }
    else if (ft_isdigit(*str[0]))
    {
        while (!(ft_strspn(&(*str[0]), "fF")))
        {
            s = ft_strjoin(s, &(*str[0]));
            *str += 1;
        }
        floatpre(str, args, ft_atoi(s));
    }
}

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