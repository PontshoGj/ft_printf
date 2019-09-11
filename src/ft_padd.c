#include "ft_printf.h"

void        padd(char **str, va_list args)
{
    char *s;
    char *temp;
    char j;

    s = "";
    temp = s;
    j = ' ';
    if (*str[0] == '0')
        j = '0';
    while (!(ft_strspn(&(*str[0]), "scdif.")))
    {
        temp = s;
        s = ft_strjoin(s,&(*str[0]));
        free(s);
        *str += 1;
    }
    if (ft_strspn(&(*str[0]), "scdi"))
        prints(ft_atoi(s), *str, args, j);
    else if (*str[0] == 'f')
        outdoub(*str[0], args, ft_atoi(s), 0);
}