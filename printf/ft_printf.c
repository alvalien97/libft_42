/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:59:40 by alvalien          #+#    #+#             */
/*   Updated: 2024/10/04 21:47:23 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			count += ft_print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

/*int	main(void)
{
	int	count;
	char	*str;

	str = NULL;
	count = ft_printf("Hello%s\n", "Álvaro");
	ft_printf("The chars written are%d\n", count);
	count = ft_printf("%x\n", 42);
	count = ft_printf("%x\n", -1);
	count = ft_printf("%x\n", -2147483648);
	ft_printf("The chars written are%d\n", count);
	count = printf("%x\n", 42);
	count = ft_printf("%x\n", -1);
	count = ft_printf("%x\n", -2147483648);
	printf("The chars written are%d\n", count);
	ft_printf("Hello %s, today is %d, in hex %x, char->%c\n", "Jhon", 27, 27,
		'z');
	ft_printf("The int u look for is: %i\n", 9);
	printf("The int u look for is: %i\n", 9);
	printf("El numero 0 en hexadecimal es: %p\n", 0);
	printf("El numero hola mundo en hexadecimal es: %p\n", "hola mundo");
	ft_printf("El numero 0 en hexadecimal es: %p\n", 0);
	ft_printf("El numero hola mundo en hexadecimal es: %p\n", "hola mundo");
	printf("%p", str);
	ft_printf("%p", str);
}*/