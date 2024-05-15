/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:00:50 by nzharkev          #+#    #+#             */
/*   Updated: 2024/05/14 10:59:07 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		n;
	int		c;
	va_list	args;

	n = 0;
	c = 0;
	va_start(args, str);
	n = check_f(str, args, &c);
	if (c == -1)
	{
		va_end(args);
		return(-1);
	}
	va_end(args);
	return (n);
}
