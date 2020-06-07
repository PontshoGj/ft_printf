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
		if (*str[0] == 'f')
			outdoub(*str[0], args, va_arg(args, int), va_arg(args, int));
		else if (*str[0] == 's')
			outcharst(*str[0], args, va_arg(args, int), va_arg(args, int));
		else if (*str[0] == 'x' || *str[0] == 'X' || *str[0] == 'o')
		{
			i = va_arg(args, int);
			(void)va_arg(args, int);
			outuint(*str[0], args, 0, i, 0);
		}
		else if (*str[0] == 'd' || *str[0] == 'i')
			outint(*str[0], args, va_arg(args, int), ' ');
	}
}

static void	paddhandler(char **str, va_list args)
{
	int		i;

	i = 0;
	(void)i;
	if (*str[0] == 'f')
		outdoub(*str[0], args, va_arg(args, int), 0);
	else if (*str[0] == 's')
		outcharst(*str[0], args, va_arg(args, int), 0);
	else if (*str[0] == '.')
		paddhandler2(str, args);
	else if (*str[0] == 'x' || *str[0] == 'X' || *str[0] == 'o')
		outuint(*str[0], args, 0, va_arg(args, int), 0);
	else if (*str[0] == 'd' || *str[0] == 'i' || *str[0] == 'u')
		outint(*str[0], args, va_arg(args, int), ' ');
}

static void	printhandler2(char **str, va_list args)
{
	if (ft_isdigit(*str[0]) || *str[0] == '-')
		padd(str, args);
	else if (*str[0] == '+')
		ft_addplus((char **)str, args);
	else if (*str[0] == '.')
	{
		*str += 1;
		paddfloat(str, args);
	}
	else if (*str[0] == '*')
	{
		*str += 1;
		if (ft_strspn(&(*str[0]), ".fsdicoxXuf"))
			paddhandler(str, args);
	}
	else if (*str[0] == '%')
		ft_putchar('%');
}

void		printhandler(char **str, va_list args)
{
	if (ft_strspn(&(*str[0]), "dicsoxXuf"))
		printstr(str, args);
	// else if (ft_strspn(&(*str[0]), "l") == 1)
	// 	ft_printlong(str, args, 0);
	// else if (ft_strspn(&(*str[0]), "h"))
	// 	ft_printshort(str, args, 0);
	// else if (ft_strspn(*str, "#"))
	// {
	// 	*str += 1;
	// 	if (ft_strspn(&(*str[0]), "oxX"))
	// 		printxx(*str, args);
	// }
	// else if (*str[0] == '+' || *str[0] == '.' || *str[0] == '*')
	// 	printhandler2(str, args);
	else if (*str[0] == '%' || ft_isdigit(*str[0]) || *str[0] == '-')
		printhandler2(str, args);
	(void)paddhandler2;
	(void)paddhandler;

}
