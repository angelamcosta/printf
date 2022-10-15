/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:38:52 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 16:09:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_call_print(char s, va_list arg)
{
	int	i;

	i = 1;
	if (s == 'c')
		ft_putchar_fd(va_arg(arg, int), 1);
	else if (s == 's')
		i = ft_printf_s(va_arg(arg, char *));
	else if (s == 'd' || s == 'i')
		i = ft_printf_d(va_arg(arg, int), "0123456789", 10);
	else if (s == '%')
		ft_putchar_fd('%', 1);
	else if (s == 'x')
		ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef", 16);
	else if (s == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF", 16);
	else if (s == 'u')
		ft_putnbr_fd(va_arg(arg, unsigned int), 1);
	else if (s == 'p')
		ft_putstr_fd("0x", 1);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		chars;

	chars = 0;
	va_start(arg, s);
	while (*s)
	{
		if (*s != '%')
		{
			chars++;
			ft_putchar_fd(*s, 1);
		}
		else
		{
			s++;
			chars += ft_call_print(*s, arg);
		}
		s++;
	}
	va_end(arg);
	return (chars);
}
