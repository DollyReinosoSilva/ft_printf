/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:45:53 by dreinoso          #+#    #+#             */
/*   Updated: 2024/11/21 02:06:20 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lowercase(unsigned int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += ft_puthex_lowercase(nbr / 16);
		count += ft_puthex_lowercase(nbr % 16);
	}
	else
		count += ft_putchar(base[nbr % 16]);
	return (count);
}
