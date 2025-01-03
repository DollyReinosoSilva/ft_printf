/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:38:07 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/26 18:16:30 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_format(char specifier, va_list ap);
int	ft_printf(char const *format, ...);
int	ft_putadress(void *ptr);
int	ft_putchar(int c);
int	ft_puthex_lowercase(unsigned int nbr);
int	ft_puthex_uppercase(unsigned int nbr);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putunbr(unsigned int nbr);
int	ft_puthex(unsigned long long nbr);
#endif
