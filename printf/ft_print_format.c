/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:56:27 by alvalien          #+#    #+#             */
/*   Updated: 2024/10/04 22:56:29 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specific, va_list ap)
{
	int	count;

	count = 0;
	if (specific == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specific == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specific == 'd' || specific == 'i')
		count += ft_print_digit((long)va_arg(ap, int), 10);
	else if (specific == 'u')
		count += ft_print_u_d((unsigned long)va_arg(ap, unsigned int));
	else if (specific == 'x')
		count += ft_print_digit((unsigned long)va_arg(ap, unsigned int), 16);
	else if (specific == 'X')
		count += ft_print_bignum((unsigned long)va_arg(ap, unsigned int), 16);
	else if (specific == 'p')
		count += ft_print_hexa(va_arg(ap, unsigned long long));
	else
		count += write(1, &specific, 1);
	return (count);
}
