/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:35:05 by nzharkev          #+#    #+#             */
/*   Updated: 2024/05/10 11:40:28 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_f(char const *format, va_list args, int *c)
{
	int	n;
	
	n = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			n += ft_c(*format, c);
			if (*c == -1)
				return (-1);
		}
	}	
}