#include    "ft_printf.h"

void    ft_printshort(char **s, va_list args)
{
    char *str;

    str =ft_strtrim(ft_strsub(*s, 0 ,3));
    //printf("%zu", ft_strspn(str,"hu"));
    if (ft_strspn(str, "hhd") == 3 || ft_strspn(str, "hhi") == 3)
    {
        //ft_outputshortun(args, 0, *s[1]);
        *s += 2; 
        ft_outputshortun(args, 0, *s[0]);
    }
    else if (ft_strspn(str, "hhx") == 3 || ft_strspn(str, "hhX") == 3)
    {
        *s += 2;
        ft_outputlonghex(args, 0, *s[0], ' ');
    }
    else if (ft_strspn(str,"hho") == 3)
    {
        *s += 2;
        ft_outputunsignedshorthex(args, 0, *s[0], str[1]);
    }
    else if (ft_strspn(str, "hhu") == 3)
    {
        *s += 2;
        ft_outputunsignedshort(args, 0, *s[0]);
    }
    else if (ft_strspn(str, "hd") == 2 || ft_strspn(str, "hi") == 2)
    {
        ft_outputshortun(args, 0, *s[0]);
        *s += 1;   
    }
    else if (ft_strspn(str, "hx") == 2 || ft_strspn(str, "hX") == 2)
    {
        *s += 1;
        ft_outputlonghex(args, 0, *s[0], str[2]);
    }
    else if (ft_strspn(str,"hu") == 2)
    {
        ft_outputunsignedshort(args, 0, *s[0]);
        *s += 1;
    }
    
    else if (ft_strspn(str, "ho") == 2)
    {
        *s += 1;
        ft_outputunsignedshorthex(args, 0, *s[0], str[1]);
    }
}