
#include "ft_printf.h"

static void givespace(int i, int space)
{
    if (i < space)
    {
        space -= i;
        while (space-- > 0)
            ft_putchar(' ');
    }
}
void    outcharst(char s, va_list args, int space)
{
    int i;
    char *str; 
    
    (void)s;
    str = va_arg(args, char *);
    i = ft_strlen(str);
    if (space != 0)
    {
        if (space > 0)
        {
            givespace(i, space);
            ft_putstr(str);
        }
        else if (space < 0)
        {
            ft_putstr(str);
            givespace(i, space * -1);
        }
        return;
    }
    ft_putstr(str);
}