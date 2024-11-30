/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:36:22 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/30 12:22:49 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int			ft_printf(const char *src, ...);
void		ft_putnbr(int n);
int			count_digits(int n);
void		ft_putchar(char c);
int			ft_strlen(char *str);
int			ft_putstr(char *str);

#endif