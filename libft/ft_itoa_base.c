/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:14:17 by pmogwere          #+#    #+#             */
/*   Updated: 2019/08/16 14:16:02 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_itoa_base(int value, int base)
{
	char	*s;
	char	*str;
	int		neg;
	size_t	len;

	s = "0123456789ABCDEF";
	len = ft_intlen_base(value, base);
	neg = 1;
	
	if (value < 0)
	{
		neg *= -1;
		value *= -1;
		(base == 10) ? len++ : 0;
	}
	str = (char *)malloc(sizeof(char) * len);
	str[len--] = 0;
	while (value)
	{
		str[len--] = s[value % base];
		value /= base;
	}
	(neg < 0 && base == 10) ? str[0] = '-' : 0;
	return (str);
}
