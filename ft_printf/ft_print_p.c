/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:56:01 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/03 16:52:55 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *p)
{
	long	adrs;
	int				len;

	adrs = (long)p;
	ft_print_str("0x");
	len = ft_putnbr_hex_lowercasse(adrs, 0);
	return (len + 2);
}