/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:48:38 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/02 15:48:52 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *src, ...);
void	ft_putnbr(int n);
int		count_digits(int n);
int		ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_print_int(int n);

#endif
