/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 20:19:39 by student           #+#    #+#             */
/*   Updated: 2020/05/25 20:47:50 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	res;
	int	sgn;
	int	flg;

	res = 0;
	flg = 0;
	sgn = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	(*str == '-') ? (sgn = -1) : 0;
	if (str[1] == '2' && sgn == -1)
	{
		res = -2;
		sgn = 1;
		str += 2;
		flg = 1;
	}
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		if (flg)
			res = res * 10 - *str++ + '0';
		else
			res = res * 10 + *str++ - '0';
	return (res * sgn);
}
