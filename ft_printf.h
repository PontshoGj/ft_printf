#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void    outint(char s, va_list args, int i);
void    outcharst(char s, va_list args, int i);
void    outuint(char s, va_list args, char hex);
void    outdoub(char s, va_list args);
#endif
