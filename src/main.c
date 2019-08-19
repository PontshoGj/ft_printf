#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %s series, don't you! %.*f\n", "Hello" , 9,17.123456789);
    printf("I love this %s series, don't you! %.*f\n", "Hello" , 9,17.123456789);
    //ft_printf("%f\n", 17.32145978);
    //ft_printf("Hello %#x World", 10);
    //printf("%f", 17.32145978);
    return (0);
}
