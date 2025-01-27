/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bignum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:33:46 by alvalien          #+#    #+#             */
/*   Updated: 2024/10/08 16:34:43 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_bignum(long n, int base)
{
	int		counter;
	char	*symbols;

	counter = 0;
	symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_print_bignum(-n, base));
	}
	else if (n < base)
		return (ft_print_char(symbols[n]));
	else
	{
		counter += ft_print_bignum(n / base, base);
		return (counter + ft_print_bignum(n % base, base));
	}
}
