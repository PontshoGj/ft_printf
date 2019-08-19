#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %-100s series, don't you! %#x\n", "Hello" , 1);
    printf("I love this %-100s series, don't you! %#x\n", "Hello" , 1);
    //ft_printf("%f\n", 17.32145978);
    //ft_printf("Hello %#x World", 10);
    //printf("%f", 17.32145978);
    return (0);
}
