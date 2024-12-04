/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:00 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/04 10:04:55 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



// will transform any base 10 unsigned int into hex.
int	ft_print_hex_handler(long n, int n_len, char format)
{
	char	*hex_digits;
    unsigned long   num;


	if (format == 'X')
		hex_digits = "0123456789ABCDEF";
    else
	    hex_digits = "0123456789abcdef";

    num = (unsigned long)(unsigned int)n;
	if (num >= 16)
		n_len = ft_print_hex_handler(num / 16, n_len, format);
	ft_print_c(hex_digits[num % 16]);
	return (n_len + 1);
}
