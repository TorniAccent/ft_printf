/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 01:11:13 by student           #+#    #+#             */
/*   Updated: 2020/07/31 01:11:14 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_print_u(unsigned int i, t_struct *tmp)
{
	char	*temp;
	int		len;

	if (!(temp = ft_utoa(i)))
		return (-1);
	len = check_len(tmp, temp);
	if (tmp->flag_minus)
	{
		print_zero(tmp, tmp->precision);
		tmp->res += write(1, temp, len);
		print_blank(tmp, tmp->width - tmp->res);
	}
	else if (tmp->flag_zero)
	{
		print_zero(tmp, (tmp->width - tmp->res - len - tmp->precision));
		tmp->res += write(1, temp, len);
	}
	else
	{
		print_blank(tmp, (tmp->width - tmp->res - len - tmp->precision));
		print_zero(tmp, tmp->precision);
		tmp->res += write(1, temp, len);
	}
	free(temp);
	return (tmp->res);
}
