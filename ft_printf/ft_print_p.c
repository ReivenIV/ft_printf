/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:56:01 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/04 09:48:45 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
The data coming to ft_print_p is a super long number in base10 we compres it 
to base16 and we add "0x" for the adresse standar.
*/
static int	ft_print_hex(unsigned long n, int n_len)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		n_len = ft_print_hex(n / 16, n_len);
	ft_print_c(hex_digits[n % 16]);
	return (n_len + 1);
}

int	ft_print_p(void *p)
{
	unsigned long	adrs;
	int				len;

	len = 0;
	if (!p)
	{
		len = ft_print_str("(nil)");
		return (len);
	}
	adrs = (unsigned long)p;
	ft_print_str("0x");
	len = ft_print_hex(adrs, 0);
	return (len + 2);
}
