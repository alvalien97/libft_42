/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:17:49 by alvalien          #+#    #+#             */
/*   Updated: 2024/10/04 21:48:00 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(char specific, va_list ap);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_digit(long n, int base);
int	ft_print_integer(int n);
int	ft_print_u_d(unsigned long n);
int	ft_print_bignum(long n, int base);
int	ft_print_hexa(unsigned long long arg);

#endif
