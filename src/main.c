#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %s series, don't you! %llX\n", "Hello", 1234567891234567890);
    printf("I love this %s series, don't you! %llX\n", "Hello", 1234567891234567890);
    //char *s;
    //ft_printf("%d\n", &s);
    //printf("%p", &s);
    return (0);
}
