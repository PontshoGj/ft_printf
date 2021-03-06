/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:36:36 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 13:38:02 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printstr(char **s, va_list args)
{
	(ft_strspn(&(*s[0]), "dicu")) ? outint(*s[0], args, 0, ' ') : 0;
	(*s[0] == 's') ? outcharst(*s[0], args, 0, 0) : 0;
	(ft_strspn(&(*s[0]), "oxX")) ? outuint(*s[0], args, 0, 0, 0) : 0;
	(ft_strspn(&(*s[0]), "fFeEaAgG")) ? outdoub(*s[0], args, 0, 0) : 0;
}
