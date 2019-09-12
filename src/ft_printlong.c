#include    "ft_printf.h"

void    ft_printlong(char **s, va_list args)
{
    char *str;

    str =ft_strtrim(ft_strsub(*s, 0 ,3));
    
    if (ft_strspn(str, "lld") == 3 || ft_strspn(str, "lli") == 3)
    {
        *s += 2; 
        ft_outputlong(args, 0, ' ');
    }
    else if (ft_strspn(str, "llx") == 3 || ft_strspn(str, "llX") == 3)
    {
        *s += 2;
        ft_outputlonghex(args, 0, *s[0], ' ');
    }
    else if (ft_strspn("ld", str) == 2 || ft_strspn("li", str) == 2)
    {
        ft_outputlong(args, 0, *s[0]);
        *s += 1;   
    }
    else if (ft_strspn("lx", str) == 2 || ft_strspn("lX", str) == 2)
    {
        *s += 1;
        ft_outputlonghex(args, 0, *s[0], str[2]);
    }
    else if (ft_strspn(str, "llu") == 3)
    {
        *s += 2;
        ft_outputlong(args, 0, *s[0]);
    }
    else if (ft_strspn("lu", str) == 2)
    {
        ft_outputlong(args, 0, *s[0]);
        *s += 1;
    }
    else if (ft_strspn(str,"llo") == 3)
    {
        *s += 2;
        ft_outputunsignedlonghex(args, 0, *s[0], str[2]);
    }
    else if (ft_strspn("lo", str) == 2)
    {
        *s += 1;
        ft_outputunsignedlonghex(args, 0, *s[0], str[2]);
    }
}