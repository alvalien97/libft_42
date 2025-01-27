/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:59:01 by alvalien          #+#    #+#             */
/*   Updated: 2024/10/04 23:59:25 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_integer(int n)
{
	int		counter;
	char	a;

	counter = 0;
	if (n == -2147483648)
	{
		counter += write(1, "-2147483648", 11);
		return (counter);
	}
	if (n < 0)
	{
		counter += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		counter += ft_print_integer(n / 10);
	a = (n % 10) + '0';
	counter += write(1, &a, 1);
	return (counter);
}
