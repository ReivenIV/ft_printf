/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:48:38 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/03 16:52:27 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *src, ...);
int		ft_print_int(long int n);
void	ft_putnbr(long int n);
int		count_digits(long int n);
int		ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_print_str(char *str);
int		ft_print_p(void *p);
int		ft_print_hex_handler(char type, long n);
int		ft_putnbr_hex_lowercasse(long n, int n_len);
int		ft_putnbr_hex_uppercase(long n, int n_len);

#endif
