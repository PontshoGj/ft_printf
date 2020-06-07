#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %-20u series, don't you!\n", 4294967295);
    printf("I love this %-20u series, don't you!\n", 4294967295);
    //printf("I love this %s series, don't you!\n", "Hello");
    //char *s;
    //ft_printf("%d\n", &s);
    //printf("%p", &s);
    //sleep(30);
	return (0);
}
