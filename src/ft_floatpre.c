#include "ft_printf.h"

void floatpre(char **str, va_list args, int i)
{
    char c;

    c = (char)(*str[0]);
    outdoub(c, args, 0, i);

}