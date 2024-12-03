/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:00 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/03 14:39:51 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// will transform any base 10 unsigned int into hex.
int	ft_putnbr_hex_lowercasse(unsigned long n, int n_len)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		n_len = ft_putnbr_hex_lowercasse(n / 16, n_len + 1);
	ft_putchar(hex_digits[n % 16]);
	return (n_len);
}

int	ft_putnbr_hex_uppercase(unsigned long n, int n_len)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		n_len = ft_putnbr_hex_uppercase(n / 16, n_len + 1);
	ft_putchar(hex_digits[n % 16]);
	return (n_len);
}

int	print_hex_handler(char type, int n_len, unsigned long n)
{
	int	len;

	//printf("\n%c\n%i\n%lu", type, n_len, n);
	if (type == 'u')
		len = ft_putnbr_hex_uppercase(n, n_len);
	else if (type == 'l')
		len = ft_putnbr_hex_lowercasse(n, n_len);
	else
		return (0);
	return (len);		
}
