/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_givespace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:10:06 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 12:11:35 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void		ft_putnbr_unsigned(unsigned int n)
{
	// n = (n < 0) ? n * -1 : n;
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10);
		ft_putchar_fd((n % 10) + '0', 1);
	}
	else
		ft_putchar_fd(n + '0', 1);
}