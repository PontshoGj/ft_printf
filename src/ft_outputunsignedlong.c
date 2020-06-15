/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outputunsignedlong.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:52:59 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 14:36:53 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_outputunsignedlong(va_list args, int space, char c)
{
	long long	i;

	(void)space;
	i = (c == 'l') ? va_arg(args, long) : va_arg(args, unsigned long long);
	ft_putnbrlong(i);
}

void			ft_outputunsignedlonghex(va_list args, \
		int space, char hex, char c)
{
	long long	i;

	(void)space;
	i = (c == 'l') ? va_arg(args, unsigned long) : \
		va_arg(args, unsigned long long);
	ft_putstr(ft_long_itoa_base(i, 8, hex));
}
