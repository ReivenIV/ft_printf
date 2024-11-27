/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:44:13 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/27 17:35:32 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
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
}

void	test_variadic(const char *str, ...)
{
	int i;
	

	i = 0;
	va_list	args;
	va_start(args, str);

	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == 'i')
		{
			int num = va_arg(args, int);
			ft_putnbr(num);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'c')
		{
			char test = (char)va_arg(args, int);
			ft_putchar(test);
			i++;
		}
		else {
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
}

int	main(void)
{
	test_variadic("test %i %i %i %i %i %c continue %c %i \n", 50,40,30,20,10,'H', 1, 'K');
	return (0);
}
