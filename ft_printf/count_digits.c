/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:47:59 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/29 13:47:59 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Will count the amount of digits of n. 
// ex: count_digits(5489) => expected output 4
// ex: count_digits(-5489) => expected output 5

#include "ft_printf.h"

int count_digits(int n)
{
    int count;

    count = 0;
    if (n >= 0 && n <= 9)
        return (1);
    if (n < 0)
    {
        n = n * -1;
        count++;
    }
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}
