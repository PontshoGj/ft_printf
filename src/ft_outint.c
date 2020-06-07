/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:22:00 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 12:23:57 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_outint2(char s, int i, char zeros, int space){
	int			hold;
	
	hold = (s == 'c')  ? 1 : (int)ft_intlen(i);
	(space > 0) ? givespace(hold, space, zeros) : (void)0;
	(s == 'c') ? ft_putchar(i) : ft_putnbr(i);
	(space < 0) ? givespace(hold, space, zeros) : (void)0;
}

static void		ft_outint3(unsigned int i, char zeros, int space){
	(space > 0) ? givespace_unsigned(ft_unsignedintlen(i), space, zeros) : (void)0;
	ft_putnbr_unsigned(i);
	(space < 0) ? givespace_unsigned(ft_unsignedintlen(i), space, zeros) : (void)0;
}

void			outint(char s, va_list args, int space, char zeros)
{
	// printf("%d", space);
	// (s == '+' && i > 0) ? ft_putchar('+') : (void)0;
	(s == 'u') ? ft_outint3(va_arg(args, unsigned int), zeros, space) : \
	ft_outint2(s, va_arg(args, int), zeros, space);
	(void)space; 
	(void)zeros; 
	(void)ft_outint2;
	(void)ft_outint3;
	(void)args;
	(void)s;
}
