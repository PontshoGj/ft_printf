/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:24:34 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 13:24:46 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printxx(char *s, va_list args)
{
	(ft_strspn(&*s, "oxXu")) ? outuint(*s, args, 'a', 0, 0) : 0;
}
