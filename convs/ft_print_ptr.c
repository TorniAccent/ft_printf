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

static void	cond(t_struct *tmp, char *temp, int len)
{
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
}

int			ft_print_ptr(va_list *ap, t_struct *tmp)
{
	int					len;
	char				*buf;
	char				*temp;
	unsigned long long	i;

	i = va_arg(*ap, unsigned long long);
	if (!(buf = ft_xtoa(i, "0123456789abcdef")))
		return (0);
	temp = buf;
	len = (*temp == '0' && tmp->precision_null) ? 0 : ft_strlen(temp);
	tmp->precision = (tmp->precision >= len) ? tmp->precision - len : 0;
	cond(tmp, temp, len);
	free(buf);
	return (tmp->res);
}
