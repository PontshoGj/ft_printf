#include <stdio.h>
#include <stdarg.h>

void printInt(int n)
{
    if (n < 0)
    {
        putchar('-');
        n *= -1;
    }
    if (n >= 10)
    {
       printInt(n/10);
       putchar('0' + n%10);
       return ;
    }
    putchar('0' + n);
}

void ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);

    while (*str != 0)
    {
        if (*str == '%')
        {
            str++;
            if (*str == 'd' || *str == 'i')
                printInt(va_arg(args,int));
        }
        else
            putchar(*str);
        str++;   
    }
    va_end(args);
}

int main(void)
{
    ft_printf("I love this series, don't you! %d%i", 20, 10);
    return (0);
}