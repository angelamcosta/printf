/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:03:58 by anlima            #+#    #+#             */
/*   Updated: 2022/10/15 21:37:31 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_u(long long int n, char *base, int i)
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
		c += ft_putnbr_base_u(n / i, base, i);
	ft_putchar_fd(base[n % i], 1);
	c++;
	return (c);
}

int	ft_printf_u(long long int i, char *base, int b)
{
	int		len;

	len = ft_putnbr_base_u(i, base, b);
	return (len);
}
