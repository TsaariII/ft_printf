/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:39:55 by nzharkev          #+#    #+#             */
/*   Updated: 2024/05/15 10:49:53 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int s_len(int *l)
{
	int n;
	
	while (*l)
	{
		l++;
		n ++;
	}
	return (n);
}

int	is_str(int s, int *check)
{
	int	len;
	
	if (!s)
		return (write(1, "NULL", 5));
	len = s_len(s);
	if (write(1, s, 1) == -1)
	{
		*check = -1;
		return (-1);
	}
	return (len);
}
