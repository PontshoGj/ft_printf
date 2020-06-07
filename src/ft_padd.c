/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmogwere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:06:54 by pmogwere          #+#    #+#             */
/*   Updated: 2019/09/14 13:08:54 by pmogwere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_spacetype(char **str, int spacenum, char type, va_list args){
	// printf("%c", *str[0]);
	if (ft_strspn(&(*str[0]), "scdi"))
		prints(spacenum, *str, args, type);
	else if (*str[0] == 'f')
		outdoub(*str[0], args, spacenum, 0);
	else if (*str[0] == 'h')
		ft_printshort(str, args, spacenum);
	else if (*str[0] == 'u')
		outint(*str[0], args, spacenum, 0);
}

void		padd(char **str, va_list args)
{
	char	*s;
	char	*temp;
	char	j;
	int		i;

	s = ft_memalloc(2);
	(void)temp;
	j = (*str[0] == '0') ? '0' : ' ';
	(*str[0] == '0' && *str[1] == '-') ? *str += 1 : (void)0;
	while (!(ft_strspn(&(*str[0]), "hlscdifu.")))
	{
		temp = s;
		s = ft_strjoin(s, &(*str[0]));
		free(temp);
		*str += 1;
	}
	i = ft_atoi(s);
	free(s);
	ft_spacetype(str, i, j, args);
}
