#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %hhx series, don't you!\n", 32766);
    printf("I love this %+llf series, don't you!\n", 32566.43);
    //printf("I love this %s series, don't you!\n", "Hello");
    //char *s;
    //ft_printf("%d\n", &s);
    //printf("%p", &s);
    //sleep(30);
	return (0);
}
