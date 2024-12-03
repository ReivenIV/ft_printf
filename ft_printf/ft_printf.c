/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:13 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/12/03 12:26:40 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// TODO printSTR 					DONE
// TODO %(just a pourcentage) 		DONE
// TODO x X(hexadecimal) 
// TODO u(unsigned)					DONE
// TODO p(pointer)
// TODO d							DONE

int	ft_print_and_count(const char *src, va_list args, int i)
{
	int	print_len;

	print_len = 0;
	if (src[i] == '%' && (src[i + 1] == 'i' || src[i + 1] == 'd'))
		print_len += ft_print_int((long int)va_arg(args, int));
	if (src[i] == '%' && src[i + 1] == 'u')
		print_len += ft_print_int((long int)va_arg(args, unsigned int));
	if (src[i] == '%' && src[i + 1] == 'c')
		print_len += ft_putchar(va_arg(args, int));
	if (src[i] == '%' && src[i + 1] == '%')
		print_len += ft_putchar('%');
	if (src[i] == '%' && src[i + 1] == 's')
		print_len = print_len + (ft_putstr(va_arg(args, char *)));
	if (src[i] == '%' && src[i + 1] == 'p')
		print_len = print_len + (ft_print_p(va_arg(args, void *)));

	return (print_len);
}

int	printf_handler(const char *src, va_list args)
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
			print_len += ft_putchar(src[i]);
		i++;
	}
	printf("\n\n- printf_handler count return len = %i\n", print_len);
	return (print_len);
}

int	ft_printf(const char *src, ...)
{
	int		src_len;
	va_list	args;

	va_start(args, src);
	src_len = printf_handler(src, args);
	va_end(args);
	printf("- ft_printf return len = %i\n", src_len);
	return (src_len);
}

//! Just for testing. 
int	main(void)
{
	//int i_test = 10; // len 2
	unsigned int u_test = 4294967295;
	//char c_test = 'H';  // len 1
	//char s_test[16] = "test from s_test"; // len 16

	//ft_printf("%u\n", u_test); // should return 11
	ft_printf("%p\n", &u_test); // should return 11
	//ft_printf("%s\n", s_test); // should return 17 (str + \n)
	//ft_printf("%c\n", c_test); // should return 2
	//ft_printf("%%\n"); // should return 2
	//ft_printf("test %i", 50, 'H'); // should return 13
	//ft_printf("test %i and %c", i_test, c_test); // should return 13
	return (0);
}