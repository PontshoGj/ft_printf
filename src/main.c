#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %s series, don't you! %20f\n", "Hello", 17.123456789);
    printf("I love this %s series, don't you! %20f\n", "Hello", 17.123456789);
    return (0);
}
