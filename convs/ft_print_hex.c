/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 01:11:21 by student           #+#    #+#             */
/*   Updated: 2020/07/31 01:11:22 by student          ###   ########.fr       */
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

int			ft_print_hex(va_list *ap, t_struct *tmp)
{
	int				len;
	char			*temp;
	unsigned int	i;

	i = va_arg(*ap, unsigned int);
	if (!(temp = ft_xtoa(i, "0123456789abcdef")))
		return (-1);
	len = check_len(tmp, temp);
	temp = ft_toupper_register(tmp, temp);
	cond(tmp, temp, len);
	free(temp);
	return (tmp->res);
}

char		*ft_toupper_register(t_struct *tmp, char *temp)
{
	int len;

	len = 0;
	while (temp[len] != '\0')
	{
		if (tmp->type == 'X')
			temp[len] = ft_toupper(temp[len]);
		len++;
	}
	return (temp);
}
