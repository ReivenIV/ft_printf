/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:00 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/04 09:57:13 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



// will transform any base 10 unsigned int into hex.
int	ft_print_hex_handler(long n, int n_len, char format)
{
	char	*hex_digits;

	if (format == 'X')
		hex_digits = "0123456789ABCDEF";
	hex_digits = "0123456789abcdef";
	if (n >= 16)
		n_len = ft_putnbr_hex_lowercasse(n / 16, n_len + 1, format);
	ft_print_c(hex_digits[n % 16]);
	return (n_len);
}
