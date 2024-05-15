/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unsignbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:53:55 by nzharkev          #+#    #+#             */
/*   Updated: 2024/05/15 13:18:08 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int is_unsignbr(unsigned int n, int *check)
{
	int c;

	if (n >= 10)
	{
		c += is_nbr(n / 10, check);
		c += is_char(n % 10 + 48, check);
	}
	else
		c += is_char(n % 10 + 48, check);
	return (c);
}