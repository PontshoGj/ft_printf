#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %s series, don't you! %*.*f\n", "Hello", 20, 4, 17.123456789);
    printf("I love this %s series, don't you! %*.*f\n", "Hello", 20,4, 17.123456789);
    return (0);
}
