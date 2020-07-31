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

static void	cond(t_struct *tmp, char *temp, int len)
{
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
}

int			ft_print_u(va_list *ap, t_struct *tmp)
{
	char			*temp;
	int				len;
	unsigned int	i;

	i = va_arg(*ap, unsigned int);
	if (!(temp = ft_utoa(i)))
		return (-1);
	len = check_len(tmp, temp);
	cond(tmp, temp, len);
	free(temp);
	return (tmp->res);
}
