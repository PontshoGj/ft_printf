/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:27:17 by pmogwere          #+#    #+#             */
/*   Updated: 2019/07/31 12:31:47 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int a, int value)
{
	int	i;

	i = 1;
	if (a == 0)
		return (1);
	if (a == 1)
		return (value);
	while (a > 0)
	{
		i *= value;
		a--;
	}
	return (i);
}