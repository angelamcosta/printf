/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:38:52 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 11:40:47 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_call_print(char s, va_list arg)
{
	if (s == 'c')
		ft_putchar_fd(va_arg(arg, int), 1);
	else if (s == 's')
		ft_putstr_fd(va_arg(arg, char *), 1);
	else if (s == 'd' || s == 'i')
		ft_putnbr_base(va_arg(arg, int), "0123456789", 10);
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
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;

	va_start(arg, s);
	while (*s)
	{
		if (*s != '%')
			ft_putchar_fd(*s, 1);
		else
		{
			s++;
			ft_call_print(*s, arg);
		}
		s++;
	}
	va_end(arg);
	return (1);
}
