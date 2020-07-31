/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 01:11:04 by student           #+#    #+#             */
/*   Updated: 2020/07/31 01:11:05 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_print_ptr(unsigned long long i, t_struct *tmp)
{
	int		len;
	char	*buf;
	char	*temp;

	if (!(buf = ft_xtoa(i, "0123456789abcdef")))
		return (0);
	temp = buf;
	len = (*temp == '0' && tmp->precision_null) ? 0 : ft_strlen(temp);
	tmp->precision = (tmp->precision >= len) ? tmp->precision - len : 0;
	if (tmp->flag_minus)
	{
		tmp->res += write(1, "0x", 2);
		print_zero(tmp, tmp->precision - tmp->res);
		tmp->res += write(1, temp, len);
		print_blank(tmp, tmp->width - tmp->res);
	}
	else
	{
		print_blank(tmp, (tmp->width - tmp->res - len - 2 - tmp->precision));
		tmp->res += write(1, "0x", 2);
		print_zero(tmp, tmp->precision - tmp->res);
		tmp->res += write(1, temp, len);
	}
	free(buf);
	return (tmp->res);
}
