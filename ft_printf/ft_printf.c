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

#include "printf.h"
# include <unistd.h>
# include <stdarg.h>


// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return ;
// }
//TODO should return double instead of int like that you handle ints and doubles.
int	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	//TODO need to handle size of ints 
	return (2);
}


int ft_count_print(const char *src, va_list args)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{
		if (src[count] == '%' && src[count + 1] == 'i')
			count += ft_putnbr(va_arg(args, int));
		
		if (src[count] != '%')
			write(1, &src[count], 1);
		count++;
	}
	return (count);
}

#include <stdio.h>
int ft_printf(const char *src, ...)
{
	int	src_len;
	va_list args;

	va_start(args, src);
	src_len = ft_count_print(src, args);
	va_end(args);
	printf("\n\nsrc_len = %i\n", src_len); //! printing total_len +1
	return (src_len);
}

int	main(void)
{
	// test_variadic("test %i %i %i %i %i %c continue testing...\n", 50,40,30,20,10,'H');
	ft_printf("test %i", 50);
	return (0);
}