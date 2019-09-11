#include "ft_printf.h"

int main(void)
{
    ft_printf("I love this %+c series, don't you!\n", 'd');
    printf("I love this %05d series, don't you!\n", 123);
    //printf("I love this %s series, don't you!\n", "Hello");
    //char *s;
    //ft_printf("%d\n", &s);
    //printf("%p", &s);
    //sleep(30);
	return (0);
}
