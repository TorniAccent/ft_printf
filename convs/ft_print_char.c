/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 01:10:16 by student           #+#    #+#             */
/*   Updated: 2020/07/31 01:10:19 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_print_char(char c, t_struct *tmp)
{
	int		len;

	len = 1;
	if (tmp->flag_minus)
	{
		tmp->res += write(1, &c, 1);
		print_blank(tmp, tmp->width - tmp->res);
	}
	else if (tmp->flag_zero)
	{
		print_zero(tmp, tmp->width - tmp->res - len);
		tmp->res += write(1, &c, 1);
	}
	else
	{
		print_blank(tmp, tmp->width - tmp->res - len);
		tmp->res += write(1, &c, 1);
	}
	return (tmp->res);
}
