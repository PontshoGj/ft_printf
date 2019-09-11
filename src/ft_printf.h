#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void    outint(char s, va_list args, int i);
void    outcharst(char s, va_list args, int i, int length);
void    outuint(char s, va_list args, char hex, int space, int length);
void    outdoub(char s, va_list args, int size, int z);
void    printstr(char s, va_list args);
void    printxx(char *s, va_list args);
void    prints(int i, char *str, va_list args);
void    printhandler(char **str, va_list args);
void    padd(char **str, va_list args);
void    paddfloat(char **str, va_list args);
void    floatpre(char **str, va_list args, int i);
void    givespace(int i, int space);
void    ft_printlong(char **s, va_list args);
void    ft_outputlong(va_list args, int space, char c);
void    ft_outputlonghex(va_list args, int space, char hex, char c);
void    ft_outputshort(va_list args, int space, char c);
void    ft_outputshorthex(va_list args, int space, char hex, char c);
void    ft_printshort(char **s, va_list args);
void    ft_addplus(char **s, va_list args);
#endif
