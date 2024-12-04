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

int	ft_print_p(void *p)
{
	long	adrs;
	int		len;

	adrs = (long)p;
	ft_print_str("0x");
	len = ft_print_hex_handler((int)adrs, 0, 'x');
	return (len + 2);
}
