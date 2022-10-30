/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:38:52 by anlima            #+#    #+#             */
/*   Updated: 2022/10/30 19:31:05 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_p(unsigned long n, char *base, int i, int flag);
static int	ft_putnbr_base(long long int n, char *base, int i);
static int	ft_printf_s(char *s);
static	int	ft_call_print(char s, va_list arg);
int			ft_printf(const char *s, ...);

static int	ft_printf_p(unsigned long n, char *base, int i, int flag)
{
	int				c;

	c = 0;
	if (!n && flag == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	if (flag == 0)
	{
		ft_putstr_fd("0x", 1);
		c += 2;
	}
	if (n / i > 0)
		c += ft_printf_p(n / i, base, i, ++flag);
	ft_putchar_fd(base[n % i], 1);
	c++;
	return (c);
}

static int	ft_putnbr_base(long long int n, char *base, int i)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		c++;
	}
	if (n / i > 0)
		c += ft_putnbr_base(n / i, base, i);
	ft_putchar_fd(base[n % i], 1);
	c++;
	return (c);
}

static int	ft_printf_s(char *s)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

static	int	ft_call_print(char s, va_list arg)
{
	int	i;

	i = 1;
	if (s == 'c')
		ft_putchar_fd(va_arg(arg, int), 1);
	else if (s == 's')
		i = ft_printf_s(va_arg(arg, char *));
	else if (s == 'd' || s == 'i')
		i = ft_putnbr_base(va_arg(arg, int), "0123456789", 10);
	else if (s == '%')
		ft_putchar_fd('%', 1);
	else if (s == 'x')
		i = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef", 16);
	else if (s == 'X')
		i = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF", 16);
	else if (s == 'u')
		i = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789", 10);
	else if (s == 'p')
		i = ft_printf_p(va_arg(arg, long int), "0123456789abcdef", 16, 0);
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
