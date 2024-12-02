/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:11:55 by rita              #+#    #+#             */
/*   Updated: 2024/12/02 17:48:01 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
Will handle printing and couting digits. The function is done to reduce 
the amount of lines writen in printf.c/ft_print_and_count 
*/

int	ft_print_int(long int n)
{
	int	print_len;

	ft_putnbr(n);
	print_len = 0;
	print_len += count_digits(n);
	return (print_len);
}
