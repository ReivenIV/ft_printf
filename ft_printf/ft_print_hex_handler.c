/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:00 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/03 16:58:25 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



// will transform any base 10 unsigned int into hex.
int	ft_putnbr_hex_lowercasse(long n, int n_len)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		n_len = ft_putnbr_hex_lowercasse(n / 16, n_len + 1);
	ft_putchar(hex_digits[n % 16]);
	return (n_len);
}

int	ft_putnbr_hex_uppercase(long n, int n_len)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		n_len = ft_putnbr_hex_uppercase(n / 16, n_len + 1);
	ft_putchar(hex_digits[n % 16]);
	return (n_len);
}

int	ft_print_hex_handler(char type, long n)
{
	int	len;

	if (type == 'X')
		len = ft_putnbr_hex_uppercase(n, 0);
	else if (type == 'x')
		len = ft_putnbr_hex_lowercasse(n, 0);
	else
		return (0);
	return (len);		
}
