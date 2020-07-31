/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 01:10:44 by student           #+#    #+#             */
/*   Updated: 2020/07/31 01:10:45 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

static void	cond(t_struct *tmp, char *temp, int len)
{
	if (tmp->flag_minus)
	{
		tmp->res += write(1, temp, len);
		print_blank(tmp, tmp->width - tmp->res);
	}
	else if (tmp->flag_zero)
	{
		print_zero(tmp, tmp->width - tmp->res);
		tmp->res += write(1, temp, len);
	}
	else
	{
		print_blank(tmp, tmp->width - (tmp->res + len));
		tmp->res += write(1, temp, len);
	}
}

int			ft_print_str(va_list *ap, t_struct *tmp)
{
	int		len;
	int		nil;
	char	*temp;

	temp = va_arg(*ap, char *);
	nil = (!temp) ? 1 : 0;
	if (!temp && !(temp = ft_strdup("(null)")))
		return (-1);
	len = (tmp->precision_null) ? 0 : ft_strlen(temp);
	len = (tmp->precision && tmp->precision <= len) ? tmp->precision : len;
	cond(tmp, temp, len);
	(nil) ? free(temp) : temp;
	return (tmp->res);
}
