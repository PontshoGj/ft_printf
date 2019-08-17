#include "ft_printf.h"

long    rnum(double i)
{
    long	count;
    
	count = 1;
	if (i == 0)
		return (1);
	while (i > 0)
	{
		i -= 0.1;
        //printf("%f\t%lu\n", i, count);
		count *= 10;
	}
    return (count);
}

void    outdoub(char s, va_list args)
{
    double i;
    double j;

    i = 0;
    j = 0;
    if (s == 'f' || s == 'F')
    {
        i = va_arg(args, double);
        j = i;
        j = i-(int)j;
        //printf("%f", j);
        ft_putnbrlong((int)i);
        ft_putchar('.');
        ft_putnbrlong(j * (rnum(j) * 10));

    }
    //ft_putnbrlong(va_arg(args, long));
}