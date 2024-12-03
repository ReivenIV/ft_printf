/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_prt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:56:01 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/03 12:22:10 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// will transform any base 10 unsigned int into hex.
int	ft_putnbr_hex(unsigned long n, int n_len)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		n_len = ft_putnbr_hex(n / 16, n_len + 1);
	else
		n += 1;
	ft_putchar(hex_digits[n % 16]);
	return (n_len);
}

int	ft_print_p(void *p)
{
	unsigned long	adrs;
	int				len;

	adrs = (unsigned long)p;
	ft_putstr("0x");
	len = ft_putnbr_hex(adrs, 0);
	return (len + 2);
}