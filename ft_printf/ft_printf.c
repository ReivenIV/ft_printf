/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darling <darling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:13 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/04 09:57:24 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_and_count(const char *src, va_list args, int i)
{
	int		len;
	char	type;

	type = src[i + 1];
	len = 0;
	if (src[i] == '%' && (type == 'i' || type == 'd'))
		len += ft_print_int((long int)va_arg(args, int));
	if (src[i] == '%' && type == 'u')
		len += ft_print_int((long int)va_arg(args, unsigned int));
	if (src[i] == '%' && type == 'c')
		len += ft_print_c(va_arg(args, int));
	if (src[i] == '%' && type == '%')
		len += ft_print_c('%');
	if (src[i] == '%' && type == 's')
		len += (ft_print_str(va_arg(args, char *)));
	if (src[i] == '%' && type == 'p')
		len += (ft_print_p(va_arg(args, void *)));
	if (src[i] == '%' && (type == 'x' || type == 'X'))
		len += ft_print_hex_handler(va_arg(args, int), 0, type);
	return (len);
}

static int	printf_handler(const char *src, va_list args)
{
	int	i;
	int	print_len;

	i = 0;
	print_len = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '%')
			print_len += ft_print_and_count(src, args, i++);
		else
			print_len += ft_print_c(src[i]);
		i++;
	}
	return (print_len);
}

int	ft_printf(const char *src, ...)
{
	int		src_len;
	va_list	args;

	va_start(args, src);
	src_len = printf_handler(src, args);
	va_end(args);
	return (src_len);
}
