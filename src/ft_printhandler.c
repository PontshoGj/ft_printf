/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhandler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:18:31 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 13:23:22 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	paddhandler2(char **str, va_list args)
{
	int		i;

	i = 0;
	if (*str[0] == '.')
	{
		*str += 2;
		(*str[0] == 'f') ? outdoub(*str[0], args, va_arg(args, int), va_arg(args, int)) : i++;
		(*str[0] == 's' && i == 1) ? outcharst(*str[0], args, va_arg(args, int), va_arg(args, int)) : i++;
		((*str[0] == 'x' || *str[0] == 'X' || *str[0] == 'o') && i == 2) ? outuint(*str[0], args, 0, va_arg(args, int), 0) : i++;
		((*str[0] == 'd' || *str[0] == 'i' ) && i == 3) ? outint(*str[0], args, va_arg(args, int), ' ') : i++;
	}
}

static void	paddhandler(char **str, va_list args)
{
	int		i;

	i = 0;
	(*str[0] == 'f' && i == 0) ? outdoub(*str[0], args, va_arg(args, int), 0) : i++;
	(*str[0] == 's' && i == 1) ? outcharst(*str[0], args, va_arg(args, int), 0) : i++;
	(*str[0] == '.' && i == 2) ? paddhandler2(str, args) : i++;
	((*str[0] == 'x' || *str[0] == 'X' || *str[0] == 'o') && i == 3) ? outuint(*str[0], args, 0, va_arg(args, int), 0) : i++;
	((*str[0] == 'd' || *str[0] == 'i' || *str[0] == 'u') && i == 4) ? outint(*str[0], args, va_arg(args, int), ' ') : i++;
}

static void	prnthandler2(char **str, va_list args)
{
	if (ft_isdigit(*str[0]) || *str[0] == '-')
		padd(str, args);
	else if (*str[0] == '+')
		ft_addplus((char **)str, args);
	else if (*str[0] == '%')
		ft_putchar('%');
	else if (*str[0] == '.')
	{
		*str += 1;
		paddfloat(str, args);
	}
	else if (*str[0] == '*')
	{
		*str += 1;
		(ft_strspn(&(*str[0]), ".fsdicoxXuf")) ? paddhandler(str, args) : (void)0;
	}
}

void		printhandler(char **str, va_list args)
{
	int		i;

	i = 0;
	(ft_strspn(&(*str[0]), "dicsoxXuf")) ? printstr(str, args) : i++;
	(ft_strspn(&(*str[0]), "l") == 1 && i == 1) ? ft_printlong(str, args, 0) : i++;
	(ft_strspn(&(*str[0]), "h") && i == 2) ? ft_printshort(str, args, 0) : i++;
	if (ft_strspn(*str, "#") && i == 3) 
	{
		*str += 1;
		(ft_strspn(&(*str[0]), "oxX")) ? printxx(*str, args) : (void)0;
	}else{
		i++;
	}
	((*str[0] == '+' || *str[0] == '.' || *str[0] == '*') && i == 4) ? prnthandler2(str, args) : i++;
	((*str[0] == '%' || ft_isdigit(*str[0]) || *str[0] == '-') && 1 == 5) ? prnthandler2(str, args) : i++;
}
