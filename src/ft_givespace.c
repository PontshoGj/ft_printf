#include "ft_printf.h"

void    givespace(int i, int space, char give)
{
    if (i < space)
    {
        space -= i;
        while (space-- > 0)
        {
            if (give == '0')
                ft_putchar('0');
            else
                ft_putchar(' ');
        }
    }
    else if (space < 0 && (i * -1) > space)
    {
        space += i;
        while (space++ < 0)
        {
            if (give == '0')
                ft_putchar('0');
            else
                ft_putchar(' ');
        }
    }
}