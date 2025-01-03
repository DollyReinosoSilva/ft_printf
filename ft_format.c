/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:04:49 by dreinoso          #+#    #+#             */
/*   Updated: 2024/11/29 19:14:13 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_putunbr(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_puthex_lowercase(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_puthex_uppercase(va_arg(ap, unsigned int));
	else if (specifier == 'p')
		count += ft_putadress(va_arg(ap, void *));
	else if (specifier == '%')
		return (ft_putchar('%'));
	return (count);
}
