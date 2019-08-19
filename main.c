#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %s series, don't you! %#x\n", "Hello World" , 0);
    printf("I love this %s series, don't you! %#x\n", "Hello World" , 0);
    //ft_printf("%f\n", 17.32145978);
    //printf("%f", 17.32145978);
    return (0);
}
