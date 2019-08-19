#include "ft_printf.h"

int    rnum(double i, int z)
{
	int	count;
	int	j;

	count = 1;
    if (z != 0)
        j = z;
    else
	    j = 6;
	while (i > 0 && j-- > 0)
	{
		count = i * 10;
		if (j == 0)
		{
			if (i * 10 > 5)
				count += 1;
		}
		i *= 10;
	}
    return (count);
}

void    outdoub(char s, va_list args, int z)
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
        //printf("%f\n\n", j);
        ft_putnbrlong((int)i);
        ft_putchar('.');
        ft_putnbrlong(rnum(j, z));

    }
    //ft_putnbrlong(va_arg(args, long));
}
