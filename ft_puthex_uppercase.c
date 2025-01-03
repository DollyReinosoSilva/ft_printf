/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:55:58 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/25 20:49:26 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_uppercase(unsigned int nbr)
{
	unsigned int	count;
	char			*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		count += ft_puthex_uppercase(nbr / 16);
		count += ft_puthex_uppercase(nbr % 16);
	}
	else
		count += ft_putchar(base[nbr % 16]);
	return (count);
}
