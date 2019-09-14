/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_outputlong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:29:36 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 12:35:52 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_outputlong(va_list args, int space, char c)
{
	long long	i;

	(void)space;
	if (c == 'l')
		i = va_arg(args, long);
	else
		i = va_arg(args, long long);
	ft_putnbrlong(i);
}

void			ft_outputlonghex(va_list args, int space, char hex, char c)
{
	long long	i;

	(void)space;
	(void)hex;
	if (c == 'l')
		i = va_arg(args, long);
	else
		i = va_arg(args, long long);
	ft_putstr(ft_longtoa_base(i, 16, hex));
}
