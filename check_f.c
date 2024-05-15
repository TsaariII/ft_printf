/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:35:05 by nzharkev          #+#    #+#             */
/*   Updated: 2024/05/15 10:09:54 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_id(char const *str, va_list args, int *c)
{
	int i;
	
	i = 0;
	if (*str == 'c')
		i += ft_char(va_arg(args, int), c);
	else if (*str == 's')
		i += ft_str(va_arg(args, int), c);
	else if (*str == 'd' || *str == 'i')
		i += ft_nbr(va_arg(args, int), c);
	else if (*str == '%')
		i += ft_char('%', i);
	else if (*str == 'X')
		i += ft_hex(va_arg(args, unsigned int), i);
	else if (*str == 'x')
		i += ft_hex(va_arg(args, unsigned int), i);
	else if (*str == 'u')
		i += ft_unsignbr(va_arg(args, unsigned int), i);
	else if (*str == 'p')
		i += ft_pointer(va_arg(args, void *), i);
	if (*str == -1)
		return (-1);
	return (i);
}

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
		else if (*format == '%')
		{
			format++;
			n += f_id(format, args, c);
		}
		format++;
	}
	return (n);
}