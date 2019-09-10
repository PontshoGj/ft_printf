#include    "ft_printf.h"

void    ft_printshort(char **s, va_list args)
{
    char *str;

    str =ft_strtrim(ft_strsub(*s, 0 ,3));
    
    if (ft_strspn(str, "hhd") == 3 || ft_strspn(str, "hhi") == 3)
    {
        *s += 2; 
        ft_outputlong(args, 0, ' ');
    }
    else if (ft_strspn(str, "hhx") == 3 || ft_strspn(str, "hhX") == 3)
    {
        *s += 2;
        ft_outputlonghex(args, 0, *s[0], ' ');
    }
    else if (ft_strspn("hd", str) == 2 || ft_strspn("hi", str) == 2)
    {
        ft_outputlong(args, 0, *s[0]);
        *s += 1;   
    }
    else if (ft_strspn("hx", str) == 2 || ft_strspn("hX", str) == 2)
    {
        *s += 1;
        ft_outputlonghex(args, 0, *s[0], str[2]);
    }
}