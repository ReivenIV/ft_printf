/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:13 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/27 18:59:14 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}



int ft_print_and_count(const char *src, va_list args, int i)
{
	int print_len;

	print_len = 0;
	if (src[i] == '%' && src[i + 1] == 'i')
		print_len += ft_putnbr(va_arg(args, int));
	if (src[i] == '%' && src[i + 1] == 'c')
	{
		int ch = va_arg(args, int);
		ft_putchar(ch);
		print_len++;
	}
	return (print_len);
}

int printf_handler(const char *src, va_list args)
{
	int i;
	int print_len;

	i = 0;
	print_len = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '%')
		{
			print_len += ft_print_and_count(src, args, i);
			i++;
		}			
		else {
			ft_putchar(src[i]);
			print_len++;
		}
		i++;
	}
	printf("\n\n- printf_handler count return len = %i\n", print_len); 
	return (print_len);
}

int ft_printf(const char *src, ...)
{
	int	src_len;
	va_list args;

	va_start(args, src);
	src_len = printf_handler(src, args);
	va_end(args);
	printf("- ft_printf return len = %i\n", src_len); 
	return (src_len);
}

int	main(void)
{
	int n = 50;
	char c_test = 'H';
	
	// test_variadic("test %i %i %i %i %i %c continue testing...\n", 50,40,30,20,10,'H');
	//ft_printf("test %i", 50, 'H'); // should return 13
	ft_printf("test %i and %c", n, c_test); // should return 13

	return (0);
}