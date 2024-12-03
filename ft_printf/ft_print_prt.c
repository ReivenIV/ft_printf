/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_prt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:56:01 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/03 14:40:18 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *p)
{
	unsigned long	adrs;
	int				len;

	adrs = (unsigned long)p;
	ft_putstr("0x");
	len = ft_putnbr_hex_lowercasse(adrs, 0);
	return (len + 2);
}