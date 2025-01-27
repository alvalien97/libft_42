/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig_decimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:07:43 by alvalien          #+#    #+#             */
/*   Updated: 2024/10/08 16:14:56 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_u_d(unsigned long n)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789";
	if (n < 10)
		return (ft_print_char(symbols[n]));
	else
	{
		count += ft_print_u_d(n / 10);
		return (count + ft_print_u_d(n % 10));
	}
}
