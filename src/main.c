#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %s series, don't you! %*u\n", "Hello", 20, 123456789);
    printf("I love this %s series, don't you! %*u\n", "Hello", 20, 123456789);
    char *s;
    
    //ft_printf("%d\n", &s);
    //printf("%p", &s);
    return (0);
}
