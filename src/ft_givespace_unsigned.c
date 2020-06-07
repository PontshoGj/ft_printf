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

static void	ft_give(char give){
	(give == '0') ? ft_putchar('0') : ft_putchar(' ');
}

static void	ft_space(unsigned int space, unsigned int sign, char give){
	while (space != 0){
		ft_give(give);
		space += sign;
	}
}

void	givespace_unsigned(unsigned int i,unsigned int space, char give)
{
	space = (i < space) ? space - i : space + i;
	(i <= space) ? ft_space(space, -1, give) : ft_space(space, 1, give);
    (void)give;
    (void)ft_space;
}