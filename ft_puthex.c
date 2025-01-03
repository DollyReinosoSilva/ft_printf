/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:34:28 by dreinoso          #+#    #+#             */
/*   Updated: 2024/11/28 10:34:32 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += ft_puthex(nbr / 16);
		count += ft_puthex(nbr % 16);
	}
	else
		count += ft_putchar(base[nbr % 16]);
	return (count);
}
